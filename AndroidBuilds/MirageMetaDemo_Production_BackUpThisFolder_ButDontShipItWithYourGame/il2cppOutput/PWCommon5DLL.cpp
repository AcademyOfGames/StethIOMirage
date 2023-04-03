#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,PWCommon5.Localization.LanguagePack>
struct Dictionary_2_t816837D35BED8E24C689C66EB4E27D2A6EBE5D60;
// System.Collections.Generic.Dictionary`2<System.String,PWCommon5.Localization.LocalizationItem>
struct Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LanguagePack>
struct IDictionary_2_tDC9936EF0EDD5A7FAF7D60A8B0788348C0B879FF;
// System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LocalizationItem>
struct IDictionary_2_t1E6898CFA5A11461B2437A30A33F56C3A2F9B14A;
// System.Collections.Generic.IEnumerable`1<System.IO.DirectoryInfo>
struct IEnumerable_1_tC61234C675E197381ED0C6E05C543D07C5A595D6;
// System.Collections.Generic.IEnumerable`1<PWCommon5.Localization.LocalizationCategory>
struct IEnumerable_1_tBB81031A5E1710DEFA5BA50A6D10228B7DFD0990;
// System.Collections.Generic.IEnumerable`1<PWCommon5.Localization.LocalizationItem>
struct IEnumerable_1_t3DB899B1FDE21AA9F4736416C5E567F67CD93DA1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,PWCommon5.Localization.LanguagePack>
struct KeyCollection_tC95BD9901B91624CAAD9E486362EB4128AB969FA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,PWCommon5.Localization.LocalizationItem>
struct KeyCollection_tC6001701A1D137789E439D7A2CD074F6814350C4;
// System.Collections.Generic.List`1<System.IO.DirectoryInfo>
struct List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04;
// System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationCategory>
struct List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817;
// System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationItem>
struct List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<PWCommon5.Localization.OnlineHelpItem>
struct List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PWCommon5.Localization.LanguagePack>
struct ValueCollection_tC9A95E58E6DAC5503237C3970A1AADA68985393A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PWCommon5.Localization.LocalizationItem>
struct ValueCollection_tA6C4EAB3B980F3A4E34F4ADCA8AB80EBA06D7B35;
// System.Collections.Generic.Dictionary`2/Entry<System.String,PWCommon5.Localization.LanguagePack>[]
struct EntryU5BU5D_t9763AE1744A0C1C1CC55B230824C5FA841FCE4CB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,PWCommon5.Localization.LocalizationItem>[]
struct EntryU5BU5D_t73575B3F76340F69A660B576A993BD272D73691E;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// PWCommon5.Localization.LocalizationCategory[]
struct LocalizationCategoryU5BU5D_tCCAFAB7C0C2B9584A9CBC39269A1FEAB9F2DBEAC;
// PWCommon5.Localization.LocalizationItem[]
struct LocalizationItemU5BU5D_t912890B53BBEC616833268CEE55DBE6E46922B57;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// PWCommon5.Localization.OnlineHelpItem[]
struct OnlineHelpItemU5BU5D_tAC13323C6D477DF5D8BB982B56FBF38A0D293864;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.SystemLanguage[]
struct SystemLanguageU5BU5D_t9BFB37F8C2607169C61A03B0206BECCD78D8713D;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// PWCommon5.AppConfig
struct AppConfig_t93440A6F87FDF1635C971BA3DEADB5FB112DD4F0;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01;
// PWCommon5.Localization.LanguagePack
struct LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4;
// PWCommon5.Localization.LocalizationCategory
struct LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B;
// PWCommon5.Localization.LocalizationItem
struct LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PWCommon5.Localization.OnlineHelpItem
struct OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// PWCommon5.UBrush
struct UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2;
// PWCommon5.URLParameters
struct URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// PWCommon5.Utils
struct Utils_t7E125B803A4D87C242925912395EFC78E40A40BA;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t816837D35BED8E24C689C66EB4E27D2A6EBE5D60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t1E6898CFA5A11461B2437A30A33F56C3A2F9B14A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tDC9936EF0EDD5A7FAF7D60A8B0788348C0B879FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnlineHelpType_t066F51CA267D0C5E5162613539CB9B6432D09613_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SRP_t6AC6C903D2DEEC7825DF2FC2306354BF61806FDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral1A6A26AED6C189E4357BE875059C5FDC77F61099;
IL2CPP_EXTERN_C String_t* _stringLiteral1F4DEE668D504EE3173C88A62E4316E563978DC1;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2ED52B3CD045EA0652DF0FACCD27C1B1C4C3B284;
IL2CPP_EXTERN_C String_t* _stringLiteral36C4B4074DE0349A5A7A3CEF8600D92296824996;
IL2CPP_EXTERN_C String_t* _stringLiteral3A3FAECD2079D271A8FB085671AA7B3B113872DE;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral42104C6893ADC7C3A8BBEE4B85A994F6A92BA8D7;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51311F107A22ACB2B9982782F66881085ABC044E;
IL2CPP_EXTERN_C String_t* _stringLiteral51E71B23220CD446523465BF73AC76DE1D59BBDE;
IL2CPP_EXTERN_C String_t* _stringLiteral52A72A7AC1B345B93BDAC67BD4964E93800A1FFB;
IL2CPP_EXTERN_C String_t* _stringLiteral5F00F70B3CDDCEE10CAA41C8ACC5774560FC93EC;
IL2CPP_EXTERN_C String_t* _stringLiteral687B0943A9A3524003E9BA508C255E8D60725E9D;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8BC0075BDFB44AD6375234115A9337DB0AD252D2;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral96B2F4CCFB1009770884CF835AAD744EF79199F2;
IL2CPP_EXTERN_C String_t* _stringLiteral99CC0A682DE77E4F22F3F3937BA2E0BF6C6FFFAB;
IL2CPP_EXTERN_C String_t* _stringLiteral9C61F8EABE3F1A0009885EF1ADC85BFE177E4D0B;
IL2CPP_EXTERN_C String_t* _stringLiteral9EE187A1DFB6C7E24E0162931104A8F2CE585643;
IL2CPP_EXTERN_C String_t* _stringLiteralAB2987DD6116C1860B3CD6896EB8FCD0B687F3B9;
IL2CPP_EXTERN_C String_t* _stringLiteralB033E97E97F93EF01921D1704236ED5790054224;
IL2CPP_EXTERN_C String_t* _stringLiteralB689ADC818003CD93D1F8F935B12134CFF5E0BB1;
IL2CPP_EXTERN_C String_t* _stringLiteralC4BFCF836283C5ED26B4D776D567BFA2E135EC7D;
IL2CPP_EXTERN_C String_t* _stringLiteralCF919B85B6C01DEB7962106374A7EAD8886F9CA9;
IL2CPP_EXTERN_C String_t* _stringLiteralD355DAA26C0477EE3B6D020387EFCAD4E3D4B2F2;
IL2CPP_EXTERN_C String_t* _stringLiteralD831DFB7F93A3076B92AE31D137C7C38A7E85DC7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC1CC0ECFF817092E9BDA758C3B61DDFB7FD6EFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m83CF3399068A4E2D53D45266D7736707E7A477A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m29C8B7226C651EB934B0CA3E1DC14516250E797F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0F46D4E22C38203859351B7BE751817005898CE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB17088189B44A6C2F329E269179CAB96448078AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mC29DC007A56E819962202CC5829E097BA9E61495_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LanguagePack_Load_mAD6F3060EA9E832E9E925764FB61C0C4FF099DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LanguagePack_ReLoad_mE19BDDDF8A7C94CCCA6858A039B013E69B011913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m95BDDBBE0E84B9B8EF91A6F18AC02A8F24FF9220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3176244E05B7AE05CE42630095A1C1D4FCBE012A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9E34EE501A9481F1A2BF30D8238CB004A8D5132E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD06C18FC7B180AE7F565D40D54C80CFA99A8BCAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAEE6924FF6327B738F7E4361C4818477D7CEB5FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0A2BBEDEB48B7086CE5F4E4858A286B33CC3A198_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2F68FFA1198529D61454BA0E566420FFD2129031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6237221DD9F6026C890986A06CEE7F0ED0A407A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m66F756E1AC9767267AB899312298A3C602937784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCC5FABCEDA07B049DB4B3C2813B38F8EDFB9A6BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD41916CD256C7B7A4E2987BB3C22E22DBC7CB501_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFF61CEC99BED76DB0FFEA3B451C2B24D7821F1B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1EB332F3ED08D3AD65757164540A8F4EACAF009A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF934A13D8C093F0EF3E6C5DA11A4F655F471112A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC7F6C19DEA8829978B8E7FD901A19F984E38090D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_GetType_mC029FFC55E743B6F587D332F4FD6588B07065C5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_ReadAllBytes_m846422DB3BABB83B04456A4CACB9DD3E4331D317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_ReadAllText_m86DD45A93C70D34EF973374FBFDF5A8EC739982A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_WriteAllText_m8F36EFD1D8B2059F895842051E9A5BB79D0BC2C6_RuntimeMethod_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
struct LocalizationCategoryU5BU5D_tCCAFAB7C0C2B9584A9CBC39269A1FEAB9F2DBEAC;
struct LocalizationItemU5BU5D_t912890B53BBEC616833268CEE55DBE6E46922B57;
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct SystemLanguageU5BU5D_t9BFB37F8C2607169C61A03B0206BECCD78D8713D;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA48730EFFD3A073E74A9C23D6A8171C4A5F3EA69 
{
};

// System.Collections.Generic.Dictionary`2<System.String,PWCommon5.Localization.LanguagePack>
struct Dictionary_2_t816837D35BED8E24C689C66EB4E27D2A6EBE5D60  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9763AE1744A0C1C1CC55B230824C5FA841FCE4CB* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC95BD9901B91624CAAD9E486362EB4128AB969FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9A95E58E6DAC5503237C3970A1AADA68985393A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,PWCommon5.Localization.LocalizationItem>
struct Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t73575B3F76340F69A660B576A993BD272D73691E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC6001701A1D137789E439D7A2CD074F6814350C4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA6C4EAB3B980F3A4E34F4ADCA8AB80EBA06D7B35* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.IO.DirectoryInfo>
struct List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationCategory>
struct List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LocalizationCategoryU5BU5D_tCCAFAB7C0C2B9584A9CBC39269A1FEAB9F2DBEAC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LocalizationCategoryU5BU5D_tCCAFAB7C0C2B9584A9CBC39269A1FEAB9F2DBEAC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationItem>
struct List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LocalizationItemU5BU5D_t912890B53BBEC616833268CEE55DBE6E46922B57* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LocalizationItemU5BU5D_t912890B53BBEC616833268CEE55DBE6E46922B57* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PWCommon5.Localization.OnlineHelpItem>
struct List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OnlineHelpItemU5BU5D_tAC13323C6D477DF5D8BB982B56FBF38A0D293864* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OnlineHelpItemU5BU5D_tAC13323C6D477DF5D8BB982B56FBF38A0D293864* ___s_emptyArray_5;
};

// PWCommon5.AppConfig
struct AppConfig_t93440A6F87FDF1635C971BA3DEADB5FB112DD4F0  : public RuntimeObject
{
	// System.String PWCommon5.AppConfig::CfgVersion
	String_t* ___CfgVersion_1;
	// System.Double PWCommon5.AppConfig::LastUpdated
	double ___LastUpdated_2;
	// System.String PWCommon5.AppConfig::MinUnity
	String_t* ___MinUnity_3;
	// System.String PWCommon5.AppConfig::Name
	String_t* ___Name_4;
	// UnityEngine.Texture2D PWCommon5.AppConfig::Logo
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Logo_5;
	// System.String PWCommon5.AppConfig::NameSpace
	String_t* ___NameSpace_6;
	// System.String PWCommon5.AppConfig::Folder
	String_t* ___Folder_7;
	// System.String PWCommon5.AppConfig::ScriptsFolder
	String_t* ___ScriptsFolder_8;
	// System.String PWCommon5.AppConfig::EditorScriptsFolder
	String_t* ___EditorScriptsFolder_9;
	// System.String PWCommon5.AppConfig::DocsFolder
	String_t* ___DocsFolder_10;
	// System.String PWCommon5.AppConfig::DocsFolderSpaced
	String_t* ___DocsFolderSpaced_11;
	// System.String PWCommon5.AppConfig::MajorVersion
	String_t* ___MajorVersion_12;
	// System.String PWCommon5.AppConfig::MinorVersion
	String_t* ___MinorVersion_13;
	// System.String PWCommon5.AppConfig::PatchVersion
	String_t* ___PatchVersion_14;
	// System.String PWCommon5.AppConfig::Version
	String_t* ___Version_15;
	// UnityEngine.SystemLanguage[] PWCommon5.AppConfig::AvailableLanguages
	SystemLanguageU5BU5D_t9BFB37F8C2607169C61A03B0206BECCD78D8713D* ___AvailableLanguages_16;
	// System.String PWCommon5.AppConfig::TutorialsLink
	String_t* ___TutorialsLink_17;
	// System.String PWCommon5.AppConfig::DiscordLink
	String_t* ___DiscordLink_18;
	// System.String PWCommon5.AppConfig::SupportLink
	String_t* ___SupportLink_19;
	// System.String PWCommon5.AppConfig::ASLink
	String_t* ___ASLink_20;
	// System.String PWCommon5.AppConfig::NewsURLStripped
	String_t* ___NewsURLStripped_21;
	// System.Boolean PWCommon5.AppConfig::HasWelcome
	bool ___HasWelcome_22;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2  : public RuntimeObject
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;
};
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// PWCommon5.Localization.LanguagePack
struct LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4  : public RuntimeObject
{
	// System.String PWCommon5.Localization.LanguagePack::Version
	String_t* ___Version_2;
	// System.Double PWCommon5.Localization.LanguagePack::LastUpdated
	double ___LastUpdated_3;
	// System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationCategory> PWCommon5.Localization.LanguagePack::Categories
	List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* ___Categories_4;
	// System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LocalizationItem> PWCommon5.Localization.LanguagePack::Items
	RuntimeObject* ___Items_5;
	// System.String PWCommon5.Localization.LanguagePack::m_path
	String_t* ___m_path_6;
	// System.Action PWCommon5.Localization.LanguagePack::OnChange
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnChange_7;
};

struct LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_StaticFields
{
	// System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LanguagePack> PWCommon5.Localization.LanguagePack::ms_loadedPacks
	RuntimeObject* ___ms_loadedPacks_0;
};

// PWCommon5.Localization.LocalizationCategory
struct LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B  : public RuntimeObject
{
	// System.String PWCommon5.Localization.LocalizationCategory::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationItem> PWCommon5.Localization.LocalizationCategory::Items
	List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* ___Items_1;
};

// PWCommon5.Localization.LocalizationItem
struct LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F  : public RuntimeObject
{
	// System.String PWCommon5.Localization.LocalizationItem::Key
	String_t* ___Key_0;
	// System.String PWCommon5.Localization.LocalizationItem::Val
	String_t* ___Val_1;
	// System.String PWCommon5.Localization.LocalizationItem::Tooltip
	String_t* ___Tooltip_2;
	// System.String PWCommon5.Localization.LocalizationItem::Help
	String_t* ___Help_3;
	// System.String PWCommon5.Localization.LocalizationItem::Context
	String_t* ___Context_4;
	// System.Collections.Generic.List`1<PWCommon5.Localization.OnlineHelpItem> PWCommon5.Localization.LocalizationItem::OnlineHelpItems
	List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA* ___OnlineHelpItems_5;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// PWCommon5.Localization.OnlineHelpItem
struct OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9  : public RuntimeObject
{
	// System.String PWCommon5.Localization.OnlineHelpItem::URL
	String_t* ___URL_0;
	// System.String PWCommon5.Localization.OnlineHelpItem::Val
	String_t* ___Val_1;
	// PWCommon5.Localization.OnlineHelpType PWCommon5.Localization.OnlineHelpItem::OnlineHelpType
	int32_t ___OnlineHelpType_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// PWCommon5.UBrush
struct UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2  : public RuntimeObject
{
	// System.Int32 PWCommon5.UBrush::m_size
	int32_t ___m_size_0;
	// System.Single[] PWCommon5.UBrush::m_strength
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_strength_1;
	// UnityEngine.Texture2D PWCommon5.UBrush::m_brush
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_brush_2;
};

// PWCommon5.URLParameters
struct URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D  : public RuntimeObject
{
	// System.String PWCommon5.URLParameters::m_product
	String_t* ___m_product_0;
	// System.String PWCommon5.URLParameters::m_version
	String_t* ___m_version_1;
	// System.String PWCommon5.URLParameters::m_unityVersion
	String_t* ___m_unityVersion_2;
	// System.String PWCommon5.URLParameters::m_pipeline
	String_t* ___m_pipeline_3;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<PWCommon5.Localization.LocalizationCategory>
struct Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_crossAppDomainArray_6;
};

struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8* ___typeNameCache_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_6;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// UnityEngine.SystemLanguage
struct SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E 
{
	// System.Int32 UnityEngine.SystemLanguage::value__
	int32_t ___value___2;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// PWCommon5.Utils
struct Utils_t7E125B803A4D87C242925912395EFC78E40A40BA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.SystemLanguage[]
struct SystemLanguageU5BU5D_t9BFB37F8C2607169C61A03B0206BECCD78D8713D  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// PWCommon5.Localization.LocalizationItem[]
struct LocalizationItemU5BU5D_t912890B53BBEC616833268CEE55DBE6E46922B57  : public RuntimeArray
{
	ALIGN_FIELD (8) LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* m_Items[1];

	inline LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// PWCommon5.Localization.LocalizationCategory[]
struct LocalizationCategoryU5BU5D_tCCAFAB7C0C2B9584A9CBC39269A1FEAB9F2DBEAC  : public RuntimeArray
{
	ALIGN_FIELD (8) LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* m_Items[1];

	inline LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953  : public RuntimeArray
{
	ALIGN_FIELD (8) DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* m_Items[1];

	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* m_Items[1];

	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.AssemblyName[]
struct AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C  : public RuntimeArray
{
	ALIGN_FIELD (8) AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* m_Items[1];

	inline AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Int32 PWCommon5.Utils::GetFrapoch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetFrapoch_mD88A6D0DB76B185AF5A7B5ABC494634BF1DC948F (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationCategory>::.ctor()
inline void List_1__ctor_m0A2BBEDEB48B7086CE5F4E4858A286B33CC3A198 (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,PWCommon5.Localization.LocalizationItem>::.ctor()
inline void Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012 (Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void PWCommon5.Localization.LocalizationCategory::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationCategory__ctor_m1BC065D676479646E4A5B7A73A766A555BA154B5 (LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationItem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mFF61CEC99BED76DB0FFEA3B451C2B24D7821F1B2 (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationCategory>::Add(T)
inline void List_1_Add_mD06C18FC7B180AE7F565D40D54C80CFA99A8BCAB_inline (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* __this, LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817*, LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationCategory>::GetEnumerator()
inline Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157 List_1_GetEnumerator_mAEE6924FF6327B738F7E4361C4818477D7CEB5FD (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157 (*) (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<PWCommon5.Localization.LocalizationCategory>::Dispose()
inline void Enumerator_Dispose_m29C8B7226C651EB934B0CA3E1DC14516250E797F (Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<PWCommon5.Localization.LocalizationCategory>::get_Current()
inline LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* Enumerator_get_Current_mB17088189B44A6C2F329E269179CAB96448078AC_inline (Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157* __this, const RuntimeMethod* method)
{
	return ((  LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* (*) (Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationItem>::get_Item(System.Int32)
inline LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3 (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* (*) (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationItem>::get_Count()
inline int32_t List_1_get_Count_mF934A13D8C093F0EF3E6C5DA11A4F655F471112A_inline (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<PWCommon5.Localization.LocalizationCategory>::MoveNext()
inline bool Enumerator_MoveNext_m0F46D4E22C38203859351B7BE751817005898CE0 (Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationCategory>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mCC5FABCEDA07B049DB4B3C2813B38F8EDFB9A6BC (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void PWCommon5.Localization.LanguagePack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack__ctor_m65E7A8E384E84165271FFA6DA9CB09197C082EC8 (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705 (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void PWCommon5.Localization.LanguagePack::LoadV1(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_LoadV1_mDB3679CDC1C01FE6402FF99091C0EDECCA3C43FE (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* ___formatter0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) ;
// System.Void PWCommon5.Localization.LanguagePack::LoadV3(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_LoadV3_mA75C74A101F2B623F8621FEFA128660630F61A8F (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* ___formatter0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void PWCommon5.Localization.LocalizationItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationItem__ctor_m8917864ECEDD6B6EBC0B91FEC8D3CC834A73CA5B (LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationItem>::Add(T)
inline void List_1_Add_m3176244E05B7AE05CE42630095A1C1D4FCBE012A_inline (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* __this, LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2*, LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void PWCommon5.Localization.OnlineHelpItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnlineHelpItem__ctor_mC30E5558A428A0595A2A02E80118BC7177565030 (OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PWCommon5.Localization.OnlineHelpItem>::Add(T)
inline void List_1_Add_m9E34EE501A9481F1A2BF30D8238CB004A8D5132E_inline (List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA* __this, OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA*, OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void PWCommon5.Localization.LanguagePack::add_OnChange(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_add_OnChange_mEBA8281EB34C545DF227D75D7D32D2F9A09F9F78 (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void PWCommon5.Localization.LanguagePack::remove_OnChange(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_remove_OnChange_mBC2FA03EAF24BA264A8B9CEF6C17459451B7BA00 (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PWCommon5.Localization.LanguagePack>::.ctor()
inline void Dictionary_2__ctor_m83CF3399068A4E2D53D45266D7736707E7A477A2 (Dictionary_2_t816837D35BED8E24C689C66EB4E27D2A6EBE5D60* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t816837D35BED8E24C689C66EB4E27D2A6EBE5D60*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<PWCommon5.Localization.LocalizationItem>::.ctor()
inline void List_1__ctor_m2F68FFA1198529D61454BA0E566420FFD2129031 (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<PWCommon5.Localization.OnlineHelpItem>::.ctor()
inline void List_1__ctor_mD41916CD256C7B7A4E2987BB3C22E22DBC7CB501 (List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void PWCommon5.UBrush::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBrush__ctor_m26B9A045D9923A6482CDB4FF854D78CC68A9B817 (UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* __this, const RuntimeMethod* method) ;
// System.Boolean PWCommon5.UBrush::Load(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UBrush_Load_mE143791E5FEAF24D50679B4EE5470FCCD71E3236 (UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___brushTex0, int32_t ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Texture2D_GetPixelBilinear_m6AE4AF4FD181C478DF0F2C5C329F22A263ABFF5C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, float ___u0, float ___v1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mA95373EEF162CF396A1A20CDF039B29AA2D634EF (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m1F86E05C0B270E003570FE854A7B32775F6FD797 (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, String_t* ___path0, bool ___append1, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding2, int32_t ___bufferSize3, const RuntimeMethod* method) ;
// System.IO.FileStream PWCommon5.Utils::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* Utils_OpenRead_m897B994802D5EBC2244D78523F655CB49EA2458D (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Create_m7A88AE26DE05E6D790E3C5B1140EE5DC91DCC519 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String PWCommon5.Utils::GetAppsSubfolder(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_GetAppsSubfolder_m19DAF21BCE6F81F7198EB03F8B70450EC856E57E (String_t* ___appFolder0, String_t* ___subfolderPath1, const RuntimeMethod* method) ;
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo[] System.IO.DirectoryInfo::GetDirectories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.IO.DirectoryInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m66F756E1AC9767267AB899312298A3C602937784 (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.IO.DirectoryInfo>::.ctor()
inline void List_1__ctor_m6237221DD9F6026C890986A06CEE7F0ED0A407A7 (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<System.IO.DirectoryInfo>::get_Item(System.Int32)
inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* List_1_get_Item_mC7F6C19DEA8829978B8E7FD901A19F984E38090D (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* (*) (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.IO.DirectoryInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m95BDDBBE0E84B9B8EF91A6F18AC02A8F24FF9220 (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.IO.DirectoryInfo>::get_Count()
inline int32_t List_1_get_Count_m1EB332F3ED08D3AD65757164540A8F4EACAF009A_inline (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean PWCommon5.Utils::Math_ApproximatelyEqual(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_Math_ApproximatelyEqual_m5F6A93DFC0F5B2666B4C391C672E88290D7B8D93 (float ___a0, float ___b1, float ___threshold2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MeshFilter>()
inline MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mC29DC007A56E819962202CC5829E097BA9E61495 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.DateTime PWCommon5.Utils::FrapochToLocalDate(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Utils_FrapochToLocalDate_m53510B41C82F8E2E471A2C03507A46CD6DD13763 (double ___seconds0, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_mC42733BACCA273EEAA32A341CBF53722A44DCC90 (String_t* ___assemblyString0, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::GetCallingAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_GetCallingAssembly_mDA96275EB27A0792D97CF9E45FB7919F39A3F97E (const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.Reflection.AssemblyName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_mF899F2F506B05A1BA06EB922499F1564658FF64D (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* ___assemblyRef0, const RuntimeMethod* method) ;
// System.Void PWCommon5.URLParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URLParameters__ctor_m1DBE779900CAF0F268DED6EB4D0B36247E470A7E (URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// PWCommon5.SRP PWCommon5.Utils::GetActivePipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetActivePipeline_m602C8880B9DFC9F3E3BEB80970FA84087CBCB9B1 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PWCommon5.AppConfig::.ctor(System.String,System.String,UnityEngine.SystemLanguage[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfig__ctor_m8A7E7F0AC09E9E533167B0D19058573D16CA1FD0 (AppConfig_t93440A6F87FDF1635C971BA3DEADB5FB112DD4F0* __this, String_t* ___minUnity0, String_t* ___name1, SystemLanguageU5BU5D_t9BFB37F8C2607169C61A03B0206BECCD78D8713D* ___availableLanguages2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F4DEE668D504EE3173C88A62E4316E563978DC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36C4B4074DE0349A5A7A3CEF8600D92296824996);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51E71B23220CD446523465BF73AC76DE1D59BBDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52A72A7AC1B345B93BDAC67BD4964E93800A1FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96B2F4CCFB1009770884CF835AAD744EF79199F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99CC0A682DE77E4F22F3F3937BA2E0BF6C6FFFAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C61F8EABE3F1A0009885EF1ADC85BFE177E4D0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB033E97E97F93EF01921D1704236ED5790054224);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB689ADC818003CD93D1F8F935B12134CFF5E0BB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4BFCF836283C5ED26B4D776D567BFA2E135EC7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF919B85B6C01DEB7962106374A7EAD8886F9CA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___CfgVersion_1 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CfgVersion_1), (void*)_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		__this->___LastUpdated_2 = (0.0);
		String_t* L_0 = ___minUnity0;
		__this->___MinUnity_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MinUnity_3), (void*)L_0);
		String_t* L_1 = ___name1;
		__this->___Name_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_4), (void*)L_1);
		__this->___Logo_5 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Logo_5), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		String_t* L_2 = ___name1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		__this->___NameSpace_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NameSpace_6), (void*)L_3);
		String_t* L_4 = __this->___NameSpace_6;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		__this->___NameSpace_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NameSpace_6), (void*)L_5);
		String_t* L_6 = __this->___NameSpace_6;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		__this->___NameSpace_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NameSpace_6), (void*)L_7);
		String_t* L_8 = ___name1;
		__this->___Folder_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Folder_7), (void*)L_8);
		__this->___ScriptsFolder_8 = _stringLiteralB689ADC818003CD93D1F8F935B12134CFF5E0BB1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ScriptsFolder_8), (void*)_stringLiteralB689ADC818003CD93D1F8F935B12134CFF5E0BB1);
		String_t* L_9 = __this->___ScriptsFolder_8;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteralCF919B85B6C01DEB7962106374A7EAD8886F9CA9, NULL);
		__this->___EditorScriptsFolder_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EditorScriptsFolder_9), (void*)L_10);
		__this->___DocsFolder_10 = _stringLiteralC4BFCF836283C5ED26B4D776D567BFA2E135EC7D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DocsFolder_10), (void*)_stringLiteralC4BFCF836283C5ED26B4D776D567BFA2E135EC7D);
		String_t* L_11 = __this->___DocsFolder_10;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_11, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, NULL);
		__this->___DocsFolderSpaced_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DocsFolderSpaced_11), (void*)L_12);
		__this->___MajorVersion_12 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MajorVersion_12), (void*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->___MinorVersion_13 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MinorVersion_13), (void*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->___PatchVersion_14 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PatchVersion_14), (void*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->___Version_15 = _stringLiteral36C4B4074DE0349A5A7A3CEF8600D92296824996;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Version_15), (void*)_stringLiteral36C4B4074DE0349A5A7A3CEF8600D92296824996);
		SystemLanguageU5BU5D_t9BFB37F8C2607169C61A03B0206BECCD78D8713D* L_13 = ___availableLanguages2;
		__this->___AvailableLanguages_16 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AvailableLanguages_16), (void*)L_13);
		String_t* L_14 = __this->___NameSpace_6;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral99CC0A682DE77E4F22F3F3937BA2E0BF6C6FFFAB, L_15, _stringLiteral51E71B23220CD446523465BF73AC76DE1D59BBDE, NULL);
		__this->___TutorialsLink_17 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TutorialsLink_17), (void*)L_16);
		__this->___DiscordLink_18 = _stringLiteral52A72A7AC1B345B93BDAC67BD4964E93800A1FFB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DiscordLink_18), (void*)_stringLiteral52A72A7AC1B345B93BDAC67BD4964E93800A1FFB);
		__this->___SupportLink_19 = _stringLiteral96B2F4CCFB1009770884CF835AAD744EF79199F2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SupportLink_19), (void*)_stringLiteral96B2F4CCFB1009770884CF835AAD744EF79199F2);
		__this->___ASLink_20 = _stringLiteral9C61F8EABE3F1A0009885EF1ADC85BFE177E4D0B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ASLink_20), (void*)_stringLiteral9C61F8EABE3F1A0009885EF1ADC85BFE177E4D0B);
		__this->___NewsURLStripped_21 = _stringLiteral1F4DEE668D504EE3173C88A62E4316E563978DC1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NewsURLStripped_21), (void*)_stringLiteral1F4DEE668D504EE3173C88A62E4316E563978DC1);
		__this->___HasWelcome_22 = (bool)1;
		String_t* L_17 = ___name1;
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB033E97E97F93EF01921D1704236ED5790054224, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_18, NULL);
		return;
	}
}
// System.Void PWCommon5.AppConfig::.ctor(System.String,System.Double,System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,UnityEngine.SystemLanguage[],System.String,System.String,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfig__ctor_m1ED8F21533B9D4C01046F09BA07FC4180C04A678 (AppConfig_t93440A6F87FDF1635C971BA3DEADB5FB112DD4F0* __this, String_t* ___cfgVersion0, double ___lastUpdated1, String_t* ___minUnity2, String_t* ___name3, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___logo4, String_t* ___nameSpace5, String_t* ___folder6, String_t* ___scriptsFolder7, String_t* ___editorScriptsFolder8, String_t* ___docsFolder9, String_t* ___majorVer10, String_t* ___minorVer11, String_t* ___patchVer12, SystemLanguageU5BU5D_t9BFB37F8C2607169C61A03B0206BECCD78D8713D* ___availableLang13, String_t* ___tutorialsLink14, String_t* ___discordLink15, String_t* ___supportLink16, String_t* ___asLink17, String_t* ___newsURL18, bool ___hasWelcome19, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___cfgVersion0;
		__this->___CfgVersion_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CfgVersion_1), (void*)L_0);
		double L_1 = ___lastUpdated1;
		__this->___LastUpdated_2 = L_1;
		String_t* L_2 = ___minUnity2;
		__this->___MinUnity_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MinUnity_3), (void*)L_2);
		String_t* L_3 = ___name3;
		__this->___Name_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_4), (void*)L_3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___logo4;
		__this->___Logo_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Logo_5), (void*)L_4);
		String_t* L_5 = ___nameSpace5;
		__this->___NameSpace_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NameSpace_6), (void*)L_5);
		String_t* L_6 = ___folder6;
		__this->___Folder_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Folder_7), (void*)L_6);
		String_t* L_7 = ___scriptsFolder7;
		__this->___ScriptsFolder_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ScriptsFolder_8), (void*)L_7);
		String_t* L_8 = ___editorScriptsFolder8;
		__this->___EditorScriptsFolder_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EditorScriptsFolder_9), (void*)L_8);
		String_t* L_9 = ___docsFolder9;
		__this->___DocsFolder_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DocsFolder_10), (void*)L_9);
		String_t* L_10 = __this->___DocsFolder_10;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_10, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, NULL);
		__this->___DocsFolderSpaced_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DocsFolderSpaced_11), (void*)L_11);
		String_t* L_12 = ___majorVer10;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		__this->___MajorVersion_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MajorVersion_12), (void*)L_13);
		String_t* L_14 = ___minorVer11;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		__this->___MinorVersion_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MinorVersion_13), (void*)L_15);
		String_t* L_16 = ___patchVer12;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		__this->___PatchVersion_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PatchVersion_14), (void*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		String_t* L_20 = __this->___MajorVersion_12;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		String_t* L_23 = __this->___MinorVersion_13;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_22;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		String_t* L_26 = __this->___PatchVersion_14;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_26);
		String_t* L_27;
		L_27 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_25, NULL);
		__this->___Version_15 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Version_15), (void*)L_27);
		SystemLanguageU5BU5D_t9BFB37F8C2607169C61A03B0206BECCD78D8713D* L_28 = ___availableLang13;
		__this->___AvailableLanguages_16 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AvailableLanguages_16), (void*)L_28);
		String_t* L_29 = ___tutorialsLink14;
		__this->___TutorialsLink_17 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TutorialsLink_17), (void*)L_29);
		String_t* L_30 = ___discordLink15;
		__this->___DiscordLink_18 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DiscordLink_18), (void*)L_30);
		String_t* L_31 = ___supportLink16;
		__this->___SupportLink_19 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SupportLink_19), (void*)L_31);
		String_t* L_32 = ___asLink17;
		__this->___ASLink_20 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ASLink_20), (void*)L_32);
		String_t* L_33 = ___newsURL18;
		__this->___NewsURLStripped_21 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NewsURLStripped_21), (void*)L_33);
		bool L_34 = ___hasWelcome19;
		__this->___HasWelcome_22 = L_34;
		return;
	}
}
// System.String PWCommon5.AppConfig::get_NewsURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfig_get_NewsURL_mC70976662ED026A1B93BC365FB3225F9B5E58055 (AppConfig_t93440A6F87FDF1635C971BA3DEADB5FB112DD4F0* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___NewsURLStripped_21;
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PWCommon5.Localization.LanguagePack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack__ctor_m65E7A8E384E84165271FFA6DA9CB09197C082EC8 (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0A2BBEDEB48B7086CE5F4E4858A286B33CC3A198_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___Version_2 = _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Version_2), (void*)_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		int32_t L_0;
		L_0 = Utils_GetFrapoch_mD88A6D0DB76B185AF5A7B5ABC494634BF1DC948F(NULL);
		__this->___LastUpdated_3 = ((double)L_0);
		List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* L_1 = (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817*)il2cpp_codegen_object_new(List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m0A2BBEDEB48B7086CE5F4E4858A286B33CC3A198(L_1, List_1__ctor_m0A2BBEDEB48B7086CE5F4E4858A286B33CC3A198_RuntimeMethod_var);
		__this->___Categories_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Categories_4), (void*)L_1);
		Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F* L_2 = (Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F*)il2cpp_codegen_object_new(Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012(L_2, Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012_RuntimeMethod_var);
		__this->___Items_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Items_5), (void*)L_2);
		return;
	}
}
// System.Void PWCommon5.Localization.LanguagePack::.ctor(PWCommon5.Localization.LocalizationItem[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack__ctor_m7FC4A4B55C6E097C19923497E602085B60C7FC66 (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, LocalizationItemU5BU5D_t912890B53BBEC616833268CEE55DBE6E46922B57* ___items0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m29C8B7226C651EB934B0CA3E1DC14516250E797F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0F46D4E22C38203859351B7BE751817005898CE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB17088189B44A6C2F329E269179CAB96448078AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t1E6898CFA5A11461B2437A30A33F56C3A2F9B14A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD06C18FC7B180AE7F565D40D54C80CFA99A8BCAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAEE6924FF6327B738F7E4361C4818477D7CEB5FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0A2BBEDEB48B7086CE5F4E4858A286B33CC3A198_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFF61CEC99BED76DB0FFEA3B451C2B24D7821F1B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF934A13D8C093F0EF3E6C5DA11A4F655F471112A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* V_0 = NULL;
	LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* V_1 = NULL;
	LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* V_2 = NULL;
	Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___Version_2 = _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Version_2), (void*)_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		int32_t L_0;
		L_0 = Utils_GetFrapoch_mD88A6D0DB76B185AF5A7B5ABC494634BF1DC948F(NULL);
		__this->___LastUpdated_3 = ((double)L_0);
		List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* L_1 = (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817*)il2cpp_codegen_object_new(List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m0A2BBEDEB48B7086CE5F4E4858A286B33CC3A198(L_1, List_1__ctor_m0A2BBEDEB48B7086CE5F4E4858A286B33CC3A198_RuntimeMethod_var);
		__this->___Categories_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Categories_4), (void*)L_1);
		LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_2 = (LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B*)il2cpp_codegen_object_new(LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LocalizationCategory__ctor_m1BC065D676479646E4A5B7A73A766A555BA154B5(L_2, _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, NULL);
		V_1 = L_2;
		LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_3 = V_1;
		LocalizationItemU5BU5D_t912890B53BBEC616833268CEE55DBE6E46922B57* L_4 = ___items0;
		List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_5 = (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2*)il2cpp_codegen_object_new(List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mFF61CEC99BED76DB0FFEA3B451C2B24D7821F1B2(L_5, (RuntimeObject*)L_4, List_1__ctor_mFF61CEC99BED76DB0FFEA3B451C2B24D7821F1B2_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___Items_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___Items_1), (void*)L_5);
		LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_6 = V_1;
		V_0 = L_6;
		List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* L_7 = __this->___Categories_4;
		LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_8 = V_0;
		NullCheck(L_7);
		List_1_Add_mD06C18FC7B180AE7F565D40D54C80CFA99A8BCAB_inline(L_7, L_8, List_1_Add_mD06C18FC7B180AE7F565D40D54C80CFA99A8BCAB_RuntimeMethod_var);
		Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F* L_9 = (Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F*)il2cpp_codegen_object_new(Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012(L_9, Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012_RuntimeMethod_var);
		__this->___Items_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Items_5), (void*)L_9);
		List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* L_10 = __this->___Categories_4;
		NullCheck(L_10);
		Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157 L_11;
		L_11 = List_1_GetEnumerator_mAEE6924FF6327B738F7E4361C4818477D7CEB5FD(L_10, List_1_GetEnumerator_mAEE6924FF6327B738F7E4361C4818477D7CEB5FD_RuntimeMethod_var);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m29C8B7226C651EB934B0CA3E1DC14516250E797F((&V_3), Enumerator_Dispose_m29C8B7226C651EB934B0CA3E1DC14516250E797F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d5_1;
			}

IL_006b_1:
			{
				LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_12;
				L_12 = Enumerator_get_Current_mB17088189B44A6C2F329E269179CAB96448078AC_inline((&V_3), Enumerator_get_Current_mB17088189B44A6C2F329E269179CAB96448078AC_RuntimeMethod_var);
				V_2 = L_12;
				V_4 = 0;
				goto IL_00c2_1;
			}

IL_007c_1:
			{
				LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_13 = V_2;
				NullCheck(L_13);
				List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_14 = L_13->___Items_1;
				int32_t L_15 = V_4;
				NullCheck(L_14);
				LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_16;
				L_16 = List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3(L_14, L_15, List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3_RuntimeMethod_var);
				if (!L_16)
				{
					goto IL_00bb_1;
				}
			}
			{
				RuntimeObject* L_17 = __this->___Items_5;
				LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_18 = V_2;
				NullCheck(L_18);
				List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_19 = L_18->___Items_1;
				int32_t L_20 = V_4;
				NullCheck(L_19);
				LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_21;
				L_21 = List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3(L_19, L_20, List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3_RuntimeMethod_var);
				NullCheck(L_21);
				String_t* L_22 = L_21->___Key_0;
				LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_23 = V_2;
				NullCheck(L_23);
				List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_24 = L_23->___Items_1;
				int32_t L_25 = V_4;
				NullCheck(L_24);
				LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_26;
				L_26 = List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3(L_24, L_25, List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3_RuntimeMethod_var);
				NullCheck(L_17);
				InterfaceActionInvoker2< String_t*, LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LocalizationItem>::set_Item(TKey,TValue) */, IDictionary_2_t1E6898CFA5A11461B2437A30A33F56C3A2F9B14A_il2cpp_TypeInfo_var, L_17, L_22, L_26);
			}

IL_00bb_1:
			{
				int32_t L_27 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_27, 1));
			}

IL_00c2_1:
			{
				int32_t L_28 = V_4;
				LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_29 = V_2;
				NullCheck(L_29);
				List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_30 = L_29->___Items_1;
				NullCheck(L_30);
				int32_t L_31;
				L_31 = List_1_get_Count_mF934A13D8C093F0EF3E6C5DA11A4F655F471112A_inline(L_30, List_1_get_Count_mF934A13D8C093F0EF3E6C5DA11A4F655F471112A_RuntimeMethod_var);
				if ((((int32_t)L_28) < ((int32_t)L_31)))
				{
					goto IL_007c_1;
				}
			}
			{
			}

IL_00d5_1:
			{
				bool L_32;
				L_32 = Enumerator_MoveNext_m0F46D4E22C38203859351B7BE751817005898CE0((&V_3), Enumerator_MoveNext_m0F46D4E22C38203859351B7BE751817005898CE0_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_006b_1;
				}
			}
			{
				goto IL_00f4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		return;
	}
}
// System.Void PWCommon5.Localization.LanguagePack::.ctor(PWCommon5.Localization.LocalizationCategory[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack__ctor_m0F183A7F09D3562CA7B1C8597A014DAFA39462C6 (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, LocalizationCategoryU5BU5D_tCCAFAB7C0C2B9584A9CBC39269A1FEAB9F2DBEAC* ___categories0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m29C8B7226C651EB934B0CA3E1DC14516250E797F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0F46D4E22C38203859351B7BE751817005898CE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB17088189B44A6C2F329E269179CAB96448078AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t1E6898CFA5A11461B2437A30A33F56C3A2F9B14A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAEE6924FF6327B738F7E4361C4818477D7CEB5FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC5FABCEDA07B049DB4B3C2813B38F8EDFB9A6BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF934A13D8C093F0EF3E6C5DA11A4F655F471112A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		s_Il2CppMethodInitialized = true;
	}
	LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* V_0 = NULL;
	Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___Version_2 = _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Version_2), (void*)_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		int32_t L_0;
		L_0 = Utils_GetFrapoch_mD88A6D0DB76B185AF5A7B5ABC494634BF1DC948F(NULL);
		__this->___LastUpdated_3 = ((double)L_0);
		LocalizationCategoryU5BU5D_tCCAFAB7C0C2B9584A9CBC39269A1FEAB9F2DBEAC* L_1 = ___categories0;
		List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* L_2 = (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817*)il2cpp_codegen_object_new(List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCC5FABCEDA07B049DB4B3C2813B38F8EDFB9A6BC(L_2, (RuntimeObject*)L_1, List_1__ctor_mCC5FABCEDA07B049DB4B3C2813B38F8EDFB9A6BC_RuntimeMethod_var);
		__this->___Categories_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Categories_4), (void*)L_2);
		Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F* L_3 = (Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F*)il2cpp_codegen_object_new(Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012(L_3, Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012_RuntimeMethod_var);
		__this->___Items_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Items_5), (void*)L_3);
		List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* L_4 = __this->___Categories_4;
		NullCheck(L_4);
		Enumerator_t94C732A541B1CC60F4661D6CC3D8FCEF0A19B157 L_5;
		L_5 = List_1_GetEnumerator_mAEE6924FF6327B738F7E4361C4818477D7CEB5FD(L_4, List_1_GetEnumerator_mAEE6924FF6327B738F7E4361C4818477D7CEB5FD_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m29C8B7226C651EB934B0CA3E1DC14516250E797F((&V_1), Enumerator_Dispose_m29C8B7226C651EB934B0CA3E1DC14516250E797F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b6_1;
			}

IL_0047_1:
			{
				LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_6;
				L_6 = Enumerator_get_Current_mB17088189B44A6C2F329E269179CAB96448078AC_inline((&V_1), Enumerator_get_Current_mB17088189B44A6C2F329E269179CAB96448078AC_RuntimeMethod_var);
				V_0 = L_6;
				LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_7 = V_0;
				if (L_7)
				{
					goto IL_005c_1;
				}
			}
			{
				goto IL_00b6_1;
			}

IL_005c_1:
			{
				V_2 = 0;
				goto IL_00a4_1;
			}

IL_0063_1:
			{
				LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_8 = V_0;
				NullCheck(L_8);
				List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_9 = L_8->___Items_1;
				int32_t L_10 = V_2;
				NullCheck(L_9);
				LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_11;
				L_11 = List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3(L_9, L_10, List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3_RuntimeMethod_var);
				if (!L_11)
				{
					goto IL_009f_1;
				}
			}
			{
				RuntimeObject* L_12 = __this->___Items_5;
				LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_13 = V_0;
				NullCheck(L_13);
				List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_14 = L_13->___Items_1;
				int32_t L_15 = V_2;
				NullCheck(L_14);
				LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_16;
				L_16 = List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3(L_14, L_15, List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3_RuntimeMethod_var);
				NullCheck(L_16);
				String_t* L_17 = L_16->___Key_0;
				LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_18 = V_0;
				NullCheck(L_18);
				List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_19 = L_18->___Items_1;
				int32_t L_20 = V_2;
				NullCheck(L_19);
				LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_21;
				L_21 = List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3(L_19, L_20, List_1_get_Item_m7BD52C426F3CF0C10070CF403B57C988CD5AF0C3_RuntimeMethod_var);
				NullCheck(L_12);
				InterfaceActionInvoker2< String_t*, LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LocalizationItem>::set_Item(TKey,TValue) */, IDictionary_2_t1E6898CFA5A11461B2437A30A33F56C3A2F9B14A_il2cpp_TypeInfo_var, L_12, L_17, L_21);
			}

IL_009f_1:
			{
				int32_t L_22 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
			}

IL_00a4_1:
			{
				int32_t L_23 = V_2;
				LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_24 = V_0;
				NullCheck(L_24);
				List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_25 = L_24->___Items_1;
				NullCheck(L_25);
				int32_t L_26;
				L_26 = List_1_get_Count_mF934A13D8C093F0EF3E6C5DA11A4F655F471112A_inline(L_25, List_1_get_Count_mF934A13D8C093F0EF3E6C5DA11A4F655F471112A_RuntimeMethod_var);
				if ((((int32_t)L_23) < ((int32_t)L_26)))
				{
					goto IL_0063_1;
				}
			}
			{
			}

IL_00b6_1:
			{
				bool L_27;
				L_27 = Enumerator_MoveNext_m0F46D4E22C38203859351B7BE751817005898CE0((&V_1), Enumerator_MoveNext_m0F46D4E22C38203859351B7BE751817005898CE0_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0047_1;
				}
			}
			{
				goto IL_00d5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d5:
	{
		return;
	}
}
// PWCommon5.Localization.LanguagePack PWCommon5.Localization.LanguagePack::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* LanguagePack_Load_mAD6F3060EA9E832E9E925764FB61C0C4FF099DA4 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tDC9936EF0EDD5A7FAF7D60A8B0788348C0B879FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* V_0 = NULL;
	LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* V_1 = NULL;
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_2 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_StaticFields*)il2cpp_codegen_static_fields_for(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var))->___ms_loadedPacks_0;
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LanguagePack>::ContainsKey(TKey) */, IDictionary_2_tDC9936EF0EDD5A7FAF7D60A8B0788348C0B879FF_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_StaticFields*)il2cpp_codegen_static_fields_for(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var))->___ms_loadedPacks_0;
		String_t* L_4 = ___path0;
		NullCheck(L_3);
		LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_5;
		L_5 = InterfaceFuncInvoker1< LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LanguagePack>::get_Item(TKey) */, IDictionary_2_tDC9936EF0EDD5A7FAF7D60A8B0788348C0B879FF_il2cpp_TypeInfo_var, L_3, L_4);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_StaticFields*)il2cpp_codegen_static_fields_for(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var))->___ms_loadedPacks_0;
		String_t* L_7 = ___path0;
		NullCheck(L_6);
		LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_8;
		L_8 = InterfaceFuncInvoker1< LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LanguagePack>::get_Item(TKey) */, IDictionary_2_tDC9936EF0EDD5A7FAF7D60A8B0788348C0B879FF_il2cpp_TypeInfo_var, L_6, L_7);
		V_0 = L_8;
		goto IL_0105;
	}

IL_0033:
	{
		LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_9 = (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4*)il2cpp_codegen_object_new(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		LanguagePack__ctor_m65E7A8E384E84165271FFA6DA9CB09197C082EC8(L_9, NULL);
		V_1 = L_9;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_10 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_10, NULL);
		V_2 = L_10;
		String_t* L_11 = ___path0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_12, L_11, 3, 1, 1, NULL);
		V_3 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e0:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = V_3;
					if (!L_13)
					{
						goto IL_00ec;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = V_3;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_00ec:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_15 = V_1;
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_16 = V_2;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = V_3;
				NullCheck(L_16);
				RuntimeObject* L_18;
				L_18 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_16, L_17, NULL);
				NullCheck(L_15);
				L_15->___Version_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_18, String_t_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&L_15->___Version_2), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_18, String_t_il2cpp_TypeInfo_var)));
				LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_19 = V_1;
				NullCheck(L_19);
				String_t* L_20 = L_19->___Version_2;
				V_4 = L_20;
				String_t* L_21 = V_4;
				if (!L_21)
				{
					goto IL_00c4_1;
				}
			}
			{
				String_t* L_22 = V_4;
				bool L_23;
				L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
				if (L_23)
				{
					goto IL_0092_1;
				}
			}
			{
				String_t* L_24 = V_4;
				bool L_25;
				L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, NULL);
				if (L_25)
				{
					goto IL_00ab_1;
				}
			}
			{
				goto IL_00c4_1;
			}

IL_0092_1:
			{
				LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_26 = V_1;
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_27 = V_2;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28 = V_3;
				NullCheck(L_26);
				LanguagePack_LoadV1_mDB3679CDC1C01FE6402FF99091C0EDECCA3C43FE(L_26, L_27, L_28, NULL);
				il2cpp_codegen_runtime_class_init_inline(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var);
				RuntimeObject* L_29 = ((LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_StaticFields*)il2cpp_codegen_static_fields_for(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var))->___ms_loadedPacks_0;
				String_t* L_30 = ___path0;
				LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_31 = V_1;
				NullCheck(L_29);
				InterfaceActionInvoker2< String_t*, LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LanguagePack>::set_Item(TKey,TValue) */, IDictionary_2_tDC9936EF0EDD5A7FAF7D60A8B0788348C0B879FF_il2cpp_TypeInfo_var, L_29, L_30, L_31);
				goto IL_00da_1;
			}

IL_00ab_1:
			{
				LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_32 = V_1;
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_33 = V_2;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_34 = V_3;
				NullCheck(L_32);
				LanguagePack_LoadV3_mA75C74A101F2B623F8621FEFA128660630F61A8F(L_32, L_33, L_34, NULL);
				il2cpp_codegen_runtime_class_init_inline(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var);
				RuntimeObject* L_35 = ((LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_StaticFields*)il2cpp_codegen_static_fields_for(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var))->___ms_loadedPacks_0;
				String_t* L_36 = ___path0;
				LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_37 = V_1;
				NullCheck(L_35);
				InterfaceActionInvoker2< String_t*, LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LanguagePack>::set_Item(TKey,TValue) */, IDictionary_2_tDC9936EF0EDD5A7FAF7D60A8B0788348C0B879FF_il2cpp_TypeInfo_var, L_35, L_36, L_37);
				goto IL_00da_1;
			}

IL_00c4_1:
			{
				LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_38 = V_1;
				NullCheck(L_38);
				String_t* L_39 = L_38->___Version_2;
				String_t* L_40;
				L_40 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8BC0075BDFB44AD6375234115A9337DB0AD252D2)), L_39, NULL);
				ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_41 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
				NullCheck(L_41);
				ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_41, L_40, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LanguagePack_Load_mAD6F3060EA9E832E9E925764FB61C0C4FF099DA4_RuntimeMethod_var)));
			}

IL_00da_1:
			{
				goto IL_00ed;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ed:
	{
		LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_42 = V_1;
		String_t* L_43 = ___path0;
		NullCheck(L_42);
		L_42->___m_path_6 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___m_path_6), (void*)L_43);
		il2cpp_codegen_runtime_class_init_inline(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var);
		RuntimeObject* L_44 = ((LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_StaticFields*)il2cpp_codegen_static_fields_for(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var))->___ms_loadedPacks_0;
		String_t* L_45 = ___path0;
		NullCheck(L_44);
		LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_46;
		L_46 = InterfaceFuncInvoker1< LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LanguagePack>::get_Item(TKey) */, IDictionary_2_tDC9936EF0EDD5A7FAF7D60A8B0788348C0B879FF_il2cpp_TypeInfo_var, L_44, L_45);
		V_0 = L_46;
		goto IL_0105;
	}

IL_0105:
	{
		LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* L_47 = V_0;
		return L_47;
	}
}
// System.Void PWCommon5.Localization.LanguagePack::ReLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_ReLoad_mE19BDDDF8A7C94CCCA6858A039B013E69B011913 (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0A2BBEDEB48B7086CE5F4E4858A286B33CC3A198_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB2987DD6116C1860B3CD6896EB8FCD0B687F3B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD831DFB7F93A3076B92AE31D137C7C38A7E85DC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = __this->___m_path_6;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralAB2987DD6116C1860B3CD6896EB8FCD0B687F3B9, NULL);
		goto IL_00e9;
	}

IL_0021:
	{
		List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* L_2 = (List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817*)il2cpp_codegen_object_new(List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m0A2BBEDEB48B7086CE5F4E4858A286B33CC3A198(L_2, List_1__ctor_m0A2BBEDEB48B7086CE5F4E4858A286B33CC3A198_RuntimeMethod_var);
		__this->___Categories_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Categories_4), (void*)L_2);
		Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F* L_3 = (Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F*)il2cpp_codegen_object_new(Dictionary_2_tEA80825A1C60CBAEF26E724738AF56D3C461812F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012(L_3, Dictionary_2__ctor_mDBDE2524A79866C4A75696360AEB685CFC1BC012_RuntimeMethod_var);
		__this->___Items_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Items_5), (void*)L_3);
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_4 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_4, NULL);
		V_0 = L_4;
		String_t* L_5 = __this->___m_path_6;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_6, L_5, 3, 1, 1, NULL);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dc:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = V_1;
					if (!L_7)
					{
						goto IL_00e8;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_00e8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_9 = V_0;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = V_1;
				NullCheck(L_9);
				RuntimeObject* L_11;
				L_11 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_9, L_10, NULL);
				__this->___Version_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&__this->___Version_2), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var)));
				String_t* L_12 = __this->___Version_2;
				String_t* L_13;
				L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD831DFB7F93A3076B92AE31D137C7C38A7E85DC7, L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
				String_t* L_14 = __this->___Version_2;
				V_2 = L_14;
				String_t* L_15 = V_2;
				if (!L_15)
				{
					goto IL_00c0_1;
				}
			}
			{
				String_t* L_16 = V_2;
				bool L_17;
				L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
				if (L_17)
				{
					goto IL_00a6_1;
				}
			}
			{
				String_t* L_18 = V_2;
				bool L_19;
				L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, NULL);
				if (L_19)
				{
					goto IL_00b3_1;
				}
			}
			{
				goto IL_00c0_1;
			}

IL_00a6_1:
			{
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_20 = V_0;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = V_1;
				LanguagePack_LoadV1_mDB3679CDC1C01FE6402FF99091C0EDECCA3C43FE(__this, L_20, L_21, NULL);
				goto IL_00d6_1;
			}

IL_00b3_1:
			{
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_22 = V_0;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_23 = V_1;
				LanguagePack_LoadV3_mA75C74A101F2B623F8621FEFA128660630F61A8F(__this, L_22, L_23, NULL);
				goto IL_00d6_1;
			}

IL_00c0_1:
			{
				String_t* L_24 = __this->___Version_2;
				String_t* L_25;
				L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8BC0075BDFB44AD6375234115A9337DB0AD252D2)), L_24, NULL);
				ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_26 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
				NullCheck(L_26);
				ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_26, L_25, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LanguagePack_ReLoad_mE19BDDDF8A7C94CCCA6858A039B013E69B011913_RuntimeMethod_var)));
			}

IL_00d6_1:
			{
				goto IL_00e9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e9:
	{
		return;
	}
}
// System.Void PWCommon5.Localization.LanguagePack::LoadV1(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_LoadV1_mDB3679CDC1C01FE6402FF99091C0EDECCA3C43FE (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* ___formatter0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t1E6898CFA5A11461B2437A30A33F56C3A2F9B14A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3176244E05B7AE05CE42630095A1C1D4FCBE012A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD06C18FC7B180AE7F565D40D54C80CFA99A8BCAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* V_5 = NULL;
	{
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_0 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream1;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_0, L_1, NULL);
		__this->___LastUpdated_3 = ((*(double*)((double*)(double*)UnBox(L_2, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_3 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___stream1;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_3, L_4, NULL);
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_5, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		V_1 = 0;
		goto IL_00f7;
	}

IL_0027:
	{
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_6 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___stream1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_6, L_7, NULL);
		LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_9 = (LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B*)il2cpp_codegen_object_new(LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		LocalizationCategory__ctor_m1BC065D676479646E4A5B7A73A766A555BA154B5(L_9, ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)), NULL);
		V_2 = L_9;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_10 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = ___stream1;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_10, L_11, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_12, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		V_4 = 0;
		goto IL_00de;
	}

IL_004f:
	{
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_13 = (LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F*)il2cpp_codegen_object_new(LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		LocalizationItem__ctor_m8917864ECEDD6B6EBC0B91FEC8D3CC834A73CA5B(L_13, NULL);
		V_5 = L_13;
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_14 = V_5;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_15 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = ___stream1;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_15, L_16, NULL);
		NullCheck(L_14);
		L_14->___Key_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_17, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___Key_0), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_17, String_t_il2cpp_TypeInfo_var)));
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_18 = V_5;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_19 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = ___stream1;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_19, L_20, NULL);
		NullCheck(L_18);
		L_18->___Val_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_21, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___Val_1), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_21, String_t_il2cpp_TypeInfo_var)));
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_22 = V_5;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_23 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = ___stream1;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_23, L_24, NULL);
		NullCheck(L_22);
		L_22->___Tooltip_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_25, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___Tooltip_2), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_25, String_t_il2cpp_TypeInfo_var)));
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_26 = V_5;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_27 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28 = ___stream1;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_27, L_28, NULL);
		NullCheck(L_26);
		L_26->___Help_3 = ((String_t*)CastclassSealed((RuntimeObject*)L_29, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___Help_3), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_29, String_t_il2cpp_TypeInfo_var)));
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_30 = V_5;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_31 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_32 = ___stream1;
		NullCheck(L_31);
		RuntimeObject* L_33;
		L_33 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_31, L_32, NULL);
		NullCheck(L_30);
		L_30->___Context_4 = ((String_t*)CastclassSealed((RuntimeObject*)L_33, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___Context_4), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_33, String_t_il2cpp_TypeInfo_var)));
		LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_34 = V_2;
		NullCheck(L_34);
		List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_35 = L_34->___Items_1;
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_36 = V_5;
		NullCheck(L_35);
		List_1_Add_m3176244E05B7AE05CE42630095A1C1D4FCBE012A_inline(L_35, L_36, List_1_Add_m3176244E05B7AE05CE42630095A1C1D4FCBE012A_RuntimeMethod_var);
		RuntimeObject* L_37 = __this->___Items_5;
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_38 = V_5;
		NullCheck(L_38);
		String_t* L_39 = L_38->___Key_0;
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_40 = V_5;
		NullCheck(L_37);
		InterfaceActionInvoker2< String_t*, LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LocalizationItem>::set_Item(TKey,TValue) */, IDictionary_2_t1E6898CFA5A11461B2437A30A33F56C3A2F9B14A_il2cpp_TypeInfo_var, L_37, L_39, L_40);
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00de:
	{
		int32_t L_42 = V_4;
		int32_t L_43 = V_3;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_004f;
		}
	}
	{
		List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* L_44 = __this->___Categories_4;
		LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_45 = V_2;
		NullCheck(L_44);
		List_1_Add_mD06C18FC7B180AE7F565D40D54C80CFA99A8BCAB_inline(L_44, L_45, List_1_Add_mD06C18FC7B180AE7F565D40D54C80CFA99A8BCAB_RuntimeMethod_var);
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00f7:
	{
		int32_t L_47 = V_1;
		int32_t L_48 = V_0;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}
}
// System.Void PWCommon5.Localization.LanguagePack::LoadV3(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_LoadV3_mA75C74A101F2B623F8621FEFA128660630F61A8F (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* ___formatter0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t1E6898CFA5A11461B2437A30A33F56C3A2F9B14A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3176244E05B7AE05CE42630095A1C1D4FCBE012A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9E34EE501A9481F1A2BF30D8238CB004A8D5132E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD06C18FC7B180AE7F565D40D54C80CFA99A8BCAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnlineHelpType_t066F51CA267D0C5E5162613539CB9B6432D09613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9* V_8 = NULL;
	{
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_0 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream1;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_0, L_1, NULL);
		__this->___LastUpdated_3 = ((*(double*)((double*)(double*)UnBox(L_2, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_3 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___stream1;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_3, L_4, NULL);
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_5, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		V_1 = 0;
		goto IL_016c;
	}

IL_0027:
	{
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_6 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___stream1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_6, L_7, NULL);
		LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_9 = (LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B*)il2cpp_codegen_object_new(LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		LocalizationCategory__ctor_m1BC065D676479646E4A5B7A73A766A555BA154B5(L_9, ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)), NULL);
		V_2 = L_9;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_10 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = ___stream1;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_10, L_11, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_12, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		V_4 = 0;
		goto IL_0153;
	}

IL_004f:
	{
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_13 = (LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F*)il2cpp_codegen_object_new(LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		LocalizationItem__ctor_m8917864ECEDD6B6EBC0B91FEC8D3CC834A73CA5B(L_13, NULL);
		V_5 = L_13;
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_14 = V_5;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_15 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = ___stream1;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_15, L_16, NULL);
		NullCheck(L_14);
		L_14->___Key_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_17, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___Key_0), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_17, String_t_il2cpp_TypeInfo_var)));
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_18 = V_5;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_19 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = ___stream1;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_19, L_20, NULL);
		NullCheck(L_18);
		L_18->___Val_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_21, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___Val_1), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_21, String_t_il2cpp_TypeInfo_var)));
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_22 = V_5;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_23 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = ___stream1;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_23, L_24, NULL);
		NullCheck(L_22);
		L_22->___Tooltip_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_25, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___Tooltip_2), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_25, String_t_il2cpp_TypeInfo_var)));
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_26 = V_5;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_27 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28 = ___stream1;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_27, L_28, NULL);
		NullCheck(L_26);
		L_26->___Help_3 = ((String_t*)CastclassSealed((RuntimeObject*)L_29, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___Help_3), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_29, String_t_il2cpp_TypeInfo_var)));
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_30 = V_5;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_31 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_32 = ___stream1;
		NullCheck(L_31);
		RuntimeObject* L_33;
		L_33 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_31, L_32, NULL);
		NullCheck(L_30);
		L_30->___Context_4 = ((String_t*)CastclassSealed((RuntimeObject*)L_33, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___Context_4), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_33, String_t_il2cpp_TypeInfo_var)));
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_34 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_35 = ___stream1;
		NullCheck(L_34);
		RuntimeObject* L_36;
		L_36 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_34, L_35, NULL);
		V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_36, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		V_7 = 0;
		goto IL_0122;
	}

IL_00cc:
	{
		OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9* L_37 = (OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9*)il2cpp_codegen_object_new(OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		OnlineHelpItem__ctor_mC30E5558A428A0595A2A02E80118BC7177565030(L_37, NULL);
		V_8 = L_37;
		OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9* L_38 = V_8;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_39 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_40 = ___stream1;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_39, L_40, NULL);
		NullCheck(L_38);
		L_38->___URL_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_41, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___URL_0), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_41, String_t_il2cpp_TypeInfo_var)));
		OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9* L_42 = V_8;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_43 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_44 = ___stream1;
		NullCheck(L_43);
		RuntimeObject* L_45;
		L_45 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_43, L_44, NULL);
		NullCheck(L_42);
		L_42->___Val_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_45, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___Val_1), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_45, String_t_il2cpp_TypeInfo_var)));
		OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9* L_46 = V_8;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_47 = ___formatter0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_48 = ___stream1;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_47, L_48, NULL);
		NullCheck(L_46);
		L_46->___OnlineHelpType_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_49, OnlineHelpType_t066F51CA267D0C5E5162613539CB9B6432D09613_il2cpp_TypeInfo_var))));
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_50 = V_5;
		NullCheck(L_50);
		List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA* L_51 = L_50->___OnlineHelpItems_5;
		OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9* L_52 = V_8;
		NullCheck(L_51);
		List_1_Add_m9E34EE501A9481F1A2BF30D8238CB004A8D5132E_inline(L_51, L_52, List_1_Add_m9E34EE501A9481F1A2BF30D8238CB004A8D5132E_RuntimeMethod_var);
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0122:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = V_6;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_00cc;
		}
	}
	{
		LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_56 = V_2;
		NullCheck(L_56);
		List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_57 = L_56->___Items_1;
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_58 = V_5;
		NullCheck(L_57);
		List_1_Add_m3176244E05B7AE05CE42630095A1C1D4FCBE012A_inline(L_57, L_58, List_1_Add_m3176244E05B7AE05CE42630095A1C1D4FCBE012A_RuntimeMethod_var);
		RuntimeObject* L_59 = __this->___Items_5;
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_60 = V_5;
		NullCheck(L_60);
		String_t* L_61 = L_60->___Key_0;
		LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* L_62 = V_5;
		NullCheck(L_59);
		InterfaceActionInvoker2< String_t*, LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,PWCommon5.Localization.LocalizationItem>::set_Item(TKey,TValue) */, IDictionary_2_t1E6898CFA5A11461B2437A30A33F56C3A2F9B14A_il2cpp_TypeInfo_var, L_59, L_61, L_62);
		int32_t L_63 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0153:
	{
		int32_t L_64 = V_4;
		int32_t L_65 = V_3;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_004f;
		}
	}
	{
		List_1_tE330EF33953F2DA7DD97449C975B348CFB8CC817* L_66 = __this->___Categories_4;
		LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* L_67 = V_2;
		NullCheck(L_66);
		List_1_Add_mD06C18FC7B180AE7F565D40D54C80CFA99A8BCAB_inline(L_66, L_67, List_1_Add_mD06C18FC7B180AE7F565D40D54C80CFA99A8BCAB_RuntimeMethod_var);
		int32_t L_68 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_016c:
	{
		int32_t L_69 = V_1;
		int32_t L_70 = V_0;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}
}
// System.Void PWCommon5.Localization.LanguagePack::add_OnChange(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_add_OnChange_mEBA8281EB34C545DF227D75D7D32D2F9A09F9F78 (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnChange_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnChange_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void PWCommon5.Localization.LanguagePack::remove_OnChange(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_remove_OnChange_mBC2FA03EAF24BA264A8B9CEF6C17459451B7BA00 (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnChange_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnChange_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void PWCommon5.Localization.LanguagePack::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_Validate_m21D8C7D345761C15CEA83D145C0A853D7D8147BA (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnChange_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnChange_7;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void PWCommon5.Localization.LanguagePack::AddOnChangeAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_AddOnChangeAction_m8590C48D830D2CED43832D1D1E30785F6F2A9F24 (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		LanguagePack_add_OnChange_mEBA8281EB34C545DF227D75D7D32D2F9A09F9F78(__this, L_0, NULL);
		return;
	}
}
// System.Void PWCommon5.Localization.LanguagePack::RemoveOnChangeAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack_RemoveOnChangeAction_m516DB585F9C6FE4B7C2716B85641CD6ADE8E8AF6 (LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		LanguagePack_remove_OnChange_mBC2FA03EAF24BA264A8B9CEF6C17459451B7BA00(__this, L_0, NULL);
		return;
	}
}
// System.Void PWCommon5.Localization.LanguagePack::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguagePack__cctor_m12127E56C58EF646F9FF7813B996A9797CAEE820 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m83CF3399068A4E2D53D45266D7736707E7A477A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t816837D35BED8E24C689C66EB4E27D2A6EBE5D60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t816837D35BED8E24C689C66EB4E27D2A6EBE5D60* L_0 = (Dictionary_2_t816837D35BED8E24C689C66EB4E27D2A6EBE5D60*)il2cpp_codegen_object_new(Dictionary_2_t816837D35BED8E24C689C66EB4E27D2A6EBE5D60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m83CF3399068A4E2D53D45266D7736707E7A477A2(L_0, Dictionary_2__ctor_m83CF3399068A4E2D53D45266D7736707E7A477A2_RuntimeMethod_var);
		((LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_StaticFields*)il2cpp_codegen_static_fields_for(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var))->___ms_loadedPacks_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_StaticFields*)il2cpp_codegen_static_fields_for(LanguagePack_tBD4F3D6E205CF7E5B93592001F8CB4BD913A7BC4_il2cpp_TypeInfo_var))->___ms_loadedPacks_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PWCommon5.Localization.LocalizationCategory::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationCategory__ctor_m1BC065D676479646E4A5B7A73A766A555BA154B5 (LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2F68FFA1198529D61454BA0E566420FFD2129031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___Name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_0);
		List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2* L_1 = (List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2*)il2cpp_codegen_object_new(List_1_tDCA98938D4151FA791A9C766DBC6683204D2C1A2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m2F68FFA1198529D61454BA0E566420FFD2129031(L_1, List_1__ctor_m2F68FFA1198529D61454BA0E566420FFD2129031_RuntimeMethod_var);
		__this->___Items_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Items_1), (void*)L_1);
		return;
	}
}
// System.String PWCommon5.Localization.LocalizationCategory::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationCategory_ToString_m8D57C81FAC169AD34EF49ABE5F13408F4B943077 (LocalizationCategory_t43F683674B1A9F4F63FFFD64F19B24D3DF30047B* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___Name_0;
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PWCommon5.Localization.LocalizationItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationItem__ctor_m8917864ECEDD6B6EBC0B91FEC8D3CC834A73CA5B (LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD41916CD256C7B7A4E2987BB3C22E22DBC7CB501_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___Val_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Val_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___Tooltip_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tooltip_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___Help_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Help_3), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___Context_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Context_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA* L_0 = (List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA*)il2cpp_codegen_object_new(List_1_t83C75B7DE614E8DEB7CBD9924BEA4DB5DE791AFA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD41916CD256C7B7A4E2987BB3C22E22DBC7CB501(L_0, List_1__ctor_mD41916CD256C7B7A4E2987BB3C22E22DBC7CB501_RuntimeMethod_var);
		__this->___OnlineHelpItems_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnlineHelpItems_5), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String PWCommon5.Localization.LocalizationItem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationItem_ToString_mEE6337C0CB2E5CAB1121E128EB6167CF4CA3657D (LocalizationItem_t42F9E707CD67C20562B3151B1DA6D9B6D1D9B96F* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___Key_0;
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PWCommon5.Localization.OnlineHelpItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnlineHelpItem__ctor_mC30E5558A428A0595A2A02E80118BC7177565030 (OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___URL_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___URL_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___Val_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Val_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String PWCommon5.Localization.OnlineHelpItem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OnlineHelpItem_ToString_m6C461CE8FDF1DBD42CA017957DD7A6E53E757514 (OnlineHelpItem_tE03EEA9C0E1E0E3D3337020DE1E688E8F431B5F9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___Val_1;
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PWCommon5.UBrush::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBrush__ctor_m26B9A045D9923A6482CDB4FF854D78CC68A9B817 (UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 PWCommon5.UBrush::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UBrush_get_Size_mB4747B0CF05024873531DCB02AF0B2678C8F6786 (UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_size_0;
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// PWCommon5.UBrush PWCommon5.UBrush::GetBrush(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* UBrush_GetBrush_mF65390A25449403E9393709DA71B1477996F350B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___brushTexture0, int32_t ___size1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC1CC0ECFF817092E9BDA758C3B61DDFB7FD6EFB);
		s_Il2CppMethodInitialized = true;
	}
	UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* V_0 = NULL;
	UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* V_1 = NULL;
	{
		UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* L_0 = (UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2*)il2cpp_codegen_object_new(UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UBrush__ctor_m26B9A045D9923A6482CDB4FF854D78CC68A9B817(L_0, NULL);
		V_0 = L_0;
		UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* L_1 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___brushTexture0;
		int32_t L_3 = ___size1;
		NullCheck(L_1);
		bool L_4;
		L_4 = UBrush_Load_mE143791E5FEAF24D50679B4EE5470FCCD71E3236(L_1, L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteralDC1CC0ECFF817092E9BDA758C3B61DDFB7FD6EFB, L_5, NULL);
	}

IL_0026:
	{
		UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* L_6 = V_0;
		V_1 = L_6;
		goto IL_002d;
	}

IL_002d:
	{
		UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* L_7 = V_1;
		return L_7;
	}
}
// PWCommon5.UBrush PWCommon5.UBrush::GetInSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* UBrush_GetInSize_m27742CC8271C4D551931B28C69086AC2243DE587 (UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC1CC0ECFF817092E9BDA758C3B61DDFB7FD6EFB);
		s_Il2CppMethodInitialized = true;
	}
	UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* V_0 = NULL;
	UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* V_1 = NULL;
	{
		UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* L_0 = (UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2*)il2cpp_codegen_object_new(UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UBrush__ctor_m26B9A045D9923A6482CDB4FF854D78CC68A9B817(L_0, NULL);
		V_0 = L_0;
		UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* L_1 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___m_brush_2;
		int32_t L_3 = ___size0;
		NullCheck(L_1);
		bool L_4;
		L_4 = UBrush_Load_mE143791E5FEAF24D50679B4EE5470FCCD71E3236(L_1, L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteralDC1CC0ECFF817092E9BDA758C3B61DDFB7FD6EFB, L_5, NULL);
	}

IL_002b:
	{
		UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* L_6 = V_0;
		V_1 = L_6;
		goto IL_0032;
	}

IL_0032:
	{
		UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* L_7 = V_1;
		return L_7;
	}
}
// System.Boolean PWCommon5.UBrush::Load(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UBrush_Load_mE143791E5FEAF24D50679B4EE5470FCCD71E3236 (UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___brushTex0, int32_t ___size1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_brush_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___brushTex0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_3 = ___size1;
		int32_t L_4 = __this->___m_size_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = __this->___m_strength_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0133;
	}

IL_0031:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___brushTex0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_8 = ___size1;
		V_1 = ((float)L_8);
		int32_t L_9 = ___size1;
		__this->___m_size_0 = L_9;
		int32_t L_10 = __this->___m_size_0;
		int32_t L_11 = __this->___m_size_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_10, L_11)));
		__this->___m_strength_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_strength_1), (void*)L_12);
		int32_t L_13 = __this->___m_size_0;
		if ((((int32_t)L_13) <= ((int32_t)3)))
		{
			goto IL_00d1;
		}
	}
	{
		V_2 = 0;
		goto IL_00bf;
	}

IL_0074:
	{
		V_3 = 0;
		goto IL_00ae;
	}

IL_007c:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___m_strength_1;
		int32_t L_15 = V_2;
		int32_t L_16 = __this->___m_size_0;
		int32_t L_17 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___brushTex0;
		int32_t L_19 = V_3;
		float L_20 = V_1;
		int32_t L_21 = V_2;
		float L_22 = V_1;
		NullCheck(L_18);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Texture2D_GetPixelBilinear_m6AE4AF4FD181C478DF0F2C5C329F22A263ABFF5C(L_18, ((float)(((float)il2cpp_codegen_add(((float)L_19), (0.5f)))/L_20)), ((float)(((float)L_21)/L_22)), NULL);
		V_4 = L_23;
		float L_24 = (&V_4)->___a_3;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, L_16)), L_17))), (float)L_24);
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00ae:
	{
		int32_t L_26 = V_3;
		int32_t L_27 = __this->___m_size_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00bf:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = __this->___m_size_0;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0074;
		}
	}
	{
		goto IL_00fe;
	}

IL_00d1:
	{
		V_5 = 0;
		goto IL_00ee;
	}

IL_00da:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = __this->___m_strength_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (float)(1.0f));
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ee:
	{
		int32_t L_34 = V_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = __this->___m_strength_1;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_00da;
		}
	}
	{
	}

IL_00fe:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = ___brushTex0;
		__this->___m_brush_2 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_brush_2), (void*)L_36);
		V_0 = (bool)1;
		goto IL_0133;
	}

IL_010c:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___m_strength_1 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_strength_1), (void*)L_37);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = __this->___m_strength_1;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		__this->___m_size_0 = 1;
		V_0 = (bool)0;
		goto IL_0133;
	}

IL_0133:
	{
		bool L_39 = V_0;
		return L_39;
	}
}
// System.Single PWCommon5.UBrush::GetStrengthAtCoords(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UBrush_GetStrengthAtCoords_m39991B4CE3FCD5920BEEB488D45FA26965E3711E (UBrush_t1E5D14362F84E945B04C087F93B88F126F0704E2* __this, int32_t ___ix0, int32_t ___iy1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___ix0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->___m_size_0;
		int32_t L_2 = ___ix0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = ___iy1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = __this->___m_size_0;
		int32_t L_5 = ___iy1;
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_0033;
		}
	}

IL_0027:
	{
		V_0 = (0.0f);
		goto IL_004a;
	}

IL_0033:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___m_strength_1;
		int32_t L_7 = ___iy1;
		int32_t L_8 = __this->___m_size_0;
		int32_t L_9 = ___ix0;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, L_8)), L_9));
		float L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		goto IL_004a;
	}

IL_004a:
	{
		float L_12 = V_0;
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PWCommon5.URLParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URLParameters__ctor_m1DBE779900CAF0F268DED6EB4D0B36247E470A7E (URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_product_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_product_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_version_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_version_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_unityVersion_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_unityVersion_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_pipeline_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pipeline_3), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PWCommon5.Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_mC0B4B986B6707924B0B0884FD25BCDE9C3CA210A (Utils_t7E125B803A4D87C242925912395EFC78E40A40BA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.String PWCommon5.Utils::FixFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_FixFileName_mB10438DDC05FE162FB18BA48D375F4CB8D8A5B05 (String_t* ___sourceFileName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		String_t* L_1 = ___sourceFileName0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0061;
	}

IL_0011:
	{
		String_t* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		V_1 = L_4;
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0052;
		}
	}

IL_002a:
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)65))))
		{
			goto IL_003a;
		}
	}
	{
		Il2CppChar L_8 = V_1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0052;
		}
	}

IL_003a:
	{
		Il2CppChar L_9 = V_1;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)97))))
		{
			goto IL_004a;
		}
	}
	{
		Il2CppChar L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0052;
		}
	}

IL_004a:
	{
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_005c;
		}
	}

IL_0052:
	{
		StringBuilder_t* L_12 = V_0;
		Il2CppChar L_13 = V_1;
		NullCheck(L_12);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, L_13, NULL);
	}

IL_005c:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0061:
	{
		int32_t L_16 = V_3;
		String_t* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0011;
		}
	}
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		V_4 = L_20;
		goto IL_007a;
	}

IL_007a:
	{
		String_t* L_21 = V_4;
		return L_21;
	}
}
// System.IO.FileStream PWCommon5.Utils::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* Utils_OpenRead_m897B994802D5EBC2244D78523F655CB49EA2458D (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_1, L_0, 3, 1, 1, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
		return L_2;
	}
}
// System.String PWCommon5.Utils::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_ReadAllText_m86DD45A93C70D34EF973374FBFDF5A8EC739982A (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___path0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_ReadAllText_m86DD45A93C70D34EF973374FBFDF5A8EC739982A_RuntimeMethod_var)));
	}

IL_0012:
	{
		String_t* L_2 = ___path0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A3FAECD2079D271A8FB085671AA7B3B113872DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_ReadAllText_m86DD45A93C70D34EF973374FBFDF5A8EC739982A_RuntimeMethod_var)));
	}

IL_0028:
	{
		String_t* L_5 = ___path0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_7 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StreamReader__ctor_mA95373EEF162CF396A1A20CDF039B29AA2D634EF(L_7, L_5, L_6, (bool)1, ((int32_t)1024), NULL);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_8 = V_0;
					if (!L_8)
					{
						goto IL_0052;
					}
				}
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_9 = V_0;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0052:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_10 = V_0;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadToEnd() */, L_10);
			V_1 = L_11;
			goto IL_0053;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		String_t* L_12 = V_1;
		return L_12;
	}
}
// System.Void PWCommon5.Utils::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_WriteAllText_m8F36EFD1D8B2059F895842051E9A5BB79D0BC2C6 (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_WriteAllText_m8F36EFD1D8B2059F895842051E9A5BB79D0BC2C6_RuntimeMethod_var)));
	}

IL_0012:
	{
		String_t* L_2 = ___path0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A3FAECD2079D271A8FB085671AA7B3B113872DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_WriteAllText_m8F36EFD1D8B2059F895842051E9A5BB79D0BC2C6_RuntimeMethod_var)));
	}

IL_0028:
	{
		String_t* L_5 = ___path0;
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9EE187A1DFB6C7E24E0162931104A8F2CE585643)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_WriteAllText_m8F36EFD1D8B2059F895842051E9A5BB79D0BC2C6_RuntimeMethod_var)));
	}

IL_0039:
	{
		String_t* L_7 = ___contents1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if (L_8)
		{
			goto IL_004f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A6A26AED6C189E4357BE875059C5FDC77F61099)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_WriteAllText_m8F36EFD1D8B2059F895842051E9A5BB79D0BC2C6_RuntimeMethod_var)));
	}

IL_004f:
	{
		String_t* L_10 = ___path0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11;
		L_11 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_12 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		StreamWriter__ctor_m1F86E05C0B270E003570FE854A7B32775F6FD797(L_12, L_10, (bool)0, L_11, ((int32_t)1024), NULL);
		V_0 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006d:
			{// begin finally (depth: 1)
				{
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_13 = V_0;
					if (!L_13)
					{
						goto IL_0079;
					}
				}
				{
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_14 = V_0;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_15 = V_0;
			String_t* L_16 = ___contents1;
			NullCheck(L_15);
			VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_16);
			goto IL_007a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		return;
	}
}
// System.Byte[] PWCommon5.Utils::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Utils_ReadAllBytes_m846422DB3BABB83B04456A4CACB9DD3E4331D317 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_ReadAllBytes_m846422DB3BABB83B04456A4CACB9DD3E4331D317_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	{
		String_t* L_0 = ___path0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
		L_1 = Utils_OpenRead_m897B994802D5EBC2244D78523F655CB49EA2458D(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0080;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0080:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
				NullCheck(L_4);
				int64_t L_5;
				L_5 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_4);
				V_1 = L_5;
				int64_t L_6 = V_1;
				if ((((int64_t)L_6) <= ((int64_t)((int64_t)((int32_t)2147483647LL)))))
				{
					goto IL_0027_1;
				}
			}
			{
				IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_7 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
				NullCheck(L_7);
				IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42104C6893ADC7C3A8BBEE4B85A994F6A92BA8D7)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_ReadAllBytes_m846422DB3BABB83B04456A4CACB9DD3E4331D317_RuntimeMethod_var)));
			}

IL_0027_1:
			{
				V_2 = 0;
				int64_t L_8 = V_1;
				V_3 = ((int32_t)L_8);
				int64_t L_9 = V_1;
				if ((int64_t)(L_9) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utils_ReadAllBytes_m846422DB3BABB83B04456A4CACB9DD3E4331D317_RuntimeMethod_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_9));
				V_4 = L_10;
				goto IL_0064_1;
			}

IL_003a_1:
			{
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_4;
				int32_t L_13 = V_2;
				int32_t L_14 = V_3;
				NullCheck(L_11);
				int32_t L_15;
				L_15 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, L_13, L_14);
				V_5 = L_15;
				int32_t L_16 = V_5;
				if (L_16)
				{
					goto IL_0059_1;
				}
			}
			{
				IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_17 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
				NullCheck(L_17);
				IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral687B0943A9A3524003E9BA508C255E8D60725E9D)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_ReadAllBytes_m846422DB3BABB83B04456A4CACB9DD3E4331D317_RuntimeMethod_var)));
			}

IL_0059_1:
			{
				int32_t L_18 = V_2;
				int32_t L_19 = V_5;
				V_2 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
				int32_t L_20 = V_3;
				int32_t L_21 = V_5;
				V_3 = ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
			}

IL_0064_1:
			{
				int32_t L_22 = V_3;
				if ((((int32_t)L_22) > ((int32_t)0)))
				{
					goto IL_003a_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
				V_6 = L_23;
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_6;
		return L_24;
	}
}
// System.Void PWCommon5.Utils::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_WriteAllBytes_m347591ED6AC05C321E766CBA6AC23272C531D52C (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
		L_1 = File_Create_m7A88AE26DE05E6D790E3C5B1140EE5DC91DCC519(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0026;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0026:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bytes1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bytes1;
			NullCheck(L_6);
			NullCheck(L_4);
			VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
			goto IL_0027;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		return;
	}
}
// System.String PWCommon5.Utils::GetEditorScriptsPath(PWCommon5.AppConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_GetEditorScriptsPath_m57C33CD5EB0D90482AACD645DADB1DD544802A35 (AppConfig_t93440A6F87FDF1635C971BA3DEADB5FB112DD4F0* ___appConfig0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		AppConfig_t93440A6F87FDF1635C971BA3DEADB5FB112DD4F0* L_0 = ___appConfig0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Folder_7;
		AppConfig_t93440A6F87FDF1635C971BA3DEADB5FB112DD4F0* L_2 = ___appConfig0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___EditorScriptsFolder_9;
		String_t* L_4;
		L_4 = Utils_GetAppsSubfolder_m19DAF21BCE6F81F7198EB03F8B70450EC856E57E(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.String PWCommon5.Utils::GetAppsSubfolder(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_GetAppsSubfolder_m19DAF21BCE6F81F7198EB03F8B70450EC856E57E (String_t* ___appFolder0, String_t* ___subfolderPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m95BDDBBE0E84B9B8EF91A6F18AC02A8F24FF9220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6237221DD9F6026C890986A06CEE7F0ED0A407A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m66F756E1AC9767267AB899312298A3C602937784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1EB332F3ED08D3AD65757164540A8F4EACAF009A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC7F6C19DEA8829978B8E7FD901A19F984E38090D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ED52B3CD045EA0652DF0FACCD27C1B1C4C3B284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51311F107A22ACB2B9982782F66881085ABC044E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F00F70B3CDDCEE10CAA41C8ACC5774560FC93EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* V_0 = NULL;
	String_t* V_1 = NULL;
	List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* V_2 = NULL;
	List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_0 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_0, _stringLiteral51311F107A22ACB2B9982782F66881085ABC044E, NULL);
		V_0 = L_0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_1 = V_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.FileSystemInfo::get_Exists() */, L_1);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral5F00F70B3CDDCEE10CAA41C8ACC5774560FC93EC, NULL);
		V_1 = (String_t*)NULL;
		goto IL_011e;
	}

IL_0029:
	{
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3 = V_0;
		NullCheck(L_3);
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_4;
		L_4 = DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901(L_3, NULL);
		List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* L_5 = (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04*)il2cpp_codegen_object_new(List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m66F756E1AC9767267AB899312298A3C602937784(L_5, (RuntimeObject*)L_4, List_1__ctor_m66F756E1AC9767267AB899312298A3C602937784_RuntimeMethod_var);
		V_2 = L_5;
		goto IL_00db;
	}

IL_003a:
	{
		List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* L_6 = (List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04*)il2cpp_codegen_object_new(List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m6237221DD9F6026C890986A06CEE7F0ED0A407A7(L_6, List_1__ctor_m6237221DD9F6026C890986A06CEE7F0ED0A407A7_RuntimeMethod_var);
		V_3 = L_6;
		V_4 = 0;
		goto IL_00cb;
	}

IL_0049:
	{
		List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_9;
		L_9 = List_1_get_Item_mC7F6C19DEA8829978B8E7FD901A19F984E38090D(L_7, L_8, List_1_get_Item_mC7F6C19DEA8829978B8E7FD901A19F984E38090D_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.IO.FileSystemInfo::get_Name() */, L_9);
		String_t* L_11 = ___appFolder0;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_00b1;
		}
	}
	{
		List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* L_13 = V_2;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_15;
		L_15 = List_1_get_Item_mC7F6C19DEA8829978B8E7FD901A19F984E38090D(L_13, L_14, List_1_get_Item_mC7F6C19DEA8829978B8E7FD901A19F984E38090D_RuntimeMethod_var);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_15);
		String_t* L_17 = ___subfolderPath1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_16, L_17, NULL);
		V_5 = L_18;
		String_t* L_19 = V_5;
		bool L_20;
		L_20 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_19, NULL);
		if (!L_20)
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_21 = V_5;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_22);
		NullCheck(L_21);
		String_t* L_24;
		L_24 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_21, L_23, _stringLiteral51311F107A22ACB2B9982782F66881085ABC044E, NULL);
		V_5 = L_24;
		String_t* L_25 = V_5;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_25, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		V_1 = L_26;
		goto IL_011e;
	}

IL_00b0:
	{
	}

IL_00b1:
	{
		List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* L_27 = V_3;
		List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* L_28 = V_2;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_30;
		L_30 = List_1_get_Item_mC7F6C19DEA8829978B8E7FD901A19F984E38090D(L_28, L_29, List_1_get_Item_mC7F6C19DEA8829978B8E7FD901A19F984E38090D_RuntimeMethod_var);
		NullCheck(L_30);
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_31;
		L_31 = DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901(L_30, NULL);
		NullCheck(L_27);
		List_1_AddRange_m95BDDBBE0E84B9B8EF91A6F18AC02A8F24FF9220(L_27, (RuntimeObject*)L_31, List_1_AddRange_m95BDDBBE0E84B9B8EF91A6F18AC02A8F24FF9220_RuntimeMethod_var);
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00cb:
	{
		int32_t L_33 = V_4;
		List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m1EB332F3ED08D3AD65757164540A8F4EACAF009A_inline(L_34, List_1_get_Count_m1EB332F3ED08D3AD65757164540A8F4EACAF009A_RuntimeMethod_var);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_0049;
		}
	}
	{
		List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* L_36 = V_3;
		V_2 = L_36;
	}

IL_00db:
	{
		List_1_t91FB830A05EB9721630C89A16C3548CA7F931A04* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m1EB332F3ED08D3AD65757164540A8F4EACAF009A_inline(L_37, List_1_get_Count_m1EB332F3ED08D3AD65757164540A8F4EACAF009A_RuntimeMethod_var);
		if ((((int32_t)L_38) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral2ED52B3CD045EA0652DF0FACCD27C1B1C4C3B284);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2ED52B3CD045EA0652DF0FACCD27C1B1C4C3B284);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		String_t* L_42 = ___appFolder0;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_42);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_41;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
		String_t* L_45 = ___subfolderPath1;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_44;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_47;
		L_47 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_46, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_47, NULL);
		V_1 = (String_t*)NULL;
		goto IL_011e;
	}

IL_011e:
	{
		String_t* L_48 = V_1;
		return L_48;
	}
}
// System.Boolean PWCommon5.Utils::Math_ApproximatelyEqual(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_Math_ApproximatelyEqual_m5F6A93DFC0F5B2666B4C391C672E88290D7B8D93 (float ___a0, float ___b1, float ___threshold2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		float L_2 = ___a0;
		float L_3 = ___b1;
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_2, L_3)));
		float L_5 = ___threshold2;
		if ((!(((float)L_4) < ((float)L_5))))
		{
			goto IL_001e;
		}
	}

IL_0016:
	{
		V_0 = (bool)1;
		goto IL_0026;
	}

IL_001e:
	{
		V_0 = (bool)0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean PWCommon5.Utils::Math_ApproximatelyEqual(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_Math_ApproximatelyEqual_m2B0192DE95604F294E06E9708DD711D4B8EF9533 (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		bool L_2;
		L_2 = Utils_Math_ApproximatelyEqual_m5F6A93DFC0F5B2666B4C391C672E88290D7B8D93(L_0, L_1, (1.40129846E-45f), NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean PWCommon5.Utils::Math_IsPowerOf2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_Math_IsPowerOf2_m1264B58E3DBBFB2DB3DC4B3DD891B5FAAC26F317 (int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((int32_t)(L_0&((int32_t)il2cpp_codegen_subtract(L_1, 1))))) == ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Single PWCommon5.Utils::Math_Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_Math_Clamp_m5E2F39879B6933F66512D9E980A657594C8DF284 (float ___min0, float ___max1, float ___value2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___value2;
		float L_1 = ___min0;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		float L_2 = ___min0;
		V_0 = L_2;
		goto IL_0026;
	}

IL_0010:
	{
		float L_3 = ___value2;
		float L_4 = ___max1;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_001f;
		}
	}
	{
		float L_5 = ___max1;
		V_0 = L_5;
		goto IL_0026;
	}

IL_001f:
	{
		float L_6 = ___value2;
		V_0 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		float L_7 = V_0;
		return L_7;
	}
}
// System.Single PWCommon5.Utils::Math_Modulo(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_Math_Modulo_mACF4BF4790159FC3536B0D993C415F6436E6B592 (float ___value0, float ___mod1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___mod1;
		float L_2 = ___value0;
		float L_3 = ___mod1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = floor(((double)((float)(L_2/L_3))));
		V_0 = ((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_1, ((float)L_4)))));
		goto IL_0015;
	}

IL_0015:
	{
		float L_5 = V_0;
		return L_5;
	}
}
// System.Int32 PWCommon5.Utils::Math_Modulo(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Math_Modulo_m07C1F25DB7B8520507D2A506C7C4A2E2FDCAE35B (int32_t ___value0, int32_t ___mod1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___mod1;
		int32_t L_2 = ___value0;
		int32_t L_3 = ___mod1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = floor(((double)((float)(((float)L_2)/((float)L_3)))));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)L_0), ((float)il2cpp_codegen_multiply(((float)L_1), ((float)L_4))))));
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Single PWCommon5.Utils::Math_InterpolateLinear(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_Math_InterpolateLinear_m105174DF2D7D13900EA6C3DAE8B848ABDCA120D0 (float ___value10, float ___value21, float ___fraction2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___value10;
		float L_1 = ___fraction2;
		float L_2 = ___value21;
		float L_3 = ___fraction2;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, ((float)il2cpp_codegen_subtract((1.0f), L_1)))), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_0014;
	}

IL_0014:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Single PWCommon5.Utils::Math_InterpolateSmooth(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_Math_InterpolateSmooth_m65181DCDAF7E2DA926E115B8CC2B1031E41B6B88 (float ___value10, float ___value21, float ___fraction2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___fraction2;
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_001e;
		}
	}
	{
		float L_1 = ___fraction2;
		float L_2 = ___fraction2;
		___fraction2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_1)), L_2));
		goto IL_003d;
	}

IL_001e:
	{
		float L_3 = ___fraction2;
		float L_4 = ___fraction2;
		___fraction2 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), ((float)il2cpp_codegen_subtract(L_3, (1.0f))))), ((float)il2cpp_codegen_subtract(L_4, (1.0f)))))));
	}

IL_003d:
	{
		float L_5 = ___value10;
		float L_6 = ___fraction2;
		float L_7 = ___value21;
		float L_8 = ___fraction2;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_5, ((float)il2cpp_codegen_subtract((1.0f), L_6)))), ((float)il2cpp_codegen_multiply(L_7, L_8))));
		goto IL_0050;
	}

IL_0050:
	{
		float L_9 = V_0;
		return L_9;
	}
}
// System.Single PWCommon5.Utils::Math_Distance(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_Math_Distance_m593C4F0EECAF4C69DE16D1C5A33960CCF8AB6F56 (float ___x10, float ___y11, float ___x22, float ___y23, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___x10;
		float L_1 = ___x22;
		float L_2 = ___x10;
		float L_3 = ___x22;
		float L_4 = ___y11;
		float L_5 = ___y23;
		float L_6 = ___y11;
		float L_7 = ___y23;
		float L_8;
		L_8 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_0, L_1)), ((float)il2cpp_codegen_subtract(L_2, L_3)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_4, L_5)), ((float)il2cpp_codegen_subtract(L_6, L_7)))))));
		V_0 = L_8;
		goto IL_001b;
	}

IL_001b:
	{
		float L_9 = V_0;
		return L_9;
	}
}
// System.Single PWCommon5.Utils::Math_InterpolateSmooth2(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_Math_InterpolateSmooth2_m20328AFABD9F19F40D747A0CA9899DC9E29E2C12 (float ___v10, float ___v21, float ___fraction2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = ___fraction2;
		float L_1 = ___fraction2;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		float L_2 = V_0;
		float L_3 = ___fraction2;
		float L_4 = V_0;
		___fraction2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((3.0f), L_2)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_3)), L_4))));
		float L_5 = ___v10;
		float L_6 = ___fraction2;
		float L_7 = ___v21;
		float L_8 = ___fraction2;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_5, ((float)il2cpp_codegen_subtract((1.0f), L_6)))), ((float)il2cpp_codegen_multiply(L_7, L_8))));
		goto IL_002b;
	}

IL_002b:
	{
		float L_9 = V_1;
		return L_9;
	}
}
// System.Single PWCommon5.Utils::Math_InterpolateCubic(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_Math_InterpolateCubic_mD7BF5B32A0D082F999531FB9CD057FA5ABFB03D7 (float ___v00, float ___v11, float ___v22, float ___v33, float ___fraction4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		float L_0 = ___v33;
		float L_1 = ___v22;
		float L_2 = ___v00;
		float L_3 = ___v11;
		V_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_0, L_1)), ((float)il2cpp_codegen_subtract(L_2, L_3))));
		float L_4 = ___v00;
		float L_5 = ___v11;
		float L_6 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_4, L_5)), L_6));
		float L_7 = ___v22;
		float L_8 = ___v00;
		V_2 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		float L_9 = ___fraction4;
		float L_10 = ___fraction4;
		V_3 = ((float)il2cpp_codegen_multiply(L_9, L_10));
		float L_11 = V_0;
		float L_12 = ___fraction4;
		float L_13 = V_3;
		float L_14 = V_1;
		float L_15 = V_3;
		float L_16 = V_2;
		float L_17 = ___fraction4;
		float L_18 = ___v11;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, L_12)), L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17)))), L_18));
		goto IL_0031;
	}

IL_0031:
	{
		float L_19 = V_4;
		return L_19;
	}
}
// UnityEngine.Vector3 PWCommon5.Utils::RotatePointAroundPivot(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_RotatePointAroundPivot_m641E3C03AC1E5BF3BDF0687F01B584AD2EE4C734 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pivot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angle2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___point0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pivot1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___angle2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_4, L_5, NULL);
		V_0 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___pivot1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_8, NULL);
		___point0 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___point0;
		V_1 = L_10;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		return L_11;
	}
}
// UnityEngine.Vector3 PWCommon5.Utils::GetNearestVertice(UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_GetNearestVertice_m7FE46445962E7FB51788A8641DDBBE9E72EEC618 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mC29DC007A56E819962202CC5829E097BA9E61495_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* V_5 = NULL;
	int32_t V_6 = 0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_7 = NULL;
	int32_t V_8 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_9 = NULL;
	int32_t V_10 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		V_0 = ((std::numeric_limits<float>::max)());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject1;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_1 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_1;
		V_2 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___targetObject1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		V_3 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___targetObject1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_8, NULL);
		V_4 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___targetObject1;
		NullCheck(L_10);
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_11;
		L_11 = GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mC29DC007A56E819962202CC5829E097BA9E61495(L_10, GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mC29DC007A56E819962202CC5829E097BA9E61495_RuntimeMethod_var);
		V_5 = L_11;
		V_6 = 0;
		goto IL_00d0;
	}

IL_003e:
	{
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_12 = V_5;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16;
		L_16 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_15, NULL);
		V_7 = L_16;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_17 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00c9;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_19 = V_7;
		NullCheck(L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20;
		L_20 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_19, NULL);
		NullCheck(L_20);
		V_8 = ((int32_t)(((RuntimeArray*)L_20)->max_length));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21 = V_7;
		NullCheck(L_21);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22;
		L_22 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_21, NULL);
		V_9 = L_22;
		V_10 = 0;
		goto IL_00bf;
	}

IL_0075:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_24, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = V_9;
		int32_t L_27 = V_10;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_25, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_31, NULL);
		V_11 = L_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___sourcePosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_11;
		float L_35;
		L_35 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_33, L_34, NULL);
		V_12 = L_35;
		float L_36 = V_12;
		float L_37 = V_0;
		if ((!(((float)L_36) < ((float)L_37))))
		{
			goto IL_00b8;
		}
	}
	{
		float L_38 = V_12;
		V_0 = L_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_11;
		V_1 = L_39;
	}

IL_00b8:
	{
		int32_t L_40 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00bf:
	{
		int32_t L_41 = V_10;
		int32_t L_42 = V_8;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0075;
		}
	}
	{
	}

IL_00c9:
	{
		int32_t L_43 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00d0:
	{
		int32_t L_44 = V_6;
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_45 = V_5;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_1;
		V_13 = L_46;
		goto IL_00e3;
	}

IL_00e3:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_13;
		return L_47;
	}
}
// System.Int32 PWCommon5.Utils::GetFrapoch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetFrapoch_mD88A6D0DB76B185AF5A7B5ABC494634BF1DC948F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		memset((&L_1), 0, sizeof(L_1));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_1), ((int32_t)2018), 1, 1, /*hidden argument*/NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Int32 PWCommon5.Utils::TimeToFrapoch(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_TimeToFrapoch_m933DC47065E1D329B9A964995B4CA537922E9A34 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___time0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		memset((&L_1), 0, sizeof(L_1));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_1), ((int32_t)2018), 1, 1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.DateTime PWCommon5.Utils::FrapochToLocalDate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Utils_FrapochToLocalDate_m5FA6F0F3302B35D51001567147A871B01E03911A (int32_t ___seconds0, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___seconds0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = Utils_FrapochToLocalDate_m53510B41C82F8E2E471A2C03507A46CD6DD13763(((double)L_0), NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = V_0;
		return L_2;
	}
}
// System.DateTime PWCommon5.Utils::FrapochToLocalDate(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Utils_FrapochToLocalDate_m53510B41C82F8E2E471A2C03507A46CD6DD13763 (double ___seconds0, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&V_0), ((int32_t)2018), 1, 1, 0, 0, 0, 1, NULL);
		double L_0 = ___seconds0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_0), L_0, NULL);
		V_1 = L_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_1), NULL);
		V_2 = L_2;
		goto IL_0029;
	}

IL_0029:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = V_2;
		return L_3;
	}
}
// System.Boolean PWCommon5.Utils::IsInLayerMask(UnityEngine.GameObject,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsInLayerMask_mD4507C81552C4BC089CA6BD8F601DF9A067A8298 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974((&___mask1), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___obj0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		V_0 = (bool)((((int32_t)((int32_t)(L_0&((int32_t)(1<<((int32_t)(L_2&((int32_t)31)))))))) > ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean PWCommon5.Utils::IsSameTexture(UnityEngine.Texture2D,UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsSameTexture_m71ECF389FFA541B8731A9D1E30099AC6597F281F (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex10, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex21, bool ___checkID2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___tex10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___tex21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}

IL_0019:
	{
		V_0 = (bool)0;
		goto IL_009f;
	}

IL_0021:
	{
		bool L_4 = ___checkID2;
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___tex10;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___tex21;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_7, NULL);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_009f;
	}

IL_0041:
	{
		V_0 = (bool)1;
		goto IL_009f;
	}

IL_0048:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = ___tex10;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___tex21;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		bool L_13;
		L_13 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_009f;
	}

IL_0066:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = ___tex10;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = ___tex21;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		if ((((int32_t)L_15) == ((int32_t)L_17)))
		{
			goto IL_007f;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_009f;
	}

IL_007f:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___tex10;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = ___tex21;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
		if ((((int32_t)L_19) == ((int32_t)L_21)))
		{
			goto IL_0098;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_009f;
	}

IL_0098:
	{
		V_0 = (bool)1;
		goto IL_009f;
	}

IL_009f:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
// PWCommon5.SRP PWCommon5.Utils::GetActivePipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetActivePipeline_m602C8880B9DFC9F3E3BEB80970FA84087CBCB9B1 (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean PWCommon5.Utils::IsSameGameObject(UnityEngine.GameObject,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsSameGameObject_m50757E44D53E475EE8DBF661EE4E8055F3D75D2B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go10, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go21, bool ___checkID2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___go21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}

IL_0019:
	{
		V_0 = (bool)0;
		goto IL_006d;
	}

IL_0021:
	{
		bool L_4 = ___checkID2;
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___go10;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___go21;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_7, NULL);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_006d;
	}

IL_0041:
	{
		V_0 = (bool)1;
		goto IL_006d;
	}

IL_0048:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___go10;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___go21;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		bool L_13;
		L_13 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_006d;
	}

IL_0066:
	{
		V_0 = (bool)1;
		goto IL_006d;
	}

IL_006d:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Type PWCommon5.Utils::GetType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Utils_GetType_mC029FFC55E743B6F587D332F4FD6588B07065C5E (String_t* ___TypeName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_GetType_mC029FFC55E743B6F587D332F4FD6588B07065C5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Assembly_t* V_3 = NULL;
	Assembly_t* V_4 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_5 = NULL;
	int32_t V_6 = 0;
	AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* V_7 = NULL;
	AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* V_8 = NULL;
	AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* V_9 = NULL;
	int32_t V_10 = 0;
	Assembly_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___TypeName0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = il2cpp_codegen_get_type(L_0, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, Utils_GetType_mC029FFC55E743B6F587D332F4FD6588B07065C5E_RuntimeMethod_var);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Type_t* L_3 = V_0;
		V_1 = L_3;
		goto IL_013b;
	}

IL_0015:
	{
		String_t* L_4 = ___TypeName0;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_4, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		if (!L_5)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_6 = ___TypeName0;
		String_t* L_7 = ___TypeName0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_7, ((int32_t)46), NULL);
		NullCheck(L_6);
		String_t* L_9;
		L_9 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_6, 0, L_8, NULL);
		V_2 = L_9;
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_10 = V_2;
			Assembly_t* L_11;
			L_11 = Assembly_Load_mC42733BACCA273EEAA32A341CBF53722A44DCC90(L_10, NULL);
			V_3 = L_11;
			Assembly_t* L_12 = V_3;
			if (L_12)
			{
				goto IL_004b_1;
			}
		}
		{
			V_1 = (Type_t*)NULL;
			goto IL_013b;
		}

IL_004b_1:
		{
			Assembly_t* L_13 = V_3;
			String_t* L_14 = ___TypeName0;
			NullCheck(L_13);
			Type_t* L_15;
			L_15 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_13, L_14);
			V_0 = L_15;
			Type_t* L_16 = V_0;
			if (!L_16)
			{
				goto IL_0060_1;
			}
		}
		{
			Type_t* L_17 = V_0;
			V_1 = L_17;
			goto IL_013b;
		}

IL_0060_1:
		{
			goto IL_006e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0066;
		}
		throw e;
	}

CATCH_0066:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006e;
	}// end catch (depth: 1)

IL_006e:
	{
	}

IL_006f:
	{
		Assembly_t* L_18;
		L_18 = Assembly_GetCallingAssembly_mDA96275EB27A0792D97CF9E45FB7919F39A3F97E(NULL);
		V_4 = L_18;
		Assembly_t* L_19 = V_4;
		if (!L_19)
		{
			goto IL_0096;
		}
	}
	{
		Assembly_t* L_20 = V_4;
		String_t* L_21 = ___TypeName0;
		NullCheck(L_20);
		Type_t* L_22;
		L_22 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_20, L_21);
		V_0 = L_22;
		Type_t* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0095;
		}
	}
	{
		Type_t* L_24 = V_0;
		V_1 = L_24;
		goto IL_013b;
	}

IL_0095:
	{
	}

IL_0096:
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_25;
		L_25 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_25);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_26;
		L_26 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_25, NULL);
		V_5 = L_26;
		V_6 = 0;
		goto IL_00cd;
	}

IL_00ab:
	{
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_27 = V_5;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Assembly_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		String_t* L_31 = ___TypeName0;
		NullCheck(L_30);
		Type_t* L_32;
		L_32 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_30, L_31);
		V_0 = L_32;
		Type_t* L_33 = V_0;
		if (!L_33)
		{
			goto IL_00c6;
		}
	}
	{
		Type_t* L_34 = V_0;
		V_1 = L_34;
		goto IL_013b;
	}

IL_00c6:
	{
		int32_t L_35 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00cd:
	{
		int32_t L_36 = V_6;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_37 = V_5;
		NullCheck((RuntimeArray*)L_37);
		int32_t L_38;
		L_38 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_37, 0, NULL);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_00ab;
		}
	}
	{
		Assembly_t* L_39 = V_4;
		NullCheck(L_39);
		AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* L_40;
		L_40 = VirtualFuncInvoker0< AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* >::Invoke(23 /* System.Reflection.AssemblyName[] System.Reflection.Assembly::GetReferencedAssemblies() */, L_39);
		V_7 = L_40;
		AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* L_41 = V_7;
		V_9 = L_41;
		V_10 = 0;
		goto IL_0129;
	}

IL_00f2:
	{
		AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* L_42 = V_9;
		int32_t L_43 = V_10;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_8 = L_45;
		AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_46 = V_8;
		Assembly_t* L_47;
		L_47 = Assembly_Load_mF899F2F506B05A1BA06EB922499F1564658FF64D(L_46, NULL);
		V_11 = L_47;
		Assembly_t* L_48 = V_11;
		if (!L_48)
		{
			goto IL_0122;
		}
	}
	{
		Assembly_t* L_49 = V_11;
		String_t* L_50 = ___TypeName0;
		NullCheck(L_49);
		Type_t* L_51;
		L_51 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_49, L_50);
		V_0 = L_51;
		Type_t* L_52 = V_0;
		if (!L_52)
		{
			goto IL_0121;
		}
	}
	{
		Type_t* L_53 = V_0;
		V_1 = L_53;
		goto IL_013b;
	}

IL_0121:
	{
	}

IL_0122:
	{
		int32_t L_54 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0129:
	{
		int32_t L_55 = V_10;
		AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* L_56 = V_9;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_00f2;
		}
	}
	{
		V_1 = (Type_t*)NULL;
		goto IL_013b;
	}

IL_013b:
	{
		Type_t* L_57 = V_1;
		return L_57;
	}
}
// System.String PWCommon5.Utils::AddParametersToURL(System.String,PWCommon5.AppConfig,PWCommon5.URLParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_AddParametersToURL_m38305622BC45D30D2A646B35DC4EA2D3643001A7 (String_t* ___url0, AppConfig_t93440A6F87FDF1635C971BA3DEADB5FB112DD4F0* ___appConfig1, URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* ___overrideParameters2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRP_t6AC6C903D2DEEC7825DF2FC2306354BF61806FDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD355DAA26C0477EE3B6D020387EFCAD4E3D4B2F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B3_0 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B4_1 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B6_0 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B7_1 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B9_0 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B10_1 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B12_0 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* G_B13_1 = NULL;
	{
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_0 = (URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D*)il2cpp_codegen_object_new(URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		URLParameters__ctor_m1DBE779900CAF0F268DED6EB4D0B36247E470A7E(L_0, NULL);
		V_0 = L_0;
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_1 = V_0;
		AppConfig_t93440A6F87FDF1635C971BA3DEADB5FB112DD4F0* L_2 = ___appConfig1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___Name_4;
		NullCheck(L_1);
		L_1->___m_product_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___m_product_0), (void*)L_3);
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_4 = V_0;
		AppConfig_t93440A6F87FDF1635C971BA3DEADB5FB112DD4F0* L_5 = ___appConfig1;
		NullCheck(L_5);
		String_t* L_6 = L_5->___Version_15;
		NullCheck(L_4);
		L_4->___m_version_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___m_version_1), (void*)L_6);
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_7 = V_0;
		String_t* L_8;
		L_8 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_7);
		L_7->___m_unityVersion_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___m_unityVersion_2), (void*)L_8);
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_9 = V_0;
		int32_t L_10;
		L_10 = Utils_GetActivePipeline_m602C8880B9DFC9F3E3BEB80970FA84087CBCB9B1(NULL);
		V_1 = L_10;
		Il2CppFakeBox<int32_t> L_11(SRP_t6AC6C903D2DEEC7825DF2FC2306354BF61806FDE_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		NullCheck(L_9);
		L_9->___m_pipeline_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___m_pipeline_3), (void*)L_12);
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_13 = ___overrideParameters2;
		if (!L_13)
		{
			goto IL_00fb;
		}
	}
	{
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_14 = V_0;
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_15 = ___overrideParameters2;
		NullCheck(L_15);
		String_t* L_16 = L_15->___m_product_0;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B2_0 = L_14;
		if (!L_17)
		{
			G_B3_0 = L_14;
			goto IL_006b;
		}
	}
	{
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = L_18->___m_product_0;
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		goto IL_0071;
	}

IL_006b:
	{
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_20 = ___overrideParameters2;
		NullCheck(L_20);
		String_t* L_21 = L_20->___m_product_0;
		G_B4_0 = L_21;
		G_B4_1 = G_B3_0;
	}

IL_0071:
	{
		NullCheck(G_B4_1);
		G_B4_1->___m_product_0 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___m_product_0), (void*)G_B4_0);
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_22 = V_0;
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_23 = ___overrideParameters2;
		NullCheck(L_23);
		String_t* L_24 = L_23->___m_version_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B5_0 = L_22;
		if (!L_25)
		{
			G_B6_0 = L_22;
			goto IL_0097;
		}
	}
	{
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = L_26->___m_version_1;
		G_B7_0 = L_27;
		G_B7_1 = G_B5_0;
		goto IL_009d;
	}

IL_0097:
	{
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_28 = ___overrideParameters2;
		NullCheck(L_28);
		String_t* L_29 = L_28->___m_version_1;
		G_B7_0 = L_29;
		G_B7_1 = G_B6_0;
	}

IL_009d:
	{
		NullCheck(G_B7_1);
		G_B7_1->___m_version_1 = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->___m_version_1), (void*)G_B7_0);
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_30 = V_0;
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_31 = ___overrideParameters2;
		NullCheck(L_31);
		String_t* L_32 = L_31->___m_unityVersion_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B8_0 = L_30;
		if (!L_33)
		{
			G_B9_0 = L_30;
			goto IL_00c3;
		}
	}
	{
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_34 = V_0;
		NullCheck(L_34);
		String_t* L_35 = L_34->___m_unityVersion_2;
		G_B10_0 = L_35;
		G_B10_1 = G_B8_0;
		goto IL_00c9;
	}

IL_00c3:
	{
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_36 = ___overrideParameters2;
		NullCheck(L_36);
		String_t* L_37 = L_36->___m_unityVersion_2;
		G_B10_0 = L_37;
		G_B10_1 = G_B9_0;
	}

IL_00c9:
	{
		NullCheck(G_B10_1);
		G_B10_1->___m_unityVersion_2 = G_B10_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_1->___m_unityVersion_2), (void*)G_B10_0);
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_38 = V_0;
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_39 = ___overrideParameters2;
		NullCheck(L_39);
		String_t* L_40 = L_39->___m_pipeline_3;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B11_0 = L_38;
		if (!L_41)
		{
			G_B12_0 = L_38;
			goto IL_00ef;
		}
	}
	{
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_42 = V_0;
		NullCheck(L_42);
		String_t* L_43 = L_42->___m_pipeline_3;
		G_B13_0 = L_43;
		G_B13_1 = G_B11_0;
		goto IL_00f5;
	}

IL_00ef:
	{
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_44 = ___overrideParameters2;
		NullCheck(L_44);
		String_t* L_45 = L_44->___m_pipeline_3;
		G_B13_0 = L_45;
		G_B13_1 = G_B12_0;
	}

IL_00f5:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_pipeline_3 = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_pipeline_3), (void*)G_B13_0);
	}

IL_00fb:
	{
		String_t* L_46 = ___url0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = L_47;
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_49 = V_0;
		NullCheck(L_49);
		String_t* L_50 = L_49->___m_product_0;
		String_t* L_51;
		L_51 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_50, NULL);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = L_48;
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_53 = V_0;
		NullCheck(L_53);
		String_t* L_54 = L_53->___m_version_1;
		String_t* L_55;
		L_55 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_54, NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_55);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = L_52;
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_57 = V_0;
		NullCheck(L_57);
		String_t* L_58 = L_57->___m_unityVersion_2;
		String_t* L_59;
		L_59 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_58, NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_59);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = L_56;
		URLParameters_tE6B51BA42E38A1611FCF12E7692E8E2BD5A0481D* L_61 = V_0;
		NullCheck(L_61);
		String_t* L_62 = L_61->___m_pipeline_3;
		String_t* L_63;
		L_63 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_62, NULL);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_63);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_63);
		String_t* L_64;
		L_64 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralD355DAA26C0477EE3B6D020387EFCAD4E3D4B2F2, L_60, NULL);
		String_t* L_65;
		L_65 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_46, L_64, NULL);
		___url0 = L_65;
		String_t* L_66 = ___url0;
		V_2 = L_66;
		goto IL_0152;
	}

IL_0152:
	{
		String_t* L_67 = V_2;
		return L_67;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
