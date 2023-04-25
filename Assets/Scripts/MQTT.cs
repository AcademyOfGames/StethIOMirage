using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using BestHTTP.PlatformSupport.Memory;
using UnityEngine;
using BestMQTT;
using BestMQTT.Examples.Helpers;
using BestMQTT.Packets;
using BestMQTT.Packets.Builders;
using TMPro;
using FlatBuffers;
using ChartUtil;

public class MQTT : MonoBehaviour
{
    MQTTClient client;
    [SerializeField] private TextMeshProUGUI MQTTLog;
    private List<SubscriptionListItem> subscriptionListItems = new List<SubscriptionListItem>();

    public void Init()
    {
        DontDestroyOnLoad(gameObject);
        
        var options = new ConnectionOptions();
        options.Host = "54.177.190.117";
        options.Port = 1883;
        options.Transport = SupportedTransports.TCP;
        options.UseTLS = false;
        options.Path = "/mqtt";
        options.ProtocolVersion = SupportedProtocolVersions.MQTT_5_0;
        
        client = new MQTTClientBuilder()
            .WithOptions(options)
            .WithEventHandler(OnDisconnected)
            .WithEventHandler(OnStateChanged)
            .WithEventHandler(OnError)
            .CreateClient();
        client.BeginConnect(ConnectPacketBuilderCallback);
    }

    void LoadData()
    {
    //ByteBuffer loader = new(File.ReadAllBytes(heartDataPath));
    }

    private void OnDestroy()
    {
        client?.CreateDisconnectPacketBuilder()
            .WithReasonCode(DisconnectReasonCodes.NormalDisconnection)
            .WithReasonString("Bye")
            .BeginDisconnect();
    }

    private ConnectPacketBuilder ConnectPacketBuilderCallback(MQTTClient client, ConnectPacketBuilder builder)
    {
        if(MQTTLog != null) MQTTLog.text = "\n" + $"[{client.Options.Host}] Creating connect packet.";

        var userName = "testuser";
        var password = "Password@2023";

        var session = SessionHelper.HasAny(client.Options.Host) ? SessionHelper.Get(client.Options.Host) : SessionHelper.CreateNullSession(client.Options.Host);
        builder.WithSession(session);

        if (!string.IsNullOrEmpty(userName))
            builder.WithUserName(userName);

        if (!string.IsNullOrEmpty(password))
            builder.WithPassword(password);

        builder.WithKeepAlive(60);
        return builder;
    }

    private void OnStateChanged(MQTTClient client, ClientStates oldState, ClientStates newState)
    {
       if(MQTTLog != null) MQTTLog.text = "\n" + $"{oldState} => {newState}";

       if(newState == ClientStates.Connected) Subscribe();
    }

    private void OnDisconnected(MQTTClient client, DisconnectReasonCodes code, string reason)
    {
        if(MQTTLog != null) MQTTLog.text = "\n" + $"OnDisconnected - code: {code}, reason: '{reason}'";
    }
    
    private void OnError(MQTTClient client, string reason)
    {
        if(MQTTLog != null) MQTTLog.text = "\n" + $"OnError reason: '{reason}'";
    }
    public void Subscribe()
    {
        QoSLevels qos = QoSLevels.AtMostOnceDelivery;
        var topic = "live_metric"; // /230220176260/hr";
        this.client?.CreateBulkSubscriptionBuilder()
            .WithTopic(new SubscribeTopicBuilder(topic)
                .WithMaximumQoS(qos)
                .WithAcknowledgementCallback(OnSubscriptionAcknowledgement)
                .WithMessageCallback(OnApplicationMessage))
            .BeginSubscribe();

        if(MQTTLog != null) MQTTLog.text = "\n" + $"[{client.Options.Host}] Subscribe request for topic {topic}";

    }
    
    private void OnSubscriptionAcknowledgement(MQTTClient client, SubscriptionTopic topic, SubscribeAckReasonCodes reasonCode)
    {
        var subscription = FindSubscriptionItem(topic.Filter.OriginalFilter);

        string reasonColor = reasonCode <= SubscribeAckReasonCodes.GrantedQoS2 ? "green" : "red";
        if(MQTTLog != null) MQTTLog.text = "\n" +$"[{client.Options.Host}] Subscription request to topic <color=#{subscription.Color}>{topic.Filter.OriginalFilter}</color> returned with reason code: <color={reasonColor}>{reasonCode}</color>";
    }
    
    private void OnApplicationMessage(MQTTClient client, SubscriptionTopic topic, string topicName, ApplicationMessage applicationMessage)
    {
        // find matching subscription for its color
        var subscription = FindSubscriptionItem(topicName);

        string payload = string.Empty;

        // Here we going to try to convert the payload as an UTF-8 string. Note that it's not guaranteed that the payload is a string!
        // While MQTT supports an additional Content-Type field in this demo we can't rely on its presense.
        if (applicationMessage.Payload != BufferSegment.Empty)
        {
            LoadHeartData(applicationMessage.Payload.Data);

            payload = Encoding.UTF8.GetString(applicationMessage.Payload.Data, applicationMessage.Payload.Offset, applicationMessage.Payload.Count);

            const int MaxPayloadLength = 512;
            if (payload.Length > MaxPayloadLength)
                payload = payload?.Remove(MaxPayloadLength);
        }

        // Display the Content-Type if present
        string contentType = string.Empty;
        if (applicationMessage.ContentType != null)
            contentType = $" ({applicationMessage.ContentType}) ";

        if(MQTTLog != null) MQTTLog.text = "\n" + $"[{client.Options.Host}] [{topicName}] {contentType}{payload}";
        print( $"[{client.Options.Host}] [{topicName}] {contentType}{payload}");
    }

    void SaveFlatBuffer(byte[] heartData)
    {
      /*  FlatBufferBuilder saver = new(1);

        Offset<Measurement> measurment = Measurement.CreateMeasurement(saver,);

        */
    }

    void LoadHeartData(byte[] data)
    {
        ByteBuffer loader = new(data);
        Measurement measurement = Measurement.GetRootAsMeasurement(loader);

        print("Heart data time " + measurement.Timestamp + " value");
    }
    private SubscriptionListItem FindSubscriptionItem(string topicName) => subscriptionListItems.FirstOrDefault(s => s.Topic.IsMatching(topicName));

}