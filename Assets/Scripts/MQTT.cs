using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using BestHTTP.PlatformSupport.Memory;
using UnityEngine;
using BestMQTT;
//using BestMQTT.Examples.Helpers;
using BestMQTT.Packets;
using BestMQTT.Packets.Builders;
using TMPro;
using FlatBuffers;
using ChartUtil;

public class MQTT : MonoBehaviour
{
    MQTTClient client;
    [SerializeField] private TextMeshProUGUI MQTTLog;

    [HideInInspector] public float MQTT_heartRate;
    [HideInInspector] public float MQTT_breathVolume    ;
    [HideInInspector] public float MQTT_heartRateVariability    ;

    string deviceSerialNumber;
    private static MQTT instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public static MQTT Instance
    {
        get { return instance; }
    }
    
    public void Init(string serialNumber)
    {
        var secrets = MirageSecrets.Load();
        var options = new ConnectionOptions();
        options.Host = secrets.mqttHost;
        options.Port = secrets.mqttPort;
        options.Transport = SupportedTransports.TCP;
        options.UseTLS = false;
        options.Path = "/mqtt";
        options.ProtocolVersion = SupportedProtocolVersions.MQTT_5_0;
        deviceSerialNumber = serialNumber;
        client = new MQTTClientBuilder()
            .WithOptions(options)
            .WithEventHandler(OnDisconnected)
            .WithEventHandler(OnStateChanged)
            .WithEventHandler(OnError)
            .CreateClient();
        client.BeginConnect(ConnectPacketBuilderCallback);
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

        var secrets = MirageSecrets.Load();
        var userName = secrets.mqttUserName;
        var password = secrets.mqttPassword;

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
       if (newState == ClientStates.Connected) Invoke(nameof(Subscribe), 2f);
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
        var topic = "live_metric/" + deviceSerialNumber + "/#"; 
        
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
        string reasonColor = reasonCode <= SubscribeAckReasonCodes.GrantedQoS2 ? "green" : "red";
        if(MQTTLog != null) MQTTLog.text = "\n" +$"[{client.Options.Host}] Subscription request to topic {topic.Filter.OriginalFilter}</color> returned with reason code: <color={reasonColor}>{reasonCode}</color>";
    }
    
    private void OnApplicationMessage(MQTTClient client, SubscriptionTopic topic, string topicName, ApplicationMessage applicationMessage)
    {
        print("**onapplicationmessage - topic " + topic + " - topicname" + topicName + " - app message " + applicationMessage);

        string payload = string.Empty;

        // Here we going to try to convert the payload as an UTF-8 string. Note that it's not guaranteed that the payload is a string!
        // While MQTT supports an additional Content-Type field in this demo we can't rely on its presense.
        if (applicationMessage.Payload != BufferSegment.Empty)
        {
            LoadBodyStatsData(applicationMessage.Payload.Data, topicName);

            payload = Encoding.UTF8.GetString(applicationMessage.Payload.Data, applicationMessage.Payload.Offset, applicationMessage.Payload.Count);

            const int MaxPayloadLength = 512;
            if (payload.Length > MaxPayloadLength)
                payload = payload?.Remove(MaxPayloadLength);
        }
        else
        {
            print("payloadIs empty");
        }

        // Display the Content-Type if present
        string contentType = string.Empty;
        if (applicationMessage.ContentType != null)
            contentType = $" ({applicationMessage.ContentType}) ";

        if(MQTTLog != null) MQTTLog.text = "\n" + $"[{client.Options.Host}] [{topicName}] {contentType}{payload}";
        print( $"[{client.Options.Host}] [{topicName}] {contentType}{payload}");
    }
    
    void LoadBodyStatsData(byte[] data, string topicName)
    {
        ByteBuffer loader = new(data);
        Measurement measurement = Measurement.GetRootAsMeasurement(loader);
        Debug.Log("Topic Name :" + topicName);

        // Topics are live_metric/<serial>/<metric>; match on the metric so any shirt works.
        if (topicName.EndsWith("/volume"))
            MQTT_breathVolume = measurement.Value;
        else if (topicName.EndsWith("/hrv"))
            MQTT_heartRateVariability = measurement.Value;
        else if (topicName.EndsWith("/hr"))
            MQTT_heartRate = measurement.Value;

        print("MQTT_breathVolume " + MQTT_breathVolume + " - MQTT_heartRate " + MQTT_heartRate +
              " - MQTT_heartRateVariability " + MQTT_heartRateVariability);
        
        print(topicName + " " + measurement.Value + " value");
        
        if (MQTTLog != null) MQTTLog.text = "Heart data time " + measurement.Timestamp + " value";
    }

}