#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.List`1<uDesktopDuplication.Monitor>
struct List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<uDesktopDuplication.Monitor>
struct Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// uDesktopDuplication.DXGI_OUTDUPL_MOVE_RECT[]
struct DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// uDesktopDuplication.Monitor[]
struct MonitorU5BU5D_tFBB3185A49D422BFCFB665DDF58DFF6114C7CAE5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// uDesktopDuplication.RECT[]
struct RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// uDesktopDuplication.Texture[]
struct TextureU5BU5D_t8C968367DAEA92FFB3EC12B938CF18B61345A840;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// uDesktopDuplication.Manager
struct Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// uDesktopDuplication.Monitor
struct Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// uDesktopDuplication.Texture
struct Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// uDesktopDuplication.Lib/DebugLogDelegate
struct DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01;
// uDesktopDuplication.Lib/MessageHandler
struct MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983;
// uDesktopDuplication.Manager/<>c
struct U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5;
// uDesktopDuplication.Manager/<OnRender>d__40
struct U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A;
// uDesktopDuplication.Manager/ReinitializeHandler
struct ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F;
// uDesktopDuplication.Utility/<_WaitThenDo>d__3
struct U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49;

IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_tEB0738339E17FEEC0FD44A29DD4ED3F57B51995C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RECT_t472859B256302AF663FC4440907754CF2684D24B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08F8FC3EB0C483BFAA023323CF33BC189B1EA005;
IL2CPP_EXTERN_C String_t* _stringLiteral0F1AF27ABA55E842410CA98D6709FBB9065AE8EE;
IL2CPP_EXTERN_C String_t* _stringLiteral133A3BF49D1EE1817CBE84227C1ECA1DF3B4914E;
IL2CPP_EXTERN_C String_t* _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
IL2CPP_EXTERN_C String_t* _stringLiteral1A2E23BF1F414EA4C4A561F2CCD8E0D5A4D7BA57;
IL2CPP_EXTERN_C String_t* _stringLiteral1C87999B75464C456C478FB3C88C2B824F7750F3;
IL2CPP_EXTERN_C String_t* _stringLiteral228FBAD9E30D46269B38E3C272AD86F4C6D7EE75;
IL2CPP_EXTERN_C String_t* _stringLiteral28A162BCA0C7B0B7DA16EC437CDF19CA85C6FDAE;
IL2CPP_EXTERN_C String_t* _stringLiteral2BD0AE5BBCC92FEAB07A23CA55C0F0511D56D833;
IL2CPP_EXTERN_C String_t* _stringLiteral4C81663716F1FA4B6F23FEBB765070F85556424D;
IL2CPP_EXTERN_C String_t* _stringLiteral4E60DFDF53FB22709A82BBC8938398EC9632AA91;
IL2CPP_EXTERN_C String_t* _stringLiteral50FFD5B7BD0E31EFDF789C64066BDAD11C8F0823;
IL2CPP_EXTERN_C String_t* _stringLiteral5A64713F08EBDF3D78F25AAC4B2A0000B0CC8576;
IL2CPP_EXTERN_C String_t* _stringLiteral5B399F095CF9ED25677ABDF72E009C797C083D21;
IL2CPP_EXTERN_C String_t* _stringLiteral60B8562636C1BE872FB421C38269F69094987C59;
IL2CPP_EXTERN_C String_t* _stringLiteral6D4E695C34A4FD6E7BB7C5DF93735BAC456133CE;
IL2CPP_EXTERN_C String_t* _stringLiteral7296C2D60B309178E704EDC4742E710E8FDFA669;
IL2CPP_EXTERN_C String_t* _stringLiteral73F4A5B10ED887D2BF84B305D859FD98FC9EBB24;
IL2CPP_EXTERN_C String_t* _stringLiteral769098E00DF076ADAF98697A4076D29764C6DC41;
IL2CPP_EXTERN_C String_t* _stringLiteral80A9107D3B926D84A310D6B78FCF7ADA35D4F087;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1CD49354B6EA28C6B16712E7A6223CDA6F51A;
IL2CPP_EXTERN_C String_t* _stringLiteral86525F95BC4F6CA5FCAE84505C7ECDC072497CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral8CF21B86711D9A21DD61D3998DD37E71BF455F88;
IL2CPP_EXTERN_C String_t* _stringLiteralA97312883FF7370901028C4A34966596FF14B990;
IL2CPP_EXTERN_C String_t* _stringLiteralB078101513E5D1CC8EF34046DD36C59BE1DBC1EE;
IL2CPP_EXTERN_C String_t* _stringLiteralB4C461FA1FB0166F7EDA2D428009C98171F5F9CA;
IL2CPP_EXTERN_C String_t* _stringLiteralCA2069B354B5EA8A124208A9385711C7801959A9;
IL2CPP_EXTERN_C String_t* _stringLiteralCF104F1452E3AD98B1E9F20ED12A5583B4315843;
IL2CPP_EXTERN_C String_t* _stringLiteralD028C6BDD87663679729E9598A945B2F3F26F5C5;
IL2CPP_EXTERN_C String_t* _stringLiteralDB61511AB4BF06C3CB2A0A4190FCBB65ED71F0F3;
IL2CPP_EXTERN_C String_t* _stringLiteralDE6CB10D04A89C33B80A8BF4E9F2C8E601BFD0F2;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisManager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_m6AA2D3B7B41A4E85A72E241E22B4D488121233D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDCE54D21F144E130F862B61194F153F0D759B8A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA752A58029D5415F23014648E1A7CB6BF96A914F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m9661396195184963995C042F4340B3D864CD9B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m486FF2EDF3B013AB086B91814AE61783B84B8A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Manager_OnDebugErr_m00D09DCF9A7D403AD907193C55F3E64CB3DCE30E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Manager_OnDebugLog_m8CB90197A77EEBD8EBDC89F5B27EA1AFD6D56546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisManager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_m9C6749531DE62E9470D676D1C8A456BB51CBE1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisTexture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_mB9C110463F69E640AD4D328FE230339CB06F61E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mBEC87DD291ED9662B46356519E0723C0ABB12877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture_Reinitialize_mD633EE363DF87EF2A4B6768189AFE9EBDEF84010_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnRenderU3Ed__40_System_Collections_IEnumerator_Reset_mF570DA090C0C904073641DED04EEFA7BFD0E1456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_primaryU3Eb__12_0_mFECB989356719E8A2152D3D0FAD7E6136699223A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_WaitThenDoU3Ed__3_System_Collections_IEnumerator_Reset_m7B13FE5DAC7F0FEB26B90F894E85C530C8E4C811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RECT_t472859B256302AF663FC4440907754CF2684D24B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95;
struct TextureU5BU5D_t8C968367DAEA92FFB3EC12B938CF18B61345A840;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE6BD885964E24726C1EA080E94D79F199369FA7F 
{
};

// System.Collections.Generic.List`1<uDesktopDuplication.Monitor>
struct List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MonitorU5BU5D_tFBB3185A49D422BFCFB665DDF58DFF6114C7CAE5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MonitorU5BU5D_tFBB3185A49D422BFCFB665DDF58DFF6114C7CAE5* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// uDesktopDuplication.Lib
struct Lib_t40ED44218263E9DEEDF18088EA61AAB8B1EC3C12  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// uDesktopDuplication.Utility
struct Utility_t067B8F65A83E76C81D5ADFF51485AD9B03E49963  : public RuntimeObject
{
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// uDesktopDuplication.Manager/<>c
struct U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5  : public RuntimeObject
{
};

struct U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_StaticFields
{
	// uDesktopDuplication.Manager/<>c uDesktopDuplication.Manager/<>c::<>9
	U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5* ___U3CU3E9_0;
	// System.Predicate`1<uDesktopDuplication.Monitor> uDesktopDuplication.Manager/<>c::<>9__12_0
	Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05* ___U3CU3E9__12_0_1;
};

// uDesktopDuplication.Manager/<OnRender>d__40
struct U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A  : public RuntimeObject
{
	// System.Int32 uDesktopDuplication.Manager/<OnRender>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object uDesktopDuplication.Manager/<OnRender>d__40::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// uDesktopDuplication.Utility/<_WaitThenDo>d__3
struct U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49  : public RuntimeObject
{
	// System.Int32 uDesktopDuplication.Utility/<_WaitThenDo>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object uDesktopDuplication.Utility/<_WaitThenDo>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single uDesktopDuplication.Utility/<_WaitThenDo>d__3::sec
	float ___sec_2;
	// System.Action uDesktopDuplication.Utility/<_WaitThenDo>d__3::func
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___func_3;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// uDesktopDuplication.MousePoint
struct MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077 
{
	// System.Int32 uDesktopDuplication.MousePoint::x
	int32_t ___x_0;
	// System.Int32 uDesktopDuplication.MousePoint::y
	int32_t ___y_1;
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

// uDesktopDuplication.RECT
struct RECT_t472859B256302AF663FC4440907754CF2684D24B 
{
	// System.Int32 uDesktopDuplication.RECT::left
	int32_t ___left_0;
	// System.Int32 uDesktopDuplication.RECT::top
	int32_t ___top_1;
	// System.Int32 uDesktopDuplication.RECT::right
	int32_t ___right_2;
	// System.Int32 uDesktopDuplication.RECT::bottom
	int32_t ___bottom_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// uDesktopDuplication.DXGI_OUTDUPL_MOVE_RECT
struct DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E 
{
	// uDesktopDuplication.RECT uDesktopDuplication.DXGI_OUTDUPL_MOVE_RECT::source
	RECT_t472859B256302AF663FC4440907754CF2684D24B ___source_0;
	// uDesktopDuplication.RECT uDesktopDuplication.DXGI_OUTDUPL_MOVE_RECT::destination
	RECT_t472859B256302AF663FC4440907754CF2684D24B ___destination_1;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// uDesktopDuplication.Monitor
struct Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143  : public RuntimeObject
{
	// System.Int32 uDesktopDuplication.Monitor::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// System.Boolean uDesktopDuplication.Monitor::useGetPixels_
	bool ___useGetPixels__1;
	// System.Boolean uDesktopDuplication.Monitor::<shouldBeUpdated>k__BackingField
	bool ___U3CshouldBeUpdatedU3Ek__BackingField_2;
	// UnityEngine.Texture2D uDesktopDuplication.Monitor::texture_
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture__5;
	// System.IntPtr uDesktopDuplication.Monitor::texturePtr_
	intptr_t ___texturePtr__6;
};

struct Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_StaticFields
{
	// UnityEngine.Texture2D uDesktopDuplication.Monitor::errorTexture_
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___errorTexture__3;
	// System.String uDesktopDuplication.Monitor::errorTexturePath
	String_t* ___errorTexturePath_4;
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

// uDesktopDuplication.Texture/RayCastResult
struct RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 
{
	// System.Boolean uDesktopDuplication.Texture/RayCastResult::hit
	bool ___hit_0;
	// uDesktopDuplication.Texture uDesktopDuplication.Texture/RayCastResult::texture
	Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* ___texture_1;
	// UnityEngine.Vector3 uDesktopDuplication.Texture/RayCastResult::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// UnityEngine.Vector3 uDesktopDuplication.Texture/RayCastResult::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_3;
	// UnityEngine.Vector2 uDesktopDuplication.Texture/RayCastResult::coords
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___coords_4;
	// UnityEngine.Vector2 uDesktopDuplication.Texture/RayCastResult::desktopCoord
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___desktopCoord_5;
};
// Native definition for P/Invoke marshalling of uDesktopDuplication.Texture/RayCastResult
struct RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshaled_pinvoke
{
	int32_t ___hit_0;
	Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* ___texture_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___coords_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___desktopCoord_5;
};
// Native definition for COM marshalling of uDesktopDuplication.Texture/RayCastResult
struct RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshaled_com
{
	int32_t ___hit_0;
	Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* ___texture_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___coords_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___desktopCoord_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Predicate`1<uDesktopDuplication.Monitor>
struct Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// uDesktopDuplication.Lib/DebugLogDelegate
struct DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01  : public MulticastDelegate_t
{
};

// uDesktopDuplication.Lib/MessageHandler
struct MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983  : public MulticastDelegate_t
{
};

// uDesktopDuplication.Manager/ReinitializeHandler
struct ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// uDesktopDuplication.Manager
struct Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<uDesktopDuplication.Monitor> uDesktopDuplication.Manager::monitors_
	List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* ___monitors__5;
	// uDesktopDuplication.DebugMode uDesktopDuplication.Manager::debugMode
	int32_t ___debugMode_6;
	// System.Single uDesktopDuplication.Manager::retryReinitializationDuration
	float ___retryReinitializationDuration_7;
	// UnityEngine.Coroutine uDesktopDuplication.Manager::renderCoroutine_
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___renderCoroutine__8;
	// System.Boolean uDesktopDuplication.Manager::shouldReinitialize_
	bool ___shouldReinitialize__9;
	// System.Single uDesktopDuplication.Manager::reinitializationTimer_
	float ___reinitializationTimer__10;
	// System.Boolean uDesktopDuplication.Manager::isFirstFrame_
	bool ___isFirstFrame__11;
};

struct Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields
{
	// uDesktopDuplication.Manager uDesktopDuplication.Manager::instance_
	Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* ___instance__4;
	// uDesktopDuplication.Lib/DebugLogDelegate uDesktopDuplication.Manager::onDebugLog
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* ___onDebugLog_12;
	// uDesktopDuplication.Lib/DebugLogDelegate uDesktopDuplication.Manager::onDebugErr
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* ___onDebugErr_13;
	// uDesktopDuplication.Manager/ReinitializeHandler uDesktopDuplication.Manager::onReinitialized
	ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* ___onReinitialized_14;
};

// uDesktopDuplication.Texture
struct Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// uDesktopDuplication.Monitor uDesktopDuplication.Texture::monitor_
	Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* ___monitor__4;
	// System.Int32 uDesktopDuplication.Texture::lastMonitorId_
	int32_t ___lastMonitorId__5;
	// System.Boolean uDesktopDuplication.Texture::invertX_
	bool ___invertX__6;
	// System.Boolean uDesktopDuplication.Texture::invertY_
	bool ___invertY__7;
	// System.Boolean uDesktopDuplication.Texture::useClip_
	bool ___useClip__8;
	// UnityEngine.Vector2 uDesktopDuplication.Texture::clipPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___clipPos_9;
	// UnityEngine.Vector2 uDesktopDuplication.Texture::clipScale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___clipScale_10;
	// UnityEngine.Material uDesktopDuplication.Texture::material_
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material__11;
	// System.Int32 uDesktopDuplication.Texture::clipPositionScaleKey_
	int32_t ___clipPositionScaleKey__12;
};

struct Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_StaticFields
{
	// uDesktopDuplication.Texture/RayCastResult uDesktopDuplication.Texture::raycastFailedResult
	RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 ___raycastFailedResult_13;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// uDesktopDuplication.DXGI_OUTDUPL_MOVE_RECT[]
struct DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67  : public RuntimeArray
{
	ALIGN_FIELD (8) DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E m_Items[1];

	inline DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E value)
	{
		m_Items[index] = value;
	}
};
// uDesktopDuplication.RECT[]
struct RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95  : public RuntimeArray
{
	ALIGN_FIELD (8) RECT_t472859B256302AF663FC4440907754CF2684D24B m_Items[1];

	inline RECT_t472859B256302AF663FC4440907754CF2684D24B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RECT_t472859B256302AF663FC4440907754CF2684D24B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RECT_t472859B256302AF663FC4440907754CF2684D24B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RECT_t472859B256302AF663FC4440907754CF2684D24B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RECT_t472859B256302AF663FC4440907754CF2684D24B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RECT_t472859B256302AF663FC4440907754CF2684D24B value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// uDesktopDuplication.Texture[]
struct TextureU5BU5D_t8C968367DAEA92FFB3EC12B938CF18B61345A840  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* m_Items[1];

	inline Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;

// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Lib::GetName(System.Int32,System.Text.StringBuilder,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_GetName_mA2E4B1E0A9647368A9273D49F77F6CB365D94357 (int32_t ___id0, StringBuilder_t* ___buf1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetMoveRectCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetMoveRectCount_m12FA5957227C92BE7C8900BF6C2763D76F722BB2 (int32_t ___id0, const RuntimeMethod* method) ;
// System.IntPtr uDesktopDuplication.Lib::GetMoveRects_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Lib_GetMoveRects_Internal_m26AE307ECF6731BA71CE7D297269859B91B36082 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC (intptr_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetDirtyRectCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetDirtyRectCount_mC1C58B2261ED9DE68B6FD2210446395BEEBC6F75 (int32_t ___id0, const RuntimeMethod* method) ;
// System.IntPtr uDesktopDuplication.Lib::GetDirtyRects_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Lib_GetDirtyRects_Internal_mCA0DC0E591BE90AF3AF6FDB8EE9A172CF6B14077 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Lib::GetPixels(System.Int32,UnityEngine.Color32[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_GetPixels_m13569F4F36E09BC3075508098AAC2670DCF2FBD7 (int32_t ___id0, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors1, int32_t ___x2, int32_t ___y3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Lib::GetPixels_Internal(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_GetPixels_Internal_m66615CC38250E8DC6D75E6D17806677CBB7BBB45 (int32_t ___id0, intptr_t ___ptr1, int32_t ___x2, int32_t ___y3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32[] uDesktopDuplication.Lib::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Lib_GetPixels_m87C0BE1CC14CEF226E1A6E366CC23ACC1B9B2104 (int32_t ___id0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager::OnDebugLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_OnDebugLog_m8CB90197A77EEBD8EBDC89F5B27EA1AFD6D56546 (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager::OnDebugErr(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_OnDebugErr_m00D09DCF9A7D403AD907193C55F3E64CB3DCE30E (String_t* ___msg0, const RuntimeMethod* method) ;
// uDesktopDuplication.Manager uDesktopDuplication.Manager::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* Manager_CreateInstance_m7F5303B83AB188085AB1C82EA55B9FA56B006130 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<uDesktopDuplication.Manager>()
inline Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* Object_FindObjectOfType_TisManager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_m9C6749531DE62E9470D676D1C8A456BB51CBE1F7 (const RuntimeMethod* method)
{
	return ((  Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<uDesktopDuplication.Manager>()
inline Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* GameObject_AddComponent_TisManager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_m6AA2D3B7B41A4E85A72E241E22B4D488121233D7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// uDesktopDuplication.Manager uDesktopDuplication.Manager::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* Manager_get_instance_m941C725100008EDC479C8AFD9DA3CC9476CA9531 (const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetMonitorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetMonitorCount_mD32529380C2A4E9C710D3AE4597B88D861A93781 (const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetCursorMonitorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorMonitorId_mF1F5AF6EF8E3BD51B07B7C25420B97384443426F (const RuntimeMethod* method) ;
// System.Void System.Predicate`1<uDesktopDuplication.Monitor>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mBDAA95706495FBF0B0C805431B52405BAB46E7A1 (Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<uDesktopDuplication.Monitor>::Find(System.Predicate`1<T>)
inline Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* List_1_Find_m9661396195184963995C042F4340B3D864CD9B84 (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* __this, Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05* ___match0, const RuntimeMethod* method)
{
	return ((  Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* (*) (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923*, Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<uDesktopDuplication.Monitor> uDesktopDuplication.Manager::get_monitors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<uDesktopDuplication.Monitor>::get_Count()
inline int32_t List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_inline (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// uDesktopDuplication.Monitor uDesktopDuplication.Manager::get_primary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* Manager_get_primary_m5C0DEE8296B01F477202380B0564955CD08B3D69 (const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Manager::get_monitorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Manager_get_monitorCount_mEF081BCD8E0A7BD3E8CF99BAC1F51EC5B6C90C02 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<uDesktopDuplication.Monitor>::get_Item(System.Int32)
inline Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* (*) (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Lib::SetDebugMode(uDesktopDuplication.DebugMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_SetDebugMode_m8FD319252460B143C76FA126B6D894F01F7383D7 (int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Lib::SetLogFunc(uDesktopDuplication.Lib/DebugLogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_SetLogFunc_m9A952DCBF998E29E2CB7011DEA9E113EB025BE46 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* ___func0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Lib::SetErrorFunc(uDesktopDuplication.Lib/DebugLogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_SetErrorFunc_m61C4E52D0368BD61860BA777E781FE9834FBAE95 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* ___func0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Lib::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_Initialize_m4996EA4E9DC4DE32B057756A3B9DE4E3E2E75931 (const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager::CreateMonitors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_CreateMonitors_m8BCE7765DD85CA8C5845FF76DA7F70C4B494290B (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88 (String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Lib::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_Finalize_m66B0EB958415F61906CC6D0DE022A5ED96E01393 (const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager::DestroyMonitors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_DestroyMonitors_mE8986F6CE42F7D0D6BC00CD9BD9F46108309CCB4 (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator uDesktopDuplication.Manager::OnRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Manager_OnRender_m346024EB825119992537C0607606DE8F496F123A (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager::Reinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Reinitialize_mDBAFA70B1D558F34641927B8209EFAA766E68F32 (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Lib::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_Update_m8D4EF2F43C68347D6E1347E3F711BAD9B5EC0510 (const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager::ReinitializeIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_ReinitializeIfNeeded_m6108A52F17198D4C3DDE3D705AB77D4A221777A1 (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager::UpdateMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_UpdateMessage_mED962219B7D7506B9AD7C412F852FB77CF968D9C (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Lib::Reinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_Reinitialize_mBE65F2CAAF9E4CD5263FD6D287DF26B921423E88 (const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager/ReinitializeHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_inline (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, const RuntimeMethod* method) ;
// uDesktopDuplication.DuplicatorState uDesktopDuplication.Monitor::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_state_m580533C21128EBC211861FE9DFDFD0F7FD560720 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Lib::HasMonitorCountChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_HasMonitorCountChanged_m209227E4A09907D213BAC412021151B07ED58E9A (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// uDesktopDuplication.Message uDesktopDuplication.Lib::PopMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_PopMessage_m5713C5D0BCDEB0145911993F8F0106B2C05CA3E7 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager::ReinitializeMonitors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_ReinitializeMonitors_m6C393F82A149AB063DA16E1EE6D26D01FDC8875F (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager::RecreateTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_RecreateTextures_m4C99B72CA05E55C7B3FE547F5B805362DB746B6F (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager/<OnRender>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnRenderU3Ed__40__ctor_mF8978FF6E7558B0FB6142DCA9907210375437191 (U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Monitor::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor__ctor_m0F7D94A6CAB688321C3C28B331B245BB110A2B07 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<uDesktopDuplication.Monitor>::Add(T)
inline void List_1_Add_mDCE54D21F144E130F862B61194F153F0D759B8A0_inline (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* __this, Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923*, Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void uDesktopDuplication.Monitor::DestroyTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_DestroyTexture_mE964E3AD712E758FD56B9C171C5BB78B8C7D467B (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<uDesktopDuplication.Monitor>::Clear()
inline void List_1_Clear_mA752A58029D5415F23014648E1A7CB6BF96A914F_inline (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void uDesktopDuplication.Monitor::Reinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Reinitialize_m9A1A9319F3B0B99F74D70C567E9115AA2354165D (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Monitor::CreateTextureIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_CreateTextureIfNeeded_m9E06BBB4FDDA44E530CFF55F2BE6B545A43B2CA7 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<uDesktopDuplication.Monitor>::.ctor()
inline void List_1__ctor_m486FF2EDF3B013AB086B91814AE61783B84B8A99 (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Lib/DebugLogDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogDelegate__ctor_mC4959F3407C7064C07D4ED51D891F2FBDD365C25 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m437A3E3E25963105988FC90891033FF364E2C1CB (U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Monitor::get_isPrimary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_isPrimary_mFD1E80C3760FECDCD9A16FBFCD5BD3F268289D9B (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Monitor::get_shouldBeUpdated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Monitor_get_shouldBeUpdated_m37F17CF43861FEBE37533467E6F670D62E07036B_inline (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Monitor::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Render_m7EE3FD91D3B8EE049D37672B199A8133F6C74FD2 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Monitor::set_shouldBeUpdated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Monitor_set_shouldBeUpdated_m070227673B000342C0199DCA09F5105609680D07_inline (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Monitor::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Monitor_set_id_m8418C87A0189998FD495174DDC9AEB3790CB89C4_inline (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String uDesktopDuplication.Monitor::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monitor_get_name_mEAF1C8443F1EB1CCDD6EFDECD9A4EBDCAB4ADD61 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Monitor::get_dpiX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_dpiX_m4B06629FD072C6CE4DEFB3A17AD983C77B24DBDC (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Monitor::get_dpiY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_dpiY_m2BCA42DCD2D5C75AE88894A8B9030E519B3DDDD8 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Monitor::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// uDesktopDuplication.DuplicatorState uDesktopDuplication.Lib::GetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetState_m60E258019ADDF8B539CC393CA28D227392E8E084 (int32_t ___id0, const RuntimeMethod* method) ;
// System.String uDesktopDuplication.Lib::GetName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lib_GetName_m3A8D12FCC4255C1897F4C74D08DCEB2C3A0DB3EC (int32_t ___id0, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Lib::IsPrimary(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_IsPrimary_m92E0351E10A5800E6BBCA4B15B162A81F6723325 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetLeft(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetLeft_m24BB612591FCB0356CC1318144112684D59CD43D (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetRight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetRight_m7AA36790C65050901378BF9D95DE11BC451ACF33 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetTop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetTop_m7B834A93CEE19AB728F250DD4FF1DA2D786126DA (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetBottom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetBottom_m78F2362B35AC37AEF2D810EAA095C96475C466F6 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetWidth_m6B6BAEE58E017EF8FC753BD770E6117DAF49C64B (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetHeight_m6667CD4121B410DAF776BFCA7CE69A4DA097E20B (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetDpiX(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetDpiX_m2B100E7CF59AEBC5736FB25983F5A2E289665D59 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetDpiY(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetDpiY_m588C6D75DBD35CF85C9656D19D953949766D3511 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Lib::IsHDR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_IsHDR_mD760476134B61444B6F8D3F9B4BC095F4A084A29 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Monitor::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_width_m76216409DDFC2D2967A41146D0AA02F7F09DAFD2 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Monitor::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_height_m173746A6510AC28B5C1418983B14D86922706F2B (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// uDesktopDuplication.MonitorRotation uDesktopDuplication.Lib::GetRotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetRotation_m63C1BF7F395F1DC50BCF360D1D6D4F4782A2BD9E (int32_t ___id0, const RuntimeMethod* method) ;
// uDesktopDuplication.MonitorRotation uDesktopDuplication.Monitor::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_rotation_m84CCFC395CB5F9BED894F2BF8129A8F27B1644B2 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Lib::IsCursorVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_IsCursorVisible_mAF8413033D1BC1115B254BC60AC43E1215E377B4 (const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetCursorX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorX_mEB981373B2B9EFDC935E0F5FBAC706E6870C0B8A (const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetCursorY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorY_m2E985103C59F543401E132130B1139A4DB7B3D07 (const RuntimeMethod* method) ;
// uDesktopDuplication.MousePoint uDesktopDuplication.Utility::GetCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077 Utility_GetCursorPos_mD5600F26D3C47F2C20D07176266187CAF85ED5A9 (const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Monitor::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_left_m560854FE145C4F6D8F02C78DD41BEF82680E8918 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Monitor::get_top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_top_m7BB25AF36EC0863756F2D56252A5FBC592A872B5 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetCursorShapeWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorShapeWidth_mF05E1ED42ADC2A165299E882702346D08BBE29B9 (const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::GetCursorShapeHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorShapeHeight_m10F5F9822C2ACA61F41C175BC72048BDD0DDB951 (const RuntimeMethod* method) ;
// uDesktopDuplication.CursorShapeType uDesktopDuplication.Lib::GetCursorShapeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorShapeType_m82B65FD4D7F4B51E799BE06BD324BBAB1B014C26 (const RuntimeMethod* method) ;
// uDesktopDuplication.DXGI_OUTDUPL_MOVE_RECT[] uDesktopDuplication.Lib::GetMoveRects(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67* Lib_GetMoveRects_m81386047D61E3C2FD0C6FA3BADD1D4B9A34FDEFA (int32_t ___id0, const RuntimeMethod* method) ;
// uDesktopDuplication.RECT[] uDesktopDuplication.Lib::GetDirtyRects(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95* Lib_GetDirtyRects_m7A3261F1F9715E364D016CF6B33E1CA31C9AFF5C (int32_t ___id0, const RuntimeMethod* method) ;
// System.IntPtr uDesktopDuplication.Lib::GetBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Lib_GetBuffer_m4EB671F7F613DA28721ECB9D5F01F4983E9C960E (int32_t ___id0, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Lib::HasBeenUpdated(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_HasBeenUpdated_m463303AB5FA8EADEE29A7D40734EC009BEE21964 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Lib::UseGetPixels(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_UseGetPixels_m288169924EFF85360ADF4A99A9BE479290A186F7 (int32_t ___id0, bool ___use1, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Texture2D>(System.String)
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mBEC87DD291ED9662B46356519E0723C0ABB12877 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// System.Boolean uDesktopDuplication.Monitor::get_available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_available_m506AB7B7B82DFCC82F03A1948E18CF25C3EF49AB (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D uDesktopDuplication.Monitor::get_errorTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Monitor_get_errorTexture_m027E5542E21118432181E29FB164A5EB1D7C7AAC (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Lib::SetTexturePtr(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_SetTexturePtr_m9272F2CC3CFF2B7E6EDBD3140A49CDD7363C7579 (int32_t ___id0, intptr_t ___ptr1, const RuntimeMethod* method) ;
// System.IntPtr uDesktopDuplication.Lib::GetRenderEventFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Lib_GetRenderEventFunc_m5D24A8FB8780DCFDB063BA15C0FAB803C6CDF000 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::IssuePluginEvent(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_IssuePluginEvent_m3591CC23273DA50F8B37FF0DA5844F01B12B6C84 (intptr_t ___callback0, int32_t ___eventID1, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Lib::GetCursorTexture(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_GetCursorTexture_m49B9AEA404396F241ADB4BAB7830AC70C42AC92E (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Monitor::get_isHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_isHorizontal_mD55E48980D7478DE901530B93E7EC4EA314684DE (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Monitor::CreateTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_CreateTexture_m41D46ADACF955C27BB934B02B02052F6FBD44064 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color32 uDesktopDuplication.Lib::GetPixel(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Lib_GetPixel_mCFF58D6C29D5CC610B0E2EDD80E8C077DEB7139E (int32_t ___id0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method) ;
// UnityEngine.Material uDesktopDuplication.Texture::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D uDesktopDuplication.Monitor::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Monitor_get_texture_m017F32DD552F102D38DA504ACE3A58FD66F95370 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Texture::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_width_m38669397AE1BD034125651C7B25395E7741B2365 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, float ___value0, const RuntimeMethod* method) ;
// uDesktopDuplication.Monitor uDesktopDuplication.Texture::get_monitor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Texture::set_rotation(uDesktopDuplication.MonitorRotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_rotation_m9722C56E7B9F9C1A0BC6697D098940979167872F (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Texture::set_invertX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_invertX_m667B387D1AA5E8CE49DC81780C02181C6601DB1A (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Texture::set_invertY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_invertY_m849B1FC4E58FDB1BC36670C4B1E527BD331FA77A (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Texture::set_useClip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_useClip_m11B6FFCDDB43545DFDE9B1919C80705C3A12A8BC (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, bool ___value0, const RuntimeMethod* method) ;
// uDesktopDuplication.Monitor uDesktopDuplication.Manager::GetMonitor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* Manager_GetMonitor_m9CFA77A6998001EDABBE0A2F15015D4D6D008DBE (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Texture::set_monitor(uDesktopDuplication.Monitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_monitor_m90301C774542724E446C1931FB1BA7E7FB23741E (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh uDesktopDuplication.Texture::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Texture_get_mesh_mBE7DB2FA2412851E5C6AD5127FCCFD534921BDC6 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager/ReinitializeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReinitializeHandler__ctor_m5FB6962C2A0AF95FC3695CA6F8D1AB4074081B5B (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager::add_onReinitialized(uDesktopDuplication.Manager/ReinitializeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_add_onReinitialized_mBAED434EF828655A6AF6C5F431BC982B6E159D70 (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* ___value0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Manager::remove_onReinitialized(uDesktopDuplication.Manager/ReinitializeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_remove_onReinitialized_m1F9F692C43C099E8BB8AB936C42446328D8B13DC (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* ___value0, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Texture::KeepMonitor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_KeepMonitor_m63F538AC48B18CE3DFBF0C08032FED91CC974898 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Texture::RequireUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_RequireUpdate_mEF98C64488D4C17A81EC18F8750EC8A628A13035 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Texture::UpdateMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_UpdateMaterial_m6B45F31806079DCDCAE5F3E86B71DA8A01BDEF92 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Texture::Reinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_Reinitialize_mD633EE363DF87EF2A4B6768189AFE9EBDEF84010 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// System.Int32 uDesktopDuplication.Texture::get_monitorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_monitorId_m98D428A519BB4A699CCD95553D6E5C1C7D37AF74 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 uDesktopDuplication.Texture::GetWorldPositionFromCoord(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Texture_GetWorldPositionFromCoord_m2A013A737416BD4CC5AC3ED56434C039DC8C2673 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, int32_t ___u0, int32_t ___v1, const RuntimeMethod* method) ;
// System.Single uDesktopDuplication.Texture::get_worldWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Texture_get_worldWidth_mA0EE5E5754B1AD330FB679558E915ABDE2FC483C (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// System.Single uDesktopDuplication.Texture::get_worldHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Texture_get_worldHeight_mCB778CC730A1DB719E69F867B5CAD537E27751CE (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Texture::get_bend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_get_bend_mF42C15B299E0B1E0C6A6EA3C664692EE2CC4E10C (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// System.Single uDesktopDuplication.Texture::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Texture_get_radius_mCDF436905F55BF86734D9CF4307C63F08432F3A9 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// uDesktopDuplication.Texture/MeshForwardDirection uDesktopDuplication.Texture::get_meshForwardDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_meshForwardDirection_m595D0F7FA57D67CE3910B59E99167303AC971E94 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Texture::get_useClip()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Texture_get_useClip_m534DF3424F1EEF35E0B879658BD77B93EE086C5D_inline (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<uDesktopDuplication.Texture>()
inline TextureU5BU5D_t8C968367DAEA92FFB3EC12B938CF18B61345A840* Object_FindObjectsOfType_TisTexture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_mB9C110463F69E640AD4D328FE230339CB06F61E8 (const RuntimeMethod* method)
{
	return ((  TextureU5BU5D_t8C968367DAEA92FFB3EC12B938CF18B61345A840* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// uDesktopDuplication.Texture/RayCastResult uDesktopDuplication.Texture::RayCast(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 Texture_RayCast_m327855F9B080A3A3BE7527E35EE62482158F16F5 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Boolean uDesktopDuplication.Utility::GetCursorPos(uDesktopDuplication.MousePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utility_GetCursorPos_m0F677E45545B2B4B6B614E209E3CFFCA6E3D544E (MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077* ___point0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator uDesktopDuplication.Utility::_WaitThenDo(System.Action,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utility__WaitThenDo_mB2FD8ED5DBB62425530871C3CFD1FAB8D6AF7882 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___func0, float ___sec1, const RuntimeMethod* method) ;
// System.Void uDesktopDuplication.Utility/<_WaitThenDo>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitThenDoU3Ed__3__ctor_mCB2829C9EFE0035C83586784A7D1210EE4F5A9EF (U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL IsInitialized();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Initialize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Finalize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Reinitialize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Update();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PopMessage();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL EnableDebug();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DisableDebug();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetDebugMode(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetLogFunc(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetErrorFunc(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetMonitorCount();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL HasMonitorCountChanged();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetCursorMonitorId();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetTotalWidth();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetTotalHeight();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetRenderEventFunc();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetId(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetState(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetName(int32_t, char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetLeft(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetRight(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetTop(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBottom(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetWidth(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetHeight(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetDpiX(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetDpiY(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL IsHDR(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetRotation(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL IsPrimary(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL IsCursorVisible();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetCursorX();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetCursorY();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetCursorShapeWidth();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetCursorShapeHeight();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetCursorShapePitch();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetCursorShapeType();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetCursorTexture(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetCursorHotSpotX();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetCursorHotSpotY();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetTexturePtr(int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetSharedTextureHandle(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetMoveRectCount(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetMoveRects(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetDirtyRectCount(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetDirtyRects(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetPixels(int32_t, intptr_t, int32_t, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetBuffer(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL HasBeenUpdated(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UseGetPixels(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetFrameRate(uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_user32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetCursorPos(MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077*);
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Boolean uDesktopDuplication.Lib::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_IsInitialized_mDA0AB002394F66F5408C4265493EA9D52643B1ED (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "IsInitialized", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(IsInitialized)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void uDesktopDuplication.Lib::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_Initialize_m4996EA4E9DC4DE32B057756A3B9DE4E3E2E75931 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "Initialize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(Initialize)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void uDesktopDuplication.Lib::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_Finalize_m66B0EB958415F61906CC6D0DE022A5ED96E01393 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "Finalize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(Finalize)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void uDesktopDuplication.Lib::Reinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_Reinitialize_mBE65F2CAAF9E4CD5263FD6D287DF26B921423E88 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "Reinitialize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(Reinitialize)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void uDesktopDuplication.Lib::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_Update_m8D4EF2F43C68347D6E1347E3F711BAD9B5EC0510 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "Update", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(Update)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// uDesktopDuplication.Message uDesktopDuplication.Lib::PopMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_PopMessage_m5713C5D0BCDEB0145911993F8F0106B2C05CA3E7 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "PopMessage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PopMessage)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void uDesktopDuplication.Lib::EnableDebug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_EnableDebug_m72FAFFC83D56ED2A341D3113F8F50924664D62DF (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "EnableDebug", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(EnableDebug)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void uDesktopDuplication.Lib::DisableDebug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_DisableDebug_m885EB2B933420A3B3F17B678040FE5CFA173BF46 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "DisableDebug", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(DisableDebug)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void uDesktopDuplication.Lib::SetDebugMode(uDesktopDuplication.DebugMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_SetDebugMode_m8FD319252460B143C76FA126B6D894F01F7383D7 (int32_t ___mode0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "SetDebugMode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetDebugMode)(___mode0);
	#else
	il2cppPInvokeFunc(___mode0);
	#endif

}
// System.Void uDesktopDuplication.Lib::SetLogFunc(uDesktopDuplication.Lib/DebugLogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_SetLogFunc_m9A952DCBF998E29E2CB7011DEA9E113EB025BE46 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* ___func0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "SetLogFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___func0' to native representation
	Il2CppMethodPointer ____func0_marshaled = NULL;
	____func0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetLogFunc)(____func0_marshaled);
	#else
	il2cppPInvokeFunc(____func0_marshaled);
	#endif

}
// System.Void uDesktopDuplication.Lib::SetErrorFunc(uDesktopDuplication.Lib/DebugLogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_SetErrorFunc_m61C4E52D0368BD61860BA777E781FE9834FBAE95 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* ___func0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "SetErrorFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___func0' to native representation
	Il2CppMethodPointer ____func0_marshaled = NULL;
	____func0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetErrorFunc)(____func0_marshaled);
	#else
	il2cppPInvokeFunc(____func0_marshaled);
	#endif

}
// System.Int32 uDesktopDuplication.Lib::GetMonitorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetMonitorCount_mD32529380C2A4E9C710D3AE4597B88D861A93781 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetMonitorCount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetMonitorCount)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Boolean uDesktopDuplication.Lib::HasMonitorCountChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_HasMonitorCountChanged_m209227E4A09907D213BAC412021151B07ED58E9A (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "HasMonitorCountChanged", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(HasMonitorCountChanged)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Int32 uDesktopDuplication.Lib::GetCursorMonitorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorMonitorId_mF1F5AF6EF8E3BD51B07B7C25420B97384443426F (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetCursorMonitorId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetCursorMonitorId)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetTotalWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetTotalWidth_m718B7A98C730BDE1638E05C763680589A717FB5E (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetTotalWidth", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTotalWidth)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetTotalHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetTotalHeight_m12A15D9D756394135A75A1C374A0578481075907 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetTotalHeight", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTotalHeight)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr uDesktopDuplication.Lib::GetRenderEventFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Lib_GetRenderEventFunc_m5D24A8FB8780DCFDB063BA15C0FAB803C6CDF000 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetRenderEventFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetRenderEventFunc)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetId_mD758CAE7D6D1C5981A84811D905A99C68D83D8FA (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetId)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// uDesktopDuplication.DuplicatorState uDesktopDuplication.Lib::GetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetState_m60E258019ADDF8B539CC393CA28D227392E8E084 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetState)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Void uDesktopDuplication.Lib::GetName(System.Int32,System.Text.StringBuilder,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_GetName_mA2E4B1E0A9647368A9273D49F77F6CB365D94357 (int32_t ___id0, StringBuilder_t* ___buf1, int32_t ___len2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buf1' to native representation
	char* ____buf1_marshaled = NULL;
	____buf1_marshaled = il2cpp_codegen_marshal_string_builder(___buf1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetName)(___id0, ____buf1_marshaled, ___len2);
	#else
	il2cppPInvokeFunc(___id0, ____buf1_marshaled, ___len2);
	#endif

	// Marshaling of parameter '___buf1' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___buf1, ____buf1_marshaled);

	// Marshaling cleanup of parameter '___buf1' native representation
	il2cpp_codegen_marshal_free(____buf1_marshaled);
	____buf1_marshaled = NULL;

}
// System.Int32 uDesktopDuplication.Lib::GetLeft(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetLeft_m24BB612591FCB0356CC1318144112684D59CD43D (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetLeft", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetLeft)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetRight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetRight_m7AA36790C65050901378BF9D95DE11BC451ACF33 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetRight", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetRight)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetTop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetTop_m7B834A93CEE19AB728F250DD4FF1DA2D786126DA (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetTop", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTop)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetBottom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetBottom_m78F2362B35AC37AEF2D810EAA095C96475C466F6 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetBottom", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBottom)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetWidth_m6B6BAEE58E017EF8FC753BD770E6117DAF49C64B (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetWidth", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetWidth)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetHeight_m6667CD4121B410DAF776BFCA7CE69A4DA097E20B (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetHeight", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetHeight)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetDpiX(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetDpiX_m2B100E7CF59AEBC5736FB25983F5A2E289665D59 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetDpiX", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetDpiX)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetDpiY(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetDpiY_m588C6D75DBD35CF85C9656D19D953949766D3511 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetDpiY", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetDpiY)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Boolean uDesktopDuplication.Lib::IsHDR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_IsHDR_mD760476134B61444B6F8D3F9B4BC095F4A084A29 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "IsHDR", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(IsHDR)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return static_cast<bool>(returnValue);
}
// uDesktopDuplication.MonitorRotation uDesktopDuplication.Lib::GetRotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetRotation_m63C1BF7F395F1DC50BCF360D1D6D4F4782A2BD9E (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetRotation", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetRotation)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Boolean uDesktopDuplication.Lib::IsPrimary(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_IsPrimary_m92E0351E10A5800E6BBCA4B15B162A81F6723325 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "IsPrimary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(IsPrimary)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean uDesktopDuplication.Lib::IsCursorVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_IsCursorVisible_mAF8413033D1BC1115B254BC60AC43E1215E377B4 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "IsCursorVisible", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(IsCursorVisible)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Int32 uDesktopDuplication.Lib::GetCursorX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorX_mEB981373B2B9EFDC935E0F5FBAC706E6870C0B8A (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetCursorX", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetCursorX)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetCursorY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorY_m2E985103C59F543401E132130B1139A4DB7B3D07 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetCursorY", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetCursorY)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetCursorShapeWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorShapeWidth_mF05E1ED42ADC2A165299E882702346D08BBE29B9 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetCursorShapeWidth", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetCursorShapeWidth)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetCursorShapeHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorShapeHeight_m10F5F9822C2ACA61F41C175BC72048BDD0DDB951 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetCursorShapeHeight", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetCursorShapeHeight)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetCursorShapePitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorShapePitch_mD3C99DDEA5774EEB4273331D5A121793C9CF5CB8 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetCursorShapePitch", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetCursorShapePitch)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// uDesktopDuplication.CursorShapeType uDesktopDuplication.Lib::GetCursorShapeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorShapeType_m82B65FD4D7F4B51E799BE06BD324BBAB1B014C26 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetCursorShapeType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetCursorShapeType)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void uDesktopDuplication.Lib::GetCursorTexture(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_GetCursorTexture_m49B9AEA404396F241ADB4BAB7830AC70C42AC92E (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetCursorTexture", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetCursorTexture)(___ptr0);
	#else
	il2cppPInvokeFunc(___ptr0);
	#endif

}
// System.Int32 uDesktopDuplication.Lib::GetCursorHotSpotX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorHotSpotX_m86DFF49F79A9704153AD18684508BB6C5D13B477 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetCursorHotSpotX", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetCursorHotSpotX)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetCursorHotSpotY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetCursorHotSpotY_m8C595667C1AE53AC4A1A69C8EAC17AA289B8241D (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetCursorHotSpotY", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetCursorHotSpotY)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::SetTexturePtr(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_SetTexturePtr_m9272F2CC3CFF2B7E6EDBD3140A49CDD7363C7579 (int32_t ___id0, intptr_t ___ptr1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "SetTexturePtr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetTexturePtr)(___id0, ___ptr1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0, ___ptr1);
	#endif

	return returnValue;
}
// System.IntPtr uDesktopDuplication.Lib::GetSharedTextureHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Lib_GetSharedTextureHandle_mDEECDE0482B96E554FA2931BB7420336DDE2C2D4 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetSharedTextureHandle", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetSharedTextureHandle)(___id0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetMoveRectCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetMoveRectCount_m12FA5957227C92BE7C8900BF6C2763D76F722BB2 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetMoveRectCount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetMoveRectCount)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.IntPtr uDesktopDuplication.Lib::GetMoveRects_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Lib_GetMoveRects_Internal_m26AE307ECF6731BA71CE7D297269859B91B36082 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetMoveRects", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetMoveRects)(___id0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Int32 uDesktopDuplication.Lib::GetDirtyRectCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lib_GetDirtyRectCount_mC1C58B2261ED9DE68B6FD2210446395BEEBC6F75 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetDirtyRectCount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetDirtyRectCount)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.IntPtr uDesktopDuplication.Lib::GetDirtyRects_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Lib_GetDirtyRects_Internal_mCA0DC0E591BE90AF3AF6FDB8EE9A172CF6B14077 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetDirtyRects", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetDirtyRects)(___id0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Boolean uDesktopDuplication.Lib::GetPixels_Internal(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_GetPixels_Internal_m66615CC38250E8DC6D75E6D17806677CBB7BBB45 (int32_t ___id0, intptr_t ___ptr1, int32_t ___x2, int32_t ___y3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t, int32_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetPixels", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetPixels)(___id0, ___ptr1, ___x2, ___y3, ___width4, ___height5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0, ___ptr1, ___x2, ___y3, ___width4, ___height5);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr uDesktopDuplication.Lib::GetBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Lib_GetBuffer_m4EB671F7F613DA28721ECB9D5F01F4983E9C960E (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "GetBuffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetBuffer)(___id0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Boolean uDesktopDuplication.Lib::HasBeenUpdated(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_HasBeenUpdated_m463303AB5FA8EADEE29A7D40734EC009BEE21964 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "HasBeenUpdated", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(HasBeenUpdated)(___id0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean uDesktopDuplication.Lib::UseGetPixels(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_UseGetPixels_m288169924EFF85360ADF4A99A9BE479290A186F7 (int32_t ___id0, bool ___use1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "UseGetPixels", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UseGetPixels)(___id0, static_cast<int32_t>(___use1));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___id0, static_cast<int32_t>(___use1));
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void uDesktopDuplication.Lib::SetFrameRate(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lib_SetFrameRate_mCEA1B1A052D5DDF63575AE68CB9604AB97C75813 (uint32_t ___frameRate0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("uDesktopDuplication"), "SetFrameRate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_uDesktopDuplication_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetFrameRate)(___frameRate0);
	#else
	il2cppPInvokeFunc(___frameRate0);
	#endif

}
// System.String uDesktopDuplication.Lib::GetName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lib_GetName_m3A8D12FCC4255C1897F4C74D08DCEB2C3A0DB3EC (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// var buf = new StringBuilder(32);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)32), NULL);
		V_0 = L_0;
		// GetName(id, buf, buf.Capacity);
		int32_t L_1 = ___id0;
		StringBuilder_t* L_2 = V_0;
		StringBuilder_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E(L_3, NULL);
		Lib_GetName_mA2E4B1E0A9647368A9273D49F77F6CB365D94357(L_1, L_2, L_4, NULL);
		// return buf.ToString();
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		return L_6;
	}
}
// uDesktopDuplication.DXGI_OUTDUPL_MOVE_RECT[] uDesktopDuplication.Lib::GetMoveRects(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67* Lib_GetMoveRects_m81386047D61E3C2FD0C6FA3BADD1D4B9A34FDEFA (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var count = GetMoveRectCount(id);
		int32_t L_0 = ___id0;
		int32_t L_1;
		L_1 = Lib_GetMoveRectCount_m12FA5957227C92BE7C8900BF6C2763D76F722BB2(L_0, NULL);
		V_0 = L_1;
		// var rects = new DXGI_OUTDUPL_MOVE_RECT[count];
		int32_t L_2 = V_0;
		DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67* L_3 = (DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67*)(DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67*)SZArrayNew(DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// var ptr = GetMoveRects_Internal(id);
		int32_t L_4 = ___id0;
		intptr_t L_5;
		L_5 = Lib_GetMoveRects_Internal_m26AE307ECF6731BA71CE7D297269859B91B36082(L_4, NULL);
		V_2 = L_5;
		// var size = Marshal.SizeOf(typeof(DXGI_OUTDUPL_MOVE_RECT));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_7, NULL);
		V_3 = L_8;
		// for (int i = 0; i < count; ++i) {
		V_4 = 0;
		goto IL_0062;
	}

IL_002a:
	{
		// var data = new IntPtr(ptr.ToInt64() + size * i);
		int64_t L_9;
		L_9 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_2), NULL);
		int32_t L_10 = V_3;
		int32_t L_11 = V_4;
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&V_5), ((int64_t)il2cpp_codegen_add(L_9, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_10, L_11))))), NULL);
		// rects[i] = (DXGI_OUTDUPL_MOVE_RECT)Marshal.PtrToStructure(data, typeof(DXGI_OUTDUPL_MOVE_RECT));
		DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67* L_12 = V_1;
		int32_t L_13 = V_4;
		intptr_t L_14 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_14, L_16, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E)((*(DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E*)((DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E*)(DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E*)UnBox(L_17, DXGI_OUTDUPL_MOVE_RECT_t625C107425F89330F671DCE08D3E8D10DDF6123E_il2cpp_TypeInfo_var)))));
		// for (int i = 0; i < count; ++i) {
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0062:
	{
		// for (int i = 0; i < count; ++i) {
		int32_t L_19 = V_4;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_002a;
		}
	}
	{
		// return rects;
		DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67* L_21 = V_1;
		return L_21;
	}
}
// uDesktopDuplication.RECT[] uDesktopDuplication.Lib::GetDirtyRects(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95* Lib_GetDirtyRects_m7A3261F1F9715E364D016CF6B33E1CA31C9AFF5C (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RECT_t472859B256302AF663FC4440907754CF2684D24B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RECT_t472859B256302AF663FC4440907754CF2684D24B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var count = GetDirtyRectCount(id);
		int32_t L_0 = ___id0;
		int32_t L_1;
		L_1 = Lib_GetDirtyRectCount_mC1C58B2261ED9DE68B6FD2210446395BEEBC6F75(L_0, NULL);
		V_0 = L_1;
		// var rects = new RECT[count];
		int32_t L_2 = V_0;
		RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95* L_3 = (RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95*)(RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95*)SZArrayNew(RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// var ptr = GetDirtyRects_Internal(id);
		int32_t L_4 = ___id0;
		intptr_t L_5;
		L_5 = Lib_GetDirtyRects_Internal_mCA0DC0E591BE90AF3AF6FDB8EE9A172CF6B14077(L_4, NULL);
		V_2 = L_5;
		// var size = Marshal.SizeOf(typeof(RECT));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (RECT_t472859B256302AF663FC4440907754CF2684D24B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_7, NULL);
		V_3 = L_8;
		// for (int i = 0; i < count; ++i) {
		V_4 = 0;
		goto IL_0062;
	}

IL_002a:
	{
		// var data = new IntPtr(ptr.ToInt64() + size * i);
		int64_t L_9;
		L_9 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_2), NULL);
		int32_t L_10 = V_3;
		int32_t L_11 = V_4;
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&V_5), ((int64_t)il2cpp_codegen_add(L_9, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_10, L_11))))), NULL);
		// rects[i] = (RECT)Marshal.PtrToStructure(data, typeof(RECT));
		RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95* L_12 = V_1;
		int32_t L_13 = V_4;
		intptr_t L_14 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (RECT_t472859B256302AF663FC4440907754CF2684D24B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_14, L_16, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RECT_t472859B256302AF663FC4440907754CF2684D24B)((*(RECT_t472859B256302AF663FC4440907754CF2684D24B*)((RECT_t472859B256302AF663FC4440907754CF2684D24B*)(RECT_t472859B256302AF663FC4440907754CF2684D24B*)UnBox(L_17, RECT_t472859B256302AF663FC4440907754CF2684D24B_il2cpp_TypeInfo_var)))));
		// for (int i = 0; i < count; ++i) {
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0062:
	{
		// for (int i = 0; i < count; ++i) {
		int32_t L_19 = V_4;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_002a;
		}
	}
	{
		// return rects;
		RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95* L_21 = V_1;
		return L_21;
	}
}
// UnityEngine.Color32[] uDesktopDuplication.Lib::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Lib_GetPixels_m87C0BE1CC14CEF226E1A6E366CC23ACC1B9B2104 (int32_t ___id0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_0 = NULL;
	{
		// var color = new Color32[width * height];
		int32_t L_0 = ___width3;
		int32_t L_1 = ___height4;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		// GetPixels(id, color, x, y, width, height);
		int32_t L_3 = ___id0;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = V_0;
		int32_t L_5 = ___x1;
		int32_t L_6 = ___y2;
		int32_t L_7 = ___width3;
		int32_t L_8 = ___height4;
		bool L_9;
		L_9 = Lib_GetPixels_m13569F4F36E09BC3075508098AAC2670DCF2FBD7(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// return color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_10 = V_0;
		return L_10;
	}
}
// System.Boolean uDesktopDuplication.Lib::GetPixels(System.Int32,UnityEngine.Color32[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lib_GetPixels_m13569F4F36E09BC3075508098AAC2670DCF2FBD7 (int32_t ___id0, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors1, int32_t ___x2, int32_t ___y3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228FBAD9E30D46269B38E3C272AD86F4C6D7EE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CF21B86711D9A21DD61D3998DD37E71BF455F88);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (colors.Length < width * height) {
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___colors1;
		NullCheck(L_0);
		int32_t L_1 = ___width4;
		int32_t L_2 = ___height5;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2)))))
		{
			goto IL_004b;
		}
	}
	{
		// Debug.LogErrorFormat("colors is small.", id, x, y, width, height);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___id0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___x2;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		int32_t L_13 = ___y3;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		int32_t L_17 = ___width4;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		int32_t L_21 = ___height5;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_23);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral8CF21B86711D9A21DD61D3998DD37E71BF455F88, L_20, NULL);
		// return false;
		return (bool)0;
	}

IL_004b:
	{
		// var handle = GCHandle.Alloc(colors, GCHandleType.Pinned);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_24 = ___colors1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_25;
		L_25 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_24, 3, NULL);
		V_0 = L_25;
		// var ptr = handle.AddrOfPinnedObject();
		intptr_t L_26;
		L_26 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
		V_1 = L_26;
		// if (!GetPixels_Internal(id, ptr, x, y, width, height)) {
		int32_t L_27 = ___id0;
		intptr_t L_28 = V_1;
		int32_t L_29 = ___x2;
		int32_t L_30 = ___y3;
		int32_t L_31 = ___width4;
		int32_t L_32 = ___height5;
		bool L_33;
		L_33 = Lib_GetPixels_Internal_m66615CC38250E8DC6D75E6D17806677CBB7BBB45(L_27, L_28, L_29, L_30, L_31, L_32, NULL);
		if (L_33)
		{
			goto IL_00ab;
		}
	}
	{
		// Debug.LogErrorFormat("GetPixels({0}, {1}, {2}, {3}, {4}) failed.", id, x, y, width, height);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_34;
		int32_t L_36 = ___id0;
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = L_35;
		int32_t L_40 = ___x2;
		int32_t L_41 = L_40;
		RuntimeObject* L_42 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_42);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_39;
		int32_t L_44 = ___y3;
		int32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_46);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = L_43;
		int32_t L_48 = ___width4;
		int32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_50);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = L_47;
		int32_t L_52 = ___height5;
		int32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_54);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_54);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral228FBAD9E30D46269B38E3C272AD86F4C6D7EE75, L_51, NULL);
		// return false;
		return (bool)0;
	}

IL_00ab:
	{
		// handle.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Color32 uDesktopDuplication.Lib::GetPixel(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Lib_GetPixel_mCFF58D6C29D5CC610B0E2EDD80E8C077DEB7139E (int32_t ___id0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method) 
{
	{
		// return GetPixels(id, x, y, 1, 1)[0];
		int32_t L_0 = ___id0;
		int32_t L_1 = ___x1;
		int32_t L_2 = ___y2;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3;
		L_3 = Lib_GetPixels_m87C0BE1CC14CEF226E1A6E366CC23ACC1B9B2104(L_0, L_1, L_2, 1, 1, NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
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
void MessageHandler_Invoke_mEDD96BFFA705EC9D3A8D79B97378882043A21738_Multicast(MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983* __this, int32_t ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983* currentDelegate = reinterpret_cast<MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageHandler_Invoke_mEDD96BFFA705EC9D3A8D79B97378882043A21738_OpenInst(MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983* __this, int32_t ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void MessageHandler_Invoke_mEDD96BFFA705EC9D3A8D79B97378882043A21738_OpenStatic(MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983* __this, int32_t ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void MessageHandler_Invoke_mEDD96BFFA705EC9D3A8D79B97378882043A21738_OpenStaticInvoker(MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983* __this, int32_t ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void MessageHandler_Invoke_mEDD96BFFA705EC9D3A8D79B97378882043A21738_ClosedStaticInvoker(MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983* __this, int32_t ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983 (MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983* __this, int32_t ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___message0);

}
// System.Void uDesktopDuplication.Lib/MessageHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m01599F1CA477DE2CB7877D62C994991BD00D1473 (MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageHandler_Invoke_mEDD96BFFA705EC9D3A8D79B97378882043A21738_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageHandler_Invoke_mEDD96BFFA705EC9D3A8D79B97378882043A21738_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageHandler_Invoke_mEDD96BFFA705EC9D3A8D79B97378882043A21738_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&MessageHandler_Invoke_mEDD96BFFA705EC9D3A8D79B97378882043A21738_Multicast;
}
// System.Void uDesktopDuplication.Lib/MessageHandler::Invoke(uDesktopDuplication.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_Invoke_mEDD96BFFA705EC9D3A8D79B97378882043A21738 (MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983* __this, int32_t ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult uDesktopDuplication.Lib/MessageHandler::BeginInvoke(uDesktopDuplication.Message,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandler_BeginInvoke_mC98A277B135840EF934AF5E786FE28D72E900155 (MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983* __this, int32_t ___message0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tEB0738339E17FEEC0FD44A29DD4ED3F57B51995C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Message_tEB0738339E17FEEC0FD44A29DD4ED3F57B51995C_il2cpp_TypeInfo_var, &___message0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void uDesktopDuplication.Lib/MessageHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_EndInvoke_m8D446E8D0047C95945ACEF007C6720DB4087A951 (MessageHandler_t194B32766022A9E8C882E7198EDFF0713D496983* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DebugLogDelegate_Invoke_m659A6B26049D0DA4BBCA5DE2883FF309417717E1_Multicast(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* __this, String_t* ___str0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* currentDelegate = reinterpret_cast<DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___str0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DebugLogDelegate_Invoke_m659A6B26049D0DA4BBCA5DE2883FF309417717E1_OpenInst(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* __this, String_t* ___str0, const RuntimeMethod* method)
{
	NullCheck(___str0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___str0, method);
}
void DebugLogDelegate_Invoke_m659A6B26049D0DA4BBCA5DE2883FF309417717E1_OpenStatic(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* __this, String_t* ___str0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___str0, method);
}
void DebugLogDelegate_Invoke_m659A6B26049D0DA4BBCA5DE2883FF309417717E1_OpenStaticInvoker(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* __this, String_t* ___str0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___str0);
}
void DebugLogDelegate_Invoke_m659A6B26049D0DA4BBCA5DE2883FF309417717E1_ClosedStaticInvoker(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* __this, String_t* ___str0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___str0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* __this, String_t* ___str0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___str0' to native representation
	char* ____str0_marshaled = NULL;
	____str0_marshaled = il2cpp_codegen_marshal_string(___str0);

	// Native function invocation
	il2cppPInvokeFunc(____str0_marshaled);

	// Marshaling cleanup of parameter '___str0' native representation
	il2cpp_codegen_marshal_free(____str0_marshaled);
	____str0_marshaled = NULL;

}
// System.Void uDesktopDuplication.Lib/DebugLogDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogDelegate__ctor_mC4959F3407C7064C07D4ED51D891F2FBDD365C25 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DebugLogDelegate_Invoke_m659A6B26049D0DA4BBCA5DE2883FF309417717E1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DebugLogDelegate_Invoke_m659A6B26049D0DA4BBCA5DE2883FF309417717E1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DebugLogDelegate_Invoke_m659A6B26049D0DA4BBCA5DE2883FF309417717E1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&DebugLogDelegate_Invoke_m659A6B26049D0DA4BBCA5DE2883FF309417717E1_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DebugLogDelegate_Invoke_m659A6B26049D0DA4BBCA5DE2883FF309417717E1_Multicast;
}
// System.Void uDesktopDuplication.Lib/DebugLogDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogDelegate_Invoke_m659A6B26049D0DA4BBCA5DE2883FF309417717E1 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___str0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult uDesktopDuplication.Lib/DebugLogDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DebugLogDelegate_BeginInvoke_mB005BA27C729839E0A1191312834B027F85F64D8 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* __this, String_t* ___str0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___str0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void uDesktopDuplication.Lib/DebugLogDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogDelegate_EndInvoke_m975E1F53E7159CD8A07957A6F32CE0877C0D0662 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void CDECL ReversePInvokeWrapper_Manager_OnDebugLog_m8CB90197A77EEBD8EBDC89F5B27EA1AFD6D56546(char* ___msg0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg0' to managed representation
	String_t* ____msg0_unmarshaled = NULL;
	____msg0_unmarshaled = il2cpp_codegen_marshal_string_result(___msg0);

	// Managed method invocation
	Manager_OnDebugLog_m8CB90197A77EEBD8EBDC89F5B27EA1AFD6D56546(____msg0_unmarshaled, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Manager_OnDebugErr_m00D09DCF9A7D403AD907193C55F3E64CB3DCE30E(char* ___msg0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg0' to managed representation
	String_t* ____msg0_unmarshaled = NULL;
	____msg0_unmarshaled = il2cpp_codegen_marshal_string_result(___msg0);

	// Managed method invocation
	Manager_OnDebugErr_m00D09DCF9A7D403AD907193C55F3E64CB3DCE30E(____msg0_unmarshaled, NULL);

}
// uDesktopDuplication.Manager uDesktopDuplication.Manager::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* Manager_get_instance_m941C725100008EDC479C8AFD9DA3CC9476CA9531 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return CreateInstance(); }
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_0;
		L_0 = Manager_CreateInstance_m7F5303B83AB188085AB1C82EA55B9FA56B006130(NULL);
		return L_0;
	}
}
// uDesktopDuplication.Manager uDesktopDuplication.Manager::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* Manager_CreateInstance_m7F5303B83AB188085AB1C82EA55B9FA56B006130 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisManager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_m6AA2D3B7B41A4E85A72E241E22B4D488121233D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisManager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_m9C6749531DE62E9470D676D1C8A456BB51CBE1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4C461FA1FB0166F7EDA2D428009C98171F5F9CA);
		s_Il2CppMethodInitialized = true;
	}
	Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* V_0 = NULL;
	{
		// if (instance_ != null) return instance_;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_0 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (instance_ != null) return instance_;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_2 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4;
		return L_2;
	}

IL_0013:
	{
		// var manager = FindObjectOfType<Manager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_3;
		L_3 = Object_FindObjectOfType_TisManager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_m9C6749531DE62E9470D676D1C8A456BB51CBE1F7(Object_FindObjectOfType_TisManager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_m9C6749531DE62E9470D676D1C8A456BB51CBE1F7_RuntimeMethod_var);
		V_0 = L_3;
		// if (manager) {
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_4 = V_0;
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// instance_ = manager;
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4), (void*)L_6);
		// return manager;
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_7 = V_0;
		return L_7;
	}

IL_0029:
	{
		// var go = new GameObject("uDesktopDuplicationManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_8, _stringLiteralB4C461FA1FB0166F7EDA2D428009C98171F5F9CA, NULL);
		// instance_ = go.AddComponent<Manager>();
		NullCheck(L_8);
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_9;
		L_9 = GameObject_AddComponent_TisManager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_m6AA2D3B7B41A4E85A72E241E22B4D488121233D7(L_8, GameObject_AddComponent_TisManager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_m6AA2D3B7B41A4E85A72E241E22B4D488121233D7_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4), (void*)L_9);
		// return instance_;
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_10 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4;
		return L_10;
	}
}
// System.Collections.Generic.List`1<uDesktopDuplication.Monitor> uDesktopDuplication.Manager::get_monitors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance.monitors_; }
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_0;
		L_0 = Manager_get_instance_m941C725100008EDC479C8AFD9DA3CC9476CA9531(NULL);
		NullCheck(L_0);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_1 = L_0->___monitors__5;
		return L_1;
	}
}
// System.Int32 uDesktopDuplication.Manager::get_monitorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Manager_get_monitorCount_mEF081BCD8E0A7BD3E8CF99BAC1F51EC5B6C90C02 (const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetMonitorCount(); }
		int32_t L_0;
		L_0 = Lib_GetMonitorCount_mD32529380C2A4E9C710D3AE4597B88D861A93781(NULL);
		return L_0;
	}
}
// System.Int32 uDesktopDuplication.Manager::get_cursorMonitorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Manager_get_cursorMonitorId_m2290AAEAC40A1C94E54B36AC0A27B5FDBE5EC626 (const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetCursorMonitorId(); }
		int32_t L_0;
		L_0 = Lib_GetCursorMonitorId_mF1F5AF6EF8E3BD51B07B7C25420B97384443426F(NULL);
		return L_0;
	}
}
// uDesktopDuplication.Monitor uDesktopDuplication.Manager::get_primary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* Manager_get_primary_m5C0DEE8296B01F477202380B0564955CD08B3D69 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m9661396195184963995C042F4340B3D864CD9B84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_primaryU3Eb__12_0_mFECB989356719E8A2152D3D0FAD7E6136699223A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05* G_B2_0 = NULL;
	List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* G_B2_1 = NULL;
	Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05* G_B1_0 = NULL;
	List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* G_B1_1 = NULL;
	{
		// return instance.monitors_.Find(monitor => monitor.isPrimary);
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_0;
		L_0 = Manager_get_instance_m941C725100008EDC479C8AFD9DA3CC9476CA9531(NULL);
		NullCheck(L_0);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_1 = L_0->___monitors__5;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var);
		Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05* L_2 = ((U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1;
		Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var);
		U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5* L_4 = ((U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05* L_5 = (Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05*)il2cpp_codegen_object_new(Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mBDAA95706495FBF0B0C805431B52405BAB46E7A1(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3Cget_primaryU3Eb__12_0_mFECB989356719E8A2152D3D0FAD7E6136699223A_RuntimeMethod_var), NULL);
		Predicate_1_t74B93D95DA65892CCCF570B4DC79E454354F0F05* L_6 = L_5;
		((U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0029:
	{
		NullCheck(G_B2_1);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_7;
		L_7 = List_1_Find_m9661396195184963995C042F4340B3D864CD9B84(G_B2_1, G_B2_0, List_1_Find_m9661396195184963995C042F4340B3D864CD9B84_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void uDesktopDuplication.Manager::add_onDebugLog(uDesktopDuplication.Lib/DebugLogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_add_onDebugLog_m5530062D8B7B1ECEC55BF580DFC052F6A883F197 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_0 = NULL;
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_1 = NULL;
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_0 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugLog_12;
		V_0 = L_0;
	}

IL_0006:
	{
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_1 = V_0;
		V_1 = L_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_2 = V_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)CastclassSealed((RuntimeObject*)L_4, DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_5 = V_2;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_6 = V_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_7;
		L_7 = InterlockedCompareExchangeImpl<DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*>((&((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugLog_12), L_5, L_6);
		V_0 = L_7;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_8 = V_0;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_9 = V_1;
		if ((!(((RuntimeObject*)(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)L_8) == ((RuntimeObject*)(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void uDesktopDuplication.Manager::remove_onDebugLog(uDesktopDuplication.Lib/DebugLogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_remove_onDebugLog_mEE4FC9F2C6B7D1A6EF8376BFCFF8F2815E554A25 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_0 = NULL;
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_1 = NULL;
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_0 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugLog_12;
		V_0 = L_0;
	}

IL_0006:
	{
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_1 = V_0;
		V_1 = L_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_2 = V_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)CastclassSealed((RuntimeObject*)L_4, DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_5 = V_2;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_6 = V_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_7;
		L_7 = InterlockedCompareExchangeImpl<DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*>((&((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugLog_12), L_5, L_6);
		V_0 = L_7;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_8 = V_0;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_9 = V_1;
		if ((!(((RuntimeObject*)(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)L_8) == ((RuntimeObject*)(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void uDesktopDuplication.Manager::add_onDebugErr(uDesktopDuplication.Lib/DebugLogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_add_onDebugErr_mD46AF977F53C2019DD19A930938CBF24E7E7C871 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_0 = NULL;
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_1 = NULL;
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_0 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugErr_13;
		V_0 = L_0;
	}

IL_0006:
	{
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_1 = V_0;
		V_1 = L_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_2 = V_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)CastclassSealed((RuntimeObject*)L_4, DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_5 = V_2;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_6 = V_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_7;
		L_7 = InterlockedCompareExchangeImpl<DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*>((&((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugErr_13), L_5, L_6);
		V_0 = L_7;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_8 = V_0;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_9 = V_1;
		if ((!(((RuntimeObject*)(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)L_8) == ((RuntimeObject*)(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void uDesktopDuplication.Manager::remove_onDebugErr(uDesktopDuplication.Lib/DebugLogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_remove_onDebugErr_m12E3A19A4D332179C7798024997CC7902B350286 (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_0 = NULL;
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_1 = NULL;
	DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_0 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugErr_13;
		V_0 = L_0;
	}

IL_0006:
	{
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_1 = V_0;
		V_1 = L_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_2 = V_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)CastclassSealed((RuntimeObject*)L_4, DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_5 = V_2;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_6 = V_1;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_7;
		L_7 = InterlockedCompareExchangeImpl<DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*>((&((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugErr_13), L_5, L_6);
		V_0 = L_7;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_8 = V_0;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_9 = V_1;
		if ((!(((RuntimeObject*)(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)L_8) == ((RuntimeObject*)(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void uDesktopDuplication.Manager::OnDebugLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_OnDebugLog_m8CB90197A77EEBD8EBDC89F5B27EA1AFD6D56546 (String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static void OnDebugLog(string msg) { Debug.Log(msg); }
		String_t* L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// private static void OnDebugLog(string msg) { Debug.Log(msg); }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::OnDebugErr(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_OnDebugErr_m00D09DCF9A7D403AD907193C55F3E64CB3DCE30E (String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static void OnDebugErr(string msg) { Debug.LogError(msg); }
		String_t* L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_0, NULL);
		// private static void OnDebugErr(string msg) { Debug.LogError(msg); }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::add_onReinitialized(uDesktopDuplication.Manager/ReinitializeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_add_onReinitialized_mBAED434EF828655A6AF6C5F431BC982B6E159D70 (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* V_0 = NULL;
	ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* V_1 = NULL;
	ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_0 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onReinitialized_14;
		V_0 = L_0;
	}

IL_0006:
	{
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_1 = V_0;
		V_1 = L_1;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_2 = V_1;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F*)CastclassSealed((RuntimeObject*)L_4, ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_5 = V_2;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_6 = V_1;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_7;
		L_7 = InterlockedCompareExchangeImpl<ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F*>((&((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onReinitialized_14), L_5, L_6);
		V_0 = L_7;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_8 = V_0;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_9 = V_1;
		if ((!(((RuntimeObject*)(ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F*)L_8) == ((RuntimeObject*)(ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void uDesktopDuplication.Manager::remove_onReinitialized(uDesktopDuplication.Manager/ReinitializeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_remove_onReinitialized_m1F9F692C43C099E8BB8AB936C42446328D8B13DC (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* V_0 = NULL;
	ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* V_1 = NULL;
	ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_0 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onReinitialized_14;
		V_0 = L_0;
	}

IL_0006:
	{
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_1 = V_0;
		V_1 = L_1;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_2 = V_1;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F*)CastclassSealed((RuntimeObject*)L_4, ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_5 = V_2;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_6 = V_1;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_7;
		L_7 = InterlockedCompareExchangeImpl<ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F*>((&((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onReinitialized_14), L_5, L_6);
		V_0 = L_7;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_8 = V_0;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_9 = V_1;
		if ((!(((RuntimeObject*)(ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F*)L_8) == ((RuntimeObject*)(ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// uDesktopDuplication.Monitor uDesktopDuplication.Manager::GetMonitor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* Manager_GetMonitor_m9CFA77A6998001EDABBE0A2F15015D4D6D008DBE (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50FFD5B7BD0E31EFDF789C64066BDAD11C8F0823);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (id < 0 || id >= Manager.monitors.Count) {
		int32_t L_0 = ___id0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_2;
		L_2 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_inline(L_2, List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}

IL_0011:
	{
		// Debug.LogErrorFormat("[uDD::Error] there is no monitor whose id is {0}.", id);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6 = ___id0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral50FFD5B7BD0E31EFDF789C64066BDAD11C8F0823, L_5, NULL);
		// return Manager.primary;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_9;
		L_9 = Manager_get_primary_m5C0DEE8296B01F477202380B0564955CD08B3D69(NULL);
		return L_9;
	}

IL_0030:
	{
		// return monitors[Mathf.Clamp(id, 0, Manager.monitorCount - 1)];
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_10;
		L_10 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		int32_t L_11 = ___id0;
		int32_t L_12;
		L_12 = Manager_get_monitorCount_mEF081BCD8E0A7BD3E8CF99BAC1F51EC5B6C90C02(NULL);
		int32_t L_13;
		L_13 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		NullCheck(L_10);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_14;
		L_14 = List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A(L_10, L_13, List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		return L_14;
	}
}
// System.Void uDesktopDuplication.Manager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Awake_m6CD6C1B7F5F5639588DCAAE49A1EB74EE79BB447 (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A9107D3B926D84A310D6B78FCF7ADA35D4F087);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance_ == this) {
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_0 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (instance_ != null && instance_ != this) {
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_2 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_4 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, __this, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// return;
		return;
	}

IL_0034:
	{
		// instance_ = this;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___instance__4), (void*)__this);
		// Lib.SetDebugMode(debugMode);
		int32_t L_7 = __this->___debugMode_6;
		Lib_SetDebugMode_m8FD319252460B143C76FA126B6D894F01F7383D7(L_7, NULL);
		// Lib.SetLogFunc(onDebugLog);
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_8 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugLog_12;
		Lib_SetLogFunc_m9A952DCBF998E29E2CB7011DEA9E113EB025BE46(L_8, NULL);
		// Lib.SetErrorFunc(onDebugErr);
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_9 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugErr_13;
		Lib_SetErrorFunc_m61C4E52D0368BD61860BA777E781FE9834FBAE95(L_9, NULL);
		// Lib.Initialize();
		Lib_Initialize_m4996EA4E9DC4DE32B057756A3B9DE4E3E2E75931(NULL);
		// CreateMonitors();
		Manager_CreateMonitors_m8BCE7765DD85CA8C5845FF76DA7F70C4B494290B(__this, NULL);
		// Shader.DisableKeyword("USE_GAMMA_TO_LINEAR_SPACE");
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral80A9107D3B926D84A310D6B78FCF7ADA35D4F087, NULL);
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_OnApplicationQuit_mBEE4E6F6B74418991B00909DFB34EF79978D9CCB (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	{
		// Lib.Finalize();
		Lib_Finalize_m66B0EB958415F61906CC6D0DE022A5ED96E01393(NULL);
		// DestroyMonitors();
		Manager_DestroyMonitors_mE8986F6CE42F7D0D6BC00CD9BD9F46108309CCB4(__this, NULL);
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_OnEnable_m3D1111B06FA511FE3B05B0217E47521C9172E47B (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// renderCoroutine_ = StartCoroutine(OnRender());
		RuntimeObject* L_0;
		L_0 = Manager_OnRender_m346024EB825119992537C0607606DE8F496F123A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		__this->___renderCoroutine__8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderCoroutine__8), (void*)L_1);
		// if (!isFirstFrame_) {
		bool L_2 = __this->___isFirstFrame__11;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// Reinitialize();
		Manager_Reinitialize_mDBAFA70B1D558F34641927B8209EFAA766E68F32(__this, NULL);
	}

IL_0020:
	{
		// Lib.SetDebugMode(debugMode);
		int32_t L_3 = __this->___debugMode_6;
		Lib_SetDebugMode_m8FD319252460B143C76FA126B6D894F01F7383D7(L_3, NULL);
		// Lib.SetLogFunc(onDebugLog);
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_4 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugLog_12;
		Lib_SetLogFunc_m9A952DCBF998E29E2CB7011DEA9E113EB025BE46(L_4, NULL);
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_OnDisable_m6BD56EF651C7BEA244291F7B31B5E27F1F0E9838 (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	{
		// if (renderCoroutine_ != null) {
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___renderCoroutine__8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// StopCoroutine(renderCoroutine_);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___renderCoroutine__8;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
		// renderCoroutine_ = null;
		__this->___renderCoroutine__8 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderCoroutine__8), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
	}

IL_001b:
	{
		// Lib.SetLogFunc(null);
		Lib_SetLogFunc_m9A952DCBF998E29E2CB7011DEA9E113EB025BE46((DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)NULL, NULL);
		// Lib.SetErrorFunc(null);
		Lib_SetErrorFunc_m61C4E52D0368BD61860BA777E781FE9834FBAE95((DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)NULL, NULL);
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Update_mC8E208172E2CA02C1F6B62B4DE67030F48283F0A (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	{
		// Lib.Update();
		Lib_Update_m8D4EF2F43C68347D6E1347E3F711BAD9B5EC0510(NULL);
		// ReinitializeIfNeeded();
		Manager_ReinitializeIfNeeded_m6108A52F17198D4C3DDE3D705AB77D4A221777A1(__this, NULL);
		// UpdateMessage();
		Manager_UpdateMessage_mED962219B7D7506B9AD7C412F852FB77CF968D9C(__this, NULL);
		// isFirstFrame_ = false;
		__this->___isFirstFrame__11 = (bool)0;
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::Reinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Reinitialize_mDBAFA70B1D558F34641927B8209EFAA766E68F32 (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD028C6BDD87663679729E9598A945B2F3F26F5C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[uDD] Reinitialize");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD028C6BDD87663679729E9598A945B2F3F26F5C5, NULL);
		// Lib.Reinitialize();
		Lib_Reinitialize_mBE65F2CAAF9E4CD5263FD6D287DF26B921423E88(NULL);
		// CreateMonitors();
		Manager_CreateMonitors_m8BCE7765DD85CA8C5845FF76DA7F70C4B494290B(__this, NULL);
		// if (onReinitialized != null) {
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_0 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onReinitialized_14;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// onReinitialized();
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_1 = ((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onReinitialized_14;
		NullCheck(L_1);
		ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_inline(L_1, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::ReinitializeIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_ReinitializeIfNeeded_m6108A52F17198D4C3DDE3D705AB77D4A221777A1 (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// bool reinitializeNeeded = false;
		V_0 = (bool)0;
		// for (int i = 0; i < monitors.Count; ++i) {
		V_1 = 0;
		goto IL_0037;
	}

IL_0006:
	{
		// var monitor = monitors[i];
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_0;
		L_0 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_2;
		L_2 = List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A(L_0, L_1, List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		// var state = monitor.state;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Monitor_get_state_m580533C21128EBC211861FE9DFDFD0F7FD560720(L_2, NULL);
		V_2 = L_3;
		// if (
		//     state == DuplicatorState.NotSet ||
		//     state == DuplicatorState.AccessLost ||
		//     state == DuplicatorState.AccessDenied ||
		//     state == DuplicatorState.SessionDisconnected ||
		//     state == DuplicatorState.Unknown
		// ) {
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)7)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)6)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)999)))))
		{
			goto IL_0033;
		}
	}

IL_002f:
	{
		// reinitializeNeeded = true;
		V_0 = (bool)1;
		// break;
		goto IL_0044;
	}

IL_0033:
	{
		// for (int i = 0; i < monitors.Count; ++i) {
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < monitors.Count; ++i) {
		int32_t L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_11;
		L_11 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_inline(L_11, List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0006;
		}
	}

IL_0044:
	{
		// if (Lib.HasMonitorCountChanged()) {
		bool L_13;
		L_13 = Lib_HasMonitorCountChanged_m209227E4A09907D213BAC412021151B07ED58E9A(NULL);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		// reinitializeNeeded = true;
		V_0 = (bool)1;
	}

IL_004d:
	{
		// if (!shouldReinitialize_ && reinitializeNeeded) {
		bool L_14 = __this->___shouldReinitialize__9;
		bool L_15 = V_0;
		if (!((int32_t)(((((int32_t)L_14) == ((int32_t)0))? 1 : 0)&(int32_t)L_15)))
		{
			goto IL_006c;
		}
	}
	{
		// shouldReinitialize_ = true;
		__this->___shouldReinitialize__9 = (bool)1;
		// reinitializationTimer_ = 0f;
		__this->___reinitializationTimer__10 = (0.0f);
	}

IL_006c:
	{
		// if (shouldReinitialize_) {
		bool L_16 = __this->___shouldReinitialize__9;
		if (!L_16)
		{
			goto IL_00a1;
		}
	}
	{
		// if (reinitializationTimer_ > retryReinitializationDuration) {
		float L_17 = __this->___reinitializationTimer__10;
		float L_18 = __this->___retryReinitializationDuration_7;
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_008f;
		}
	}
	{
		// Reinitialize();
		Manager_Reinitialize_mDBAFA70B1D558F34641927B8209EFAA766E68F32(__this, NULL);
		// shouldReinitialize_ = false;
		__this->___shouldReinitialize__9 = (bool)0;
	}

IL_008f:
	{
		// reinitializationTimer_ += Time.deltaTime;
		float L_19 = __this->___reinitializationTimer__10;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___reinitializationTimer__10 = ((float)il2cpp_codegen_add(L_19, L_20));
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::UpdateMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_UpdateMessage_mED962219B7D7506B9AD7C412F852FB77CF968D9C (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tEB0738339E17FEEC0FD44A29DD4ED3F57B51995C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60B8562636C1BE872FB421C38269F69094987C59);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var message = Lib.PopMessage();
		int32_t L_0;
		L_0 = Lib_PopMessage_m5713C5D0BCDEB0145911993F8F0106B2C05CA3E7(NULL);
		V_0 = L_0;
		goto IL_0041;
	}

IL_0008:
	{
		// Debug.Log("[uDD] " + message);
		Il2CppFakeBox<int32_t> L_1(Message_tEB0738339E17FEEC0FD44A29DD4ED3F57B51995C_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral60B8562636C1BE872FB421C38269F69094987C59, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_003b;
	}

IL_002d:
	{
		// ReinitializeMonitors();
		Manager_ReinitializeMonitors_m6C393F82A149AB063DA16E1EE6D26D01FDC8875F(__this, NULL);
		// break;
		goto IL_003b;
	}

IL_0035:
	{
		// RecreateTextures();
		Manager_RecreateTextures_m4C99B72CA05E55C7B3FE547F5B805362DB746B6F(__this, NULL);
	}

IL_003b:
	{
		// message = Lib.PopMessage();
		int32_t L_6;
		L_6 = Lib_PopMessage_m5713C5D0BCDEB0145911993F8F0106B2C05CA3E7(NULL);
		V_0 = L_6;
	}

IL_0041:
	{
		// while (message != Message.None) {
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator uDesktopDuplication.Manager::OnRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Manager_OnRender_m346024EB825119992537C0607606DE8F496F123A (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A* L_0 = (U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A*)il2cpp_codegen_object_new(U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnRenderU3Ed__40__ctor_mF8978FF6E7558B0FB6142DCA9907210375437191(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void uDesktopDuplication.Manager::CreateMonitors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_CreateMonitors_m8BCE7765DD85CA8C5845FF76DA7F70C4B494290B (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDCE54D21F144E130F862B61194F153F0D759B8A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// DestroyMonitors();
		Manager_DestroyMonitors_mE8986F6CE42F7D0D6BC00CD9BD9F46108309CCB4(__this, NULL);
		// for (int i = 0; i < monitorCount; ++i) {
		V_0 = 0;
		goto IL_001e;
	}

IL_000a:
	{
		// monitors.Add(new Monitor(i));
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_0;
		L_0 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		int32_t L_1 = V_0;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_2 = (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143*)il2cpp_codegen_object_new(Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Monitor__ctor_m0F7D94A6CAB688321C3C28B331B245BB110A2B07(L_2, L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mDCE54D21F144E130F862B61194F153F0D759B8A0_inline(L_0, L_2, List_1_Add_mDCE54D21F144E130F862B61194F153F0D759B8A0_RuntimeMethod_var);
		// for (int i = 0; i < monitorCount; ++i) {
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < monitorCount; ++i) {
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Manager_get_monitorCount_mEF081BCD8E0A7BD3E8CF99BAC1F51EC5B6C90C02(NULL);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::DestroyMonitors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_DestroyMonitors_mE8986F6CE42F7D0D6BC00CD9BD9F46108309CCB4 (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mA752A58029D5415F23014648E1A7CB6BF96A914F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < monitors.Count; ++i) {
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		// monitors[i].DestroyTexture();
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_0;
		L_0 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_2;
		L_2 = List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A(L_0, L_1, List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		NullCheck(L_2);
		Monitor_DestroyTexture_mE964E3AD712E758FD56B9C171C5BB78B8C7D467B(L_2, NULL);
		// for (int i = 0; i < monitors.Count; ++i) {
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0018:
	{
		// for (int i = 0; i < monitors.Count; ++i) {
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_5;
		L_5 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_inline(L_5, List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// monitors.Clear();
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_7;
		L_7 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		NullCheck(L_7);
		List_1_Clear_mA752A58029D5415F23014648E1A7CB6BF96A914F_inline(L_7, List_1_Clear_mA752A58029D5415F23014648E1A7CB6BF96A914F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::ReinitializeMonitors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_ReinitializeMonitors_m6C393F82A149AB063DA16E1EE6D26D01FDC8875F (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDCE54D21F144E130F862B61194F153F0D759B8A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < monitorCount; ++i) {
		V_0 = 0;
		goto IL_0037;
	}

IL_0004:
	{
		// if (i == monitors.Count) {
		int32_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_1;
		L_1 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_inline(L_1, List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		// monitors.Add(new Monitor(i));
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_3;
		L_3 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		int32_t L_4 = V_0;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_5 = (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143*)il2cpp_codegen_object_new(Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Monitor__ctor_m0F7D94A6CAB688321C3C28B331B245BB110A2B07(L_5, L_4, NULL);
		NullCheck(L_3);
		List_1_Add_mDCE54D21F144E130F862B61194F153F0D759B8A0_inline(L_3, L_5, List_1_Add_mDCE54D21F144E130F862B61194F153F0D759B8A0_RuntimeMethod_var);
		goto IL_0033;
	}

IL_0023:
	{
		// monitors[i].Reinitialize();
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_6;
		L_6 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_8;
		L_8 = List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A(L_6, L_7, List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		NullCheck(L_8);
		Monitor_Reinitialize_m9A1A9319F3B0B99F74D70C567E9115AA2354165D(L_8, NULL);
	}

IL_0033:
	{
		// for (int i = 0; i < monitorCount; ++i) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < monitorCount; ++i) {
		int32_t L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Manager_get_monitorCount_mEF081BCD8E0A7BD3E8CF99BAC1F51EC5B6C90C02(NULL);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::RecreateTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_RecreateTextures_m4C99B72CA05E55C7B3FE547F5B805362DB746B6F (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < monitorCount; ++i) {
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		// monitors[i].CreateTextureIfNeeded();
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_0;
		L_0 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_2;
		L_2 = List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A(L_0, L_1, List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		NullCheck(L_2);
		Monitor_CreateTextureIfNeeded_m9E06BBB4FDDA44E530CFF55F2BE6B545A43B2CA7(L_2, NULL);
		// for (int i = 0; i < monitorCount; ++i) {
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0018:
	{
		// for (int i = 0; i < monitorCount; ++i) {
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Manager_get_monitorCount_mEF081BCD8E0A7BD3E8CF99BAC1F51EC5B6C90C02(NULL);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager__ctor_mF22C49BC2BE9CA09D8A474E24EB84C8647AC41DA (Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m486FF2EDF3B013AB086B91814AE61783B84B8A99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Monitor> monitors_ = new List<Monitor>();
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_0 = (List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923*)il2cpp_codegen_object_new(List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m486FF2EDF3B013AB086B91814AE61783B84B8A99(L_0, List_1__ctor_m486FF2EDF3B013AB086B91814AE61783B84B8A99_RuntimeMethod_var);
		__this->___monitors__5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___monitors__5), (void*)L_0);
		// [SerializeField] DebugMode debugMode = DebugMode.File;
		__this->___debugMode_6 = 1;
		// [SerializeField] float retryReinitializationDuration = 1f;
		__this->___retryReinitializationDuration_7 = (1.0f);
		// private bool isFirstFrame_ = true;
		__this->___isFirstFrame__11 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void uDesktopDuplication.Manager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager__cctor_m3C77E5A3704A88C5DCBDB0D247B4000AC69DB305 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_OnDebugErr_m00D09DCF9A7D403AD907193C55F3E64CB3DCE30E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_OnDebugLog_m8CB90197A77EEBD8EBDC89F5B27EA1AFD6D56546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static event Lib.DebugLogDelegate onDebugLog = OnDebugLog;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_0 = (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)il2cpp_codegen_object_new(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DebugLogDelegate__ctor_mC4959F3407C7064C07D4ED51D891F2FBDD365C25(L_0, NULL, (intptr_t)((void*)Manager_OnDebugLog_m8CB90197A77EEBD8EBDC89F5B27EA1AFD6D56546_RuntimeMethod_var), NULL);
		((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugLog_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugLog_12), (void*)L_0);
		// public static event Lib.DebugLogDelegate onDebugErr = OnDebugErr;
		DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01* L_1 = (DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01*)il2cpp_codegen_object_new(DebugLogDelegate_t18DAC94635431A80B903689AA9EBEE3CE44DAD01_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DebugLogDelegate__ctor_mC4959F3407C7064C07D4ED51D891F2FBDD365C25(L_1, NULL, (intptr_t)((void*)Manager_OnDebugErr_m00D09DCF9A7D403AD907193C55F3E64CB3DCE30E_RuntimeMethod_var), NULL);
		((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugErr_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_StaticFields*)il2cpp_codegen_static_fields_for(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var))->___onDebugErr_13), (void*)L_1);
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
void ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_Multicast(ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* currentDelegate = reinterpret_cast<ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_OpenInst(ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_OpenStatic(ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_OpenStaticInvoker(ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_ClosedStaticInvoker(ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void uDesktopDuplication.Manager/ReinitializeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReinitializeHandler__ctor_m5FB6962C2A0AF95FC3695CA6F8D1AB4074081B5B (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_Multicast;
}
// System.Void uDesktopDuplication.Manager/ReinitializeHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330 (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult uDesktopDuplication.Manager/ReinitializeHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReinitializeHandler_BeginInvoke_m4BB7465A39386CAFBF23D4E4AB1834AC40FB5A78 (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void uDesktopDuplication.Manager/ReinitializeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReinitializeHandler_EndInvoke_m4CDEA35ABCF2415FC59E659082AE153116BA61C3 (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uDesktopDuplication.Manager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m90213DFFC8F08FB4FECDA29989451F3496DE16A2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5* L_0 = (U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5*)il2cpp_codegen_object_new(U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m437A3E3E25963105988FC90891033FF364E2C1CB(L_0, NULL);
		((U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void uDesktopDuplication.Manager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m437A3E3E25963105988FC90891033FF364E2C1CB (U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean uDesktopDuplication.Manager/<>c::<get_primary>b__12_0(uDesktopDuplication.Monitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_primaryU3Eb__12_0_mFECB989356719E8A2152D3D0FAD7E6136699223A (U3CU3Ec_tF00B73898A6697F1436F1522AB4AC155AFC1C4D5* __this, Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* ___monitor0, const RuntimeMethod* method) 
{
	{
		// return instance.monitors_.Find(monitor => monitor.isPrimary);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_0 = ___monitor0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Monitor_get_isPrimary_mFD1E80C3760FECDCD9A16FBFCD5BD3F268289D9B(L_0, NULL);
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
// System.Void uDesktopDuplication.Manager/<OnRender>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnRenderU3Ed__40__ctor_mF8978FF6E7558B0FB6142DCA9907210375437191 (U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void uDesktopDuplication.Manager/<OnRender>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnRenderU3Ed__40_System_IDisposable_Dispose_mD621FCE88AE9A07F4169E59D914C43A6F7646D7D (U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean uDesktopDuplication.Manager/<OnRender>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnRenderU3Ed__40_MoveNext_mD37386DFB540ED37E60C51554E6C8F2045CC7685 (U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0017:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_3 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < monitors.Count; ++i) {
		V_1 = 0;
		goto IL_005b;
	}

IL_0036:
	{
		// var monitor = monitors[i];
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_4;
		L_4 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_6;
		L_6 = List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A(L_4, L_5, List_1_get_Item_m04AE27482CE79ADEB859A30AE87E908628A09A0A_RuntimeMethod_var);
		V_2 = L_6;
		// if (monitor.shouldBeUpdated) {
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_7 = V_2;
		NullCheck(L_7);
		bool L_8;
		L_8 = Monitor_get_shouldBeUpdated_m37F17CF43861FEBE37533467E6F670D62E07036B_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		// monitor.Render();
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_9 = V_2;
		NullCheck(L_9);
		Monitor_Render_m7EE3FD91D3B8EE049D37672B199A8133F6C74FD2(L_9, NULL);
	}

IL_0050:
	{
		// monitor.shouldBeUpdated = false;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_10 = V_2;
		NullCheck(L_10);
		Monitor_set_shouldBeUpdated_m070227673B000342C0199DCA09F5105609680D07_inline(L_10, (bool)0, NULL);
		// for (int i = 0; i < monitors.Count; ++i) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_005b:
	{
		// for (int i = 0; i < monitors.Count; ++i) {
		int32_t L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		List_1_t6DEFCFFDC90E7784655356FED1D2D83B3DFA9923* L_13;
		L_13 = Manager_get_monitors_m0F9F9ED7E91747EB9177F034B54DC53CAF7A1F25(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_inline(L_13, List_1_get_Count_m5C9E43BB2A1576C36AB2FD86D35D3D7478AC97F7_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0017;
	}
}
// System.Object uDesktopDuplication.Manager/<OnRender>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnRenderU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mABC64E9ACB02D2D042A6960550BCF908D0D164B7 (U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void uDesktopDuplication.Manager/<OnRender>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnRenderU3Ed__40_System_Collections_IEnumerator_Reset_mF570DA090C0C904073641DED04EEFA7BFD0E1456 (U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnRenderU3Ed__40_System_Collections_IEnumerator_Reset_mF570DA090C0C904073641DED04EEFA7BFD0E1456_RuntimeMethod_var)));
	}
}
// System.Object uDesktopDuplication.Manager/<OnRender>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnRenderU3Ed__40_System_Collections_IEnumerator_get_Current_mE188021FE06BA632619FACE169DA3AABF4EB71CD (U3COnRenderU3Ed__40_t06DCB671828F0F4CB972C230F86AAA3857D3B41A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void uDesktopDuplication.Monitor::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor__ctor_m0F7D94A6CAB688321C3C28B331B245BB110A2B07 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08F8FC3EB0C483BFAA023323CF33BC189B1EA005);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F1AF27ABA55E842410CA98D6709FBB9065AE8EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BD0AE5BBCC92FEAB07A23CA55C0F0511D56D833);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C81663716F1FA4B6F23FEBB765070F85556424D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A64713F08EBDF3D78F25AAC4B2A0000B0CC8576);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7296C2D60B309178E704EDC4742E710E8FDFA669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral769098E00DF076ADAF98697A4076D29764C6DC41);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public Monitor(int id)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		Monitor_set_id_m8418C87A0189998FD495174DDC9AEB3790CB89C4_inline(__this, L_0, NULL);
		// switch (state)
		int32_t L_1;
		L_1 = Monitor_get_state_m580533C21128EBC211861FE9DFDFD0F7FD560720(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (-1))))
		{
			case 0:
			{
				goto IL_00d7;
			}
			case 1:
			{
				goto IL_011d;
			}
			case 2:
			{
				goto IL_011d;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_0068;
			}
			case 5:
			{
				goto IL_008f;
			}
			case 6:
			{
				goto IL_00fb;
			}
			case 7:
			{
				goto IL_00b3;
			}
		}
	}
	{
		goto IL_00fb;
	}

IL_0041:
	{
		// Debug.LogErrorFormat("[uDD] {0}:{1} => Invalid.", id, name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___id0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		String_t* L_9;
		L_9 = Monitor_get_name_mEAF1C8443F1EB1CCDD6EFDECD9A4EBDCAB4ADD61(__this, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral08F8FC3EB0C483BFAA023323CF33BC189B1EA005, L_8, NULL);
		// break;
		goto IL_011d;
	}

IL_0068:
	{
		// Debug.LogWarningFormat("[uDD] {0}:{1} => Access Denied.", id, name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		int32_t L_12 = ___id0;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		String_t* L_16;
		L_16 = Monitor_get_name_mEAF1C8443F1EB1CCDD6EFDECD9A4EBDCAB4ADD61(__this, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteral4C81663716F1FA4B6F23FEBB765070F85556424D, L_15, NULL);
		// break;
		goto IL_011d;
	}

IL_008f:
	{
		// Debug.LogWarningFormat("[uDD] {0}:{1} => Unsupported.", id, name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		int32_t L_19 = ___id0;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_18;
		String_t* L_23;
		L_23 = Monitor_get_name_mEAF1C8443F1EB1CCDD6EFDECD9A4EBDCAB4ADD61(__this, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_23);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteral769098E00DF076ADAF98697A4076D29764C6DC41, L_22, NULL);
		// break;
		goto IL_011d;
	}

IL_00b3:
	{
		// Debug.LogWarningFormat("[uDD] {0}:{1} => Disconnected.", id, name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		int32_t L_26 = ___id0;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_25;
		String_t* L_30;
		L_30 = Monitor_get_name_mEAF1C8443F1EB1CCDD6EFDECD9A4EBDCAB4ADD61(__this, NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_30);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteral7296C2D60B309178E704EDC4742E710E8FDFA669, L_29, NULL);
		// break;
		goto IL_011d;
	}

IL_00d7:
	{
		// Debug.LogErrorFormat("[uDD] {0}:{1} => Something wrong.", id, name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_31;
		int32_t L_33 = ___id0;
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_32;
		String_t* L_37;
		L_37 = Monitor_get_name_mEAF1C8443F1EB1CCDD6EFDECD9A4EBDCAB4ADD61(__this, NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_37);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral5A64713F08EBDF3D78F25AAC4B2A0000B0CC8576, L_36, NULL);
		// break;
		goto IL_011d;
	}

IL_00fb:
	{
		// Debug.LogErrorFormat("[uDD] {0}:{1} => Unknown error.", id, name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = L_38;
		int32_t L_40 = ___id0;
		int32_t L_41 = L_40;
		RuntimeObject* L_42 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_42);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_39;
		String_t* L_44;
		L_44 = Monitor_get_name_mEAF1C8443F1EB1CCDD6EFDECD9A4EBDCAB4ADD61(__this, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_44);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral0F1AF27ABA55E842410CA98D6709FBB9065AE8EE, L_43, NULL);
	}

IL_011d:
	{
		// if (dpiX == 0 || dpiY == 0) {
		int32_t L_45;
		L_45 = Monitor_get_dpiX_m4B06629FD072C6CE4DEFB3A17AD983C77B24DBDC(__this, NULL);
		if (!L_45)
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_46;
		L_46 = Monitor_get_dpiY_m2BCA42DCD2D5C75AE88894A8B9030E519B3DDDD8(__this, NULL);
		if (L_46)
		{
			goto IL_014f;
		}
	}

IL_012d:
	{
		// Debug.LogWarningFormat("[uDD] {0}:{1} => Could not get DPI", id, name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = L_47;
		int32_t L_49 = ___id0;
		int32_t L_50 = L_49;
		RuntimeObject* L_51 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = L_48;
		String_t* L_53;
		L_53 = Monitor_get_name_mEAF1C8443F1EB1CCDD6EFDECD9A4EBDCAB4ADD61(__this, NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_53);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteral2BD0AE5BBCC92FEAB07A23CA55C0F0511D56D833, L_52, NULL);
	}

IL_014f:
	{
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Monitor::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Finalize_m47CF0F1258FDBDB19B450C70D51614A32ED778B5 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0002:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// {
			goto IL_0009;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0009:
	{
		// }
		return;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void uDesktopDuplication.Monitor::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_set_id_m8418C87A0189998FD495174DDC9AEB3790CB89C4 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean uDesktopDuplication.Monitor::get_exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_exists_m5476AC30EEA9896E30B0BD678309FA5CD31B2DEA (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return id < Manager.monitorCount; }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Manager_get_monitorCount_mEF081BCD8E0A7BD3E8CF99BAC1F51EC5B6C90C02(NULL);
		return (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
	}
}
// uDesktopDuplication.DuplicatorState uDesktopDuplication.Monitor::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_state_m580533C21128EBC211861FE9DFDFD0F7FD560720 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetState(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetState_m60E258019ADDF8B539CC393CA28D227392E8E084(L_0, NULL);
		return L_1;
	}
}
// System.Boolean uDesktopDuplication.Monitor::get_available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_available_m506AB7B7B82DFCC82F03A1948E18CF25C3EF49AB (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// return
		//     state == DuplicatorState.Ready ||
		//     state == DuplicatorState.Running;
		int32_t L_0;
		L_0 = Monitor_get_state_m580533C21128EBC211861FE9DFDFD0F7FD560720(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1;
		L_1 = Monitor_get_state_m580533C21128EBC211861FE9DFDFD0F7FD560720(__this, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}

IL_0012:
	{
		return (bool)1;
	}
}
// System.String uDesktopDuplication.Monitor::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monitor_get_name_mEAF1C8443F1EB1CCDD6EFDECD9A4EBDCAB4ADD61 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetName(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		String_t* L_1;
		L_1 = Lib_GetName_m3A8D12FCC4255C1897F4C74D08DCEB2C3A0DB3EC(L_0, NULL);
		return L_1;
	}
}
// System.Boolean uDesktopDuplication.Monitor::get_isPrimary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_isPrimary_mFD1E80C3760FECDCD9A16FBFCD5BD3F268289D9B (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.IsPrimary(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		bool L_1;
		L_1 = Lib_IsPrimary_m92E0351E10A5800E6BBCA4B15B162A81F6723325(L_0, NULL);
		return L_1;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_left_m560854FE145C4F6D8F02C78DD41BEF82680E8918 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetLeft(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetLeft_m24BB612591FCB0356CC1318144112684D59CD43D(L_0, NULL);
		return L_1;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_right_mB4E55B3CB8D2F58FF752AFA5872CBEB74FFA0DCB (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetRight(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetRight_m7AA36790C65050901378BF9D95DE11BC451ACF33(L_0, NULL);
		return L_1;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_top_m7BB25AF36EC0863756F2D56252A5FBC592A872B5 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetTop(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetTop_m7B834A93CEE19AB728F250DD4FF1DA2D786126DA(L_0, NULL);
		return L_1;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_bottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_bottom_m41891E1E99712A37B4B03424AB310B053F0A1A25 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetBottom(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetBottom_m78F2362B35AC37AEF2D810EAA095C96475C466F6(L_0, NULL);
		return L_1;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_width_m76216409DDFC2D2967A41146D0AA02F7F09DAFD2 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetWidth(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetWidth_m6B6BAEE58E017EF8FC753BD770E6117DAF49C64B(L_0, NULL);
		return L_1;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_height_m173746A6510AC28B5C1418983B14D86922706F2B (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetHeight(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetHeight_m6667CD4121B410DAF776BFCA7CE69A4DA097E20B(L_0, NULL);
		return L_1;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_dpiX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_dpiX_m4B06629FD072C6CE4DEFB3A17AD983C77B24DBDC (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var dpi = Lib.GetDpiX(id);
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetDpiX_m2B100E7CF59AEBC5736FB25983F5A2E289665D59(L_0, NULL);
		V_0 = L_1;
		// if (dpi == 0) dpi = 100; // when monitors are duplicated
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (dpi == 0) dpi = 100; // when monitors are duplicated
		V_0 = ((int32_t)100);
	}

IL_0012:
	{
		// return dpi;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_dpiY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_dpiY_m2BCA42DCD2D5C75AE88894A8B9030E519B3DDDD8 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var dpi = Lib.GetDpiY(id);
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetDpiY_m588C6D75DBD35CF85C9656D19D953949766D3511(L_0, NULL);
		V_0 = L_1;
		// if (dpi == 0) dpi = 100; // when monitors are duplicated
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (dpi == 0) dpi = 100; // when monitors are duplicated
		V_0 = ((int32_t)100);
	}

IL_0012:
	{
		// return dpi;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean uDesktopDuplication.Monitor::get_isHDR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_isHDR_m07661BA492266F37AE0C35C238882CA89F43B627 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.IsHDR(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		bool L_1;
		L_1 = Lib_IsHDR_mD760476134B61444B6F8D3F9B4BC095F4A084A29(L_0, NULL);
		return L_1;
	}
}
// System.Single uDesktopDuplication.Monitor::get_widthMeter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Monitor_get_widthMeter_mE6C1ABB74B6A13D2AF08C72B01CC60E3A657B900 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return width / dpiX * 0.0254f; }
		int32_t L_0;
		L_0 = Monitor_get_width_m76216409DDFC2D2967A41146D0AA02F7F09DAFD2(__this, NULL);
		int32_t L_1;
		L_1 = Monitor_get_dpiX_m4B06629FD072C6CE4DEFB3A17AD983C77B24DBDC(__this, NULL);
		return ((float)il2cpp_codegen_multiply(((float)((int32_t)(L_0/L_1))), (0.0253999997f)));
	}
}
// System.Single uDesktopDuplication.Monitor::get_heightMeter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Monitor_get_heightMeter_mBB4EF380FE2DC54AED17EF5C5A42C45159160AFB (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return height / dpiY * 0.0254f; }
		int32_t L_0;
		L_0 = Monitor_get_height_m173746A6510AC28B5C1418983B14D86922706F2B(__this, NULL);
		int32_t L_1;
		L_1 = Monitor_get_dpiY_m2BCA42DCD2D5C75AE88894A8B9030E519B3DDDD8(__this, NULL);
		return ((float)il2cpp_codegen_multiply(((float)((int32_t)(L_0/L_1))), (0.0253999997f)));
	}
}
// uDesktopDuplication.MonitorRotation uDesktopDuplication.Monitor::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_rotation_m84CCFC395CB5F9BED894F2BF8129A8F27B1644B2 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetRotation(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetRotation_m63C1BF7F395F1DC50BCF360D1D6D4F4782A2BD9E(L_0, NULL);
		return L_1;
	}
}
// System.Single uDesktopDuplication.Monitor::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Monitor_get_aspect_mE0418B1830AEF2FCA60BBFACD2D81D2D4F5EFCC7 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return (float)width / height; }
		int32_t L_0;
		L_0 = Monitor_get_width_m76216409DDFC2D2967A41146D0AA02F7F09DAFD2(__this, NULL);
		int32_t L_1;
		L_1 = Monitor_get_height_m173746A6510AC28B5C1418983B14D86922706F2B(__this, NULL);
		return ((float)(((float)L_0)/((float)L_1)));
	}
}
// System.Boolean uDesktopDuplication.Monitor::get_isHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_isHorizontal_mD55E48980D7478DE901530B93E7EC4EA314684DE (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// return
		//     (rotation == MonitorRotation.Identity) ||
		//     (rotation == MonitorRotation.Rotate180);
		int32_t L_0;
		L_0 = Monitor_get_rotation_m84CCFC395CB5F9BED894F2BF8129A8F27B1644B2(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1;
		L_1 = Monitor_get_rotation_m84CCFC395CB5F9BED894F2BF8129A8F27B1644B2(__this, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Boolean uDesktopDuplication.Monitor::get_isVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_isVertical_m9CFE3AADA10FDB9182D40FDDBFB57FD5BA92B0B7 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// return
		//     (rotation == MonitorRotation.Rotate90) ||
		//     (rotation == MonitorRotation.Rotate270);
		int32_t L_0;
		L_0 = Monitor_get_rotation_m84CCFC395CB5F9BED894F2BF8129A8F27B1644B2(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1;
		L_1 = Monitor_get_rotation_m84CCFC395CB5F9BED894F2BF8129A8F27B1644B2(__this, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Boolean uDesktopDuplication.Monitor::get_isCursorVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_isCursorVisible_m3E3B66C5B4CE53F0998D7EC7ACA722DD9F71FCE4 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.IsCursorVisible(); }
		bool L_0;
		L_0 = Lib_IsCursorVisible_mAF8413033D1BC1115B254BC60AC43E1215E377B4(NULL);
		return L_0;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_cursorX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_cursorX_mFA743AF6782A00B261883B5194C7C10DC2BD0360 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetCursorMonitorId() == id ? Lib.GetCursorX() : -1; }
		int32_t L_0;
		L_0 = Lib_GetCursorMonitorId_mF1F5AF6EF8E3BD51B07B7C25420B97384443426F(NULL);
		int32_t L_1;
		L_1 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Lib_GetCursorX_mEB981373B2B9EFDC935E0F5FBAC706E6870C0B8A(NULL);
		return L_2;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_cursorY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_cursorY_m04D0C107ADDBB690FE7F3B04ED659F3FC3CCF22F (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetCursorMonitorId() == id ? Lib.GetCursorY() : -1; }
		int32_t L_0;
		L_0 = Lib_GetCursorMonitorId_mF1F5AF6EF8E3BD51B07B7C25420B97384443426F(NULL);
		int32_t L_1;
		L_1 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Lib_GetCursorY_m2E985103C59F543401E132130B1139A4DB7B3D07(NULL);
		return L_2;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_systemCursorX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_systemCursorX_mDBD661BE6AB02F18382AF6CB15639C445FDFCC54 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// var p = Utility.GetCursorPos();
		MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077 L_0;
		L_0 = Utility_GetCursorPos_mD5600F26D3C47F2C20D07176266187CAF85ED5A9(NULL);
		// return p.x - left;
		int32_t L_1 = L_0.___x_0;
		int32_t L_2;
		L_2 = Monitor_get_left_m560854FE145C4F6D8F02C78DD41BEF82680E8918(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_systemCursorY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_systemCursorY_m10E804EBC66680779F3DE4B1BE03552E51ED0B85 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// var p = Utility.GetCursorPos();
		MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077 L_0;
		L_0 = Utility_GetCursorPos_mD5600F26D3C47F2C20D07176266187CAF85ED5A9(NULL);
		// return p.y - top;
		int32_t L_1 = L_0.___y_1;
		int32_t L_2;
		L_2 = Monitor_get_top_m7BB25AF36EC0863756F2D56252A5FBC592A872B5(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_cursorShapeWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_cursorShapeWidth_m0B28097620E73623B65787DBE700A13DD9AF92ED (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetCursorShapeWidth(); }
		int32_t L_0;
		L_0 = Lib_GetCursorShapeWidth_mF05E1ED42ADC2A165299E882702346D08BBE29B9(NULL);
		return L_0;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_cursorShapeHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_cursorShapeHeight_m2D2CE26C49D5B4BDC26A0D0F75BB71137055DEA3 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetCursorShapeHeight(); }
		int32_t L_0;
		L_0 = Lib_GetCursorShapeHeight_m10F5F9822C2ACA61F41C175BC72048BDD0DDB951(NULL);
		return L_0;
	}
}
// uDesktopDuplication.CursorShapeType uDesktopDuplication.Monitor::get_cursorShapeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_cursorShapeType_m392A4EF087CA70B633E753D8846FDD86E39AB0A0 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetCursorShapeType(); }
		int32_t L_0;
		L_0 = Lib_GetCursorShapeType_m82B65FD4D7F4B51E799BE06BD324BBAB1B014C26(NULL);
		return L_0;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_moveRectCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_moveRectCount_m93B0011A566E25B3A265083DFB6984454CAEA69B (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetMoveRectCount(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetMoveRectCount_m12FA5957227C92BE7C8900BF6C2763D76F722BB2(L_0, NULL);
		return L_1;
	}
}
// uDesktopDuplication.DXGI_OUTDUPL_MOVE_RECT[] uDesktopDuplication.Monitor::get_moveRects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67* Monitor_get_moveRects_m9D82CA1A6A868213EAC77F772F85D08DF52A79A5 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetMoveRects(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		DXGI_OUTDUPL_MOVE_RECTU5BU5D_t5646E194A6A84CA8BF220B8DF336D1BBE9256E67* L_1;
		L_1 = Lib_GetMoveRects_m81386047D61E3C2FD0C6FA3BADD1D4B9A34FDEFA(L_0, NULL);
		return L_1;
	}
}
// System.Int32 uDesktopDuplication.Monitor::get_dirtyRectCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monitor_get_dirtyRectCount_m7611D57487FF9BDA2021CF2F3823D2DB94645A26 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetDirtyRectCount(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_1;
		L_1 = Lib_GetDirtyRectCount_mC1C58B2261ED9DE68B6FD2210446395BEEBC6F75(L_0, NULL);
		return L_1;
	}
}
// uDesktopDuplication.RECT[] uDesktopDuplication.Monitor::get_dirtyRects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95* Monitor_get_dirtyRects_m73A4E34BD82E630DA18B236163CEF61DE3921D48 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetDirtyRects(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		RECTU5BU5D_t551BAD6C60FDE82147274B6FA22A7D9681D7FE95* L_1;
		L_1 = Lib_GetDirtyRects_m7A3261F1F9715E364D016CF6B33E1CA31C9AFF5C(L_0, NULL);
		return L_1;
	}
}
// System.IntPtr uDesktopDuplication.Monitor::get_buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Monitor_get_buffer_mF9B55FC573B36C56DDDB3848F354766176298817 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.GetBuffer(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		intptr_t L_1;
		L_1 = Lib_GetBuffer_m4EB671F7F613DA28721ECB9D5F01F4983E9C960E(L_0, NULL);
		return L_1;
	}
}
// System.Boolean uDesktopDuplication.Monitor::get_hasBeenUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_hasBeenUpdated_mC7BA7108276EC6176BC2E08C7FC55C3EFFDD64F4 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get { return Lib.HasBeenUpdated(id); }
		int32_t L_0;
		L_0 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		bool L_1;
		L_1 = Lib_HasBeenUpdated_m463303AB5FA8EADEE29A7D40734EC009BEE21964(L_0, NULL);
		return L_1;
	}
}
// System.Boolean uDesktopDuplication.Monitor::get_useGetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_useGetPixels_m72C45EB1B5E1016B5B2B1874F1D6EFE03B323C31 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// return useGetPixels_;
		bool L_0 = __this->___useGetPixels__1;
		return L_0;
	}
}
// System.Void uDesktopDuplication.Monitor::set_useGetPixels(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_set_useGetPixels_mF5D5BCC0519DDD74F655F832B3AC211E7B3A2B4A (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// useGetPixels_ = value;
		bool L_0 = ___value0;
		__this->___useGetPixels__1 = L_0;
		// Lib.UseGetPixels(id, value);
		int32_t L_1;
		L_1 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		bool L_2 = ___value0;
		bool L_3;
		L_3 = Lib_UseGetPixels_m288169924EFF85360ADF4A99A9BE479290A186F7(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean uDesktopDuplication.Monitor::get_shouldBeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_get_shouldBeUpdated_m37F17CF43861FEBE37533467E6F670D62E07036B (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CshouldBeUpdatedU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void uDesktopDuplication.Monitor::set_shouldBeUpdated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_set_shouldBeUpdated_m070227673B000342C0199DCA09F5105609680D07 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		bool L_0 = ___value0;
		__this->___U3CshouldBeUpdatedU3Ek__BackingField_2 = L_0;
		return;
	}
}
// UnityEngine.Texture2D uDesktopDuplication.Monitor::get_errorTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Monitor_get_errorTexture_m027E5542E21118432181E29FB164A5EB1D7C7AAC (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mBEC87DD291ED9662B46356519E0723C0ABB12877_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B2_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B1_0 = NULL;
	{
		// return errorTexture_ ??
		//     (errorTexture_ = Resources.Load<Texture2D>(errorTexturePath));
		il2cpp_codegen_runtime_class_init_inline(Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ((Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_StaticFields*)il2cpp_codegen_static_fields_for(Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var))->___errorTexture__3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_StaticFields*)il2cpp_codegen_static_fields_for(Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var))->___errorTexturePath_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mBEC87DD291ED9662B46356519E0723C0ABB12877(L_2, Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mBEC87DD291ED9662B46356519E0723C0ABB12877_RuntimeMethod_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = L_3;
		((Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_StaticFields*)il2cpp_codegen_static_fields_for(Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var))->___errorTexture__3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_StaticFields*)il2cpp_codegen_static_fields_for(Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var))->___errorTexture__3), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// UnityEngine.Texture2D uDesktopDuplication.Monitor::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Monitor_get_texture_m017F32DD552F102D38DA504ACE3A58FD66F95370 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!available) return errorTexture;
		bool L_0;
		L_0 = Monitor_get_available_m506AB7B7B82DFCC82F03A1948E18CF25C3EF49AB(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (!available) return errorTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = Monitor_get_errorTexture_m027E5542E21118432181E29FB164A5EB1D7C7AAC(__this, NULL);
		return L_1;
	}

IL_000f:
	{
		// if (texture_ == null) CreateTextureIfNeeded();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___texture__5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// if (texture_ == null) CreateTextureIfNeeded();
		Monitor_CreateTextureIfNeeded_m9E06BBB4FDDA44E530CFF55F2BE6B545A43B2CA7(__this, NULL);
	}

IL_0023:
	{
		// return texture_;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___texture__5;
		return L_4;
	}
}
// System.Void uDesktopDuplication.Monitor::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Render_m7EE3FD91D3B8EE049D37672B199A8133F6C74FD2 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (texture_ && available && texturePtr_ != System.IntPtr.Zero) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___texture__5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		bool L_2;
		L_2 = Monitor_get_available_m506AB7B7B82DFCC82F03A1948E18CF25C3EF49AB(__this, NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		intptr_t L_3 = __this->___texturePtr__6;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// Lib.SetTexturePtr(id, texturePtr_);
		int32_t L_6;
		L_6 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		intptr_t L_7 = __this->___texturePtr__6;
		int32_t L_8;
		L_8 = Lib_SetTexturePtr_m9272F2CC3CFF2B7E6EDBD3140A49CDD7363C7579(L_6, L_7, NULL);
		// GL.IssuePluginEvent(Lib.GetRenderEventFunc(), id);
		intptr_t L_9;
		L_9 = Lib_GetRenderEventFunc_m5D24A8FB8780DCFDB063BA15C0FAB803C6CDF000(NULL);
		int32_t L_10;
		L_10 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		GL_IssuePluginEvent_m3591CC23273DA50F8B37FF0DA5844F01B12B6C84(L_9, L_10, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Monitor::GetCursorTexture(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_GetCursorTexture_m9671A09015CBFB19E59E705BCA2C920808E070FE (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	{
		// Lib.GetCursorTexture(ptr);
		intptr_t L_0 = ___ptr0;
		Lib_GetCursorTexture_m49B9AEA404396F241ADB4BAB7830AC70C42AC92E(L_0, NULL);
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Monitor::CreateTextureIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_CreateTextureIfNeeded_m9E06BBB4FDDA44E530CFF55F2BE6B545A43B2CA7 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (!available) return;
		bool L_0;
		L_0 = Monitor_get_available_m506AB7B7B82DFCC82F03A1948E18CF25C3EF49AB(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!available) return;
		return;
	}

IL_0009:
	{
		// var w = isHorizontal ? width : height;
		bool L_1;
		L_1 = Monitor_get_isHorizontal_mD55E48980D7478DE901530B93E7EC4EA314684DE(__this, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2;
		L_2 = Monitor_get_height_m173746A6510AC28B5C1418983B14D86922706F2B(__this, NULL);
		G_B5_0 = L_2;
		goto IL_001f;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Monitor_get_width_m76216409DDFC2D2967A41146D0AA02F7F09DAFD2(__this, NULL);
		G_B5_0 = L_3;
	}

IL_001f:
	{
		V_0 = G_B5_0;
		// var h = isHorizontal ? height : width;
		bool L_4;
		L_4 = Monitor_get_isHorizontal_mD55E48980D7478DE901530B93E7EC4EA314684DE(__this, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5;
		L_5 = Monitor_get_width_m76216409DDFC2D2967A41146D0AA02F7F09DAFD2(__this, NULL);
		G_B8_0 = L_5;
		goto IL_0036;
	}

IL_0030:
	{
		int32_t L_6;
		L_6 = Monitor_get_height_m173746A6510AC28B5C1418983B14D86922706F2B(__this, NULL);
		G_B8_0 = L_6;
	}

IL_0036:
	{
		V_1 = G_B8_0;
		// bool shouldCreate = true;
		V_2 = (bool)1;
		// if (texture_ && texture_.width == w && texture_.height == h) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___texture__5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___texture__5;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0064;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = __this->___texture__5;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_12);
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0064;
		}
	}
	{
		// shouldCreate = false;
		V_2 = (bool)0;
	}

IL_0064:
	{
		// if (w <= 0 || h <= 0) {
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_006e;
		}
	}

IL_006c:
	{
		// shouldCreate = false;
		V_2 = (bool)0;
	}

IL_006e:
	{
		// if (shouldCreate) {
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0077;
		}
	}
	{
		// CreateTexture();
		Monitor_CreateTexture_m41D46ADACF955C27BB934B02B02052F6FBD44064(__this, NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Monitor::CreateTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_CreateTexture_m41D46ADACF955C27BB934B02B02052F6FBD44064 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// DestroyTexture();
		Monitor_DestroyTexture_mE964E3AD712E758FD56B9C171C5BB78B8C7D467B(__this, NULL);
		// var w = isHorizontal ? width : height;
		bool L_0;
		L_0 = Monitor_get_isHorizontal_mD55E48980D7478DE901530B93E7EC4EA314684DE(__this, NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1;
		L_1 = Monitor_get_height_m173746A6510AC28B5C1418983B14D86922706F2B(__this, NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		int32_t L_2;
		L_2 = Monitor_get_width_m76216409DDFC2D2967A41146D0AA02F7F09DAFD2(__this, NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		// var h = isHorizontal ? height : width;
		bool L_3;
		L_3 = Monitor_get_isHorizontal_mD55E48980D7478DE901530B93E7EC4EA314684DE(__this, NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4;
		L_4 = Monitor_get_width_m76216409DDFC2D2967A41146D0AA02F7F09DAFD2(__this, NULL);
		G_B6_0 = L_4;
		goto IL_0033;
	}

IL_002d:
	{
		int32_t L_5;
		L_5 = Monitor_get_height_m173746A6510AC28B5C1418983B14D86922706F2B(__this, NULL);
		G_B6_0 = L_5;
	}

IL_0033:
	{
		V_1 = G_B6_0;
		// texture_ = new Texture2D(w, h, TextureFormat.BGRA32, false);
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_8, L_6, L_7, ((int32_t)14), (bool)0, NULL);
		__this->___texture__5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texture__5), (void*)L_8);
		// texturePtr_ = texture_.GetNativeTexturePtr();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___texture__5;
		NullCheck(L_9);
		intptr_t L_10;
		L_10 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_9, NULL);
		__this->___texturePtr__6 = L_10;
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Monitor::DestroyTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_DestroyTexture_mE964E3AD712E758FD56B9C171C5BB78B8C7D467B (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (texture_) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___texture__5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// Object.Destroy(texture_);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___texture__5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// texture_ = null;
		__this->___texture__5 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texture__5), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		// texturePtr_ = System.IntPtr.Zero;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___texturePtr__6 = L_3;
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Monitor::Reinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Reinitialize_m9A1A9319F3B0B99F74D70C567E9115AA2354165D (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// CreateTextureIfNeeded();
		Monitor_CreateTextureIfNeeded_m9E06BBB4FDDA44E530CFF55F2BE6B545A43B2CA7(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Color32[] uDesktopDuplication.Monitor::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Monitor_GetPixels_m68E7BBDEA7D3ADB502A70F18993278E466810A94 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86525F95BC4F6CA5FCAE84505C7ECDC072497CC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!useGetPixels_) {
		bool L_0 = __this->___useGetPixels__1;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogErrorFormat("Please set Monitor[{0}].useGetPixels as true.", id);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3;
		L_3 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral86525F95BC4F6CA5FCAE84505C7ECDC072497CC4, L_2, NULL);
		// return null;
		return (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL;
	}

IL_0028:
	{
		// return Lib.GetPixels(id, x, y, width, height);
		int32_t L_6;
		L_6 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_7 = ___x0;
		int32_t L_8 = ___y1;
		int32_t L_9 = ___width2;
		int32_t L_10 = ___height3;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_11;
		L_11 = Lib_GetPixels_m87C0BE1CC14CEF226E1A6E366CC23ACC1B9B2104(L_6, L_7, L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Boolean uDesktopDuplication.Monitor::GetPixels(UnityEngine.Color32[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_GetPixels_m2B5A5F3675EA08B797F5B4E8FD1F6F16BE16A9DD (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86525F95BC4F6CA5FCAE84505C7ECDC072497CC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!useGetPixels_) {
		bool L_0 = __this->___useGetPixels__1;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogErrorFormat("Please set Monitor[{0}].useGetPixels as true.", id);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3;
		L_3 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral86525F95BC4F6CA5FCAE84505C7ECDC072497CC4, L_2, NULL);
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// return Lib.GetPixels(id, colors, x, y, width, height);
		int32_t L_6;
		L_6 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = ___colors0;
		int32_t L_8 = ___x1;
		int32_t L_9 = ___y2;
		int32_t L_10 = ___width3;
		int32_t L_11 = ___height4;
		bool L_12;
		L_12 = Lib_GetPixels_m13569F4F36E09BC3075508098AAC2670DCF2FBD7(L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// UnityEngine.Color32 uDesktopDuplication.Monitor::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Monitor_GetPixel_mACEF638F27C73975906D9ADAF8E10E89CA134BD6 (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86525F95BC4F6CA5FCAE84505C7ECDC072497CC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!useGetPixels_) {
		bool L_0 = __this->___useGetPixels__1;
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogErrorFormat("Please set Monitor[{0}].useGetPixels as true.", id);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3;
		L_3 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral86525F95BC4F6CA5FCAE84505C7ECDC072497CC4, L_2, NULL);
		// return Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		L_7 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_6, NULL);
		return L_7;
	}

IL_0031:
	{
		// return Lib.GetPixel(id, x, y);
		int32_t L_8;
		L_8 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(__this, NULL);
		int32_t L_9 = ___x0;
		int32_t L_10 = ___y1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11;
		L_11 = Lib_GetPixel_mCFF58D6C29D5CC610B0E2EDD80E8C077DEB7139E(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Void uDesktopDuplication.Monitor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor__cctor_mCF66C1C708A7E0937E37D1FF67EC0788F9E0CD10 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB61511AB4BF06C3CB2A0A4190FCBB65ED71F0F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string errorTexturePath = "uDesktopDuplication/Textures/NotAvailable";
		((Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_StaticFields*)il2cpp_codegen_static_fields_for(Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var))->___errorTexturePath_4 = _stringLiteralDB61511AB4BF06C3CB2A0A4190FCBB65ED71F0F3;
		Il2CppCodeGenWriteBarrier((void**)(&((Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_StaticFields*)il2cpp_codegen_static_fields_for(Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143_il2cpp_TypeInfo_var))->___errorTexturePath_4), (void*)_stringLiteralDB61511AB4BF06C3CB2A0A4190FCBB65ED71F0F3);
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
// uDesktopDuplication.Monitor uDesktopDuplication.Texture::get_monitor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// get { return monitor_; }
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_0 = __this->___monitor__4;
		return L_0;
	}
}
// System.Void uDesktopDuplication.Texture::set_monitor(uDesktopDuplication.Monitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_monitor_m90301C774542724E446C1931FB1BA7E7FB23741E (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* ___value0, const RuntimeMethod* method) 
{
	{
		// monitor_ = value;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_0 = ___value0;
		__this->___monitor__4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___monitor__4), (void*)L_0);
		// if (monitor_ != null) {
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_1 = __this->___monitor__4;
		if (!L_1)
		{
			goto IL_0070;
		}
	}
	{
		// material.mainTexture = monitor_.texture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_3 = __this->___monitor__4;
		NullCheck(L_3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4;
		L_4 = Monitor_get_texture_m017F32DD552F102D38DA504ACE3A58FD66F95370(L_3, NULL);
		NullCheck(L_2);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_2, L_4, NULL);
		// width = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___x_2;
		Texture_set_width_m38669397AE1BD034125651C7B25395E7741B2365(__this, L_7, NULL);
		// rotation = monitor.rotation;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_8;
		L_8 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Monitor_get_rotation_m84CCFC395CB5F9BED894F2BF8129A8F27B1644B2(L_8, NULL);
		Texture_set_rotation_m9722C56E7B9F9C1A0BC6697D098940979167872F(__this, L_9, NULL);
		// invertX = invertX_;
		bool L_10 = __this->___invertX__6;
		Texture_set_invertX_m667B387D1AA5E8CE49DC81780C02181C6601DB1A(__this, L_10, NULL);
		// invertY = invertY_;
		bool L_11 = __this->___invertY__7;
		Texture_set_invertY_m849B1FC4E58FDB1BC36670C4B1E527BD331FA77A(__this, L_11, NULL);
		// useClip = useClip_;
		bool L_12 = __this->___useClip__8;
		Texture_set_useClip_m11B6FFCDDB43545DFDE9B1919C80705C3A12A8BC(__this, L_12, NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Int32 uDesktopDuplication.Texture::get_monitorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_monitorId_m98D428A519BB4A699CCD95553D6E5C1C7D37AF74 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// get { return monitor.id; }
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_0;
		L_0 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void uDesktopDuplication.Texture::set_monitorId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_monitorId_mC733383478FC7A6C79CA36BCFB9EE89F46230F4E (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { monitor = Manager.GetMonitor(value); }
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_1;
		L_1 = Manager_GetMonitor_m9CFA77A6998001EDABBE0A2F15015D4D6D008DBE(L_0, NULL);
		Texture_set_monitor_m90301C774542724E446C1931FB1BA7E7FB23741E(__this, L_1, NULL);
		// set { monitor = Manager.GetMonitor(value); }
		return;
	}
}
// System.Boolean uDesktopDuplication.Texture::get_invertX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_get_invertX_m07C7BEBCB6E1F12B22501C65FE215CC72F0C8C11 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// return invertX_;
		bool L_0 = __this->___invertX__6;
		return L_0;
	}
}
// System.Void uDesktopDuplication.Texture::set_invertX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_invertX_m667B387D1AA5E8CE49DC81780C02181C6601DB1A (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E60DFDF53FB22709A82BBC8938398EC9632AA91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// invertX_ = value;
		bool L_0 = ___value0;
		__this->___invertX__6 = L_0;
		// if (invertX_) {
		bool L_1 = __this->___invertX__6;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// material.EnableKeyword("INVERT_X");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_2);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_2, _stringLiteral4E60DFDF53FB22709A82BBC8938398EC9632AA91, NULL);
		return;
	}

IL_0020:
	{
		// material.DisableKeyword("INVERT_X");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_3);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_3, _stringLiteral4E60DFDF53FB22709A82BBC8938398EC9632AA91, NULL);
		// }
		return;
	}
}
// System.Boolean uDesktopDuplication.Texture::get_invertY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_get_invertY_m94BEB16F020971E62F57F13BE724B6412AAEDC06 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// return invertY_;
		bool L_0 = __this->___invertY__7;
		return L_0;
	}
}
// System.Void uDesktopDuplication.Texture::set_invertY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_invertY_m849B1FC4E58FDB1BC36670C4B1E527BD331FA77A (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C1CD49354B6EA28C6B16712E7A6223CDA6F51A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// invertY_ = value;
		bool L_0 = ___value0;
		__this->___invertY__7 = L_0;
		// if (invertY_) {
		bool L_1 = __this->___invertY__7;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// material.EnableKeyword("INVERT_Y");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_2);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_2, _stringLiteral84C1CD49354B6EA28C6B16712E7A6223CDA6F51A, NULL);
		return;
	}

IL_0020:
	{
		// material.DisableKeyword("INVERT_Y");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_3);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_3, _stringLiteral84C1CD49354B6EA28C6B16712E7A6223CDA6F51A, NULL);
		// }
		return;
	}
}
// uDesktopDuplication.MonitorRotation uDesktopDuplication.Texture::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_rotation_mF22FC0B49F7D84F34B52D3DE5C876400FD753BBB (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// return monitor.rotation;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_0;
		L_0 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Monitor_get_rotation_m84CCFC395CB5F9BED894F2BF8129A8F27B1644B2(L_0, NULL);
		return L_1;
	}
}
// System.Void uDesktopDuplication.Texture::set_rotation(uDesktopDuplication.MonitorRotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_rotation_m9722C56E7B9F9C1A0BC6697D098940979167872F (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A2E23BF1F414EA4C4A561F2CCD8E0D5A4D7BA57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C87999B75464C456C478FB3C88C2B824F7750F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A162BCA0C7B0B7DA16EC437CDF19CA85C6FDAE);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_007b;
			}
			case 3:
			{
				goto IL_00ac;
			}
		}
	}
	{
		return;
	}

IL_0019:
	{
		// material.DisableKeyword("ROTATE90");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_1);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_1, _stringLiteral1A2E23BF1F414EA4C4A561F2CCD8E0D5A4D7BA57, NULL);
		// material.DisableKeyword("ROTATE180");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_2);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_2, _stringLiteral1C87999B75464C456C478FB3C88C2B824F7750F3, NULL);
		// material.DisableKeyword("ROTATE270");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_3);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_3, _stringLiteral28A162BCA0C7B0B7DA16EC437CDF19CA85C6FDAE, NULL);
		// break;
		return;
	}

IL_004a:
	{
		// material.EnableKeyword("ROTATE90");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_4);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_4, _stringLiteral1A2E23BF1F414EA4C4A561F2CCD8E0D5A4D7BA57, NULL);
		// material.DisableKeyword("ROTATE180");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_5);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_5, _stringLiteral1C87999B75464C456C478FB3C88C2B824F7750F3, NULL);
		// material.DisableKeyword("ROTATE270");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_6);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_6, _stringLiteral28A162BCA0C7B0B7DA16EC437CDF19CA85C6FDAE, NULL);
		// break;
		return;
	}

IL_007b:
	{
		// material.DisableKeyword("ROTATE90");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_7);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_7, _stringLiteral1A2E23BF1F414EA4C4A561F2CCD8E0D5A4D7BA57, NULL);
		// material.EnableKeyword("ROTATE180");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_8);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_8, _stringLiteral1C87999B75464C456C478FB3C88C2B824F7750F3, NULL);
		// material.DisableKeyword("ROTATE270");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_9);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_9, _stringLiteral28A162BCA0C7B0B7DA16EC437CDF19CA85C6FDAE, NULL);
		// break;
		return;
	}

IL_00ac:
	{
		// material.DisableKeyword("ROTATE90");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_10);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_10, _stringLiteral1A2E23BF1F414EA4C4A561F2CCD8E0D5A4D7BA57, NULL);
		// material.DisableKeyword("ROTATE180");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_11);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_11, _stringLiteral1C87999B75464C456C478FB3C88C2B824F7750F3, NULL);
		// material.EnableKeyword("ROTATE270");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_12);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_12, _stringLiteral28A162BCA0C7B0B7DA16EC437CDF19CA85C6FDAE, NULL);
		// }
		return;
	}
}
// System.Boolean uDesktopDuplication.Texture::get_useClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_get_useClip_m534DF3424F1EEF35E0B879658BD77B93EE086C5D (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// return useClip_;
		bool L_0 = __this->___useClip__8;
		return L_0;
	}
}
// System.Void uDesktopDuplication.Texture::set_useClip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_useClip_m11B6FFCDDB43545DFDE9B1919C80705C3A12A8BC (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D4E695C34A4FD6E7BB7C5DF93735BAC456133CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// useClip_ = value;
		bool L_0 = ___value0;
		__this->___useClip__8 = L_0;
		// if (useClip_) {
		bool L_1 = __this->___useClip__8;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// material.EnableKeyword("USE_CLIP");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_2);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_2, _stringLiteral6D4E695C34A4FD6E7BB7C5DF93735BAC456133CE, NULL);
		return;
	}

IL_0020:
	{
		// material.DisableKeyword("USE_CLIP");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_3);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_3, _stringLiteral6D4E695C34A4FD6E7BB7C5DF93735BAC456133CE, NULL);
		// }
		return;
	}
}
// System.Boolean uDesktopDuplication.Texture::get_bend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_get_bend_mF42C15B299E0B1E0C6A6EA3C664692EE2CC4E10C (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA2069B354B5EA8A124208A9385711C7801959A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return material.GetInt("_Bend") != 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA(L_0, _stringLiteralCA2069B354B5EA8A124208A9385711C7801959A9, NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void uDesktopDuplication.Texture::set_bend(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_bend_m3A5990CCF91ADD40080EFE9F300D49784C8559A0 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA2069B354B5EA8A124208A9385711C7801959A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE6CB10D04A89C33B80A8BF4E9F2C8E601BFD0F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value) {
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// material.EnableKeyword("BEND_ON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_1);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_1, _stringLiteralDE6CB10D04A89C33B80A8BF4E9F2C8E601BFD0F2, NULL);
		// material.SetInt("_Bend", 1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_2, _stringLiteralCA2069B354B5EA8A124208A9385711C7801959A9, 1, NULL);
		return;
	}

IL_0025:
	{
		// material.DisableKeyword("BEND_ON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_3);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_3, _stringLiteralDE6CB10D04A89C33B80A8BF4E9F2C8E601BFD0F2, NULL);
		// material.SetInt("_Bend", 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_4);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_4, _stringLiteralCA2069B354B5EA8A124208A9385711C7801959A9, 0, NULL);
		// }
		return;
	}
}
// uDesktopDuplication.Texture/MeshForwardDirection uDesktopDuplication.Texture::get_meshForwardDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_meshForwardDirection_m595D0F7FA57D67CE3910B59E99167303AC971E94 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral133A3BF49D1EE1817CBE84227C1ECA1DF3B4914E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (MeshForwardDirection)material.GetInt("_Forward");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA(L_0, _stringLiteral133A3BF49D1EE1817CBE84227C1ECA1DF3B4914E, NULL);
		return (int32_t)(L_1);
	}
}
// System.Void uDesktopDuplication.Texture::set_meshForwardDirection(uDesktopDuplication.Texture/MeshForwardDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_meshForwardDirection_m6751339F57F810FE07764BE560BC6D9582F18A8F (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral133A3BF49D1EE1817CBE84227C1ECA1DF3B4914E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA97312883FF7370901028C4A34966596FF14B990);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF104F1452E3AD98B1E9F20ED12A5583B4315843);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___value0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// material.SetInt("_Forward", 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_2, _stringLiteral133A3BF49D1EE1817CBE84227C1ECA1DF3B4914E, 0, NULL);
		// material.EnableKeyword("_FORWARD_Y");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_3);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_3, _stringLiteralCF104F1452E3AD98B1E9F20ED12A5583B4315843, NULL);
		// material.DisableKeyword("_FORWARD_Z");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_4);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_4, _stringLiteralA97312883FF7370901028C4A34966596FF14B990, NULL);
		// break;
		return;
	}

IL_003a:
	{
		// material.SetInt("_Forward", 1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_5);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_5, _stringLiteral133A3BF49D1EE1817CBE84227C1ECA1DF3B4914E, 1, NULL);
		// material.DisableKeyword("_FORWARD_Y");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_6);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_6, _stringLiteralCF104F1452E3AD98B1E9F20ED12A5583B4315843, NULL);
		// material.EnableKeyword("_FORWARD_Z");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_7);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_7, _stringLiteralA97312883FF7370901028C4A34966596FF14B990, NULL);
		// }
		return;
	}
}
// uDesktopDuplication.Texture/Culling uDesktopDuplication.Texture::get_culling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_culling_mE5933F11126DAD14A92573BF2BE1E61BC8C8C8BE (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (Culling)material.GetInt("_Cull");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA(L_0, _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22, NULL);
		return (int32_t)(L_1);
	}
}
// System.Void uDesktopDuplication.Texture::set_culling(uDesktopDuplication.Texture/Culling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_culling_mE11C3C40C0861116D9A9C6DCEE0596B6195FB921 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.SetInt("_Cull", (int)value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_0, _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22, L_1, NULL);
		// }
		return;
	}
}
// System.Single uDesktopDuplication.Texture::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Texture_get_radius_mCDF436905F55BF86734D9CF4307C63F08432F3A9 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return material.GetFloat("_Radius"); }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_0, _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152, NULL);
		return L_1;
	}
}
// System.Void uDesktopDuplication.Texture::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_radius_mFC74218BA674D5B60073167B3BB24AAFE2AE6CDF (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { material.SetFloat("_Radius", value); }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		float L_1 = ___value0;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152, L_1, NULL);
		// set { material.SetFloat("_Radius", value); }
		return;
	}
}
// System.Single uDesktopDuplication.Texture::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Texture_get_width_m3E97113CE7CFC03CF3625423B094E207DB5DA3E8 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B399F095CF9ED25677ABDF72E009C797C083D21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return material.GetFloat("_Width"); }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_0, _stringLiteral5B399F095CF9ED25677ABDF72E009C797C083D21, NULL);
		return L_1;
	}
}
// System.Void uDesktopDuplication.Texture::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_width_m38669397AE1BD034125651C7B25395E7741B2365 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B399F095CF9ED25677ABDF72E009C797C083D21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { material.SetFloat("_Width", value); }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		float L_1 = ___value0;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteral5B399F095CF9ED25677ABDF72E009C797C083D21, L_1, NULL);
		// set { material.SetFloat("_Width", value); }
		return;
	}
}
// System.Single uDesktopDuplication.Texture::get_thickness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Texture_get_thickness_mAEE90EADC3017163AD8BDCCC142F66A75A87AA01 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB078101513E5D1CC8EF34046DD36C59BE1DBC1EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return material.GetFloat("_Thickness"); }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_0, _stringLiteralB078101513E5D1CC8EF34046DD36C59BE1DBC1EE, NULL);
		return L_1;
	}
}
// System.Void uDesktopDuplication.Texture::set_thickness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_thickness_mFAA1EF4EA48DBE7A286D4DF09DFF0C79D7A0E631 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB078101513E5D1CC8EF34046DD36C59BE1DBC1EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { material.SetFloat("_Thickness", value); }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		float L_1 = ___value0;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteralB078101513E5D1CC8EF34046DD36C59BE1DBC1EE, L_1, NULL);
		// set { material.SetFloat("_Thickness", value); }
		return;
	}
}
// UnityEngine.Material uDesktopDuplication.Texture::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_0 = NULL;
	{
		// if (Application.isPlaying) {
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// return material_ ?? (material_ = GetComponent<Renderer>().material); // clone
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___material__11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0025;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = L_4;
		V_0 = L_5;
		__this->___material__11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material__11), (void*)L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_0;
		G_B3_0 = L_6;
	}

IL_0025:
	{
		return G_B3_0;
	}

IL_0026:
	{
		// return GetComponent<Renderer>().sharedMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_7, NULL);
		return L_8;
	}
}
// UnityEngine.Mesh uDesktopDuplication.Texture::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Texture_get_mesh_mBE7DB2FA2412851E5C6AD5127FCCFD534921BDC6 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetComponent<MeshFilter>().sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0;
		L_0 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_0, NULL);
		return L_1;
	}
}
// System.Single uDesktopDuplication.Texture::get_worldWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Texture_get_worldWidth_mA0EE5E5754B1AD330FB679558E915ABDE2FC483C (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return transform.localScale.x * (mesh.bounds.extents.x * 2f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3;
		L_3 = Texture_get_mesh_mBE7DB2FA2412851E5C6AD5127FCCFD534921BDC6(__this, NULL);
		NullCheck(L_3);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4;
		L_4 = Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100(L_3, NULL);
		V_0 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		float L_6 = L_5.___x_2;
		return ((float)il2cpp_codegen_multiply(L_2, ((float)il2cpp_codegen_multiply(L_6, (2.0f)))));
	}
}
// System.Single uDesktopDuplication.Texture::get_worldHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Texture_get_worldHeight_mCB778CC730A1DB719E69F867B5CAD537E27751CE (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return transform.localScale.y * (mesh.bounds.extents.y * 2f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___y_3;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3;
		L_3 = Texture_get_mesh_mBE7DB2FA2412851E5C6AD5127FCCFD534921BDC6(__this, NULL);
		NullCheck(L_3);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4;
		L_4 = Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100(L_3, NULL);
		V_0 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		float L_6 = L_5.___y_3;
		return ((float)il2cpp_codegen_multiply(L_2, ((float)il2cpp_codegen_multiply(L_6, (2.0f)))));
	}
}
// System.Void uDesktopDuplication.Texture::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_Awake_m8674932910BF77CE923BDA9A9555652D191704DC (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73F4A5B10ED887D2BF84B305D859FD98FC9EBB24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clipPositionScaleKey_ = Shader.PropertyToID("_ClipPositionScale");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral73F4A5B10ED887D2BF84B305D859FD98FC9EBB24, NULL);
		__this->___clipPositionScaleKey__12 = L_0;
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Texture::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_OnEnable_m1831F420AAFB6C0FFEDC23250367792E34CAC4E2 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_Reinitialize_mD633EE363DF87EF2A4B6768189AFE9EBDEF84010_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (monitor == null) {
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_0;
		L_0 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// monitor = Manager.primary;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_1;
		L_1 = Manager_get_primary_m5C0DEE8296B01F477202380B0564955CD08B3D69(NULL);
		Texture_set_monitor_m90301C774542724E446C1931FB1BA7E7FB23741E(__this, L_1, NULL);
	}

IL_0013:
	{
		// Manager.onReinitialized += Reinitialize;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_2 = (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F*)il2cpp_codegen_object_new(ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ReinitializeHandler__ctor_m5FB6962C2A0AF95FC3695CA6F8D1AB4074081B5B(L_2, __this, (intptr_t)((void*)Texture_Reinitialize_mD633EE363DF87EF2A4B6768189AFE9EBDEF84010_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Manager_add_onReinitialized_mBAED434EF828655A6AF6C5F431BC982B6E159D70(L_2, NULL);
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Texture::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_OnDisable_m8AC98024F6C86DC9B948675A98401380134C963C (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_Reinitialize_mD633EE363DF87EF2A4B6768189AFE9EBDEF84010_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Manager.onReinitialized -= Reinitialize;
		ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* L_0 = (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F*)il2cpp_codegen_object_new(ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ReinitializeHandler__ctor_m5FB6962C2A0AF95FC3695CA6F8D1AB4074081B5B(L_0, __this, (intptr_t)((void*)Texture_Reinitialize_mD633EE363DF87EF2A4B6768189AFE9EBDEF84010_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Manager_remove_onReinitialized_m1F9F692C43C099E8BB8AB936C42446328D8B13DC(L_0, NULL);
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Texture::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_Update_mD8E49B9F067A4C7EF68FC395DCC41CFDE69E7390 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// KeepMonitor();
		Texture_KeepMonitor_m63F538AC48B18CE3DFBF0C08032FED91CC974898(__this, NULL);
		// RequireUpdate();
		Texture_RequireUpdate_mEF98C64488D4C17A81EC18F8750EC8A628A13035(__this, NULL);
		// UpdateMaterial();
		Texture_UpdateMaterial_m6B45F31806079DCDCAE5F3E86B71DA8A01BDEF92(__this, NULL);
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Texture::KeepMonitor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_KeepMonitor_m63F538AC48B18CE3DFBF0C08032FED91CC974898 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// if (monitor == null) {
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_0;
		L_0 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Reinitialize();
		Texture_Reinitialize_mD633EE363DF87EF2A4B6768189AFE9EBDEF84010(__this, NULL);
		return;
	}

IL_000f:
	{
		// lastMonitorId_ = monitorId;
		int32_t L_1;
		L_1 = Texture_get_monitorId_m98D428A519BB4A699CCD95553D6E5C1C7D37AF74(__this, NULL);
		__this->___lastMonitorId__5 = L_1;
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Texture::RequireUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_RequireUpdate_mEF98C64488D4C17A81EC18F8750EC8A628A13035 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// if (monitor != null) {
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_0;
		L_0 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// monitor.shouldBeUpdated = true;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_1;
		L_1 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_1);
		Monitor_set_shouldBeUpdated_m070227673B000342C0199DCA09F5105609680D07_inline(L_1, (bool)1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Texture::Reinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_Reinitialize_mD633EE363DF87EF2A4B6768189AFE9EBDEF84010 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// monitor = Manager.GetMonitor(lastMonitorId_);
		int32_t L_0 = __this->___lastMonitorId__5;
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_1;
		L_1 = Manager_GetMonitor_m9CFA77A6998001EDABBE0A2F15015D4D6D008DBE(L_0, NULL);
		Texture_set_monitor_m90301C774542724E446C1931FB1BA7E7FB23741E(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void uDesktopDuplication.Texture::UpdateMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_UpdateMaterial_m6B45F31806079DCDCAE5F3E86B71DA8A01BDEF92 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// width = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		Texture_set_width_m38669397AE1BD034125651C7B25395E7741B2365(__this, L_2, NULL);
		// if (monitor != null) {
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_3;
		L_3 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// rotation = monitor.rotation;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_4;
		L_4 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Monitor_get_rotation_m84CCFC395CB5F9BED894F2BF8129A8F27B1644B2(L_4, NULL);
		Texture_set_rotation_m9722C56E7B9F9C1A0BC6697D098940979167872F(__this, L_5, NULL);
	}

IL_002f:
	{
		// material.SetVector(clipPositionScaleKey_, new Vector4(clipPos.x, clipPos.y, clipScale.x, clipScale.y));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Texture_get_material_m001AD1EDD6AE0BD4586B10A5E4909506F8B5B4AD(__this, NULL);
		int32_t L_7 = __this->___clipPositionScaleKey__12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___clipPos_9);
		float L_9 = L_8->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___clipPos_9);
		float L_11 = L_10->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___clipScale_10);
		float L_13 = L_12->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___clipScale_10);
		float L_15 = L_14->___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), L_9, L_11, L_13, L_15, /*hidden argument*/NULL);
		NullCheck(L_6);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_6, L_7, L_16, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 uDesktopDuplication.Texture::GetWorldPositionFromCoord(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Texture_GetWorldPositionFromCoord_m97CE93B381F8F1D1AD6EC13BBC7AF3735EA48FC6 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___coord0, const RuntimeMethod* method) 
{
	{
		// return GetWorldPositionFromCoord((int)coord.x, (int)coord.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___coord0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___coord0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Texture_GetWorldPositionFromCoord_m2A013A737416BD4CC5AC3ED56434C039DC8C2673(__this, il2cpp_codegen_cast_double_to_int<int32_t>(L_1), il2cpp_codegen_cast_double_to_int<int32_t>(L_3), NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 uDesktopDuplication.Texture::GetWorldPositionFromCoord(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Texture_GetWorldPositionFromCoord_m2A013A737416BD4CC5AC3ED56434C039DC8C2673 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, int32_t ___u0, int32_t ___v1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// var x =  (float)(u - monitor.width  / 2) / monitor.width;
		int32_t L_0 = ___u0;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_1;
		L_1 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Monitor_get_width_m76216409DDFC2D2967A41146D0AA02F7F09DAFD2(L_1, NULL);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_3;
		L_3 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Monitor_get_width_m76216409DDFC2D2967A41146D0AA02F7F09DAFD2(L_3, NULL);
		V_0 = ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)(L_2/2)))))/((float)L_4)));
		// var y = -(float)(v - monitor.height / 2) / monitor.height;
		int32_t L_5 = ___v1;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_6;
		L_6 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Monitor_get_height_m173746A6510AC28B5C1418983B14D86922706F2B(L_6, NULL);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_8;
		L_8 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Monitor_get_height_m173746A6510AC28B5C1418983B14D86922706F2B(L_8, NULL);
		V_1 = ((float)(((-((float)((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)(L_7/2)))))))/((float)L_9)));
		// var localPos = new Vector3(worldWidth * x, worldHeight * y, 0f);
		float L_10;
		L_10 = Texture_get_worldWidth_mA0EE5E5754B1AD330FB679558E915ABDE2FC483C(__this, NULL);
		float L_11 = V_0;
		float L_12;
		L_12 = Texture_get_worldHeight_mCB778CC730A1DB719E69F867B5CAD537E27751CE(__this, NULL);
		float L_13 = V_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((float)il2cpp_codegen_multiply(L_10, L_11)), ((float)il2cpp_codegen_multiply(L_12, L_13)), (0.0f), NULL);
		// if (bend) {
		bool L_14;
		L_14 = Texture_get_bend_mF42C15B299E0B1E0C6A6EA3C664692EE2CC4E10C(__this, NULL);
		if (!L_14)
		{
			goto IL_00c9;
		}
	}
	{
		// var angle = localPos.x / radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		float L_16 = L_15.___x_2;
		float L_17;
		L_17 = Texture_get_radius_mCDF436905F55BF86734D9CF4307C63F08432F3A9(__this, NULL);
		V_3 = ((float)(L_16/L_17));
		// if (meshForwardDirection == MeshForwardDirection.Y) {
		int32_t L_18;
		L_18 = Texture_get_meshForwardDirection_m595D0F7FA57D67CE3910B59E99167303AC971E94(__this, NULL);
		if (L_18)
		{
			goto IL_0097;
		}
	}
	{
		// localPos.y -= radius * (1f - Mathf.Cos(angle));
		float* L_19 = (&(&V_2)->___y_3);
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		float L_22;
		L_22 = Texture_get_radius_mCDF436905F55BF86734D9CF4307C63F08432F3A9(__this, NULL);
		float L_23 = V_3;
		float L_24;
		L_24 = cosf(L_23);
		*((float*)L_20) = (float)((float)il2cpp_codegen_subtract(L_21, ((float)il2cpp_codegen_multiply(L_22, ((float)il2cpp_codegen_subtract((1.0f), L_24))))));
		goto IL_00b5;
	}

IL_0097:
	{
		// localPos.z -= radius * (1f - Mathf.Cos(angle));
		float* L_25 = (&(&V_2)->___z_4);
		float* L_26 = L_25;
		float L_27 = *((float*)L_26);
		float L_28;
		L_28 = Texture_get_radius_mCDF436905F55BF86734D9CF4307C63F08432F3A9(__this, NULL);
		float L_29 = V_3;
		float L_30;
		L_30 = cosf(L_29);
		*((float*)L_26) = (float)((float)il2cpp_codegen_subtract(L_27, ((float)il2cpp_codegen_multiply(L_28, ((float)il2cpp_codegen_subtract((1.0f), L_30))))));
	}

IL_00b5:
	{
		// localPos.x  = radius * Mathf.Sin(angle);
		float L_31;
		L_31 = Texture_get_radius_mCDF436905F55BF86734D9CF4307C63F08432F3A9(__this, NULL);
		float L_32 = V_3;
		float L_33;
		L_33 = sinf(L_32);
		(&V_2)->___x_2 = ((float)il2cpp_codegen_multiply(L_31, L_33));
	}

IL_00c9:
	{
		// return transform.position + (transform.rotation * localPos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_36);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_37, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_35, L_39, NULL);
		return L_40;
	}
}
// uDesktopDuplication.Texture/RayCastResult uDesktopDuplication.Texture::RayCast(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 Texture_RayCast_m327855F9B080A3A3BE7527E35EE62482158F16F5 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_19;
	memset((&V_19), 0, sizeof(V_19));
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_22;
	memset((&V_22), 0, sizeof(V_22));
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	float V_26 = 0.0f;
	float V_27 = 0.0f;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_30;
	memset((&V_30), 0, sizeof(V_30));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_31;
	memset((&V_31), 0, sizeof(V_31));
	RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 V_32;
	memset((&V_32), 0, sizeof(V_32));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		// var r = radius;
		float L_0;
		L_0 = Texture_get_radius_mCDF436905F55BF86734D9CF4307C63F08432F3A9(__this, NULL);
		V_0 = L_0;
		// var center = transform.position - transform.forward * r;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_6, NULL);
		// var trs = Matrix4x4.TRS(center, transform.rotation, Vector3.one);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_7, L_9, L_10, NULL);
		V_1 = L_11;
		// var invTrs = trs.inverse;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_1), NULL);
		V_2 = L_12;
		// Vector3 localFrom = invTrs.MultiplyPoint3x4(from);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_13, NULL);
		V_3 = L_14;
		// Vector3 localDir = invTrs.MultiplyVector(dir).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___dir1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_2), L_15, NULL);
		V_31 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_31), NULL);
		V_4 = L_17;
		// var a = localDir.z / localDir.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_4;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_4;
		float L_21 = L_20.___x_2;
		V_5 = ((float)(L_19/L_21));
		// var b = localFrom.z - a * localFrom.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_3;
		float L_23 = L_22.___z_4;
		float L_24 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		float L_26 = L_25.___x_2;
		V_6 = ((float)il2cpp_codegen_subtract(L_23, ((float)il2cpp_codegen_multiply(L_24, L_26))));
		// var aa = a * a;
		float L_27 = V_5;
		float L_28 = V_5;
		V_7 = ((float)il2cpp_codegen_multiply(L_27, L_28));
		// var bb = b * b;
		float L_29 = V_6;
		float L_30 = V_6;
		V_8 = ((float)il2cpp_codegen_multiply(L_29, L_30));
		// var ab = a * b;
		float L_31 = V_5;
		float L_32 = V_6;
		V_9 = ((float)il2cpp_codegen_multiply(L_31, L_32));
		// var rr = r * r;
		float L_33 = V_0;
		float L_34 = V_0;
		V_10 = ((float)il2cpp_codegen_multiply(L_33, L_34));
		// var s = aa * rr - bb + rr;
		float L_35 = V_7;
		float L_36 = V_10;
		float L_37 = V_8;
		float L_38 = V_10;
		V_11 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_35, L_36)), L_37)), L_38));
		// if (s < 0f) {
		float L_39 = V_11;
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_00bb;
		}
	}
	{
		// return raycastFailedResult;
		il2cpp_codegen_runtime_class_init_inline(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var);
		RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 L_40 = ((Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_StaticFields*)il2cpp_codegen_static_fields_for(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var))->___raycastFailedResult_13;
		return L_40;
	}

IL_00bb:
	{
		// s = Mathf.Sqrt(s);
		float L_41 = V_11;
		float L_42;
		L_42 = sqrtf(L_41);
		V_11 = L_42;
		// var t = aa + 1;
		float L_43 = V_7;
		V_12 = ((float)il2cpp_codegen_add(L_43, (1.0f)));
		// var lx0 = (-s - ab) / t;
		float L_44 = V_11;
		float L_45 = V_9;
		float L_46 = V_12;
		V_13 = ((float)(((float)il2cpp_codegen_subtract(((-L_44)), L_45))/L_46));
		// var lz0 = (b - a * s) / t;
		float L_47 = V_6;
		float L_48 = V_5;
		float L_49 = V_11;
		float L_50 = V_12;
		V_14 = ((float)(((float)il2cpp_codegen_subtract(L_47, ((float)il2cpp_codegen_multiply(L_48, L_49))))/L_50));
		// var to0 = new Vector3(lx0, 0f, lz0);
		float L_51 = V_13;
		float L_52 = V_14;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_15), L_51, (0.0f), L_52, NULL);
		// var lx1 = (s - ab) / t;
		float L_53 = V_11;
		float L_54 = V_9;
		float L_55 = V_12;
		V_16 = ((float)(((float)il2cpp_codegen_subtract(L_53, L_54))/L_55));
		// var lz1 = (a * s + b) / t;
		float L_56 = V_5;
		float L_57 = V_11;
		float L_58 = V_6;
		float L_59 = V_12;
		V_17 = ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_56, L_57)), L_58))/L_59));
		// var to1 = new Vector3(lx1, 0f, lz1);
		float L_60 = V_16;
		float L_61 = V_17;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_18), L_60, (0.0f), L_61, NULL);
		// var to = (Vector3.Dot(localDir, to0) > 0f) ? to0 : to1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_15;
		float L_64;
		L_64 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_62, L_63, NULL);
		if ((((float)L_64) > ((float)(0.0f))))
		{
			goto IL_0131;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_18;
		G_B5_0 = L_65;
		goto IL_0133;
	}

IL_0131:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_15;
		G_B5_0 = L_66;
	}

IL_0133:
	{
		V_19 = G_B5_0;
		// var toAngle = Mathf.Atan2(to.x, to.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_19;
		float L_68 = L_67.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_19;
		float L_70 = L_69.___z_4;
		float L_71;
		L_71 = atan2f(L_68, L_70);
		V_20 = L_71;
		// var halfWidthAngle = (worldWidth / radius) * 0.5f;
		float L_72;
		L_72 = Texture_get_worldWidth_mA0EE5E5754B1AD330FB679558E915ABDE2FC483C(__this, NULL);
		float L_73;
		L_73 = Texture_get_radius_mCDF436905F55BF86734D9CF4307C63F08432F3A9(__this, NULL);
		V_21 = ((float)il2cpp_codegen_multiply(((float)(L_72/L_73)), (0.5f)));
		// if (Mathf.Abs(toAngle) > halfWidthAngle) {
		float L_74 = V_20;
		float L_75;
		L_75 = fabsf(L_74);
		float L_76 = V_21;
		if ((!(((float)L_75) > ((float)L_76))))
		{
			goto IL_0170;
		}
	}
	{
		// return raycastFailedResult;
		il2cpp_codegen_runtime_class_init_inline(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var);
		RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 L_77 = ((Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_StaticFields*)il2cpp_codegen_static_fields_for(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var))->___raycastFailedResult_13;
		return L_77;
	}

IL_0170:
	{
		// var v = to - localFrom;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_78, L_79, NULL);
		V_22 = L_80;
		// var l = Mathf.Sqrt(Mathf.Pow(v.x, 2f) + Mathf.Pow(v.z, 2f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_22;
		float L_82 = L_81.___x_2;
		float L_83;
		L_83 = powf(L_82, (2.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_22;
		float L_85 = L_84.___z_4;
		float L_86;
		L_86 = powf(L_85, (2.0f));
		float L_87;
		L_87 = sqrtf(((float)il2cpp_codegen_add(L_83, L_86)));
		V_23 = L_87;
		// var ly = localFrom.y + l * localDir.y / Mathf.Sqrt(Mathf.Pow(localDir.x, 2f) + Mathf.Pow(localDir.z, 2f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = V_3;
		float L_89 = L_88.___y_3;
		float L_90 = V_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_4;
		float L_92 = L_91.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = V_4;
		float L_94 = L_93.___x_2;
		float L_95;
		L_95 = powf(L_94, (2.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_4;
		float L_97 = L_96.___z_4;
		float L_98;
		L_98 = powf(L_97, (2.0f));
		float L_99;
		L_99 = sqrtf(((float)il2cpp_codegen_add(L_95, L_98)));
		V_24 = ((float)il2cpp_codegen_add(L_89, ((float)(((float)il2cpp_codegen_multiply(L_90, L_92))/L_99))));
		// var halfHeight = worldHeight * 0.5f;
		float L_100;
		L_100 = Texture_get_worldHeight_mCB778CC730A1DB719E69F867B5CAD537E27751CE(__this, NULL);
		V_25 = ((float)il2cpp_codegen_multiply(L_100, (0.5f)));
		// if (Mathf.Abs(ly) > halfHeight) {
		float L_101 = V_24;
		float L_102;
		L_102 = fabsf(L_101);
		float L_103 = V_25;
		if ((!(((float)L_102) > ((float)L_103))))
		{
			goto IL_01ff;
		}
	}
	{
		// return raycastFailedResult;
		il2cpp_codegen_runtime_class_init_inline(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var);
		RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 L_104 = ((Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_StaticFields*)il2cpp_codegen_static_fields_for(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var))->___raycastFailedResult_13;
		return L_104;
	}

IL_01ff:
	{
		// to.y = ly;
		float L_105 = V_24;
		(&V_19)->___y_3 = L_105;
		// var hitPos = trs.MultiplyPoint(to);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_1), L_106, NULL);
		// if ((hitPos - from).magnitude > dir.magnitude) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_107, L_108, NULL);
		V_31 = L_109;
		float L_110;
		L_110 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_31), NULL);
		float L_111;
		L_111 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___dir1), NULL);
		if ((!(((float)L_110) > ((float)L_111))))
		{
			goto IL_022f;
		}
	}
	{
		// return raycastFailedResult;
		il2cpp_codegen_runtime_class_init_inline(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var);
		RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 L_112 = ((Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_StaticFields*)il2cpp_codegen_static_fields_for(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var))->___raycastFailedResult_13;
		return L_112;
	}

IL_022f:
	{
		// var coordX = toAngle / halfWidthAngle * 0.5f;
		float L_113 = V_20;
		float L_114 = V_21;
		V_26 = ((float)il2cpp_codegen_multiply(((float)(L_113/L_114)), (0.5f)));
		// var coordY = ly / halfHeight * 0.5f;
		float L_115 = V_24;
		float L_116 = V_25;
		V_27 = ((float)il2cpp_codegen_multiply(((float)(L_115/L_116)), (0.5f)));
		// if (useClip) {
		bool L_117;
		L_117 = Texture_get_useClip_m534DF3424F1EEF35E0B879658BD77B93EE086C5D_inline(__this, NULL);
		if (!L_117)
		{
			goto IL_02c7;
		}
	}
	{
		// coordX = clipPos.x + (0.5f + coordX) * clipScale.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_118 = (&__this->___clipPos_9);
		float L_119 = L_118->___x_0;
		float L_120 = V_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_121 = (&__this->___clipScale_10);
		float L_122 = L_121->___x_0;
		V_26 = ((float)il2cpp_codegen_add(L_119, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add((0.5f), L_120)), L_122))));
		// coordX -= Mathf.Floor(coordX);
		float L_123 = V_26;
		float L_124 = V_26;
		float L_125;
		L_125 = floorf(L_124);
		V_26 = ((float)il2cpp_codegen_subtract(L_123, L_125));
		// coordX -= 0.5f;
		float L_126 = V_26;
		V_26 = ((float)il2cpp_codegen_subtract(L_126, (0.5f)));
		// coordY = (1f - clipPos.y) + (coordY - 0.5f) * clipScale.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_127 = (&__this->___clipPos_9);
		float L_128 = L_127->___y_1;
		float L_129 = V_27;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_130 = (&__this->___clipScale_10);
		float L_131 = L_130->___y_1;
		V_27 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract((1.0f), L_128)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_129, (0.5f))), L_131))));
		// coordY -= Mathf.Floor(coordY);
		float L_132 = V_27;
		float L_133 = V_27;
		float L_134;
		L_134 = floorf(L_133);
		V_27 = ((float)il2cpp_codegen_subtract(L_132, L_134));
		// coordY -= 0.5f;
		float L_135 = V_27;
		V_27 = ((float)il2cpp_codegen_subtract(L_135, (0.5f)));
	}

IL_02c7:
	{
		// int desktopX = monitor.left + (int)((coordX + 0.5f) * monitor.width);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_136;
		L_136 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_136);
		int32_t L_137;
		L_137 = Monitor_get_left_m560854FE145C4F6D8F02C78DD41BEF82680E8918(L_136, NULL);
		float L_138 = V_26;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_139;
		L_139 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_139);
		int32_t L_140;
		L_140 = Monitor_get_width_m76216409DDFC2D2967A41146D0AA02F7F09DAFD2(L_139, NULL);
		V_28 = ((int32_t)il2cpp_codegen_add(L_137, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_138, (0.5f))), ((float)L_140))))));
		// int desktopY = monitor.top + (int)((0.5f - coordY) * monitor.height);
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_141;
		L_141 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_141);
		int32_t L_142;
		L_142 = Monitor_get_top_m7BB25AF36EC0863756F2D56252A5FBC592A872B5(L_141, NULL);
		float L_143 = V_27;
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_144;
		L_144 = Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline(__this, NULL);
		NullCheck(L_144);
		int32_t L_145;
		L_145 = Monitor_get_height_m173746A6510AC28B5C1418983B14D86922706F2B(L_144, NULL);
		V_29 = ((int32_t)il2cpp_codegen_add(L_142, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((0.5f), L_143)), ((float)L_145))))));
		// var normal = new Vector3(-to.x, 0f, -to.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146 = V_19;
		float L_147 = L_146.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = V_19;
		float L_149 = L_148.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_30), ((-L_147)), (0.0f), ((-L_149)), NULL);
		// return new RayCastResult {
		//     hit = true,
		//     texture = this,
		//     position = trs.MultiplyPoint(to),
		//     normal = trs.MultiplyVector(normal).normalized,
		//     coords = new Vector2(coordX, coordY),
		//     desktopCoord = new Vector2(desktopX, desktopY)
		// };
		il2cpp_codegen_initobj((&V_32), sizeof(RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912));
		(&V_32)->___hit_0 = (bool)1;
		(&V_32)->___texture_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_32)->___texture_1), (void*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150 = V_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_1), L_150, NULL);
		(&V_32)->___position_2 = L_151;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152 = V_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_1), L_152, NULL);
		V_31 = L_153;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_31), NULL);
		(&V_32)->___normal_3 = L_154;
		float L_155 = V_26;
		float L_156 = V_27;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_157;
		memset((&L_157), 0, sizeof(L_157));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_157), L_155, L_156, /*hidden argument*/NULL);
		(&V_32)->___coords_4 = L_157;
		int32_t L_158 = V_28;
		int32_t L_159 = V_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_160;
		memset((&L_160), 0, sizeof(L_160));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_160), ((float)L_158), ((float)L_159), /*hidden argument*/NULL);
		(&V_32)->___desktopCoord_5 = L_160;
		RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 L_161 = V_32;
		return L_161;
	}
}
// uDesktopDuplication.Texture/RayCastResult uDesktopDuplication.Texture::RayCastAll(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 Texture_RayCastAll_mA85A8EF82D18FBCB06822CEBE96DAA423309B573 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisTexture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_mB9C110463F69E640AD4D328FE230339CB06F61E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureU5BU5D_t8C968367DAEA92FFB3EC12B938CF18B61345A840* V_0 = NULL;
	int32_t V_1 = 0;
	RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// foreach (var uddTexture in GameObject.FindObjectsOfType<uDesktopDuplication.Texture>()) {
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		TextureU5BU5D_t8C968367DAEA92FFB3EC12B938CF18B61345A840* L_0;
		L_0 = Object_FindObjectsOfType_TisTexture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_mB9C110463F69E640AD4D328FE230339CB06F61E8(Object_FindObjectsOfType_TisTexture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_mB9C110463F69E640AD4D328FE230339CB06F61E8_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		// foreach (var uddTexture in GameObject.FindObjectsOfType<uDesktopDuplication.Texture>()) {
		TextureU5BU5D_t8C968367DAEA92FFB3EC12B938CF18B61345A840* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// var result = uddTexture.RayCast(from, dir);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___dir1;
		NullCheck(L_4);
		RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 L_7;
		L_7 = Texture_RayCast_m327855F9B080A3A3BE7527E35EE62482158F16F5(L_4, L_5, L_6, NULL);
		V_2 = L_7;
		// if (result.hit) return result;
		RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 L_8 = V_2;
		bool L_9 = L_8.___hit_0;
		if (!L_9)
		{
			goto IL_001f;
		}
	}
	{
		// if (result.hit) return result;
		RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 L_10 = V_2;
		return L_10;
	}

IL_001f:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0023:
	{
		// foreach (var uddTexture in GameObject.FindObjectsOfType<uDesktopDuplication.Texture>()) {
		int32_t L_12 = V_1;
		TextureU5BU5D_t8C968367DAEA92FFB3EC12B938CF18B61345A840* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// return raycastFailedResult;
		il2cpp_codegen_runtime_class_init_inline(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var);
		RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 L_14 = ((Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_StaticFields*)il2cpp_codegen_static_fields_for(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var))->___raycastFailedResult_13;
		return L_14;
	}
}
// System.Void uDesktopDuplication.Texture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture__ctor_mE37144A59A6004731236EE5909CD7F6145235221 (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 clipPos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___clipPos_9 = L_0;
		// public Vector2 clipScale = new Vector2(0.2f, 0.2f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		__this->___clipScale_10 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void uDesktopDuplication.Texture::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture__cctor_m7B832EB7066AEDFBA086F5ACF28401A609CCCDED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static readonly RayCastResult raycastFailedResult = new RayCastResult {
		//     hit          = false,
		//     texture      = null,
		//     position     = Vector3.zero,
		//     normal       = Vector3.forward,
		//     coords       = Vector2.zero,
		//     desktopCoord = Vector2.zero,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912));
		(&V_0)->___hit_0 = (bool)0;
		(&V_0)->___texture_1 = (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___texture_1), (void*)(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863*)NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		(&V_0)->___position_2 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		(&V_0)->___normal_3 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		(&V_0)->___coords_4 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		(&V_0)->___desktopCoord_5 = L_3;
		RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912 L_4 = V_0;
		((Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_StaticFields*)il2cpp_codegen_static_fields_for(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var))->___raycastFailedResult_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_StaticFields*)il2cpp_codegen_static_fields_for(Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863_il2cpp_TypeInfo_var))->___raycastFailedResult_13))->___texture_1), (void*)NULL);
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
// Conversion methods for marshalling of: uDesktopDuplication.Texture/RayCastResult
IL2CPP_EXTERN_C void RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshal_pinvoke(const RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912& unmarshaled, RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshaled_pinvoke& marshaled)
{
	Exception_t* ___texture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'RayCastResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_1Exception, NULL);
}
IL2CPP_EXTERN_C void RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshal_pinvoke_back(const RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshaled_pinvoke& marshaled, RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912& unmarshaled)
{
	Exception_t* ___texture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'RayCastResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: uDesktopDuplication.Texture/RayCastResult
IL2CPP_EXTERN_C void RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshal_pinvoke_cleanup(RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: uDesktopDuplication.Texture/RayCastResult
IL2CPP_EXTERN_C void RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshal_com(const RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912& unmarshaled, RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshaled_com& marshaled)
{
	Exception_t* ___texture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'RayCastResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_1Exception, NULL);
}
IL2CPP_EXTERN_C void RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshal_com_back(const RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshaled_com& marshaled, RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912& unmarshaled)
{
	Exception_t* ___texture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'RayCastResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: uDesktopDuplication.Texture/RayCastResult
IL2CPP_EXTERN_C void RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshal_com_cleanup(RayCastResult_tDD89F95548CC196746358FC735C60FEC23FFF912_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Boolean uDesktopDuplication.Utility::GetCursorPos(uDesktopDuplication.MousePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utility_GetCursorPos_m0F677E45545B2B4B6B614E209E3CFFCA6E3D544E (MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077* ___point0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_user32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "GetCursorPos", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_user32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetCursorPos)(___point0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___point0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// uDesktopDuplication.MousePoint uDesktopDuplication.Utility::GetCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077 Utility_GetCursorPos_mD5600F26D3C47F2C20D07176266187CAF85ED5A9 (const RuntimeMethod* method) 
{
	MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!GetCursorPos(out p)) {
		bool L_0;
		L_0 = Utility_GetCursorPos_m0F677E45545B2B4B6B614E209E3CFFCA6E3D544E((&V_0), NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// p.x = -1;
		(&V_0)->___x_0 = (-1);
		// p.y = -1;
		(&V_0)->___y_1 = (-1);
	}

IL_0019:
	{
		// return p;
		MousePoint_t815C3DED060339BAA2AA2DDA1B585E905EED1077 L_1 = V_0;
		return L_1;
	}
}
// System.Void uDesktopDuplication.Utility::WaitThenDo(System.Action,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_WaitThenDo_m84F68333EF01992234F4B0A009295AF0B99D08FB (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___func0, float ___sec1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Manager.instance.StartCoroutine(_WaitThenDo(func, sec));
		il2cpp_codegen_runtime_class_init_inline(Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B_il2cpp_TypeInfo_var);
		Manager_tD7B58E057CA7A747A034AA509E1601F72B5BE89B* L_0;
		L_0 = Manager_get_instance_m941C725100008EDC479C8AFD9DA3CC9476CA9531(NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___func0;
		float L_2 = ___sec1;
		RuntimeObject* L_3;
		L_3 = Utility__WaitThenDo_mB2FD8ED5DBB62425530871C3CFD1FAB8D6AF7882(L_1, L_2, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator uDesktopDuplication.Utility::_WaitThenDo(System.Action,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utility__WaitThenDo_mB2FD8ED5DBB62425530871C3CFD1FAB8D6AF7882 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___func0, float ___sec1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49* L_0 = (U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49*)il2cpp_codegen_object_new(U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3C_WaitThenDoU3Ed__3__ctor_mCB2829C9EFE0035C83586784A7D1210EE4F5A9EF(L_0, 0, NULL);
		U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49* L_1 = L_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___func0;
		NullCheck(L_1);
		L_1->___func_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___func_3), (void*)L_2);
		U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49* L_3 = L_1;
		float L_4 = ___sec1;
		NullCheck(L_3);
		L_3->___sec_2 = L_4;
		return L_3;
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
// System.Void uDesktopDuplication.Utility/<_WaitThenDo>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitThenDoU3Ed__3__ctor_mCB2829C9EFE0035C83586784A7D1210EE4F5A9EF (U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void uDesktopDuplication.Utility/<_WaitThenDo>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitThenDoU3Ed__3_System_IDisposable_Dispose_m66EDF604DFFE6BFBF1191225738A032026545488 (U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean uDesktopDuplication.Utility/<_WaitThenDo>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_WaitThenDoU3Ed__3_MoveNext_m5616E92E0C01996276E76C249F8BB5083FF23CC2 (U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(sec);
		float L_3 = __this->___sec_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0031:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// func();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___func_3;
		NullCheck(L_5);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
		// }
		return (bool)0;
	}
}
// System.Object uDesktopDuplication.Utility/<_WaitThenDo>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C_WaitThenDoU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m68DED1815CA0AC74E15EE32AD8FE706402AF4B24 (U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void uDesktopDuplication.Utility/<_WaitThenDo>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitThenDoU3Ed__3_System_Collections_IEnumerator_Reset_m7B13FE5DAC7F0FEB26B90F894E85C530C8E4C811 (U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_WaitThenDoU3Ed__3_System_Collections_IEnumerator_Reset_m7B13FE5DAC7F0FEB26B90F894E85C530C8E4C811_RuntimeMethod_var)));
	}
}
// System.Object uDesktopDuplication.Utility/<_WaitThenDo>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C_WaitThenDoU3Ed__3_System_Collections_IEnumerator_get_Current_mFF681C28B32EE8177CC48FC04EF32750E24410B8 (U3C_WaitThenDoU3Ed__3_tC783A8A7820227C4ACB24730311C0AB9FE238C49* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReinitializeHandler_Invoke_m62D8A0F9CD1B9912B86C28532CF3243F1942C330_inline (ReinitializeHandler_tD6906F1CD8A727006C7ED6D1B38829D839BE520F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Monitor_get_shouldBeUpdated_m37F17CF43861FEBE37533467E6F670D62E07036B_inline (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CshouldBeUpdatedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Monitor_set_shouldBeUpdated_m070227673B000342C0199DCA09F5105609680D07_inline (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		bool L_0 = ___value0;
		__this->___U3CshouldBeUpdatedU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Monitor_set_id_m8418C87A0189998FD495174DDC9AEB3790CB89C4_inline (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Monitor_get_id_m58F28E86E829450ACE404310DB4FBA01D7165FAC_inline (Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* Texture_get_monitor_m3E89C83DA9B32106C2D73F62032BEE1C222744AF_inline (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// get { return monitor_; }
		Monitor_t2B2908F2E8F51BD89BDCD7DD175BC8577D610143* L_0 = __this->___monitor__4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Texture_get_useClip_m534DF3424F1EEF35E0B879658BD77B93EE086C5D_inline (Texture_t0549B2E5006DBEA1B5094E664048EA2DF1265863* __this, const RuntimeMethod* method) 
{
	{
		// return useClip_;
		bool L_0 = __this->___useClip__8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
