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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>
struct Action_1_tC64EF7470FE34EAB51143802BA08555322D68183;
// System.Action`3<System.Object,System.Int32Enum,System.Object>
struct Action_3_t4650988ADB675601F20A70864C39D699A6A8465D;
// System.Action`3<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.TerrainTools.PaintContext/ToolAction,System.String>
struct Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C;
// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F;
// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.RenderTexture>
struct Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF;
// System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.Texture>
struct Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>
struct IEqualityComparer_1_t88286C29EF8964DB1FA6326A0679A19AC8C74709;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct KeyCollection_t97828E793E08E7AE593254EBFD6895A9E9604AF2;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>
struct List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5;
// System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/TerrainTile>
struct List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<UnityEngine.Terrain>
struct Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055;
// System.Collections.Generic.Queue`1<UnityEngine.TerrainUtils.TerrainMap/QueueElement>
struct Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct ValueCollection_tBB50DA6B04BF6793F609F48ADA1A351088E36D60;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct ValueCollection_tAD845AD3A8539F70A13D1BE6F0351D29799ADEAB;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.TerrainUtils.TerrainMap>[]
struct EntryU5BU5D_t0D4B039A690585E4A149FAC6B11C554E9BAA164A;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>[]
struct EntryU5BU5D_tF5367AE3FB34F62A304459CBC2E961FB1A82E6DA;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.DetailPrototype[]
struct DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE;
// UnityEngine.TerrainLayer[]
struct TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// UnityEngine.TreeInstance[]
struct TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429;
// UnityEngine.TreePrototype[]
struct TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.TerrainTools.PaintContext/PaintedTerrain[]
struct PaintedTerrainU5BU5D_t8E19EFEBF322E4B20A7A2FE2A2555D5895850CB3;
// UnityEngine.TerrainTools.PaintContext/TerrainTile[]
struct TerrainTileU5BU5D_t12C893DBA73B68ABC0ACFC3C86ACE26E5DEE2223;
// UnityEngine.TerrainUtils.TerrainMap/QueueElement[]
struct QueueElementU5BU5D_tFBAB398FA0BDCC17BFCA40E09C12677C1084748D;
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
// System.Single[,,]
struct SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t62225631BB65062906FDEF1ED16845EF6E34BB4A;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tA42E96C61DFF3800E657E708BCD33A06F6CD2D7B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.TerrainTools.PaintContext
struct PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667;
// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24;
// UnityEngine.TerrainLayer
struct TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9;
// UnityEngine.TerrainUtils.TerrainMap
struct TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139;
// UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A;
// UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358;
// UnityEngine.TerrainTools.PaintContext/ITerrainInfo
struct ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05;
// UnityEngine.TerrainTools.PaintContext/SplatmapUserData
struct SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A;
// UnityEngine.TerrainTools.PaintContext/TerrainTile
struct TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA;
// UnityEngine.TerrainCallbacks/HeightmapChangedCallback
struct HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0;
// UnityEngine.TerrainCallbacks/TextureChangedCallback
struct TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F;
// UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3;
// UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E;
// UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1
struct U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC64EF7470FE34EAB51143802BA08555322D68183_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01C61024FC1988214CCE7BFA157367437E5CD310;
IL2CPP_EXTERN_C String_t* _stringLiteral070224D5E619821086533BEADF16192DFFD15A7E;
IL2CPP_EXTERN_C String_t* _stringLiteral0A1C31610227D7DF1B1F849B322637E473DDE778;
IL2CPP_EXTERN_C String_t* _stringLiteral0E5464267295852DB5E69711BAB248608A393CAF;
IL2CPP_EXTERN_C String_t* _stringLiteral1531971D5051DDBE88CC53A91F81C62814E18B58;
IL2CPP_EXTERN_C String_t* _stringLiteral156B16643114172B0351C390653795872DDA326B;
IL2CPP_EXTERN_C String_t* _stringLiteral18EBE38BC9FEAD45E3033DDE72F02EA42CE29BE2;
IL2CPP_EXTERN_C String_t* _stringLiteral1DDD611BDB719CD9945011B10B0177B699ED3D75;
IL2CPP_EXTERN_C String_t* _stringLiteral20D37E602E5899AD025CE8E2B20C26B3E134C5F3;
IL2CPP_EXTERN_C String_t* _stringLiteral2B1390573814AE789AD19918B24F0BAB91AACF10;
IL2CPP_EXTERN_C String_t* _stringLiteral35D2B32011E88B81022A77D21A28C39AA1800B52;
IL2CPP_EXTERN_C String_t* _stringLiteral3A06B02EFE196FE18D42203175AC0AD263D2C7B6;
IL2CPP_EXTERN_C String_t* _stringLiteral3DF22AE5731F8A9F01D8A152804E1D3A0078E712;
IL2CPP_EXTERN_C String_t* _stringLiteral4034041A2BFB962E3F3F5ED25D413C96E5176EE8;
IL2CPP_EXTERN_C String_t* _stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral5159B549D5C92D688B1DCD40C556F3CDB599A4FD;
IL2CPP_EXTERN_C String_t* _stringLiteral5DB11A5D9B46B0465D27C850A5485B7265E1AA42;
IL2CPP_EXTERN_C String_t* _stringLiteral66934418B61E1E301479D764A172D5D7A9222E3D;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral6871A7B2B0B01537C43DB89BD7327D9E699FAF95;
IL2CPP_EXTERN_C String_t* _stringLiteral6FDBDAC482E6C7A0FDECBBD11BED16F2D677252B;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral76417B3638C5AD1ABB78AE5ECACE0B90F1A7EDB3;
IL2CPP_EXTERN_C String_t* _stringLiteral77A4D95C5A66881369906720C24690D7097D85DC;
IL2CPP_EXTERN_C String_t* _stringLiteral828C612CFA3A4313C55612B532C9698E1FF8191A;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1B2E6507AF77B7FC524F3D2F88289EB512D41;
IL2CPP_EXTERN_C String_t* _stringLiteral9515766D6A0B7A79D305A13C1C4604A6B843AA60;
IL2CPP_EXTERN_C String_t* _stringLiteral9880653A5F8B40A8D3A95F888E48D154DD500782;
IL2CPP_EXTERN_C String_t* _stringLiteral98B1E8B42397703EC7F8F6F13F2D3A787AF7C6EA;
IL2CPP_EXTERN_C String_t* _stringLiteral99F4CBF0AD58BD9A4B7CE75BECABFF6BEFA9A75F;
IL2CPP_EXTERN_C String_t* _stringLiteral9B156264231A1BD638F577224D6CE5D6D0599F9A;
IL2CPP_EXTERN_C String_t* _stringLiteral9C772368F43791F6C052967C4618CA3756B51D55;
IL2CPP_EXTERN_C String_t* _stringLiteral9EC33D76B6E40DB2D9C9B1D741C841FF949C8A2B;
IL2CPP_EXTERN_C String_t* _stringLiteralA95944D03DCAD8FFE6105F980B99EF579B0C0222;
IL2CPP_EXTERN_C String_t* _stringLiteralB2D2B8AFBF08CE435A02D65CDE93E631D5B66916;
IL2CPP_EXTERN_C String_t* _stringLiteralC19D8C58E2FB7E2D7B83AB595833BFBF3A717919;
IL2CPP_EXTERN_C String_t* _stringLiteralC22087015E5AF858547CCEF1382837765BF820EA;
IL2CPP_EXTERN_C String_t* _stringLiteralC540489CC1B605AE39E2C2500B1F58F00482E5D8;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCB2DE5F9A17979E82E4FFB404B4A3D09D1AD04ED;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA7A6A7838927EC05FCD093F480B2A3B6BD8DB7;
IL2CPP_EXTERN_C String_t* _stringLiteralDF8D1D465979FE764E697612A84BF50E45D55E4A;
IL2CPP_EXTERN_C String_t* _stringLiteralEE54A69A932C178902C12FFD21DF5107332C0191;
IL2CPP_EXTERN_C String_t* _stringLiteralEF3B79C1441F0B352BC82EDEAE7F83E650074A9E;
IL2CPP_EXTERN_C String_t* _stringLiteralEFB3ECFDC368B3D96AB71F25CBBA30104A45C279;
IL2CPP_EXTERN_C String_t* _stringLiteralEFFB7168E3613E48A681A1CF8ABA8CE48952519A;
IL2CPP_EXTERN_C String_t* _stringLiteralFFCFCC33CBDC7D25E1E89D072C18B1C7796D5177;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m265E9FB46C80D234AEB47C08D701628D57DBA132_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4E7AE6465929CEEA79B5921CFF3D4BD64E249AF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m384365266E590EDD82F8949169A3C502E643AC95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m5461BE3EE48320EA8E593506F16860A2CB4E9056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA4944115ADCBA991881F907C9E48413EB1EFE42A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5665AD243B285B8D26138C699D544F4124AC7D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA22422F902B1FF70914D8FA2EF849DA0DCDC87D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m001233C3B4F8B3D1A8F044C9D43104F1671688DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mBE9BF06497225D54AC2D2D7AEF6D0F94169B10D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m09F8467FB404D375259C17136F2213FC8455F2BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC60AECD5D4FA770371F4B374F2B026F7198CEF03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1CEA4A6A000E5344DB72DFF5E4FF563FF67F3558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6430F89661ED2AEDEAD6FD241BBDA21BF02135DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1F085EA2ABB67CCEB29CC4A10D6FBC0F2B963349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m88A7ECB72C871AEFAD87667D8512A109C33E7080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m7D86741C1BEF055A22281CF69C6235BFD1E7D521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m32D4949D8D2F580E35346D41EBB14C7933B93482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mCDCBE8274E57C349F8AB212087D5581D34E075DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB316F08C671DB4B5CE814339D5236BEFFDD7B6A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB4F7EBF9F5B2D0C8F2402827427A7E3687D7B2AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m08DF3D3EC2558D76C9D5DA8243F6B45BAA39BFA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAB22E0D0E11D76089DDB513D1C6DEEA986C0EE4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0074ED2BF6C71F0D8CDC4792F07C3D6A50B55597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF634C1C87C0A161D8F03DDBC06493CAF8F48FACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6BD21F2AD5ED8CB1F0769C273903EF6323066EE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE580C229C3B24A65C1A6825C90AC4FF372F2F9AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m7AF2F09D09EFA8DB2E2A396853C9B9FCFA885F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF28152D343320316B4F49074799EFA5A0900383C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m210F37A6777BA685DA96D47965A22617CC5E6C06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mF8FEA9F68E8B9483BB640E01E8F986CBEB03A038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData_CopyActiveRenderTextureToHeightmap_m36D01BB8242D02F3E319271CA2BC2A6B5C428EE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData_DirtyHeightmapRegion_m92C3A0182EE87E484316B0514F25C3D106349AB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData_DirtyTextureRegion_mB66EE109AB4B647EDDC49E3B7A2C8F1CA0215FA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData_GetAlphamaps_m2DEF5D2068D54BDAE78661483C1FC4936B06EA01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData_GetHeights_m3E5C109E98E72A23E39B92F7DF48D87888B2D488_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData_SetAlphamaps_m2FA8E29ADF4D1B2B8286ED0FE61E0CEB1663E423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData_SetHeights_m104C6E5C4E4A12223AA0E2E123E0557302097F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData_SyncTexture_m4799EFAE1FACCB344F25855A7190C0CC3F8C9B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainPaintUtility_GetTerrainAlphaMapChecked_m61B8DC77E576C67F4A93CA116608ABC0786E4A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_1_U3CCollectTerrainsU3Eb__0_m57E871EB2399E5FB7DF78B3C9EBFBF152116AC2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CCreateFromPlacementU3Eb__0_m703A4D4E3D378C9896199B70A89FCDF1A07C737B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass53_0_U3CFindTerrainTilesUnlimitedU3Eb__0_mA575AAFB77E11432AD4789A5E4DB47EE29ABA676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass66_0_U3CGatherAlphamapU3Eb__0_m267E46A16FA8D4413C38D05DB8E68C242563046F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass66_0_U3CGatherAlphamapU3Eb__1_mC736CCFD74BEA0444925BA18C5D877590161F531_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass67_0_U3CScatterAlphamapU3Eb__0_m9ABB337FFDEF8CA150010C341050F1ACE434ED78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE;
struct TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0;
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
struct TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429;
struct TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct PaintedTerrainU5BU5D_t8E19EFEBF322E4B20A7A2FE2A2555D5895850CB3;
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
struct SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t72986D6E9DA49B1952335DAFFF9250DC3CDDEA8E 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0D4B039A690585E4A149FAC6B11C554E9BAA164A* ____entries_1;
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
	KeyCollection_t97828E793E08E7AE593254EBFD6895A9E9604AF2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBB50DA6B04BF6793F609F48ADA1A351088E36D60* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF5367AE3FB34F62A304459CBC2E961FB1A82E6DA* ____entries_1;
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
	KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAD845AD3A8539F70A13D1BE6F0351D29799ADEAB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* ____dictionary_0;
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

// System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>
struct List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PaintedTerrainU5BU5D_t8E19EFEBF322E4B20A7A2FE2A2555D5895850CB3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PaintedTerrainU5BU5D_t8E19EFEBF322E4B20A7A2FE2A2555D5895850CB3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/TerrainTile>
struct List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TerrainTileU5BU5D_t12C893DBA73B68ABC0ACFC3C86ACE26E5DEE2223* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TerrainTileU5BU5D_t12C893DBA73B68ABC0ACFC3C86ACE26E5DEE2223* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<UnityEngine.TerrainUtils.TerrainMap/QueueElement>
struct Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	QueueElementU5BU5D_tFBAB398FA0BDCC17BFCA40E09C12677C1084748D* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// UnityEngine.TerrainCallbacks
struct TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C  : public RuntimeObject
{
};

struct TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_StaticFields
{
	// UnityEngine.TerrainCallbacks/HeightmapChangedCallback UnityEngine.TerrainCallbacks::heightmapChanged
	HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* ___heightmapChanged_0;
	// UnityEngine.TerrainCallbacks/TextureChangedCallback UnityEngine.TerrainCallbacks::textureChanged
	TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* ___textureChanged_1;
};

// UnityEngine.TerrainTools.TerrainPaintUtility
struct TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3  : public RuntimeObject
{
};

struct TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_StaticFields
{
	// UnityEngine.Material UnityEngine.TerrainTools.TerrainPaintUtility::s_BlitMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_BlitMaterial_0;
	// UnityEngine.Material UnityEngine.TerrainTools.TerrainPaintUtility::s_CopyTerrainLayerMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_CopyTerrainLayerMaterial_1;
};

// UnityEngine.TerrainUtils.TerrainUtility
struct TerrainUtility_t2033CBF4E86976650C0371A424B6BDD6B051451D  : public RuntimeObject
{
};

// UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.TreePrototype::m_Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prefab_0;
	// System.Single UnityEngine.TreePrototype::m_BendFactor
	float ___m_BendFactor_1;
	// System.Int32 UnityEngine.TreePrototype::m_NavMeshLod
	int32_t ___m_NavMeshLod_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prefab_0;
	float ___m_BendFactor_1;
	int32_t ___m_NavMeshLod_2;
};
// Native definition for COM marshalling of UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prefab_0;
	float ___m_BendFactor_1;
	int32_t ___m_NavMeshLod_2;
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

// UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139  : public RuntimeObject
{
	// System.Single UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass53_0::maxX
	float ___maxX_0;
	// System.Single UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass53_0::minX
	float ___minX_1;
	// System.Single UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass53_0::maxZ
	float ___maxZ_2;
	// System.Single UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass53_0::minZ
	float ___minZ_3;
};

// UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A  : public RuntimeObject
{
	// UnityEngine.TerrainTools.PaintContext UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass66_0::<>4__this
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* ___U3CU3E4__this_0;
	// UnityEngine.TerrainLayer UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass66_0::inputLayer
	TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___inputLayer_1;
	// System.Boolean UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass66_0::addLayerIfDoesntExist
	bool ___addLayerIfDoesntExist_2;
	// UnityEngine.Material UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass66_0::copyTerrainLayerMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___copyTerrainLayerMaterial_3;
	// UnityEngine.Vector4[] UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass66_0::layerMasks
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___layerMasks_4;
};

// UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358  : public RuntimeObject
{
	// UnityEngine.TerrainTools.PaintContext UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass67_0::<>4__this
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* ___U3CU3E4__this_0;
	// System.String UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass67_0::editorUndoName
	String_t* ___editorUndoName_1;
	// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass67_0::tempTarget
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___tempTarget_2;
	// UnityEngine.Material UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass67_0::copyTerrainLayerMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___copyTerrainLayerMaterial_3;
	// UnityEngine.Vector4[] UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass67_0::layerMasks
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___layerMasks_4;
};

// UnityEngine.TerrainTools.PaintContext/SplatmapUserData
struct SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A  : public RuntimeObject
{
	// UnityEngine.TerrainLayer UnityEngine.TerrainTools.PaintContext/SplatmapUserData::terrainLayer
	TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___terrainLayer_0;
	// System.Int32 UnityEngine.TerrainTools.PaintContext/SplatmapUserData::terrainLayerIndex
	int32_t ___terrainLayerIndex_1;
	// System.Int32 UnityEngine.TerrainTools.PaintContext/SplatmapUserData::mapIndex
	int32_t ___mapIndex_2;
	// System.Int32 UnityEngine.TerrainTools.PaintContext/SplatmapUserData::channelIndex
	int32_t ___channelIndex_3;
};

// UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3  : public RuntimeObject
{
	// System.Int32 UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0::groupID
	int32_t ___groupID_0;
};

// UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E  : public RuntimeObject
{
	// System.Boolean UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0::onlyAutoConnectedTerrains
	bool ___onlyAutoConnectedTerrains_0;
};

// UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1
struct U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951  : public RuntimeObject
{
	// UnityEngine.Terrain UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1::t
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___t_0;
	// UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0 UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* ___CSU24U3CU3E8__locals1_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* ___value_1;
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

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t62225631BB65062906FDEF1ED16845EF6E34BB4A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tA42E96C61DFF3800E657E708BCD33A06F6CD2D7B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<depthStencilFormat>k__BackingField
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.TerrainUtils.TerrainTileCoord
struct TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 
{
	// System.Int32 UnityEngine.TerrainUtils.TerrainTileCoord::tileX
	int32_t ___tileX_0;
	// System.Int32 UnityEngine.TerrainUtils.TerrainTileCoord::tileZ
	int32_t ___tileZ_1;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// UnityEngine.TerrainTools.PaintContext/PaintedTerrain
struct PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 
{
	// UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/PaintedTerrain::terrain
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_0;
	// UnityEngine.TerrainTools.PaintContext/ToolAction UnityEngine.TerrainTools.PaintContext/PaintedTerrain::action
	int32_t ___action_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.TerrainTools.PaintContext/PaintedTerrain
struct PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshaled_pinvoke
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_0;
	int32_t ___action_1;
};
// Native definition for COM marshalling of UnityEngine.TerrainTools.PaintContext/PaintedTerrain
struct PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshaled_com
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_0;
	int32_t ___action_1;
};

// UnityEngine.TerrainUtils.TerrainMap/QueueElement
struct QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B 
{
	// System.Int32 UnityEngine.TerrainUtils.TerrainMap/QueueElement::tileX
	int32_t ___tileX_0;
	// System.Int32 UnityEngine.TerrainUtils.TerrainMap/QueueElement::tileZ
	int32_t ___tileZ_1;
	// UnityEngine.Terrain UnityEngine.TerrainUtils.TerrainMap/QueueElement::terrain
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.TerrainUtils.TerrainMap/QueueElement
struct QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshaled_pinvoke
{
	int32_t ___tileX_0;
	int32_t ___tileZ_1;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_2;
};
// Native definition for COM marshalling of UnityEngine.TerrainUtils.TerrainMap/QueueElement
struct QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshaled_com
{
	int32_t ___tileX_0;
	int32_t ___tileZ_1;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ____currentKey_3;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___value_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.TerrainTools.BrushTransform
struct BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5 
{
	// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::<brushOrigin>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CbrushOriginU3Ek__BackingField_0;
	// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::<brushU>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CbrushUU3Ek__BackingField_1;
	// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::<brushV>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CbrushVU3Ek__BackingField_2;
	// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::<targetOrigin>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CtargetOriginU3Ek__BackingField_3;
	// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::<targetX>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CtargetXU3Ek__BackingField_4;
	// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::<targetY>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CtargetYU3Ek__BackingField_5;
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

// UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.DetailPrototype::m_Prototype
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prototype_2;
	// UnityEngine.Texture2D UnityEngine.DetailPrototype::m_PrototypeTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_PrototypeTexture_3;
	// UnityEngine.Color UnityEngine.DetailPrototype::m_HealthyColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HealthyColor_4;
	// UnityEngine.Color UnityEngine.DetailPrototype::m_DryColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DryColor_5;
	// System.Single UnityEngine.DetailPrototype::m_MinWidth
	float ___m_MinWidth_6;
	// System.Single UnityEngine.DetailPrototype::m_MaxWidth
	float ___m_MaxWidth_7;
	// System.Single UnityEngine.DetailPrototype::m_MinHeight
	float ___m_MinHeight_8;
	// System.Single UnityEngine.DetailPrototype::m_MaxHeight
	float ___m_MaxHeight_9;
	// System.Int32 UnityEngine.DetailPrototype::m_NoiseSeed
	int32_t ___m_NoiseSeed_10;
	// System.Single UnityEngine.DetailPrototype::m_NoiseSpread
	float ___m_NoiseSpread_11;
	// System.Single UnityEngine.DetailPrototype::m_HoleEdgePadding
	float ___m_HoleEdgePadding_12;
	// System.Int32 UnityEngine.DetailPrototype::m_RenderMode
	int32_t ___m_RenderMode_13;
	// System.Int32 UnityEngine.DetailPrototype::m_UsePrototypeMesh
	int32_t ___m_UsePrototypeMesh_14;
	// System.Int32 UnityEngine.DetailPrototype::m_UseInstancing
	int32_t ___m_UseInstancing_15;
};

struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_StaticFields
{
	// UnityEngine.Color UnityEngine.DetailPrototype::DefaultHealthColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DefaultHealthColor_0;
	// UnityEngine.Color UnityEngine.DetailPrototype::DefaultDryColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DefaultDryColor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prototype_2;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_PrototypeTexture_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HealthyColor_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DryColor_5;
	float ___m_MinWidth_6;
	float ___m_MaxWidth_7;
	float ___m_MinHeight_8;
	float ___m_MaxHeight_9;
	int32_t ___m_NoiseSeed_10;
	float ___m_NoiseSpread_11;
	float ___m_HoleEdgePadding_12;
	int32_t ___m_RenderMode_13;
	int32_t ___m_UsePrototypeMesh_14;
	int32_t ___m_UseInstancing_15;
};
// Native definition for COM marshalling of UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prototype_2;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_PrototypeTexture_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HealthyColor_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DryColor_5;
	float ___m_MinWidth_6;
	float ___m_MaxWidth_7;
	float ___m_MinHeight_8;
	float ___m_MaxHeight_9;
	int32_t ___m_NoiseSeed_10;
	float ___m_NoiseSpread_11;
	float ___m_HoleEdgePadding_12;
	int32_t ___m_RenderMode_13;
	int32_t ___m_UsePrototypeMesh_14;
	int32_t ___m_UseInstancing_15;
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

// UnityEngine.TerrainTools.PaintContext
struct PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A  : public RuntimeObject
{
	// UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext::<originTerrain>k__BackingField
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___U3CoriginTerrainU3Ek__BackingField_0;
	// UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext::<pixelRect>k__BackingField
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___U3CpixelRectU3Ek__BackingField_1;
	// System.Int32 UnityEngine.TerrainTools.PaintContext::<targetTextureWidth>k__BackingField
	int32_t ___U3CtargetTextureWidthU3Ek__BackingField_2;
	// System.Int32 UnityEngine.TerrainTools.PaintContext::<targetTextureHeight>k__BackingField
	int32_t ___U3CtargetTextureHeightU3Ek__BackingField_3;
	// UnityEngine.Vector2 UnityEngine.TerrainTools.PaintContext::<pixelSize>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpixelSizeU3Ek__BackingField_4;
	// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::<sourceRenderTexture>k__BackingField
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___U3CsourceRenderTextureU3Ek__BackingField_5;
	// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::<destinationRenderTexture>k__BackingField
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___U3CdestinationRenderTextureU3Ek__BackingField_6;
	// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::<oldRenderTexture>k__BackingField
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___U3ColdRenderTextureU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/TerrainTile> UnityEngine.TerrainTools.PaintContext::m_TerrainTiles
	List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* ___m_TerrainTiles_8;
	// System.Single UnityEngine.TerrainTools.PaintContext::m_HeightWorldSpaceMin
	float ___m_HeightWorldSpaceMin_9;
	// System.Single UnityEngine.TerrainTools.PaintContext::m_HeightWorldSpaceMax
	float ___m_HeightWorldSpaceMax_10;
};

struct PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_StaticFields
{
	// System.Action`3<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.TerrainTools.PaintContext/ToolAction,System.String> UnityEngine.TerrainTools.PaintContext::onTerrainTileBeforePaint
	Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1* ___onTerrainTileBeforePaint_11;
	// System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain> UnityEngine.TerrainTools.PaintContext::s_PaintedTerrain
	List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* ___s_PaintedTerrain_12;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.TerrainUtils.TerrainMap
struct TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.TerrainUtils.TerrainMap::m_patchSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_patchSize_0;
	// UnityEngine.TerrainUtils.TerrainMapStatusCode UnityEngine.TerrainUtils.TerrainMap::m_errorCode
	int32_t ___m_errorCode_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain> UnityEngine.TerrainUtils.TerrainMap::m_terrainTiles
	Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* ___m_terrainTiles_2;
};

// UnityEngine.TreeInstance
struct TreeInstance_t382B018173ED020660D262061EA9424682614F50 
{
	// UnityEngine.Vector3 UnityEngine.TreeInstance::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// System.Single UnityEngine.TreeInstance::widthScale
	float ___widthScale_1;
	// System.Single UnityEngine.TreeInstance::heightScale
	float ___heightScale_2;
	// System.Single UnityEngine.TreeInstance::rotation
	float ___rotation_3;
	// UnityEngine.Color32 UnityEngine.TreeInstance::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
	// UnityEngine.Color32 UnityEngine.TreeInstance::lightmapColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___lightmapColor_5;
	// System.Int32 UnityEngine.TreeInstance::prototypeIndex
	int32_t ___prototypeIndex_6;
	// System.Single UnityEngine.TreeInstance::temporaryDistance
	float ___temporaryDistance_7;
};

// UnityEngine.TerrainTools.PaintContext/TerrainTile
struct TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA  : public RuntimeObject
{
	// UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/TerrainTile::terrain
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_0;
	// UnityEngine.Vector2Int UnityEngine.TerrainTools.PaintContext/TerrainTile::tileOriginPixels
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___tileOriginPixels_1;
	// UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext/TerrainTile::clippedTerrainPixels
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___clippedTerrainPixels_2;
	// UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext/TerrainTile::clippedPCPixels
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___clippedPCPixels_3;
	// UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext/TerrainTile::paddedTerrainPixels
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___paddedTerrainPixels_4;
	// UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext/TerrainTile::paddedPCPixels
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___paddedPCPixels_5;
	// System.Object UnityEngine.TerrainTools.PaintContext/TerrainTile::userData
	RuntimeObject* ___userData_6;
	// System.Boolean UnityEngine.TerrainTools.PaintContext/TerrainTile::gatherEnable
	bool ___gatherEnable_7;
	// System.Boolean UnityEngine.TerrainTools.PaintContext/TerrainTile::scatterEnable
	bool ___scatterEnable_8;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields
{
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_11;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_12;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_13;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailsPerRes
	int32_t ___k_MaximumDetailsPerRes_14;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_15;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_16;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_17;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_18;
};

// UnityEngine.TerrainLayer
struct TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.TerrainLayer
struct TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.TerrainLayer
struct TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>
struct Action_1_tC64EF7470FE34EAB51143802BA08555322D68183  : public MulticastDelegate_t
{
};

// System.Action`3<System.Object,System.Int32Enum,System.Object>
struct Action_3_t4650988ADB675601F20A70864C39D699A6A8465D  : public MulticastDelegate_t
{
};

// System.Action`3<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.TerrainTools.PaintContext/ToolAction,System.String>
struct Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.RenderTexture>
struct Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.Texture>
struct Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388  : public MulticastDelegate_t
{
};

// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};

// System.Predicate`1<UnityEngine.Terrain>
struct Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055  : public MulticastDelegate_t
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

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
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

// UnityEngine.TerrainCallbacks/HeightmapChangedCallback
struct HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0  : public MulticastDelegate_t
{
};

// UnityEngine.TerrainCallbacks/TextureChangedCallback
struct TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE  : public RuntimeArray
{
	ALIGN_FIELD (8) Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* m_Items[1];

	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4  : public RuntimeArray
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
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
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
// UnityEngine.DetailPrototype[]
struct DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7  : public RuntimeArray
{
	ALIGN_FIELD (8) DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* m_Items[1];

	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F  : public RuntimeArray
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.TreeInstance[]
struct TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429  : public RuntimeArray
{
	ALIGN_FIELD (8) TreeInstance_t382B018173ED020660D262061EA9424682614F50 m_Items[1];

	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreeInstance_t382B018173ED020660D262061EA9424682614F50 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreeInstance_t382B018173ED020660D262061EA9424682614F50 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.TreePrototype[]
struct TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A  : public RuntimeArray
{
	ALIGN_FIELD (8) TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* m_Items[1];

	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[,,]
struct SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488  : public RuntimeArray
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
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* m_Items[1];

	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.TerrainLayer[]
struct TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0  : public RuntimeArray
{
	ALIGN_FIELD (8) TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* m_Items[1];

	inline TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* value)
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.TerrainTools.PaintContext/PaintedTerrain[]
struct PaintedTerrainU5BU5D_t8E19EFEBF322E4B20A7A2FE2A2555D5895850CB3  : public RuntimeArray
{
	ALIGN_FIELD (8) PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 m_Items[1];

	inline PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___terrain_0), (void*)NULL);
	}
	inline PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___terrain_0), (void*)NULL);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mF6F2C5F869485AA206FDE526CAA58BBC691A8AD5_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.TerrainUtils.TerrainMap/QueueElement>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m210F37A6777BA685DA96D47965A22617CC5E6C06_gshared (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.TerrainUtils.TerrainMap/QueueElement>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5_gshared (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* __this, QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<UnityEngine.TerrainUtils.TerrainMap/QueueElement>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B Queue_1_Dequeue_mF28152D343320316B4F49074799EFA5A0900383C_gshared (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m7D1C8AC9355A50AF1C84A0A4B186C1D52083FBB7_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.TerrainUtils.TerrainMap/QueueElement>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mF8FEA9F68E8B9483BB640E01E8F986CBEB03A038_gshared_inline (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBEB6B3A304C6A01DA2A2E016B112DD4E73D6A0B8_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mCDB94B777C71A4AEC648AEE14D9C777B05667901_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59* Dictionary_2_get_Keys_m1A371FDB5221EB779B15B24DE039B1191CB9394D_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53 KeyCollection_GetEnumerator_m0046DC4034F114EC3737521FFB2F49F4C1E6F869_gshared (KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m499372F99070BD8E7376FF1B2EE3040325A7E141_gshared (Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 Enumerator_get_Current_mC41EF0278150018906F2AB9D7CF81AE865E6AA1C_gshared_inline (Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEE338DC5230565298472253C6A1646332E2E83CF_gshared (Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 Dictionary_2_GetEnumerator_mE58E6AC88AD044F9EB9989FF2F6AA6F05ECA402F_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE3662EBE47C6E066285CDB5B63ACB07D73B5CD84_gshared (Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE Enumerator_get_Current_mAB48908F9E456DE35489D40F781F13159CD102CA_gshared_inline (Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_gshared_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0192F3C0DFB719827E8F40E0992166F0CE78BEE6_gshared (Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_gshared_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Int32Enum,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mEF2BD00B1D5F4DBF1CFD66724E184735DA309261_gshared_inline (Action_3_t4650988ADB675601F20A70864C39D699A6A8465D* __this, RuntimeObject* ___arg10, int32_t ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 List_1_get_Item_m6BD21F2AD5ED8CB1F0769C273903EF6323066EE5_gshared (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7AF2F09D09EFA8DB2E2A396853C9B9FCFA885F39_gshared (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, int32_t ___index0, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF634C1C87C0A161D8F03DDBC06493CAF8F48FACF_gshared_inline (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB316F08C671DB4B5CE814339D5236BEFFDD7B6A1_gshared_inline (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m08DF3D3EC2558D76C9D5DA8243F6B45BAA39BFA3_gshared (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::Internal_Create(UnityEngine.TerrainLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_Internal_Create_mA5EB262D9B9D9B3180705A14040FBEAA4257D3E1 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___layer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::get_tileSize_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_tileSize_Injected_m8D8A89EA332B064157DB6A83826870E691AA4FC5 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::set_tileSize_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_tileSize_Injected_m2D6D83EA3DFBB1948BDC4D1984BCE9D43CAF18B2 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::get_tileOffset_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_tileOffset_Injected_mA2FADD8981A297BFB4DE8663FA757834324DB8E0 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::set_tileOffset_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_tileOffset_Injected_m4082583251015F2D3621EE132031B852741C092C (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::get_specular_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_specular_Injected_m17BCA78D6D0B917E71AE7D441367C8A30149BC3C (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::set_specular_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_specular_Injected_mB6275B761452010AEE54E6B15F63435FA7A1D485 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::get_diffuseRemapMin_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_diffuseRemapMin_Injected_m12394DF34C1CC7B138FA3389D4583EC00D555FF0 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::set_diffuseRemapMin_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_diffuseRemapMin_Injected_mFA1B63F9AA91C8EA82104C4CC1A7778C5AED7706 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::get_diffuseRemapMax_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_diffuseRemapMax_Injected_m2E247FD71A4D51D8E54DA3BF504C1731FB6F23AC (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::set_diffuseRemapMax_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_diffuseRemapMax_Injected_m90271AB60993CFD03E422C688FAFC64017D4BEE3 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::get_maskMapRemapMin_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_maskMapRemapMin_Injected_mEC87DA9E3173F7D39C047FABAB507CC4351FDF24 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::set_maskMapRemapMin_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_maskMapRemapMin_Injected_m388350F2F0C06A10AF0DA39725B59103F6EE7F2C (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::get_maskMapRemapMax_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_maskMapRemapMax_Injected_m1BA6C54D1C610E455C6A7919E5E08EA304CA7403 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainLayer::set_maskMapRemapMax_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_maskMapRemapMax_Injected_m10CF5BC6AA549FC669BCB7881D6D75D569EC20EE (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Terrain::SampleHeight_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_SampleHeight_Injected_m08851544EDBB88AFD061CD7E63E7995203BC7557 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___worldPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::GetPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_GetPosition_Injected_m23EC0958466016EFB553CFBBE1B6E4FB076FE419 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Terrain::get_normalmapFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_normalmapFormat_m70C88E3838D7938A60BFBBEF5BB2EFCD99EBA716 (const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5 (int32_t ___format0, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Terrain::get_holesFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_holesFormat_m3BCE4632B6CE7D1A058070DC65CEDEF5365838BE (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TreePrototype::Equals(UnityEngine.TreePrototype)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreePrototype_Equals_m6F39B894827A28E1ADBF4403922FFCA8CF55E265 (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* ___other0, const RuntimeMethod* method) ;
// System.Int32 System.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.TreePrototype::get_prefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* TreePrototype_get_prefab_mCE1630C35B09770D35B2ECA45B98D1CB6D5AC67C (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.TreePrototype::get_bendFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TreePrototype_get_bendFactor_mC78774070395FFBEF5588233ED4C40D253F2B087 (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TreePrototype::get_navMeshLod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreePrototype_get_navMeshLod_m68F7C292A64B7560076E09BF0B3AB6D681886C6C (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.DetailPrototype::Equals(UnityEngine.DetailPrototype)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DetailPrototype_Equals_mDCF0B4B10AB82B883A1B1EE9F286D92A99636B20 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_Create_m79BF764CFF5F49D17E2BFC8B20F60B4CF70BE4E1 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ___terrainData0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_internalHeightmapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_internalHeightmapResolution_m83C6A32499AAAAFDD57DF73BA460CBCF02F98118 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_internalHeightmapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_internalHeightmapResolution_m18F96875BE176D13F26A55AEBB0343902D5C1B5A (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::get_heightmapScale_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_heightmapScale_Injected_m3F94935D94B0B8029E2145C33B023AB8677C39AB (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TerrainData::IsHolesTextureCompressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainData_IsHolesTextureCompressed_mBFE653BBF59360E5382F66592EF1F3E48ED4057D (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.TerrainData::GetCompressedHolesTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainData_GetCompressedHolesTexture_m219472651551DC5C4613B441C27E504DA693411F (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.TerrainData::GetHolesTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TerrainData_GetHolesTexture_mE1BC7A225983716A760BA8ACEFEC6DEFF6EA572A (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_heightmapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_size_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_size_Injected_mF315143468DD64DB825C9D0A03EF491E035666D8 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::get_bounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_bounds_Injected_mD98BEEB610CCB2688123B28111C35D3E6415BDE5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___ret0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Single[,] UnityEngine.TerrainData::Internal_GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* TerrainData_Internal_GetHeights_mEDF77233265AFA8901DE8FB61661385337B70810 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85 (String_t* ___fmt0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_SetHeights(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SetHeights_m8E3E77B7A38E85521BF693D7EB3B9E277CDBE12E (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___heights4, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::GetInterpolatedNormal_Injected(System.Single,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_GetInterpolatedNormal_Injected_mF6E35FCDF546E498658E864D47EB87C22B41E571 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___x0, float ___y1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret2, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::get_wavingGrassTint_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_wavingGrassTint_Injected_mDDE7C4FCA35CCFAF7D2674D225DC36B4D77CAD25 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_wavingGrassTint_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassTint_Injected_mDF8BCA497383058F5054AE782FFE9CAFE63FF142 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_SetDetailResolution(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SetDetailResolution_mF138086D635E5D45AF0357589B4107706DD624D3 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___patchCount0, int32_t ___resolutionPerPatch1, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_SetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SetDetailLayer_m782D0D38E2A1BDAEAF1F3E3C2D0282991019899F (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___totalWidth2, int32_t ___totalHeight3, int32_t ___detailIndex4, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___data5, const RuntimeMethod* method) ;
// UnityEngine.TreeInstance[] UnityEngine.TerrainData::Internal_GetTreeInstances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* TerrainData_Internal_GetTreeInstances_m0DCDC4D93E2CEC457C5BD8D0FE898B5A632E8347 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::SetTreeInstances(UnityEngine.TreeInstance[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetTreeInstances_m536FA2F30FE5085FCFB05F7BE8D26943214EAA02 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* ___instances0, bool ___snapToHeightmap1, const RuntimeMethod* method) ;
// System.Single[,,] UnityEngine.TerrainData::Internal_GetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* TerrainData_Internal_GetAlphamaps_m6891C19FF72B4394D6BAC3B098A3FCAC1FC6BF36 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_Internal_alphamapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_Internal_alphamapResolution_mDA8EF6055A2022B3E1E4E6ECBF8DF4387DE8A930 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_Internal_alphamapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_Internal_alphamapResolution_mA33B7F95DF603037846D76F6061355DDD1C8E556 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_alphamapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapResolution_mC5D1C8FF4A5AFFCCFCF1382FED0D1AD46563D6F8 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_Internal_baseMapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_Internal_baseMapResolution_m160A9621FE9E5BE642C8CE8C8DA64A07DDF5830F (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_Internal_baseMapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_Internal_baseMapResolution_mB7C108582B3A0100033DAA477D55A687405B5DD8 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_alphamapLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapLayers_mF8A0A4F157F7C56354C5A6E3FABF9F230F410F69 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_SetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[,,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SetAlphamaps_m87D35A2FED5E274AEBDF3ADB00A7FA477861E8FD (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___map4, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_alphamapTextureCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapTextureCount_mF378908EA58CA135A4D58D586179418F1A6F14CD (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.TerrainData::GetAlphamapTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_CopyActiveRenderTextureToHeightmap_Injected(UnityEngine.RectInt&,System.Int32,System.Int32,UnityEngine.TerrainHeightmapSyncControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_CopyActiveRenderTextureToHeightmap_Injected_mBCC5601037CF0D8C81E936AB9C6270C2E128EF7C (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___rect0, int32_t ___destX1, int32_t ___destY2, int32_t ___syncControl3, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_CopyActiveRenderTextureToHoles_Injected(UnityEngine.RectInt&,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_CopyActiveRenderTextureToHoles_Injected_m79962847A7F930086EE6436D8D0EDFABF3C3F967 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___rect0, int32_t ___destX1, int32_t ___destY2, bool ___allowDelayedCPUSync3, const RuntimeMethod* method) ;
// UnityEngine.Rendering.CopyTextureSupport UnityEngine.SystemInfo::get_copyTextureSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2 (const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7 (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_CopyActiveRenderTextureToHeightmap(UnityEngine.RectInt,System.Int32,System.Int32,UnityEngine.TerrainHeightmapSyncControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_CopyActiveRenderTextureToHeightmap_m431A62A0EC8B28CE9CA58FB081A58123060EB378 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___rect0, int32_t ___destX1, int32_t ___destY2, int32_t ___syncControl3, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___xMin0, int32_t ___yMin1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainCallbacks::InvokeHeightmapChangedCallback(UnityEngine.TerrainData,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainCallbacks_InvokeHeightmapChangedCallback_m731ED939CBD563CCCE503062602DF5908205AD04 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ___terrainData0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_DirtyHeightmapRegion(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.TerrainHeightmapSyncControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_DirtyHeightmapRegion_mF080B77155696B5E1E0715540DE8031A3F421FC4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___syncControl4, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String UnityEngine.TerrainData::get_HolesTextureName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TerrainData_get_HolesTextureName_m050635081E2E26FDE05BFD35253710DE84E7A12F (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.TerrainData::get_holesTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TerrainData_get_holesTexture_m967249F842D3BFC631ED03C847C41EE4D0A56912 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_holesResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_holesResolution_m9DE109FB3A0874F7F4706543D0903AFA12D1BC53 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.TerrainData::get_AlphamapTextureName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TerrainData_get_AlphamapTextureName_mC3E6B77E19252385A78C74D853F7CA4375A51882 (const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_CopyActiveRenderTextureToHoles(UnityEngine.RectInt,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_CopyActiveRenderTextureToHoles_m3181CE7CD4B40E3EB42B571E3489A2226C6E0A1A (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___rect0, int32_t ___destX1, int32_t ___destY2, bool ___allowDelayedCPUSync3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TerrainData::get_SupportsCopyTextureBetweenRTAndTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainData_get_SupportsCopyTextureBetweenRTAndTexture_mE93A6D23586EABCFC4B1267F66E98A8C6C7E35BE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Texture::get_mipmapCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTexture::get_graphicsFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_graphicsFormat_m615EA91709BD404765C0C85425CE5F3575F90302 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTexture::get_depthStencilFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_depthStencilFormat_m6ACD9DAF17D844CFBA06249D8DB130018C370CB2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::.ctor(System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor__ctor_m8B0D32DC550540B5546891C2F6300F384D6FE692 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___width0, int32_t ___height1, int32_t ___colorFormat2, int32_t ___depthStencilFormat3, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_sRGB(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_sRGB_mAB7A494EE8C496C22B3BBBCB90488312D46F3429 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_autoGenerateMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mA8C827B80D3C07D0B8CDF7F5270FB5D3E53DD235 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::CopyTexture(UnityEngine.Texture,System.Int32,System.Int32,UnityEngine.Texture,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, int32_t ___srcElement1, int32_t ___srcMip2, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___dst3, int32_t ___dstElement4, int32_t ___dstMip5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::CopyTexture(UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyTexture_mA6F9298621B0493A08483EF57028B66C93FFCBA8 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, int32_t ___srcElement1, int32_t ___srcMip2, int32_t ___srcX3, int32_t ___srcY4, int32_t ___srcWidth5, int32_t ___srcHeight6, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___dst7, int32_t ___dstElement8, int32_t ___dstMip9, int32_t ___dstX10, int32_t ___dstY11, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::GenerateMips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_GenerateMips_m107161ADCD61031F2DF07209C0CA096E9908D4F5 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::CopyTexture(UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyTexture_m613750C66DF707DB4F24570A3402EE94257C0C58 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___dst1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_MarkAlphamapDirtyRegion(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_MarkAlphamapDirtyRegion_mB212FE00063E5391813EA3C57C71AF5669F9C064 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___alphamapIndex0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_graphicsUVStartsAtTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_graphicsUVStartsAtTop_m152BEEFFF20719C9EAB612AD238114BD0B3BFE4B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___updateMipmaps0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_ClearAlphamapDirtyRegion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_ClearAlphamapDirtyRegion_m570C14031954B78348B93B24361EB0B570622588 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___alphamapIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainCallbacks::InvokeTextureChangedCallback(UnityEngine.TerrainData,System.String,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainCallbacks_InvokeTextureChangedCallback_mB508E8B7A884854AA01AE5B88AB33E1AE40F4318 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ___terrainData0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_DirtyHolesRegion(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_DirtyHolesRegion_mBC52464648FFA679E45C579BCC3B9FFF68DD3EBA (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, bool ___allowDelayedCPUSync4, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::SyncTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SyncTexture_m4799EFAE1FACCB344F25855A7190C0CC3F8C9B2D (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, String_t* ___textureName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_SyncAlphamaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SyncAlphamaps_mFDFD1F09BB38C77A2F408331299CCF586FDC0A33 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_SyncHoles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SyncHoles_m536B2E7102335849E42E867DB27166BB55FED0F6 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E (int32_t ___type0, const RuntimeMethod* method) ;
// UnityEngine.Terrain[] UnityEngine.TerrainData::get_users()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainCallbacks/HeightmapChangedCallback::Invoke(UnityEngine.Terrain,UnityEngine.RectInt,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_inline (HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainCallbacks/TextureChangedCallback::Invoke(UnityEngine.Terrain,System.String,UnityEngine.RectInt,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_inline (TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainUtils.TerrainTileCoord::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA4944115ADCBA991881F907C9E48413EB1EFE42A (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667**, const RuntimeMethod*))Dictionary_2_TryGetValue_mF6F2C5F869485AA206FDE526CAA58BBC691A8AD5_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainUtils.TerrainMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap__ctor_mCDB47BA50D9D54E65754028F9CF8F91828FE616F (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.TerrainUtils.TerrainMap/QueueElement>::.ctor()
inline void Queue_1__ctor_m210F37A6777BA685DA96D47965A22617CC5E6C06 (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1*, const RuntimeMethod*))Queue_1__ctor_m210F37A6777BA685DA96D47965A22617CC5E6C06_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainUtils.TerrainMap/QueueElement::.ctor(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueElement__ctor_m1A6C6D9526BCDA206E451B66F7AF9AFF5445F125 (QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B* __this, int32_t ___tileX0, int32_t ___tileZ1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.TerrainUtils.TerrainMap/QueueElement>::Enqueue(T)
inline void Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5 (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* __this, QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1*, QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B, const RuntimeMethod*))Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5_gshared)(__this, ___item0, method);
}
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701 (const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<UnityEngine.TerrainUtils.TerrainMap/QueueElement>::Dequeue()
inline QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B Queue_1_Dequeue_mF28152D343320316B4F49074799EFA5A0900383C (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* __this, const RuntimeMethod* method)
{
	return ((  QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B (*) (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1*, const RuntimeMethod*))Queue_1_Dequeue_mF28152D343320316B4F49074799EFA5A0900383C_gshared)(__this, method);
}
// System.Boolean System.Predicate`1<UnityEngine.Terrain>::Invoke(T)
inline bool Predicate_1_Invoke_mA6B25B82B5FF8BFA2DCF9E5A8600C761222B0B2A_inline (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, const RuntimeMethod*))Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.TerrainUtils.TerrainMap::TryToAddTerrain(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainMap_TryToAddTerrain_m03A05C883F317FD2E6956ADD6625409E8A90BE15 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::get_Count()
inline int32_t Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024 (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, const RuntimeMethod*))Dictionary_2_get_Count_m7D1C8AC9355A50AF1C84A0A4B186C1D52083FBB7_gshared)(__this, method);
}
// UnityEngine.Terrain UnityEngine.Terrain::get_leftNeighbor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Terrain_get_leftNeighbor_mA42E758BD513BC9E0FB87888FC24B3C4349A353E (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Terrain UnityEngine.Terrain::get_bottomNeighbor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Terrain_get_bottomNeighbor_m31306E01318F62D214B5E0966C988FB24255406F (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.Terrain UnityEngine.Terrain::get_rightNeighbor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Terrain_get_rightNeighbor_mA50D19F61FFBA544E94733B097D4409B15FECC17 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.Terrain UnityEngine.Terrain::get_topNeighbor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Terrain_get_topNeighbor_mCBC502C4CC0D617863D7A3A726EBFA4BD18BDF8C (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.TerrainUtils.TerrainMap/QueueElement>::get_Count()
inline int32_t Queue_1_get_Count_mF8FEA9F68E8B9483BB640E01E8F986CBEB03A038_inline (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1*, const RuntimeMethod*))Queue_1_get_Count_mF8FEA9F68E8B9483BB640E01E8F986CBEB03A038_gshared_inline)(__this, method);
}
// UnityEngine.TerrainUtils.TerrainMapStatusCode UnityEngine.TerrainUtils.TerrainMap::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainMap_Validate_mAFBB4A2D0290E25D59902A1BD5DA1EBC2ACD1326 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mAFD4AEF760F5CC7CE66BAD750DAD3697397E8945 (U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Terrain::get_groupingID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<UnityEngine.Terrain>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m80A5EFAAAC439A069D5782C725DF325FDD5D891C (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.TerrainUtils.TerrainMap UnityEngine.TerrainUtils.TerrainMap::CreateFromPlacement(UnityEngine.Vector2,UnityEngine.Vector2,System.Predicate`1<UnityEngine.Terrain>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* TerrainMap_CreateFromPlacement_m64B90ADBC1D3A1AE18CEC7D0B452377E10B2BCB5 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gridOrigin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gridSize1, Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* ___filter2, bool ___fullValidation3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::.ctor()
inline void Dictionary_2__ctor_mCA22422F902B1FF70914D8FA2EF849DA0DCDC87D (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, const RuntimeMethod*))Dictionary_2__ctor_mBEB6B3A304C6A01DA2A2E016B112DD4E73D6A0B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::Add(TKey,TValue)
inline void Dictionary_2_Add_m265E9FB46C80D234AEB47C08D701628D57DBA132 (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, const RuntimeMethod*))Dictionary_2_Add_mCDB94B777C71A4AEC648AEE14D9C777B05667901_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Terrain UnityEngine.TerrainUtils.TerrainMap::GetTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainUtils.TerrainMap::AddTerrainInternal(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_AddTerrainInternal_m507CE3A3F880B33CA2330F69464E3511D5B9BD71 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___x0, int32_t ___z1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::get_Keys()
inline KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E* Dictionary_2_get_Keys_mBE9BF06497225D54AC2D2D7AEF6D0F94169B10D4 (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E* (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, const RuntimeMethod*))Dictionary_2_get_Keys_m1A371FDB5221EB779B15B24DE039B1191CB9394D_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::GetEnumerator()
inline Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689 KeyCollection_GetEnumerator_m7D86741C1BEF055A22281CF69C6235BFD1E7D521 (KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689 (*) (KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E*, const RuntimeMethod*))KeyCollection_GetEnumerator_m0046DC4034F114EC3737521FFB2F49F4C1E6F869_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::Dispose()
inline void Enumerator_Dispose_mC60AECD5D4FA770371F4B374F2B026F7198CEF03 (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689*, const RuntimeMethod*))Enumerator_Dispose_m499372F99070BD8E7376FF1B2EE3040325A7E141_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::get_Current()
inline TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 Enumerator_get_Current_m88A7ECB72C871AEFAD87667D8512A109C33E7080_inline (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689* __this, const RuntimeMethod* method)
{
	return ((  TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 (*) (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689*, const RuntimeMethod*))Enumerator_get_Current_mC41EF0278150018906F2AB9D7CF81AE865E6AA1C_gshared_inline)(__this, method);
}
// System.Void UnityEngine.TerrainUtils.TerrainMap::ValidateTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_ValidateTerrain_m8D9B035B3851E0ED8BB5877BD11F63BA85029653 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::MoveNext()
inline bool Enumerator_MoveNext_m6430F89661ED2AEDEAD6FD241BBDA21BF02135DC (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689*, const RuntimeMethod*))Enumerator_MoveNext_mEE338DC5230565298472253C6A1646332E2E83CF_gshared)(__this, method);
}
// System.Boolean UnityEngine.Terrain::get_allowAutoConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___left0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___top1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___right2, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___bottom3, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m4C022C4675BA4CFC7E7AAA5692979CDE6CD8E611 (U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TerrainUtils.TerrainUtility::ValidTerrainsExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainUtility_ValidTerrainsExist_m0DD08E4CEC739929A9AEBCEA849EDFE79985A207 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::.ctor()
inline void Dictionary_2__ctor_m5665AD243B285B8D26138C699D544F4124AC7D78 (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_1__ctor_mA329ED5B221AE8787EAEA1124A2A95675FDD1695 (U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m384365266E590EDD82F8949169A3C502E643AC95 (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// UnityEngine.TerrainUtils.TerrainMap UnityEngine.TerrainUtils.TerrainMap::CreateFromPlacement(UnityEngine.Terrain,System.Predicate`1<UnityEngine.Terrain>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* TerrainMap_CreateFromPlacement_mC7822A5F4FC2A2CB119259A48F19D364ACEC5AE7 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___originTerrain0, Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* ___filter1, bool ___fullValidation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::Add(TKey,TValue)
inline void Dictionary_2_Add_m4E7AE6465929CEEA79B5921CFF3D4BD64E249AF9 (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* __this, int32_t ___key0, TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*, int32_t, TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::get_Count()
inline int32_t Dictionary_2_get_Count_m001233C3B4F8B3D1A8F044C9D43104F1671688DC (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*, const RuntimeMethod*))Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainUtils.TerrainUtility::ClearConnectivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainUtility_ClearConnectivity_m7448E42CD3F2941EF02C10DE358778EEAF9B0AA9 (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap> UnityEngine.TerrainUtils.TerrainUtility::CollectTerrains(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* TerrainUtility_CollectTerrains_mDFCA0AFA00FFD16CEC8B4EFA9C55E3B7B6803EC4 (bool ___onlyAutoConnectedTerrains0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::GetEnumerator()
inline Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F Dictionary_2_GetEnumerator_m5461BE3EE48320EA8E593506F16860A2CB4E9056 (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F (*) (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::Dispose()
inline void Enumerator_Dispose_m09F8467FB404D375259C17136F2213FC8455F2BF (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::get_Current()
inline KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 Enumerator_get_Current_m1F085EA2ABB67CCEB29CC4A10D6FBC0F2B963349_inline (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 (*) (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::get_Value()
inline TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* KeyValuePair_2_get_Value_m32D4949D8D2F580E35346D41EBB14C7933B93482_inline (KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873* __this, const RuntimeMethod* method)
{
	return ((  TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* (*) (KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain> UnityEngine.TerrainUtils.TerrainMap::get_terrainTiles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_inline (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::GetEnumerator()
inline Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473 (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mE58E6AC88AD044F9EB9989FF2F6AA6F05ECA402F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::Dispose()
inline void Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7 (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B*, const RuntimeMethod*))Enumerator_Dispose_mE3662EBE47C6E066285CDB5B63ACB07D73B5CD84_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::get_Current()
inline KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_inline (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 (*) (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B*, const RuntimeMethod*))Enumerator_get_Current_mAB48908F9E456DE35489D40F781F13159CD102CA_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::get_Key()
inline TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_inline (KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3* __this, const RuntimeMethod* method)
{
	return ((  TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 (*) (KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3*, const RuntimeMethod*))KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::MoveNext()
inline bool Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4 (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B*, const RuntimeMethod*))Enumerator_MoveNext_m0192F3C0DFB719827E8F40E0992166F0CE78BEE6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::MoveNext()
inline bool Enumerator_MoveNext_m1CEA4A6A000E5344DB72DFF5E4FF563FF67F3558 (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext::FindTerrainTilesUnlimited(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_FindTerrainTilesUnlimited_mC85574536AE3A36A4A9399DAC6F8C5171FAE1433 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, bool ___sharedBoundaryTexel0, bool ___fillOutsideTerrain1, const RuntimeMethod* method) ;
// UnityEngine.RectInt UnityEngine.TerrainTools.TerrainPaintUtility::CalcPixelRectFromBounds(UnityEngine.Terrain,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 TerrainPaintUtility_CalcPixelRectFromBounds_mA0F27994D74342C8EECA59B32E3B24CEF52D3334 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___boundsInTerrainSpace1, int32_t ___textureWidth2, int32_t ___textureHeight3, int32_t ___extraBorderPixels4, bool ___sharedBoundaryTexel5, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext::.ctor(UnityEngine.Terrain,UnityEngine.RectInt,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext__ctor_m5F36E6944154C93E1D271D4A9C077C8DAB108F86 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___pixelRect1, int32_t ___targetTextureWidth2, int32_t ___targetTextureHeight3, bool ___sharedBoundaryTexel4, bool ___fillOutsideTerrain5, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass53_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0__ctor_mB1DCC08BEBB1B500CAD7277614120E2743B5853E (U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139* __this, const RuntimeMethod* method) ;
// UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext::get_originTerrain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* PaintContext_get_originTerrain_mCD05E4154C291B8E4400902ABA56B3C017E52338_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.TerrainTools.PaintContext::get_pixelSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PaintContext_get_pixelSize_m625AE2931B8FBA55050107943314D6202DD930C5_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) ;
// UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext::get_pixelRect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.TerrainUtils.TerrainMap UnityEngine.TerrainUtils.TerrainMap::CreateFromConnectedNeighbors(UnityEngine.Terrain,System.Predicate`1<UnityEngine.Terrain>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* TerrainMap_CreateFromConnectedNeighbors_m4AA17A1E61EBA1295BE150640D2D38B0E1EDD739 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___originTerrain0, Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* ___filter1, bool ___fullValidation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/TerrainTile>::.ctor()
inline void List_1__ctor_mAB22E0D0E11D76089DDB513D1C6DEEA986C0EE4B (List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::get_Value()
inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* KeyValuePair_2_get_Value_mCDCBE8274E57C349F8AB212087D5581D34E075DA_inline (KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3* __this, const RuntimeMethod* method)
{
	return ((  Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* (*) (KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3*, const RuntimeMethod*))KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.TerrainTools.PaintContext::get_targetTextureWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PaintContext_get_targetTextureWidth_m6ECD3E0E648DBB6632C633E06B5D6037A0B2CFEB_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainTools.PaintContext::get_targetTextureHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PaintContext_get_targetTextureHeight_m4975CA86AC71297D69844835B8D006174F806240_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectInt::Overlaps(UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectInt_Overlaps_m9E82E1C8BFDA3297221E5FDC8B8773AD3F50C4EE (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___other0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// UnityEngine.TerrainTools.PaintContext/TerrainTile UnityEngine.TerrainTools.PaintContext/TerrainTile::Make(UnityEngine.Terrain,System.Int32,System.Int32,UnityEngine.RectInt,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* TerrainTile_Make_m464414DF78B623306730F00C6DDE305D9A46AEFD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, int32_t ___tileOriginPixelsX1, int32_t ___tileOriginPixelsY2, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___pixelRect3, int32_t ___targetTextureWidth4, int32_t ___targetTextureHeight5, int32_t ___edgePad6, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/TerrainTile>::Add(T)
inline void List_1_Add_mB4F7EBF9F5B2D0C8F2402827427A7E3687D7B2AB_inline (List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* __this, TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0*, TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainTools.PaintContext::ClampContextResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PaintContext_ClampContextResolution_m90A8DECD94A9CBDA1BA2ABB4AF30B2D4A3C241B6 (int32_t ___resolution0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, int32_t ___readWrite4, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext::set_sourceRenderTexture(UnityEngine.RenderTexture)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PaintContext_set_sourceRenderTexture_m729A4274969D259E689DA526313697ACA2299CD6_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext::set_destinationRenderTexture(UnityEngine.RenderTexture)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PaintContext_set_destinationRenderTexture_mE0DC8FD99A811C95223A9F7F0082D139EE3CF4CC_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::get_sourceRenderTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PaintContext_get_sourceRenderTexture_m45B68671807EA82C3333635B0C5BB8F5D5161B86_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext::set_oldRenderTexture(UnityEngine.RenderTexture)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PaintContext_set_oldRenderTexture_m911313349E453DD49EC9DB4606E9A4E5C86BC043_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::get_oldRenderTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PaintContext_get_oldRenderTexture_mBE3586662ED5A1DA7AB82FC7FB01D674095E48EA_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::get_destinationRenderTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.TerrainTools.TerrainPaintUtility::GetBlitMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TerrainPaintUtility_GetBlitMaterial_mE30CA5859A38CD72365ADAAF487060AA531FB583 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09 (bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadPixelMatrix(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadPixelMatrix_mF1C5A4508C5F110512C116A5DDE7AB0483FE961A (float ___left0, float ___right1, float ___bottom2, float ___top3, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/TerrainTile>::get_Item(System.Int32)
inline TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* List_1_get_Item_mE580C229C3B24A65C1A6825C90AC4FF372F2F9AA (List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* (*) (List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// TResult System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.Texture>::Invoke(T)
inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Func_2_Invoke_mE5F3EEC8C9580C62DD4170B4E520030F92C0C14A_inline (Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* (*) (Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>::Invoke(T)
inline void Action_1_Invoke_mC96F61A9C330ED26B44AFA411AF8BD161AB20D18_inline (Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC64EF7470FE34EAB51143802BA08555322D68183*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// UnityEngine.FilterMode UnityEngine.Texture::get_filterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_filterMode_mFEF0AEA29E8468450EF85533965DCEBE66D02A45 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___pass0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.TerrainPaintUtility::DrawQuadPadded(UnityEngine.RectInt,UnityEngine.RectInt,UnityEngine.RectInt,UnityEngine.RectInt,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPaintUtility_DrawQuadPadded_m48168E3A5DF4E5063D290556E06E8FF75EDD1552 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___destinationPixels0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___destinationPixelsPadded1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourcePixels2, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourcePixelsPadded3, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___sourceTexture4, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/TerrainTile>::get_Count()
inline int32_t List_1_get_Count_m0074ED2BF6C71F0D8CDC4792F07C3D6A50B55597_inline (List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855 (const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.RenderTexture>::Invoke(T)
inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Func_2_Invoke_mE440B1F81FAF30DBBB1DDB969EAD0E8AC6C06278_inline (Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* (*) (Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void UnityEngine.TerrainTools.TerrainPaintUtility::DrawQuad(UnityEngine.RectInt,UnityEngine.RectInt,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPaintUtility_DrawQuad_m3DF46A679C95B544FD1CA783020DFDFDA084728B (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___destinationPixels0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourcePixels1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___sourceTexture2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainTools.TerrainPaintUtility::FindTerrainLayerIndex(UnityEngine.Terrain,UnityEngine.TerrainLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainPaintUtility_FindTerrainLayerIndex_mF21091EAB56A8C467F80D187A800D1288FDB135A (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___inputLayer1, const RuntimeMethod* method) ;
// System.Void System.Action`3<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.TerrainTools.PaintContext/ToolAction,System.String>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_m1431490CF901662B5CE5063E01732C19B4A8CE78_inline (Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1* __this, RuntimeObject* ___arg10, int32_t ___arg21, String_t* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1*, RuntimeObject*, int32_t, String_t*, const RuntimeMethod*))Action_3_Invoke_mEF2BD00B1D5F4DBF1CFD66724E184735DA309261_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Int32 UnityEngine.TerrainTools.TerrainPaintUtility::AddTerrainLayer(UnityEngine.Terrain,UnityEngine.TerrainLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainPaintUtility_AddTerrainLayer_mF5232126EC2C8B14BBC0ACDA0AD60652002DEC0A (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___inputLayer1, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext/SplatmapUserData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplatmapUserData__ctor_m8B0FF764C4FB0A470238FF13FBDAD970DEDCD713 (SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass66_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0__ctor_m7546F25D02A8C4AE3CA8A1966E400F3C3DCC3FF3 (U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.TerrainTools.TerrainPaintUtility::GetCopyTerrainLayerMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TerrainPaintUtility_GetCopyTerrainLayerMaterial_m4AE79A9122DBF2DF8A4932CBA9E2D7347CDACDA6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.Texture>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3996E8EAFEEF7FD36E4DDD62A6461977D3C01167 (Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m32733FF0FDFC25B3EB123B6213BBAFBBBB0B63C0 (Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC64EF7470FE34EAB51143802BA08555322D68183*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.TerrainTools.PaintContext::GatherInternal(System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.Texture>,UnityEngine.Color,System.String,UnityEngine.Material,System.Int32,System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>,System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_GatherInternal_mB58AFCC343495B1A7E2D742CFD75F337A6FE781D (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388* ___terrainToTexture0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultColor1, String_t* ___operationName2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___blitMaterial3, int32_t ___blitPass4, Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* ___beforeBlit5, Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* ___afterBlit6, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass67_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0__ctor_mF166EB7437F0888686AA463B2ED545AB463B15E6 (U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.RenderTexture>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE68EA6637EDE9D031FBFBB3CA0E3BACCA29939A9 (Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.TerrainTools.PaintContext::ScatterInternal(System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.RenderTexture>,System.String,UnityEngine.Material,System.Int32,System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>,System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_ScatterInternal_m18C7B496911CC4C7C95E40A6220B1ACCE8427149 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF* ___terrainToRT0, String_t* ___operationName1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___blitMaterial2, int32_t ___blitPass3, Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* ___beforeBlit4, Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* ___afterBlit5, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>::get_Item(System.Int32)
inline PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 List_1_get_Item_m6BD21F2AD5ED8CB1F0769C273903EF6323066EE5 (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 (*) (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5*, int32_t, const RuntimeMethod*))List_1_get_Item_m6BD21F2AD5ED8CB1F0769C273903EF6323066EE5_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>::set_Item(System.Int32,T)
inline void List_1_set_Item_m7AF2F09D09EFA8DB2E2A396853C9B9FCFA885F39 (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, int32_t ___index0, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5*, int32_t, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8, const RuntimeMethod*))List_1_set_Item_m7AF2F09D09EFA8DB2E2A396853C9B9FCFA885F39_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>::get_Count()
inline int32_t List_1_get_Count_mF634C1C87C0A161D8F03DDBC06493CAF8F48FACF_inline (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5*, const RuntimeMethod*))List_1_get_Count_mF634C1C87C0A161D8F03DDBC06493CAF8F48FACF_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>::Add(T)
inline void List_1_Add_mB316F08C671DB4B5CE814339D5236BEFFDD7B6A1_inline (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5*, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8, const RuntimeMethod*))List_1_Add_mB316F08C671DB4B5CE814339D5236BEFFDD7B6A1_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>::.ctor()
inline void List_1__ctor_m08DF3D3EC2558D76C9D5DA8243F6B45BAA39BFA3 (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5*, const RuntimeMethod*))List_1__ctor_m08DF3D3EC2558D76C9D5DA8243F6B45BAA39BFA3_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainTools.PaintContext/TerrainTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile__ctor_mCDA7097EEEC5D66D7E2E2A1AD7778F783EB20F8C (TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::set_x(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt_set_x_m2D2F3A87E9899A29444DBDD0BB11CB19F13AA075 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::set_y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt_set_y_m45D5C1D817698266BED66D41A705956A1571858D (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::set_xMax(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt_set_xMax_mAA7AB05C087176CB8959369FEAAA78B80842D7A4 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::set_yMax(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt_set_yMax_mCF47AE0D0C567664BCDE03C8601BE66D375BB3A9 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.RectInt::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A RectInt_get_min_mAF3EA7A9FE7DCC0FABDF67FA548FC25062E49B75 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.Vector2Int::op_Subtraction(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_op_Subtraction_m5C9A4D049F8EE288878F37C991CA1BBB738D8059_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___a0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.Vector2Int::op_Addition(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_op_Addition_m6358133A28BA913D2080FD44472D1FD1CE1AC28F_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___a0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.RectInt::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A RectInt_get_size_mB039AB397BD0A60329D9FC6BF4096601647C204D (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::.ctor(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt__ctor_m8C6769667320E3820E3AEFF61FC3A0914251B71A (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___position0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.TerrainTools.PaintContext/SplatmapUserData UnityEngine.TerrainTools.PaintContext::GetTerrainLayerUserData(UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.TerrainLayer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* PaintContext_GetTerrainLayerUserData_m2816B0CA7CA72A0492887923DE89F9382877E632 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, RuntimeObject* ___context0, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___terrainLayer1, bool ___addLayerIfDoesntExist2, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.TerrainTools.TerrainPaintUtility::GetTerrainAlphaMapChecked(UnityEngine.Terrain,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainPaintUtility_GetTerrainAlphaMapChecked_m61B8DC77E576C67F4A93CA116608ABC0786E4A92 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, int32_t ___mapIndex1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D[] UnityEngine.TerrainData::get_alphamapTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* TerrainData_get_alphamapTextures_m82B7287C772D95D4E3D6A5793A8B9A15745D8C45 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.TerrainPaintUtility::DrawQuad2(UnityEngine.RectInt,UnityEngine.RectInt,UnityEngine.Texture,UnityEngine.RectInt,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPaintUtility_DrawQuad2_m70891EE13A543416FBBDF98FEEC6499A2B38494A (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___destinationPixels0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourcePixels1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___sourceTexture2, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourcePixels23, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___sourceTexture24, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::CopyActiveRenderTextureToTexture(System.String,System.Int32,UnityEngine.RectInt,UnityEngine.Vector2Int,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, String_t* ___textureName0, int32_t ___textureIndex1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourceRect2, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dest3, bool ___allowDelayedCPUSync4, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext::OnTerrainPainted(UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.TerrainTools.PaintContext/ToolAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_OnTerrainPainted_mA6BF9D65B8EA95D18E69FBC02D538588DEF3385E (RuntimeObject* ___tile0, int32_t ___action1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.BrushTransform::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrushTransform__ctor_mC0DC3696A91B14BEE4FF118A3723BF2311D2524D (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___brushOrigin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___brushU1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___brushV2, const RuntimeMethod* method) ;
// UnityEngine.TerrainTools.PaintContext UnityEngine.TerrainTools.PaintContext::CreateFromBounds(UnityEngine.Terrain,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* PaintContext_CreateFromBounds_mE034417CBA9CD6F83EAB77DA319323F458CD04E4 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___boundsInTerrainSpace1, int32_t ___inputTextureWidth2, int32_t ___inputTextureHeight3, int32_t ___extraBorderPixels4, bool ___sharedBoundaryTexel5, bool ___fillOutsideTerrain6, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext::CreateRenderTargets(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_CreateRenderTargets_m08252C94D832923CD0F129B6EEA1305DEAF18BB5 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, int32_t ___colorFormat0, const RuntimeMethod* method) ;
// UnityEngine.TerrainTools.PaintContext UnityEngine.TerrainTools.TerrainPaintUtility::InitializePaintContext(UnityEngine.Terrain,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.Rect,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* TerrainPaintUtility_InitializePaintContext_m4AF5ECCA84C9B1B010244E35544C4E3B41F97F70 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, int32_t ___targetWidth1, int32_t ___targetHeight2, int32_t ___pcFormat3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___boundsInTerrainSpace4, int32_t ___extraBorderPixels5, bool ___sharedBoundaryTexel6, bool ___fillOutsideTerrain7, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext::GatherAlphamap(UnityEngine.TerrainLayer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_GatherAlphamap_m9CF436C1D0D163692E9EDF27958A1704D06E3F44 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___inputLayer0, bool ___addLayerIfDoesntExist1, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext::ScatterAlphamap(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_ScatterAlphamap_m207A3E71E8014A4639C37905471D1F9C85404C91 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, String_t* ___editorUndoName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.PaintContext::Cleanup(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_Cleanup_mEB09BBB29CF7FBC5E11FC63BB2A3D651B27EB28A (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, bool ___restoreRenderTexture0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7 (int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB (int32_t ___unit0, float ___x1, float ___y2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.TerrainLayer[] UnityEngine.TerrainData::get_terrainLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* TerrainData_get_terrainLayers_m3B436DF37DDD9F18A46DD6BF112925AD5B8857C8 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_terrainLayers(UnityEngine.TerrainLayer[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_terrainLayers_m8FC80DAB5CD38A11CDB082F94DBD3186CD434671 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_brushOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_brushU()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushU_m96C6C42F19670792A93667FB998D6AB9C5233835_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_brushV()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushV_mD5FE860D6229C74AE92086F15835ED4F232814E2_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_targetOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetOrigin_m257AB19A9D74C20E09A0178A2B909065744CBB1A_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_targetX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetX_mBFDE3565FA7AA37EC5C15F58C6C04711F39B67D4_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_targetY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetY_m35E99EA7B0B5E7502BDC49D9D985722B99ED3B95_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Rect::MinMaxRect(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Rect_MinMaxRect_m540D2DD8C255D276AD4AE06D9CCA2A667EFA39E5 (float ___xmin0, float ___ymin1, float ___xmax2, float ___ymax3, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.TerrainTools.BrushTransform::GetBrushXYBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D BrushTransform_GetBrushXYBounds_mF0BB5DFE1215819C5432C0672E73A27BDA1ED76B (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mBB01735E786E7770A1B2ECAA65D1219B6D039DA5 (EmbeddedAttribute_t62225631BB65062906FDEF1ED16845EF6E34BB4A* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mC20B41FF7D952FD1FE27E289E221F34681837870 (IsReadOnlyAttribute_tA42E96C61DFF3800E657E708BCD33A06F6CD2D7B* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// Conversion methods for marshalling of: UnityEngine.TerrainLayer
IL2CPP_EXTERN_C void TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshal_pinvoke(const TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9& unmarshaled, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshaled_pinvoke& marshaled)
{
	marshaled.___m_CachedPtr_0 = unmarshaled.___m_CachedPtr_0;
}
IL2CPP_EXTERN_C void TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshal_pinvoke_back(const TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshaled_pinvoke& marshaled, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9& unmarshaled)
{
	intptr_t unmarshaledm_CachedPtr_temp_0;
	memset((&unmarshaledm_CachedPtr_temp_0), 0, sizeof(unmarshaledm_CachedPtr_temp_0));
	unmarshaledm_CachedPtr_temp_0 = marshaled.___m_CachedPtr_0;
	unmarshaled.___m_CachedPtr_0 = unmarshaledm_CachedPtr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TerrainLayer
IL2CPP_EXTERN_C void TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshal_pinvoke_cleanup(TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.TerrainLayer
IL2CPP_EXTERN_C void TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshal_com(const TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9& unmarshaled, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshaled_com& marshaled)
{
	marshaled.___m_CachedPtr_0 = unmarshaled.___m_CachedPtr_0;
}
IL2CPP_EXTERN_C void TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshal_com_back(const TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshaled_com& marshaled, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9& unmarshaled)
{
	intptr_t unmarshaledm_CachedPtr_temp_0;
	memset((&unmarshaledm_CachedPtr_temp_0), 0, sizeof(unmarshaledm_CachedPtr_temp_0));
	unmarshaledm_CachedPtr_temp_0 = marshaled.___m_CachedPtr_0;
	unmarshaled.___m_CachedPtr_0 = unmarshaledm_CachedPtr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TerrainLayer
IL2CPP_EXTERN_C void TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshal_com_cleanup(TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.TerrainLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer__ctor_m3B6D12B4296D98B5813C08DF87D09022BD8FDC74 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		TerrainLayer_Internal_Create_mA5EB262D9B9D9B3180705A14040FBEAA4257D3E1(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainLayer::Internal_Create(UnityEngine.TerrainLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_Internal_Create_mA5EB262D9B9D9B3180705A14040FBEAA4257D3E1 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___layer0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_Internal_Create_mA5EB262D9B9D9B3180705A14040FBEAA4257D3E1_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*);
	static TerrainLayer_Internal_Create_mA5EB262D9B9D9B3180705A14040FBEAA4257D3E1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_Internal_Create_mA5EB262D9B9D9B3180705A14040FBEAA4257D3E1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::Internal_Create(UnityEngine.TerrainLayer)");
	_il2cpp_icall_func(___layer0);
}
// UnityEngine.Texture2D UnityEngine.TerrainLayer::get_diffuseTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainLayer_get_diffuseTexture_mAF75D09F08293C26B26D7D422B4A0ACC9732DD31 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	typedef Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*TerrainLayer_get_diffuseTexture_mAF75D09F08293C26B26D7D422B4A0ACC9732DD31_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*);
	static TerrainLayer_get_diffuseTexture_mAF75D09F08293C26B26D7D422B4A0ACC9732DD31_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_diffuseTexture_mAF75D09F08293C26B26D7D422B4A0ACC9732DD31_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_diffuseTexture()");
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainLayer::set_diffuseTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_diffuseTexture_mC21DEF81B6B58FD1BA8FA381FD569E2DB6173C53 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_diffuseTexture_mC21DEF81B6B58FD1BA8FA381FD569E2DB6173C53_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*);
	static TerrainLayer_set_diffuseTexture_mC21DEF81B6B58FD1BA8FA381FD569E2DB6173C53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_diffuseTexture_mC21DEF81B6B58FD1BA8FA381FD569E2DB6173C53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_diffuseTexture(UnityEngine.Texture2D)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Texture2D UnityEngine.TerrainLayer::get_normalMapTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainLayer_get_normalMapTexture_mCBC9DFA1E5243F5227A99A2D7CBF53BE259E9620 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	typedef Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*TerrainLayer_get_normalMapTexture_mCBC9DFA1E5243F5227A99A2D7CBF53BE259E9620_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*);
	static TerrainLayer_get_normalMapTexture_mCBC9DFA1E5243F5227A99A2D7CBF53BE259E9620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_normalMapTexture_mCBC9DFA1E5243F5227A99A2D7CBF53BE259E9620_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_normalMapTexture()");
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainLayer::set_normalMapTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_normalMapTexture_m6E4BC16FFD3E9C2351E208F38CB1C8B99DD3F5AE (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_normalMapTexture_m6E4BC16FFD3E9C2351E208F38CB1C8B99DD3F5AE_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*);
	static TerrainLayer_set_normalMapTexture_m6E4BC16FFD3E9C2351E208F38CB1C8B99DD3F5AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_normalMapTexture_m6E4BC16FFD3E9C2351E208F38CB1C8B99DD3F5AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_normalMapTexture(UnityEngine.Texture2D)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Texture2D UnityEngine.TerrainLayer::get_maskMapTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainLayer_get_maskMapTexture_m184F1143BA11213B5B6E1D3487BCDF8A747954EA (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	typedef Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*TerrainLayer_get_maskMapTexture_m184F1143BA11213B5B6E1D3487BCDF8A747954EA_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*);
	static TerrainLayer_get_maskMapTexture_m184F1143BA11213B5B6E1D3487BCDF8A747954EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_maskMapTexture_m184F1143BA11213B5B6E1D3487BCDF8A747954EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_maskMapTexture()");
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainLayer::set_maskMapTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_maskMapTexture_m7A5384131F06DF24AB8F9B2D0E8C7A8510A17F78 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_maskMapTexture_m7A5384131F06DF24AB8F9B2D0E8C7A8510A17F78_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*);
	static TerrainLayer_set_maskMapTexture_m7A5384131F06DF24AB8F9B2D0E8C7A8510A17F78_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_maskMapTexture_m7A5384131F06DF24AB8F9B2D0E8C7A8510A17F78_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_maskMapTexture(UnityEngine.Texture2D)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector2 UnityEngine.TerrainLayer::get_tileSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TerrainLayer_get_tileSize_mF6313141BE22D6AC7362DA9A40FB41236458E0A3 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainLayer_get_tileSize_Injected_m8D8A89EA332B064157DB6A83826870E691AA4FC5(__this, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainLayer::set_tileSize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_tileSize_m53D498E2704EF4B92B11588CF47C726923D57F84 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		TerrainLayer_set_tileSize_Injected_m2D6D83EA3DFBB1948BDC4D1984BCE9D43CAF18B2(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.TerrainLayer::get_tileOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TerrainLayer_get_tileOffset_m1E81B6D002E91BE4EF402337C595227221E8163D (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainLayer_get_tileOffset_Injected_mA2FADD8981A297BFB4DE8663FA757834324DB8E0(__this, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainLayer::set_tileOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_tileOffset_m259D3D0F278A65D405923BF0338766BDA79556A9 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		TerrainLayer_set_tileOffset_Injected_m4082583251015F2D3621EE132031B852741C092C(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Color UnityEngine.TerrainLayer::get_specular()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TerrainLayer_get_specular_m14209D88524F3739C026F906A8D34B3597EEE07A (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainLayer_get_specular_Injected_m17BCA78D6D0B917E71AE7D441367C8A30149BC3C(__this, (&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainLayer::set_specular(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_specular_mE0E85F57BCD6D771826D57562E6EADDA4E14F538 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		TerrainLayer_set_specular_Injected_mB6275B761452010AEE54E6B15F63435FA7A1D485(__this, (&___value0), NULL);
		return;
	}
}
// System.Single UnityEngine.TerrainLayer::get_metallic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainLayer_get_metallic_m99FCD988D3CE9CADBDD23C9E0C92095DB66F2EE8 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	typedef float (*TerrainLayer_get_metallic_m99FCD988D3CE9CADBDD23C9E0C92095DB66F2EE8_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*);
	static TerrainLayer_get_metallic_m99FCD988D3CE9CADBDD23C9E0C92095DB66F2EE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_metallic_m99FCD988D3CE9CADBDD23C9E0C92095DB66F2EE8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_metallic()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainLayer::set_metallic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_metallic_mAD23C76C3953D3A6D54CFC9B399A13841F8F1E87 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_metallic_mAD23C76C3953D3A6D54CFC9B399A13841F8F1E87_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, float);
	static TerrainLayer_set_metallic_mAD23C76C3953D3A6D54CFC9B399A13841F8F1E87_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_metallic_mAD23C76C3953D3A6D54CFC9B399A13841F8F1E87_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_metallic(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.TerrainLayer::get_smoothness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainLayer_get_smoothness_m79BBB46810976A88A0BADB0D52A0C028781C7120 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	typedef float (*TerrainLayer_get_smoothness_m79BBB46810976A88A0BADB0D52A0C028781C7120_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*);
	static TerrainLayer_get_smoothness_m79BBB46810976A88A0BADB0D52A0C028781C7120_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_smoothness_m79BBB46810976A88A0BADB0D52A0C028781C7120_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_smoothness()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainLayer::set_smoothness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_smoothness_mB79F6272E5AA2F3F103B22382A2FFEB418EB1172 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_smoothness_mB79F6272E5AA2F3F103B22382A2FFEB418EB1172_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, float);
	static TerrainLayer_set_smoothness_mB79F6272E5AA2F3F103B22382A2FFEB418EB1172_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_smoothness_mB79F6272E5AA2F3F103B22382A2FFEB418EB1172_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_smoothness(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.TerrainLayer::get_normalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainLayer_get_normalScale_m63EA677D87ABD1DCF0195D35A8B9738B80C70B3C (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	typedef float (*TerrainLayer_get_normalScale_m63EA677D87ABD1DCF0195D35A8B9738B80C70B3C_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*);
	static TerrainLayer_get_normalScale_m63EA677D87ABD1DCF0195D35A8B9738B80C70B3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_normalScale_m63EA677D87ABD1DCF0195D35A8B9738B80C70B3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_normalScale()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainLayer::set_normalScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_normalScale_m0758116D1F0B171EDB48B4E2A13490C1A5703991 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_normalScale_m0758116D1F0B171EDB48B4E2A13490C1A5703991_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, float);
	static TerrainLayer_set_normalScale_m0758116D1F0B171EDB48B4E2A13490C1A5703991_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_normalScale_m0758116D1F0B171EDB48B4E2A13490C1A5703991_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_normalScale(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector4 UnityEngine.TerrainLayer::get_diffuseRemapMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TerrainLayer_get_diffuseRemapMin_m949BAC51C5758A977052835D009CC8A2949E9F98 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainLayer_get_diffuseRemapMin_Injected_m12394DF34C1CC7B138FA3389D4583EC00D555FF0(__this, (&V_0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainLayer::set_diffuseRemapMin(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_diffuseRemapMin_m5899CADEF34D6193180D9B79B1E86E38C05869A9 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) 
{
	{
		TerrainLayer_set_diffuseRemapMin_Injected_mFA1B63F9AA91C8EA82104C4CC1A7778C5AED7706(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Vector4 UnityEngine.TerrainLayer::get_diffuseRemapMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TerrainLayer_get_diffuseRemapMax_mCA5648C5150800713F24E7D2AB96B4D548E2D4BC (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainLayer_get_diffuseRemapMax_Injected_m2E247FD71A4D51D8E54DA3BF504C1731FB6F23AC(__this, (&V_0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainLayer::set_diffuseRemapMax(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_diffuseRemapMax_mEFA03F94C12ECEFEC2060901D966DD15BDA89D3C (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) 
{
	{
		TerrainLayer_set_diffuseRemapMax_Injected_m90271AB60993CFD03E422C688FAFC64017D4BEE3(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Vector4 UnityEngine.TerrainLayer::get_maskMapRemapMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TerrainLayer_get_maskMapRemapMin_m7DF5C3CD76EA311585C8AC7102DF8FE843465368 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainLayer_get_maskMapRemapMin_Injected_mEC87DA9E3173F7D39C047FABAB507CC4351FDF24(__this, (&V_0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainLayer::set_maskMapRemapMin(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_maskMapRemapMin_mD8778273503FD0FD05869EB86DB6EADDA553856F (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) 
{
	{
		TerrainLayer_set_maskMapRemapMin_Injected_m388350F2F0C06A10AF0DA39725B59103F6EE7F2C(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Vector4 UnityEngine.TerrainLayer::get_maskMapRemapMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TerrainLayer_get_maskMapRemapMax_mE05D91C74E45DE9F2A5AB6ABE75B2BC561ED6342 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainLayer_get_maskMapRemapMax_Injected_m1BA6C54D1C610E455C6A7919E5E08EA304CA7403(__this, (&V_0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainLayer::set_maskMapRemapMax(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_maskMapRemapMax_m7E81C871C9AABC01E2F743E690FD3E9002DB008C (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) 
{
	{
		TerrainLayer_set_maskMapRemapMax_Injected_m10CF5BC6AA549FC669BCB7881D6D75D569EC20EE(__this, (&___value0), NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainLayer::get_tileSize_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_tileSize_Injected_m8D8A89EA332B064157DB6A83826870E691AA4FC5 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_get_tileSize_Injected_m8D8A89EA332B064157DB6A83826870E691AA4FC5_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static TerrainLayer_get_tileSize_Injected_m8D8A89EA332B064157DB6A83826870E691AA4FC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_tileSize_Injected_m8D8A89EA332B064157DB6A83826870E691AA4FC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_tileSize_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.TerrainLayer::set_tileSize_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_tileSize_Injected_m2D6D83EA3DFBB1948BDC4D1984BCE9D43CAF18B2 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_tileSize_Injected_m2D6D83EA3DFBB1948BDC4D1984BCE9D43CAF18B2_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static TerrainLayer_set_tileSize_Injected_m2D6D83EA3DFBB1948BDC4D1984BCE9D43CAF18B2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_tileSize_Injected_m2D6D83EA3DFBB1948BDC4D1984BCE9D43CAF18B2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_tileSize_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.TerrainLayer::get_tileOffset_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_tileOffset_Injected_mA2FADD8981A297BFB4DE8663FA757834324DB8E0 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_get_tileOffset_Injected_mA2FADD8981A297BFB4DE8663FA757834324DB8E0_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static TerrainLayer_get_tileOffset_Injected_mA2FADD8981A297BFB4DE8663FA757834324DB8E0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_tileOffset_Injected_mA2FADD8981A297BFB4DE8663FA757834324DB8E0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_tileOffset_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.TerrainLayer::set_tileOffset_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_tileOffset_Injected_m4082583251015F2D3621EE132031B852741C092C (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_tileOffset_Injected_m4082583251015F2D3621EE132031B852741C092C_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static TerrainLayer_set_tileOffset_Injected_m4082583251015F2D3621EE132031B852741C092C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_tileOffset_Injected_m4082583251015F2D3621EE132031B852741C092C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_tileOffset_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.TerrainLayer::get_specular_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_specular_Injected_m17BCA78D6D0B917E71AE7D441367C8A30149BC3C (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_get_specular_Injected_m17BCA78D6D0B917E71AE7D441367C8A30149BC3C_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static TerrainLayer_get_specular_Injected_m17BCA78D6D0B917E71AE7D441367C8A30149BC3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_specular_Injected_m17BCA78D6D0B917E71AE7D441367C8A30149BC3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_specular_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.TerrainLayer::set_specular_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_specular_Injected_mB6275B761452010AEE54E6B15F63435FA7A1D485 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_specular_Injected_mB6275B761452010AEE54E6B15F63435FA7A1D485_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static TerrainLayer_set_specular_Injected_mB6275B761452010AEE54E6B15F63435FA7A1D485_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_specular_Injected_mB6275B761452010AEE54E6B15F63435FA7A1D485_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_specular_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.TerrainLayer::get_diffuseRemapMin_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_diffuseRemapMin_Injected_m12394DF34C1CC7B138FA3389D4583EC00D555FF0 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_get_diffuseRemapMin_Injected_m12394DF34C1CC7B138FA3389D4583EC00D555FF0_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*);
	static TerrainLayer_get_diffuseRemapMin_Injected_m12394DF34C1CC7B138FA3389D4583EC00D555FF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_diffuseRemapMin_Injected_m12394DF34C1CC7B138FA3389D4583EC00D555FF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_diffuseRemapMin_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.TerrainLayer::set_diffuseRemapMin_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_diffuseRemapMin_Injected_mFA1B63F9AA91C8EA82104C4CC1A7778C5AED7706 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_diffuseRemapMin_Injected_mFA1B63F9AA91C8EA82104C4CC1A7778C5AED7706_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*);
	static TerrainLayer_set_diffuseRemapMin_Injected_mFA1B63F9AA91C8EA82104C4CC1A7778C5AED7706_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_diffuseRemapMin_Injected_mFA1B63F9AA91C8EA82104C4CC1A7778C5AED7706_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_diffuseRemapMin_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.TerrainLayer::get_diffuseRemapMax_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_diffuseRemapMax_Injected_m2E247FD71A4D51D8E54DA3BF504C1731FB6F23AC (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_get_diffuseRemapMax_Injected_m2E247FD71A4D51D8E54DA3BF504C1731FB6F23AC_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*);
	static TerrainLayer_get_diffuseRemapMax_Injected_m2E247FD71A4D51D8E54DA3BF504C1731FB6F23AC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_diffuseRemapMax_Injected_m2E247FD71A4D51D8E54DA3BF504C1731FB6F23AC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_diffuseRemapMax_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.TerrainLayer::set_diffuseRemapMax_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_diffuseRemapMax_Injected_m90271AB60993CFD03E422C688FAFC64017D4BEE3 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_diffuseRemapMax_Injected_m90271AB60993CFD03E422C688FAFC64017D4BEE3_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*);
	static TerrainLayer_set_diffuseRemapMax_Injected_m90271AB60993CFD03E422C688FAFC64017D4BEE3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_diffuseRemapMax_Injected_m90271AB60993CFD03E422C688FAFC64017D4BEE3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_diffuseRemapMax_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.TerrainLayer::get_maskMapRemapMin_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_maskMapRemapMin_Injected_mEC87DA9E3173F7D39C047FABAB507CC4351FDF24 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_get_maskMapRemapMin_Injected_mEC87DA9E3173F7D39C047FABAB507CC4351FDF24_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*);
	static TerrainLayer_get_maskMapRemapMin_Injected_mEC87DA9E3173F7D39C047FABAB507CC4351FDF24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_maskMapRemapMin_Injected_mEC87DA9E3173F7D39C047FABAB507CC4351FDF24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_maskMapRemapMin_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.TerrainLayer::set_maskMapRemapMin_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_maskMapRemapMin_Injected_m388350F2F0C06A10AF0DA39725B59103F6EE7F2C (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_maskMapRemapMin_Injected_m388350F2F0C06A10AF0DA39725B59103F6EE7F2C_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*);
	static TerrainLayer_set_maskMapRemapMin_Injected_m388350F2F0C06A10AF0DA39725B59103F6EE7F2C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_maskMapRemapMin_Injected_m388350F2F0C06A10AF0DA39725B59103F6EE7F2C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_maskMapRemapMin_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.TerrainLayer::get_maskMapRemapMax_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_get_maskMapRemapMax_Injected_m1BA6C54D1C610E455C6A7919E5E08EA304CA7403 (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_get_maskMapRemapMax_Injected_m1BA6C54D1C610E455C6A7919E5E08EA304CA7403_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*);
	static TerrainLayer_get_maskMapRemapMax_Injected_m1BA6C54D1C610E455C6A7919E5E08EA304CA7403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_get_maskMapRemapMax_Injected_m1BA6C54D1C610E455C6A7919E5E08EA304CA7403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::get_maskMapRemapMax_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.TerrainLayer::set_maskMapRemapMax_Injected(UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayer_set_maskMapRemapMax_Injected_m10CF5BC6AA549FC669BCB7881D6D75D569EC20EE (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainLayer_set_maskMapRemapMax_Injected_m10CF5BC6AA549FC669BCB7881D6D75D569EC20EE_ftn) (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*);
	static TerrainLayer_set_maskMapRemapMax_Injected_m10CF5BC6AA549FC669BCB7881D6D75D569EC20EE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainLayer_set_maskMapRemapMax_Injected_m10CF5BC6AA549FC669BCB7881D6D75D569EC20EE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainLayer::set_maskMapRemapMax_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* (*Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_terrainData()");
	TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Terrain::get_treeDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_get_treeDistance_mE5394C9AAD12F1BD5474B51615D2E3906404F77A (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef float (*Terrain_get_treeDistance_mE5394C9AAD12F1BD5474B51615D2E3906404F77A_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_treeDistance_mE5394C9AAD12F1BD5474B51615D2E3906404F77A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_treeDistance_mE5394C9AAD12F1BD5474B51615D2E3906404F77A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_treeDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_treeDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_treeDistance_m8836D1691B1C7BDC76725A624601E6543806C14C (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_treeDistance_m8836D1691B1C7BDC76725A624601E6543806C14C_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, float);
	static Terrain_set_treeDistance_m8836D1691B1C7BDC76725A624601E6543806C14C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_treeDistance_m8836D1691B1C7BDC76725A624601E6543806C14C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_treeDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Terrain::get_treeBillboardDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_get_treeBillboardDistance_m5A9D3F3B388042BE9C19F346426AA7BA01CBE1D8 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef float (*Terrain_get_treeBillboardDistance_m5A9D3F3B388042BE9C19F346426AA7BA01CBE1D8_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_treeBillboardDistance_m5A9D3F3B388042BE9C19F346426AA7BA01CBE1D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_treeBillboardDistance_m5A9D3F3B388042BE9C19F346426AA7BA01CBE1D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_treeBillboardDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_treeBillboardDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_treeBillboardDistance_m654B35A6BEE23489F2E4DEF0D12214D9F4A5FD8E (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_treeBillboardDistance_m654B35A6BEE23489F2E4DEF0D12214D9F4A5FD8E_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, float);
	static Terrain_set_treeBillboardDistance_m654B35A6BEE23489F2E4DEF0D12214D9F4A5FD8E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_treeBillboardDistance_m654B35A6BEE23489F2E4DEF0D12214D9F4A5FD8E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_treeBillboardDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Terrain::get_treeCrossFadeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_get_treeCrossFadeLength_m037BF60679DC6C878F5D7B5189F4555CF496AFD4 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef float (*Terrain_get_treeCrossFadeLength_m037BF60679DC6C878F5D7B5189F4555CF496AFD4_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_treeCrossFadeLength_m037BF60679DC6C878F5D7B5189F4555CF496AFD4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_treeCrossFadeLength_m037BF60679DC6C878F5D7B5189F4555CF496AFD4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_treeCrossFadeLength()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_treeCrossFadeLength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_treeCrossFadeLength_m639B8CAD49CF4AF938477D3F1E080932F2DBE6F1 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_treeCrossFadeLength_m639B8CAD49CF4AF938477D3F1E080932F2DBE6F1_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, float);
	static Terrain_set_treeCrossFadeLength_m639B8CAD49CF4AF938477D3F1E080932F2DBE6F1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_treeCrossFadeLength_m639B8CAD49CF4AF938477D3F1E080932F2DBE6F1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_treeCrossFadeLength(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Terrain::get_treeMaximumFullLODCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_treeMaximumFullLODCount_m3626EB8E365A9B8620375AEB15604D112F669812 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Terrain_get_treeMaximumFullLODCount_m3626EB8E365A9B8620375AEB15604D112F669812_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_treeMaximumFullLODCount_m3626EB8E365A9B8620375AEB15604D112F669812_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_treeMaximumFullLODCount_m3626EB8E365A9B8620375AEB15604D112F669812_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_treeMaximumFullLODCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_treeMaximumFullLODCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_treeMaximumFullLODCount_mCDE91147B62F207B2841D41A2710A4B563A953D1 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_treeMaximumFullLODCount_mCDE91147B62F207B2841D41A2710A4B563A953D1_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, int32_t);
	static Terrain_set_treeMaximumFullLODCount_mCDE91147B62F207B2841D41A2710A4B563A953D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_treeMaximumFullLODCount_mCDE91147B62F207B2841D41A2710A4B563A953D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_treeMaximumFullLODCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Terrain::get_detailObjectDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_get_detailObjectDistance_m230A961919F3B468A7F79312C164C1D50C648EBA (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef float (*Terrain_get_detailObjectDistance_m230A961919F3B468A7F79312C164C1D50C648EBA_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_detailObjectDistance_m230A961919F3B468A7F79312C164C1D50C648EBA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_detailObjectDistance_m230A961919F3B468A7F79312C164C1D50C648EBA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_detailObjectDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_detailObjectDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_detailObjectDistance_mE8B84B8EDE307BEB41E477CC9C35F8BA3A969EDE (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_detailObjectDistance_mE8B84B8EDE307BEB41E477CC9C35F8BA3A969EDE_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, float);
	static Terrain_set_detailObjectDistance_mE8B84B8EDE307BEB41E477CC9C35F8BA3A969EDE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_detailObjectDistance_mE8B84B8EDE307BEB41E477CC9C35F8BA3A969EDE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_detailObjectDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Terrain::get_detailObjectDensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_get_detailObjectDensity_m2FEBE42D389A14F98A38888A423B21FD91E605E9 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef float (*Terrain_get_detailObjectDensity_m2FEBE42D389A14F98A38888A423B21FD91E605E9_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_detailObjectDensity_m2FEBE42D389A14F98A38888A423B21FD91E605E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_detailObjectDensity_m2FEBE42D389A14F98A38888A423B21FD91E605E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_detailObjectDensity()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_detailObjectDensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_detailObjectDensity_mFDE71C06416A56C18C54ED41485CBB1D1CB3520D (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_detailObjectDensity_mFDE71C06416A56C18C54ED41485CBB1D1CB3520D_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, float);
	static Terrain_set_detailObjectDensity_mFDE71C06416A56C18C54ED41485CBB1D1CB3520D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_detailObjectDensity_mFDE71C06416A56C18C54ED41485CBB1D1CB3520D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_detailObjectDensity(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Terrain::get_heightmapPixelError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_get_heightmapPixelError_m9051CAA3D0939B5F0F5719F53A3B5E4CF55438C5 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef float (*Terrain_get_heightmapPixelError_m9051CAA3D0939B5F0F5719F53A3B5E4CF55438C5_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_heightmapPixelError_m9051CAA3D0939B5F0F5719F53A3B5E4CF55438C5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_heightmapPixelError_m9051CAA3D0939B5F0F5719F53A3B5E4CF55438C5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_heightmapPixelError()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_heightmapPixelError(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_heightmapPixelError_mEE31EA7AF7F41EB82C643468B52F4B10109C7FFF (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_heightmapPixelError_mEE31EA7AF7F41EB82C643468B52F4B10109C7FFF_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, float);
	static Terrain_set_heightmapPixelError_mEE31EA7AF7F41EB82C643468B52F4B10109C7FFF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_heightmapPixelError_mEE31EA7AF7F41EB82C643468B52F4B10109C7FFF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_heightmapPixelError(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Terrain::set_heightmapMaximumLOD(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_heightmapMaximumLOD_m0638986CDAF871DDD4C80EA55E1CF60F44DF6F5E (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_heightmapMaximumLOD_m0638986CDAF871DDD4C80EA55E1CF60F44DF6F5E_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, int32_t);
	static Terrain_set_heightmapMaximumLOD_m0638986CDAF871DDD4C80EA55E1CF60F44DF6F5E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_heightmapMaximumLOD_m0638986CDAF871DDD4C80EA55E1CF60F44DF6F5E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_heightmapMaximumLOD(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Terrain::get_basemapDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_get_basemapDistance_m19DDA753F682B416665C5A7E171376EEE3BF312B (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef float (*Terrain_get_basemapDistance_m19DDA753F682B416665C5A7E171376EEE3BF312B_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_basemapDistance_m19DDA753F682B416665C5A7E171376EEE3BF312B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_basemapDistance_m19DDA753F682B416665C5A7E171376EEE3BF312B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_basemapDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_basemapDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_basemapDistance_m3CC75A7D5D67BA75A0E030F300A462C16905CF40 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_basemapDistance_m3CC75A7D5D67BA75A0E030F300A462C16905CF40_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, float);
	static Terrain_set_basemapDistance_m3CC75A7D5D67BA75A0E030F300A462C16905CF40_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_basemapDistance_m3CC75A7D5D67BA75A0E030F300A462C16905CF40_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_basemapDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Rendering.ShadowCastingMode UnityEngine.Terrain::get_shadowCastingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_shadowCastingMode_m4070042014ED55612368631D6335105FDF951114 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Terrain_get_shadowCastingMode_m4070042014ED55612368631D6335105FDF951114_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_shadowCastingMode_m4070042014ED55612368631D6335105FDF951114_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_shadowCastingMode_m4070042014ED55612368631D6335105FDF951114_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_shadowCastingMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_shadowCastingMode_m1267E7389BEF6EBA9B6E23044225362CD6EA79BD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_shadowCastingMode_m1267E7389BEF6EBA9B6E23044225362CD6EA79BD_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, int32_t);
	static Terrain_set_shadowCastingMode_m1267E7389BEF6EBA9B6E23044225362CD6EA79BD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_shadowCastingMode_m1267E7389BEF6EBA9B6E23044225362CD6EA79BD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Material UnityEngine.Terrain::get_materialTemplate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Terrain_get_materialTemplate_mB3BE06B73866CF772A9B2B42069CE3AECA288DE7 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*Terrain_get_materialTemplate_mB3BE06B73866CF772A9B2B42069CE3AECA288DE7_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_materialTemplate_mB3BE06B73866CF772A9B2B42069CE3AECA288DE7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_materialTemplate_mB3BE06B73866CF772A9B2B42069CE3AECA288DE7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_materialTemplate()");
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_materialTemplate(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_materialTemplate_mAC433DD496BAB83C63718B862C11064FD20EB7F0 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_materialTemplate_mAC433DD496BAB83C63718B862C11064FD20EB7F0_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*);
	static Terrain_set_materialTemplate_mAC433DD496BAB83C63718B862C11064FD20EB7F0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_materialTemplate_mAC433DD496BAB83C63718B862C11064FD20EB7F0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_materialTemplate(UnityEngine.Material)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Terrain::get_drawHeightmap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Terrain_get_drawHeightmap_m41EBA9E260C303324FD8A24A9FD155001D4715FE (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef bool (*Terrain_get_drawHeightmap_m41EBA9E260C303324FD8A24A9FD155001D4715FE_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_drawHeightmap_m41EBA9E260C303324FD8A24A9FD155001D4715FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_drawHeightmap_m41EBA9E260C303324FD8A24A9FD155001D4715FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_drawHeightmap()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_drawHeightmap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_drawHeightmap_m39CA641057F8C3482CF7BADD65B1FD89106195F9 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_drawHeightmap_m39CA641057F8C3482CF7BADD65B1FD89106195F9_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, bool);
	static Terrain_set_drawHeightmap_m39CA641057F8C3482CF7BADD65B1FD89106195F9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_drawHeightmap_m39CA641057F8C3482CF7BADD65B1FD89106195F9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_drawHeightmap(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Terrain::get_allowAutoConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef bool (*Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_allowAutoConnect()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_allowAutoConnect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_allowAutoConnect_mBAA98DD489268404D1157A29759982CDFB45BF11 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_allowAutoConnect_mBAA98DD489268404D1157A29759982CDFB45BF11_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, bool);
	static Terrain_set_allowAutoConnect_mBAA98DD489268404D1157A29759982CDFB45BF11_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_allowAutoConnect_mBAA98DD489268404D1157A29759982CDFB45BF11_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_allowAutoConnect(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Terrain::get_groupingID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_groupingID()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Terrain::get_drawInstanced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Terrain_get_drawInstanced_m7E8C2EB30B4F778927EE017163B79B113598CB34 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef bool (*Terrain_get_drawInstanced_m7E8C2EB30B4F778927EE017163B79B113598CB34_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_drawInstanced_m7E8C2EB30B4F778927EE017163B79B113598CB34_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_drawInstanced_m7E8C2EB30B4F778927EE017163B79B113598CB34_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_drawInstanced()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_drawInstanced(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_drawInstanced_m8846CAE84A778178A98DE6C0A764EBEA7B45D1F3 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_drawInstanced_m8846CAE84A778178A98DE6C0A764EBEA7B45D1F3_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, bool);
	static Terrain_set_drawInstanced_m8846CAE84A778178A98DE6C0A764EBEA7B45D1F3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_drawInstanced_m8846CAE84A778178A98DE6C0A764EBEA7B45D1F3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_drawInstanced(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.RenderTexture UnityEngine.Terrain::get_normalmapTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Terrain_get_normalmapTexture_m0B073CA3D5CD8E6176A8512B6B095F7BBE0D4C53 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* (*Terrain_get_normalmapTexture_m0B073CA3D5CD8E6176A8512B6B095F7BBE0D4C53_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_normalmapTexture_m0B073CA3D5CD8E6176A8512B6B095F7BBE0D4C53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_normalmapTexture_m0B073CA3D5CD8E6176A8512B6B095F7BBE0D4C53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_normalmapTexture()");
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::set_drawTreesAndFoliage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_drawTreesAndFoliage_mCF36A66A7AC9072D3EC5706A9213CFC46D38689A (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_drawTreesAndFoliage_mCF36A66A7AC9072D3EC5706A9213CFC46D38689A_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, bool);
	static Terrain_set_drawTreesAndFoliage_mCF36A66A7AC9072D3EC5706A9213CFC46D38689A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_drawTreesAndFoliage_mCF36A66A7AC9072D3EC5706A9213CFC46D38689A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_drawTreesAndFoliage(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Terrain::SampleHeight(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_SampleHeight_m460F9060BC4D5F05275391A6AC05570047EF3177 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Terrain_SampleHeight_Injected_m08851544EDBB88AFD061CD7E63E7995203BC7557(__this, (&___worldPosition0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___left0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___top1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___right2, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___bottom3, const RuntimeMethod* method) 
{
	typedef void (*Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)");
	_il2cpp_icall_func(__this, ___left0, ___top1, ___right2, ___bottom3);
}
// System.Void UnityEngine.Terrain::set_editorRenderFlags(UnityEngine.TerrainRenderFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_editorRenderFlags_m891E1F37730C9E3D6ABDED416B360A3EB0468C8A (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_editorRenderFlags_m891E1F37730C9E3D6ABDED416B360A3EB0468C8A_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, int32_t);
	static Terrain_set_editorRenderFlags_m891E1F37730C9E3D6ABDED416B360A3EB0468C8A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_editorRenderFlags_m891E1F37730C9E3D6ABDED416B360A3EB0468C8A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_editorRenderFlags(UnityEngine.TerrainRenderFlags)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Terrain_GetPosition_Injected_m23EC0958466016EFB553CFBBE1B6E4FB076FE419(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Terrain::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_Flush_m960CA9087AB6C18BE3C6B54DD993B5E728E5FA95 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef void (*Terrain_Flush_m960CA9087AB6C18BE3C6B54DD993B5E728E5FA95_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_Flush_m960CA9087AB6C18BE3C6B54DD993B5E728E5FA95_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_Flush_m960CA9087AB6C18BE3C6B54DD993B5E728E5FA95_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::Flush()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Terrain::set_preserveTreePrototypeLayers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_preserveTreePrototypeLayers_mCBE60BF8EE44DA31170E32B8C31B64393A8EC4DA (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_set_preserveTreePrototypeLayers_mCBE60BF8EE44DA31170E32B8C31B64393A8EC4DA_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, bool);
	static Terrain_set_preserveTreePrototypeLayers_mCBE60BF8EE44DA31170E32B8C31B64393A8EC4DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_set_preserveTreePrototypeLayers_mCBE60BF8EE44DA31170E32B8C31B64393A8EC4DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::set_preserveTreePrototypeLayers(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Terrain::get_heightmapFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_heightmapFormat_m7BDD479FF7710457999A405C226D2AEE901DDF87 (const RuntimeMethod* method) 
{
	typedef int32_t (*Terrain_get_heightmapFormat_m7BDD479FF7710457999A405C226D2AEE901DDF87_ftn) ();
	static Terrain_get_heightmapFormat_m7BDD479FF7710457999A405C226D2AEE901DDF87_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_heightmapFormat_m7BDD479FF7710457999A405C226D2AEE901DDF87_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_heightmapFormat()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Terrain::get_normalmapFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_normalmapFormat_m70C88E3838D7938A60BFBBEF5BB2EFCD99EBA716 (const RuntimeMethod* method) 
{
	typedef int32_t (*Terrain_get_normalmapFormat_m70C88E3838D7938A60BFBBEF5BB2EFCD99EBA716_ftn) ();
	static Terrain_get_normalmapFormat_m70C88E3838D7938A60BFBBEF5BB2EFCD99EBA716_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_normalmapFormat_m70C88E3838D7938A60BFBBEF5BB2EFCD99EBA716_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_normalmapFormat()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.RenderTextureFormat UnityEngine.Terrain::get_normalmapRenderTextureFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_normalmapRenderTextureFormat_mE32604BFA382DEE5EF9E223FC5B0AED451FBB7A5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Terrain_get_normalmapFormat_m70C88E3838D7938A60BFBBEF5BB2EFCD99EBA716(NULL);
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Terrain::get_holesFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_holesFormat_m3BCE4632B6CE7D1A058070DC65CEDEF5365838BE (const RuntimeMethod* method) 
{
	typedef int32_t (*Terrain_get_holesFormat_m3BCE4632B6CE7D1A058070DC65CEDEF5365838BE_ftn) ();
	static Terrain_get_holesFormat_m3BCE4632B6CE7D1A058070DC65CEDEF5365838BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_holesFormat_m3BCE4632B6CE7D1A058070DC65CEDEF5365838BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_holesFormat()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.RenderTextureFormat UnityEngine.Terrain::get_holesRenderTextureFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_holesRenderTextureFormat_m960C437EC8DA9338ED56323263AD6F8B5CB6CD3B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Terrain_get_holesFormat_m3BCE4632B6CE7D1A058070DC65CEDEF5365838BE(NULL);
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Terrain UnityEngine.Terrain::get_activeTerrain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Terrain_get_activeTerrain_mAE5A7FE933C2C1A57FC9542E9BFA315A413F224E (const RuntimeMethod* method) 
{
	typedef Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* (*Terrain_get_activeTerrain_mAE5A7FE933C2C1A57FC9542E9BFA315A413F224E_ftn) ();
	static Terrain_get_activeTerrain_mAE5A7FE933C2C1A57FC9542E9BFA315A413F224E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_activeTerrain_mAE5A7FE933C2C1A57FC9542E9BFA315A413F224E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_activeTerrain()");
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701 (const RuntimeMethod* method) 
{
	typedef TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* (*Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701_ftn) ();
	static Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_activeTerrains()");
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.GameObject UnityEngine.Terrain::CreateTerrainGameObject(UnityEngine.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Terrain_CreateTerrainGameObject_m31CBC26A8971667B09CC08C868EA31E8A5D29522 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ___assignTerrain0, const RuntimeMethod* method) 
{
	typedef GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*Terrain_CreateTerrainGameObject_m31CBC26A8971667B09CC08C868EA31E8A5D29522_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static Terrain_CreateTerrainGameObject_m31CBC26A8971667B09CC08C868EA31E8A5D29522_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_CreateTerrainGameObject_m31CBC26A8971667B09CC08C868EA31E8A5D29522_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::CreateTerrainGameObject(UnityEngine.TerrainData)");
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* icallRetVal = _il2cpp_icall_func(___assignTerrain0);
	return icallRetVal;
}
// UnityEngine.Terrain UnityEngine.Terrain::get_leftNeighbor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Terrain_get_leftNeighbor_mA42E758BD513BC9E0FB87888FC24B3C4349A353E (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* (*Terrain_get_leftNeighbor_mA42E758BD513BC9E0FB87888FC24B3C4349A353E_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_leftNeighbor_mA42E758BD513BC9E0FB87888FC24B3C4349A353E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_leftNeighbor_mA42E758BD513BC9E0FB87888FC24B3C4349A353E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_leftNeighbor()");
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Terrain UnityEngine.Terrain::get_rightNeighbor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Terrain_get_rightNeighbor_mA50D19F61FFBA544E94733B097D4409B15FECC17 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* (*Terrain_get_rightNeighbor_mA50D19F61FFBA544E94733B097D4409B15FECC17_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_rightNeighbor_mA50D19F61FFBA544E94733B097D4409B15FECC17_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_rightNeighbor_mA50D19F61FFBA544E94733B097D4409B15FECC17_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_rightNeighbor()");
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Terrain UnityEngine.Terrain::get_topNeighbor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Terrain_get_topNeighbor_mCBC502C4CC0D617863D7A3A726EBFA4BD18BDF8C (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* (*Terrain_get_topNeighbor_mCBC502C4CC0D617863D7A3A726EBFA4BD18BDF8C_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_topNeighbor_mCBC502C4CC0D617863D7A3A726EBFA4BD18BDF8C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_topNeighbor_mCBC502C4CC0D617863D7A3A726EBFA4BD18BDF8C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_topNeighbor()");
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Terrain UnityEngine.Terrain::get_bottomNeighbor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Terrain_get_bottomNeighbor_m31306E01318F62D214B5E0966C988FB24255406F (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* (*Terrain_get_bottomNeighbor_m31306E01318F62D214B5E0966C988FB24255406F_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_bottomNeighbor_m31306E01318F62D214B5E0966C988FB24255406F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_bottomNeighbor_m31306E01318F62D214B5E0966C988FB24255406F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_bottomNeighbor()");
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain__ctor_m11F03EC6C1E68752DDCAE8EF2DED99CFD939FCDC (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
// System.Single UnityEngine.Terrain::SampleHeight_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_SampleHeight_Injected_m08851544EDBB88AFD061CD7E63E7995203BC7557 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___worldPosition0, const RuntimeMethod* method) 
{
	typedef float (*Terrain_SampleHeight_Injected_m08851544EDBB88AFD061CD7E63E7995203BC7557_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Terrain_SampleHeight_Injected_m08851544EDBB88AFD061CD7E63E7995203BC7557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_SampleHeight_Injected_m08851544EDBB88AFD061CD7E63E7995203BC7557_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::SampleHeight_Injected(UnityEngine.Vector3&)");
	float icallRetVal = _il2cpp_icall_func(__this, ___worldPosition0);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::GetPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_GetPosition_Injected_m23EC0958466016EFB553CFBBE1B6E4FB076FE419 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Terrain_GetPosition_Injected_m23EC0958466016EFB553CFBBE1B6E4FB076FE419_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Terrain_GetPosition_Injected_m23EC0958466016EFB553CFBBE1B6E4FB076FE419_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_GetPosition_Injected_m23EC0958466016EFB553CFBBE1B6E4FB076FE419_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::GetPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.TreePrototype
IL2CPP_EXTERN_C void TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshal_pinvoke(const TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D& unmarshaled, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prefab' of type 'TreePrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prefab_0Exception, NULL);
}
IL2CPP_EXTERN_C void TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshal_pinvoke_back(const TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_pinvoke& marshaled, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D& unmarshaled)
{
	Exception_t* ___m_Prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prefab' of type 'TreePrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prefab_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.TreePrototype
IL2CPP_EXTERN_C void TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshal_pinvoke_cleanup(TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.TreePrototype
IL2CPP_EXTERN_C void TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshal_com(const TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D& unmarshaled, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_com& marshaled)
{
	Exception_t* ___m_Prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prefab' of type 'TreePrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prefab_0Exception, NULL);
}
IL2CPP_EXTERN_C void TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshal_com_back(const TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_com& marshaled, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D& unmarshaled)
{
	Exception_t* ___m_Prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prefab' of type 'TreePrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prefab_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.TreePrototype
IL2CPP_EXTERN_C void TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshal_com_cleanup(TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_com& marshaled)
{
}
// UnityEngine.GameObject UnityEngine.TreePrototype::get_prefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* TreePrototype_get_prefab_mCE1630C35B09770D35B2ECA45B98D1CB6D5AC67C (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Prefab_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TreePrototype::set_prefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePrototype_set_prefab_m795E5BAADC413A62B97AAA7B2742F2B09CD60E62 (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_Prefab_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Prefab_0), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.TreePrototype::get_bendFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TreePrototype_get_bendFactor_mC78774070395FFBEF5588233ED4C40D253F2B087 (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_BendFactor_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TreePrototype::set_bendFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePrototype_set_bendFactor_m28AF8D21C6BED89B59DCD1F3F79596D4A3C281CD (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_BendFactor_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.TreePrototype::get_navMeshLod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreePrototype_get_navMeshLod_m68F7C292A64B7560076E09BF0B3AB6D681886C6C (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_NavMeshLod_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TreePrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePrototype__ctor_m319858B89E2F9AF0FD4009A015E2A34776F6CAC5 (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.TreePrototype::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreePrototype_Equals_m50E85BD703A2633D4ECA590DB0F1B803EE192F9A (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		bool L_1;
		L_1 = TreePrototype_Equals_m6F39B894827A28E1ADBF4403922FFCA8CF55E265(__this, ((TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D*)IsInstSealed((RuntimeObject*)L_0, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.TreePrototype::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreePrototype_GetHashCode_m3E71334805650043E1C12F1FD6228D6281560E91 (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.TreePrototype::Equals(UnityEngine.TreePrototype)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreePrototype_Equals_m6F39B894827A28E1ADBF4403922FFCA8CF55E265 (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B10_0 = 0;
	{
		TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_0 = ___other0;
		V_1 = (bool)((((RuntimeObject*)(TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_006b;
	}

IL_000d:
	{
		TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_2 = ___other0;
		V_3 = (bool)((((RuntimeObject*)(TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D*)L_2) == ((RuntimeObject*)(TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D*)__this))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_006b;
	}

IL_0019:
	{
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_5 = ___other0;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_006b;
	}

IL_0034:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = TreePrototype_get_prefab_mCE1630C35B09770D35B2ECA45B98D1CB6D5AC67C(__this, NULL);
		TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_9 = ___other0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = TreePrototype_get_prefab_mCE1630C35B09770D35B2ECA45B98D1CB6D5AC67C(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		float L_12;
		L_12 = TreePrototype_get_bendFactor_mC78774070395FFBEF5588233ED4C40D253F2B087(__this, NULL);
		TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_13 = ___other0;
		NullCheck(L_13);
		float L_14;
		L_14 = TreePrototype_get_bendFactor_mC78774070395FFBEF5588233ED4C40D253F2B087(L_13, NULL);
		if ((!(((float)L_12) == ((float)L_14))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_15;
		L_15 = TreePrototype_get_navMeshLod_m68F7C292A64B7560076E09BF0B3AB6D681886C6C(__this, NULL);
		TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_16 = ___other0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = TreePrototype_get_navMeshLod_m68F7C292A64B7560076E09BF0B3AB6D681886C6C(L_16, NULL);
		G_B10_0 = ((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		goto IL_0066;
	}

IL_0065:
	{
		G_B10_0 = 0;
	}

IL_0066:
	{
		V_0 = (bool)G_B10_0;
		bool L_18 = V_0;
		V_2 = L_18;
		goto IL_006b;
	}

IL_006b:
	{
		bool L_19 = V_2;
		return L_19;
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
// Conversion methods for marshalling of: UnityEngine.DetailPrototype
IL2CPP_EXTERN_C void DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshal_pinvoke(const DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B& unmarshaled, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Prototype_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prototype' of type 'DetailPrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prototype_2Exception, NULL);
}
IL2CPP_EXTERN_C void DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshal_pinvoke_back(const DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_pinvoke& marshaled, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B& unmarshaled)
{
	Exception_t* ___m_Prototype_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prototype' of type 'DetailPrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prototype_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.DetailPrototype
IL2CPP_EXTERN_C void DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshal_pinvoke_cleanup(DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.DetailPrototype
IL2CPP_EXTERN_C void DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshal_com(const DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B& unmarshaled, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_com& marshaled)
{
	Exception_t* ___m_Prototype_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prototype' of type 'DetailPrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prototype_2Exception, NULL);
}
IL2CPP_EXTERN_C void DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshal_com_back(const DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_com& marshaled, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B& unmarshaled)
{
	Exception_t* ___m_Prototype_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prototype' of type 'DetailPrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prototype_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.DetailPrototype
IL2CPP_EXTERN_C void DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshal_com_cleanup(DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_com& marshaled)
{
}
// UnityEngine.GameObject UnityEngine.DetailPrototype::get_prototype()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DetailPrototype_get_prototype_m4231116338BF5EA568B47405CD7626FA511EA695 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Prototype_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.DetailPrototype::set_prototype(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_prototype_m3D231B05003B29C4FAE5146B42514F34C7D7F61C (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_Prototype_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Prototype_2), (void*)L_0);
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.DetailPrototype::get_prototypeTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DetailPrototype_get_prototypeTexture_m293614A486AE92BBAE7CA448B1A87BE5F64B4D7E (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_PrototypeTexture_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.DetailPrototype::set_prototypeTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_prototypeTexture_m2679A1548B564B70036AFC79413C99271AA76A82 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___value0;
		__this->___m_PrototypeTexture_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PrototypeTexture_3), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.DetailPrototype::get_minWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetailPrototype_get_minWidth_m41AAF89F1E5EBFBD6D064684D6956F6796F8CE7C (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_MinWidth_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.DetailPrototype::set_minWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_minWidth_m35117222A238E215BC941F5F82E7A25D7BABF3DF (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_MinWidth_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.DetailPrototype::get_maxWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetailPrototype_get_maxWidth_m428CF8DDC8FE3BB9E55051702ACBBA7431E8C073 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_MaxWidth_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.DetailPrototype::set_maxWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_maxWidth_m481FAB59429BE8596BD8B4478D4853FCCBB7DC27 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_MaxWidth_7 = L_0;
		return;
	}
}
// System.Single UnityEngine.DetailPrototype::get_minHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetailPrototype_get_minHeight_mD714BF9D18EBC2E2920908302EAFE31F014A44A8 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_MinHeight_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.DetailPrototype::set_minHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_minHeight_mBD5DC44011EF8981E9256ED394D9FB6989193955 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_MinHeight_8 = L_0;
		return;
	}
}
// System.Single UnityEngine.DetailPrototype::get_maxHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetailPrototype_get_maxHeight_m6048EC459FF0A728CDB5D2DD1169894F3A3A7C15 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_MaxHeight_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.DetailPrototype::set_maxHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_maxHeight_mF56BB11D1C9AF4D3131D36FDB63795BCD6B9A5A6 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_MaxHeight_9 = L_0;
		return;
	}
}
// System.Single UnityEngine.DetailPrototype::get_noiseSpread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetailPrototype_get_noiseSpread_m7FC289CF0B780679986A5395ECA4318FB696EBE1 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_NoiseSpread_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.DetailPrototype::set_noiseSpread(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_noiseSpread_mEDAF66AFB8F1423453A74CDE41E6EEC0CCDD14FB (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_NoiseSpread_11 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.DetailPrototype::get_healthyColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F DetailPrototype_get_healthyColor_mD81828F1E2867C4819B38B0466ABAF2B10E10FD9 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_HealthyColor_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.DetailPrototype::set_healthyColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_healthyColor_m9CD3FB1504B33DD13ED6BDADC089AB984FE48FBA (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_HealthyColor_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.DetailPrototype::get_dryColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F DetailPrototype_get_dryColor_mCA70253238F53DC22FE0F6D6A644F6ED839A310F (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_DryColor_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.DetailPrototype::set_dryColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_dryColor_mC5BE4EC0A161311A8A864687B7341F347F8644E2 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_DryColor_5 = L_0;
		return;
	}
}
// UnityEngine.DetailRenderMode UnityEngine.DetailPrototype::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DetailPrototype_get_renderMode_mE98D096AA932509AEF13C2AA75D34AFCA0AA1891 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_RenderMode_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.DetailPrototype::set_renderMode(UnityEngine.DetailRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_renderMode_mFDE617505B0142B83B0FF74D43793CD684D3E087 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_RenderMode_13 = L_0;
		return;
	}
}
// System.Void UnityEngine.DetailPrototype::set_usePrototypeMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_usePrototypeMesh_m77296758634404A1ABB97ED11733672F4EA446FD (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, bool ___value0, const RuntimeMethod* method) 
{
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B2_0 = NULL;
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_UsePrototypeMesh_14 = G_B3_0;
		return;
	}
}
// System.Boolean UnityEngine.DetailPrototype::get_useInstancing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DetailPrototype_get_useInstancing_m217E01AE7B95A6E0A721E5A9B3B4681C7D63BA61 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_UseInstancing_15;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.DetailPrototype::set_useInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_useInstancing_m21E73698E0A1A02B88FE13E508129B1B3AE16DEE (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, bool ___value0, const RuntimeMethod* method) 
{
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B2_0 = NULL;
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_UseInstancing_15 = G_B3_0;
		return;
	}
}
// System.Void UnityEngine.DetailPrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype__ctor_m9157B5DBD1A80AF51E9090177A751EB401247103 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_Prototype_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Prototype_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		__this->___m_PrototypeTexture_3 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PrototypeTexture_3), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		il2cpp_codegen_runtime_class_init_inline(DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_StaticFields*)il2cpp_codegen_static_fields_for(DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var))->___DefaultHealthColor_0;
		__this->___m_HealthyColor_4 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ((DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_StaticFields*)il2cpp_codegen_static_fields_for(DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var))->___DefaultDryColor_1;
		__this->___m_DryColor_5 = L_1;
		__this->___m_MinWidth_6 = (1.0f);
		__this->___m_MaxWidth_7 = (2.0f);
		__this->___m_MinHeight_8 = (1.0f);
		__this->___m_MaxHeight_9 = (2.0f);
		__this->___m_NoiseSeed_10 = 0;
		__this->___m_NoiseSpread_11 = (0.100000001f);
		__this->___m_HoleEdgePadding_12 = (0.0f);
		__this->___m_RenderMode_13 = 2;
		__this->___m_UsePrototypeMesh_14 = 0;
		__this->___m_UseInstancing_15 = 0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.DetailPrototype::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DetailPrototype_Equals_m4366EA36A57FC1391A85828835FD5B493A573E93 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		bool L_1;
		L_1 = DetailPrototype_Equals_mDCF0B4B10AB82B883A1B1EE9F286D92A99636B20(__this, ((DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B*)IsInstSealed((RuntimeObject*)L_0, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.DetailPrototype::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DetailPrototype_GetHashCode_m7C87FF388D92F7A9396DC46F1F4DB4AC436D9ED0 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.DetailPrototype::Equals(UnityEngine.DetailPrototype)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DetailPrototype_Equals_mDCF0B4B10AB82B883A1B1EE9F286D92A99636B20 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B21_0 = 0;
	{
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0128;
	}

IL_0010:
	{
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_2 = ___other0;
		V_2 = (bool)((((RuntimeObject*)(DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B*)L_2) == ((RuntimeObject*)(DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B*)__this))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0128;
	}

IL_001f:
	{
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_5 = ___other0;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0128;
	}

IL_003b:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___m_Prototype_2;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_9 = ___other0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___m_Prototype_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0124;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = __this->___m_PrototypeTexture_3;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_13 = ___other0;
		NullCheck(L_13);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = L_13->___m_PrototypeTexture_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0124;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->___m_HealthyColor_4;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_17 = ___other0;
		NullCheck(L_17);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = L_17->___m_HealthyColor_4;
		bool L_19;
		L_19 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0124;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = __this->___m_DryColor_5;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_21 = ___other0;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = L_21->___m_DryColor_5;
		bool L_23;
		L_23 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_20, L_22, NULL);
		if (!L_23)
		{
			goto IL_0124;
		}
	}
	{
		float L_24 = __this->___m_MinWidth_6;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_25 = ___other0;
		NullCheck(L_25);
		float L_26 = L_25->___m_MinWidth_6;
		if ((!(((float)L_24) == ((float)L_26))))
		{
			goto IL_0124;
		}
	}
	{
		float L_27 = __this->___m_MaxWidth_7;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_28 = ___other0;
		NullCheck(L_28);
		float L_29 = L_28->___m_MaxWidth_7;
		if ((!(((float)L_27) == ((float)L_29))))
		{
			goto IL_0124;
		}
	}
	{
		float L_30 = __this->___m_MinHeight_8;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_31 = ___other0;
		NullCheck(L_31);
		float L_32 = L_31->___m_MinHeight_8;
		if ((!(((float)L_30) == ((float)L_32))))
		{
			goto IL_0124;
		}
	}
	{
		float L_33 = __this->___m_MaxHeight_9;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_34 = ___other0;
		NullCheck(L_34);
		float L_35 = L_34->___m_MaxHeight_9;
		if ((!(((float)L_33) == ((float)L_35))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_36 = __this->___m_NoiseSeed_10;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_37 = ___other0;
		NullCheck(L_37);
		int32_t L_38 = L_37->___m_NoiseSeed_10;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_0124;
		}
	}
	{
		float L_39 = __this->___m_NoiseSpread_11;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_40 = ___other0;
		NullCheck(L_40);
		float L_41 = L_40->___m_NoiseSpread_11;
		if ((!(((float)L_39) == ((float)L_41))))
		{
			goto IL_0124;
		}
	}
	{
		float L_42 = __this->___m_HoleEdgePadding_12;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_43 = ___other0;
		NullCheck(L_43);
		float L_44 = L_43->___m_HoleEdgePadding_12;
		if ((!(((float)L_42) == ((float)L_44))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_45 = __this->___m_RenderMode_13;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_46 = ___other0;
		NullCheck(L_46);
		int32_t L_47 = L_46->___m_RenderMode_13;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_47))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_48 = __this->___m_UsePrototypeMesh_14;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_49 = ___other0;
		NullCheck(L_49);
		int32_t L_50 = L_49->___m_UsePrototypeMesh_14;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_50))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_51 = __this->___m_UseInstancing_15;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_52 = ___other0;
		NullCheck(L_52);
		int32_t L_53 = L_52->___m_UseInstancing_15;
		G_B21_0 = ((((int32_t)L_51) == ((int32_t)L_53))? 1 : 0);
		goto IL_0125;
	}

IL_0124:
	{
		G_B21_0 = 0;
	}

IL_0125:
	{
		V_1 = (bool)G_B21_0;
		goto IL_0128;
	}

IL_0128:
	{
		bool L_54 = V_1;
		return L_54;
	}
}
// System.Void UnityEngine.DetailPrototype::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype__cctor_m5D5A4C448F2584173CF5618DD3CB725B16F6406F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.262745112f), (0.97647059f), (0.164705887f), (1.0f), /*hidden argument*/NULL);
		((DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_StaticFields*)il2cpp_codegen_static_fields_for(DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var))->___DefaultHealthColor_0 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (0.80392158f), (0.737254918f), (0.101960786f), (1.0f), /*hidden argument*/NULL);
		((DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_StaticFields*)il2cpp_codegen_static_fields_for(DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var))->___DefaultDryColor_1 = L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E (int32_t ___type0, const RuntimeMethod* method) 
{
	typedef int32_t (*TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E_ftn) (int32_t);
	static TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)");
	int32_t icallRetVal = _il2cpp_icall_func(___type0);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData__ctor_m1B68EB89248D5706C2528F47279812F824E27A2E (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		TerrainData_Internal_Create_m79BF764CFF5F49D17E2BFC8B20F60B4CF70BE4E1(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_Create_m79BF764CFF5F49D17E2BFC8B20F60B4CF70BE4E1 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ___terrainData0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_Create_m79BF764CFF5F49D17E2BFC8B20F60B4CF70BE4E1_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_Internal_Create_m79BF764CFF5F49D17E2BFC8B20F60B4CF70BE4E1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_Create_m79BF764CFF5F49D17E2BFC8B20F60B4CF70BE4E1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)");
	_il2cpp_icall_func(___terrainData0);
}
// UnityEngine.RenderTexture UnityEngine.TerrainData::get_heightmapTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TerrainData_get_heightmapTexture_m26CB863455F0048CEA74741C71BF3021576FF8CE (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* (*TerrainData_get_heightmapTexture_m26CB863455F0048CEA74741C71BF3021576FF8CE_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_heightmapTexture_m26CB863455F0048CEA74741C71BF3021576FF8CE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_heightmapTexture_m26CB863455F0048CEA74741C71BF3021576FF8CE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_heightmapTexture()");
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.TerrainData::get_heightmapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TerrainData_get_internalHeightmapResolution_m83C6A32499AAAAFDD57DF73BA460CBCF02F98118(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TerrainData::set_heightmapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_heightmapResolution_m2E5AA9451129E9460D9573CCA899DC1F3CFFDD21 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77A4D95C5A66881369906720C24690D7097D85DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral828C612CFA3A4313C55612B532C9698E1FF8191A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___value0;
		V_0 = L_0;
		int32_t L_1 = ___value0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_3 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumResolution_10;
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_5 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumResolution_10;
		V_2 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral828C612CFA3A4313C55612B532C9698E1FF8191A, L_6, _stringLiteral77A4D95C5A66881369906720C24690D7097D85DC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_7, NULL);
		int32_t L_8 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumResolution_10;
		int32_t L_9 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_9, 0, NULL);
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_8, L_10, NULL);
		V_0 = L_11;
	}

IL_004c:
	{
		int32_t L_12 = V_0;
		TerrainData_set_internalHeightmapResolution_m18F96875BE176D13F26A55AEBB0343902D5C1B5A(__this, L_12, NULL);
		return;
	}
}
// System.Int32 UnityEngine.TerrainData::get_internalHeightmapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_internalHeightmapResolution_m83C6A32499AAAAFDD57DF73BA460CBCF02F98118 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TerrainData_get_internalHeightmapResolution_m83C6A32499AAAAFDD57DF73BA460CBCF02F98118_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_internalHeightmapResolution_m83C6A32499AAAAFDD57DF73BA460CBCF02F98118_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_internalHeightmapResolution_m83C6A32499AAAAFDD57DF73BA460CBCF02F98118_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_internalHeightmapResolution()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::set_internalHeightmapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_internalHeightmapResolution_m18F96875BE176D13F26A55AEBB0343902D5C1B5A (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_set_internalHeightmapResolution_m18F96875BE176D13F26A55AEBB0343902D5C1B5A_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t);
	static TerrainData_set_internalHeightmapResolution_m18F96875BE176D13F26A55AEBB0343902D5C1B5A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_set_internalHeightmapResolution_m18F96875BE176D13F26A55AEBB0343902D5C1B5A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::set_internalHeightmapResolution(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.TerrainData::get_heightmapScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_heightmapScale_m4B6AB6495384109BA54955CA52B883A118015188 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainData_get_heightmapScale_Injected_m3F94935D94B0B8029E2145C33B023AB8677C39AB(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Texture UnityEngine.TerrainData::get_holesTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TerrainData_get_holesTexture_m967249F842D3BFC631ED03C847C41EE4D0A56912 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_1 = NULL;
	{
		bool L_0;
		L_0 = TerrainData_IsHolesTextureCompressed_mBFE653BBF59360E5382F66592EF1F3E48ED4057D(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = TerrainData_GetCompressedHolesTexture_m219472651551DC5C4613B441C27E504DA693411F(__this, NULL);
		V_1 = L_2;
		goto IL_001f;
	}

IL_0015:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3;
		L_3 = TerrainData_GetHolesTexture_mE1BC7A225983716A760BA8ACEFEC6DEFF6EA572A(__this, NULL);
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.TerrainData::IsHolesTextureCompressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainData_IsHolesTextureCompressed_mBFE653BBF59360E5382F66592EF1F3E48ED4057D (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef bool (*TerrainData_IsHolesTextureCompressed_mBFE653BBF59360E5382F66592EF1F3E48ED4057D_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_IsHolesTextureCompressed_mBFE653BBF59360E5382F66592EF1F3E48ED4057D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_IsHolesTextureCompressed_mBFE653BBF59360E5382F66592EF1F3E48ED4057D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::IsHolesTextureCompressed()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.RenderTexture UnityEngine.TerrainData::GetHolesTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TerrainData_GetHolesTexture_mE1BC7A225983716A760BA8ACEFEC6DEFF6EA572A (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* (*TerrainData_GetHolesTexture_mE1BC7A225983716A760BA8ACEFEC6DEFF6EA572A_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_GetHolesTexture_mE1BC7A225983716A760BA8ACEFEC6DEFF6EA572A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetHolesTexture_mE1BC7A225983716A760BA8ACEFEC6DEFF6EA572A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetHolesTexture()");
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Texture2D UnityEngine.TerrainData::GetCompressedHolesTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainData_GetCompressedHolesTexture_m219472651551DC5C4613B441C27E504DA693411F (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*TerrainData_GetCompressedHolesTexture_m219472651551DC5C4613B441C27E504DA693411F_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_GetCompressedHolesTexture_m219472651551DC5C4613B441C27E504DA693411F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetCompressedHolesTexture_m219472651551DC5C4613B441C27E504DA693411F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetCompressedHolesTexture()");
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.TerrainData::get_holesResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_holesResolution_m9DE109FB3A0874F7F4706543D0903AFA12D1BC53 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}
}
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainData::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_size_m4F3EF9EDDF9BE2E0903FE3A5121D8F4ABDA46DC1 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		TerrainData_set_size_Injected_mF315143468DD64DB825C9D0A03EF491E035666D8(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Bounds UnityEngine.TerrainData::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TerrainData_get_bounds_m9CE9B3BF067EA06A837AB98B5BC6C0C4669B5A32 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainData_get_bounds_Injected_mD98BEEB610CCB2688123B28111C35D3E6415BDE5(__this, (&V_0), NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.TerrainData::GetInterpolatedHeight(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_GetInterpolatedHeight_m30AAF72C79B6BE19E23962304DB80B21023B5752 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	typedef float (*TerrainData_GetInterpolatedHeight_m30AAF72C79B6BE19E23962304DB80B21023B5752_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, float, float);
	static TerrainData_GetInterpolatedHeight_m30AAF72C79B6BE19E23962304DB80B21023B5752_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetInterpolatedHeight_m30AAF72C79B6BE19E23962304DB80B21023B5752_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetInterpolatedHeight(System.Single,System.Single)");
	float icallRetVal = _il2cpp_icall_func(__this, ___x0, ___y1);
	return icallRetVal;
}
// System.Single[,] UnityEngine.TerrainData::GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* TerrainData_GetHeights_m3E5C109E98E72A23E39B92F7DF48D87888B2D488 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* V_1 = NULL;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = ___xBase0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = ___yBase1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_2 = ___xBase0;
		int32_t L_3 = ___width2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = ___yBase1;
		int32_t L_5 = ___height3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = ___xBase0;
		int32_t L_7 = ___width2;
		int32_t L_8;
		L_8 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) > ((int32_t)L_8)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = ___yBase1;
		int32_t L_10 = ___height3;
		int32_t L_11;
		L_11 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(__this, NULL);
		G_B7_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, L_10))) > ((int32_t)L_11))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B7_0 = 1;
	}

IL_0030:
	{
		V_0 = (bool)G_B7_0;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral35D2B32011E88B81022A77D21A28C39AA1800B52)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_GetHeights_m3E5C109E98E72A23E39B92F7DF48D87888B2D488_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_14 = ___xBase0;
		int32_t L_15 = ___yBase1;
		int32_t L_16 = ___width2;
		int32_t L_17 = ___height3;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_18;
		L_18 = TerrainData_Internal_GetHeights_mEDF77233265AFA8901DE8FB61661385337B70810(__this, L_14, L_15, L_16, L_17, NULL);
		V_1 = L_18;
		goto IL_004e;
	}

IL_004e:
	{
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_19 = V_1;
		return L_19;
	}
}
// System.Single[,] UnityEngine.TerrainData::Internal_GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* TerrainData_Internal_GetHeights_mEDF77233265AFA8901DE8FB61661385337B70810 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	typedef SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* (*TerrainData_Internal_GetHeights_mEDF77233265AFA8901DE8FB61661385337B70810_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t, int32_t, int32_t, int32_t);
	static TerrainData_Internal_GetHeights_mEDF77233265AFA8901DE8FB61661385337B70810_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_GetHeights_mEDF77233265AFA8901DE8FB61661385337B70810_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)");
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* icallRetVal = _il2cpp_icall_func(__this, ___xBase0, ___yBase1, ___width2, ___height3);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::SetHeights(System.Int32,System.Int32,System.Single[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetHeights_m104C6E5C4E4A12223AA0E2E123E0557302097F23 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___heights2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B9_0 = 0;
	{
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_0 = ___heights2;
		V_0 = (bool)((((RuntimeObject*)(SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_SetHeights_m104C6E5C4E4A12223AA0E2E123E0557302097F23_RuntimeMethod_var)));
	}

IL_0010:
	{
		int32_t L_3 = ___xBase0;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_4 = ___heights2;
		NullCheck((RuntimeArray*)L_4);
		int32_t L_5;
		L_5 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_4, 1, NULL);
		int32_t L_6;
		L_6 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_5))) > ((int32_t)L_6)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_7 = ___xBase0;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_8 = ___heights2;
		NullCheck((RuntimeArray*)L_8);
		int32_t L_9;
		L_9 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_8, 1, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_9))) < ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_10 = ___yBase1;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_11 = ___heights2;
		NullCheck((RuntimeArray*)L_11);
		int32_t L_12;
		L_12 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_11, 0, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_10, L_12))) < ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_13 = ___xBase0;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_14 = ___yBase1;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_15 = ___yBase1;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_16 = ___heights2;
		NullCheck((RuntimeArray*)L_16);
		int32_t L_17;
		L_17 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_16, 0, NULL);
		int32_t L_18;
		L_18 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(__this, NULL);
		G_B9_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_15, L_17))) > ((int32_t)L_18))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B9_0 = 1;
	}

IL_0055:
	{
		V_1 = (bool)G_B9_0;
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_00a0;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		int32_t L_22 = ___xBase0;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_23 = ___heights2;
		NullCheck((RuntimeArray*)L_23);
		int32_t L_24;
		L_24 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_23, 1, NULL);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_22, L_24));
		RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_25);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_26);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_21;
		int32_t L_28 = ___yBase1;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_29 = ___heights2;
		NullCheck((RuntimeArray*)L_29);
		int32_t L_30;
		L_30 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_29, 0, NULL);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_28, L_30));
		RuntimeObject* L_32 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_31);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_32);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_27;
		int32_t L_34;
		L_34 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(__this, NULL);
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
		String_t* L_37;
		L_37 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9C772368F43791F6C052967C4618CA3756B51D55)), L_33, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_38 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_38);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_38, L_37, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_SetHeights_m104C6E5C4E4A12223AA0E2E123E0557302097F23_RuntimeMethod_var)));
	}

IL_00a0:
	{
		int32_t L_39 = ___xBase0;
		int32_t L_40 = ___yBase1;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_41 = ___heights2;
		NullCheck((RuntimeArray*)L_41);
		int32_t L_42;
		L_42 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_41, 1, NULL);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_43 = ___heights2;
		NullCheck((RuntimeArray*)L_43);
		int32_t L_44;
		L_44 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_43, 0, NULL);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_45 = ___heights2;
		TerrainData_Internal_SetHeights_m8E3E77B7A38E85521BF693D7EB3B9E277CDBE12E(__this, L_39, L_40, L_42, L_44, L_45, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_SetHeights(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SetHeights_m8E3E77B7A38E85521BF693D7EB3B9E277CDBE12E (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___heights4, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_SetHeights_m8E3E77B7A38E85521BF693D7EB3B9E277CDBE12E_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t, int32_t, int32_t, int32_t, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*);
	static TerrainData_Internal_SetHeights_m8E3E77B7A38E85521BF693D7EB3B9E277CDBE12E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_SetHeights_m8E3E77B7A38E85521BF693D7EB3B9E277CDBE12E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_SetHeights(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[,])");
	_il2cpp_icall_func(__this, ___xBase0, ___yBase1, ___width2, ___height3, ___heights4);
}
// System.Single UnityEngine.TerrainData::GetSteepness(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_GetSteepness_mA0AD10DFEA5D97CF63DBDB34D99E7A43640D93B9 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	typedef float (*TerrainData_GetSteepness_mA0AD10DFEA5D97CF63DBDB34D99E7A43640D93B9_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, float, float);
	static TerrainData_GetSteepness_mA0AD10DFEA5D97CF63DBDB34D99E7A43640D93B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetSteepness_mA0AD10DFEA5D97CF63DBDB34D99E7A43640D93B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetSteepness(System.Single,System.Single)");
	float icallRetVal = _il2cpp_icall_func(__this, ___x0, ___y1);
	return icallRetVal;
}
// UnityEngine.Vector3 UnityEngine.TerrainData::GetInterpolatedNormal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_GetInterpolatedNormal_m2925F25FF12A4DC2F2CDD9331F3E2A55D42D7DCE (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		TerrainData_GetInterpolatedNormal_Injected_mF6E35FCDF546E498658E864D47EB87C22B41E571(__this, L_0, L_1, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.TerrainData::get_wavingGrassStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_get_wavingGrassStrength_mEE2A93E488F4349999D85D55DD6CD9DB626FF373 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef float (*TerrainData_get_wavingGrassStrength_mEE2A93E488F4349999D85D55DD6CD9DB626FF373_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_wavingGrassStrength_mEE2A93E488F4349999D85D55DD6CD9DB626FF373_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_wavingGrassStrength_mEE2A93E488F4349999D85D55DD6CD9DB626FF373_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_wavingGrassStrength()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::set_wavingGrassStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassStrength_m40D1A37A911BD8E430E0CE2FB20A1BDD7E899776 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_set_wavingGrassStrength_m40D1A37A911BD8E430E0CE2FB20A1BDD7E899776_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, float);
	static TerrainData_set_wavingGrassStrength_m40D1A37A911BD8E430E0CE2FB20A1BDD7E899776_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_set_wavingGrassStrength_m40D1A37A911BD8E430E0CE2FB20A1BDD7E899776_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::set_wavingGrassStrength(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.TerrainData::get_wavingGrassAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_get_wavingGrassAmount_mAE3A3E9E51DEE6F3062064D55F5FE90105FA18EA (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef float (*TerrainData_get_wavingGrassAmount_mAE3A3E9E51DEE6F3062064D55F5FE90105FA18EA_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_wavingGrassAmount_mAE3A3E9E51DEE6F3062064D55F5FE90105FA18EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_wavingGrassAmount_mAE3A3E9E51DEE6F3062064D55F5FE90105FA18EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_wavingGrassAmount()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::set_wavingGrassAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassAmount_m42B701F18798FEFCFF39AA29855D12A946AB47CC (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_set_wavingGrassAmount_m42B701F18798FEFCFF39AA29855D12A946AB47CC_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, float);
	static TerrainData_set_wavingGrassAmount_m42B701F18798FEFCFF39AA29855D12A946AB47CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_set_wavingGrassAmount_m42B701F18798FEFCFF39AA29855D12A946AB47CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::set_wavingGrassAmount(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.TerrainData::get_wavingGrassSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_get_wavingGrassSpeed_m4528E32081633762C16079370ADA8DDE1794AB75 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef float (*TerrainData_get_wavingGrassSpeed_m4528E32081633762C16079370ADA8DDE1794AB75_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_wavingGrassSpeed_m4528E32081633762C16079370ADA8DDE1794AB75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_wavingGrassSpeed_m4528E32081633762C16079370ADA8DDE1794AB75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_wavingGrassSpeed()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::set_wavingGrassSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassSpeed_m45C0014ECD806D1B8877B734F80BBF0E87D7A7D5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_set_wavingGrassSpeed_m45C0014ECD806D1B8877B734F80BBF0E87D7A7D5_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, float);
	static TerrainData_set_wavingGrassSpeed_m45C0014ECD806D1B8877B734F80BBF0E87D7A7D5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_set_wavingGrassSpeed_m45C0014ECD806D1B8877B734F80BBF0E87D7A7D5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::set_wavingGrassSpeed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Color UnityEngine.TerrainData::get_wavingGrassTint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TerrainData_get_wavingGrassTint_m9D14E1262509149850E101ABF9A4515AD44CFAE7 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainData_get_wavingGrassTint_Injected_mDDE7C4FCA35CCFAF7D2674D225DC36B4D77CAD25(__this, (&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainData::set_wavingGrassTint(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassTint_m5BC16B415EAB6493D1E8541FC8391E23E8E06F74 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		TerrainData_set_wavingGrassTint_Injected_mDF8BCA497383058F5054AE782FFE9CAFE63FF142(__this, (&___value0), NULL);
		return;
	}
}
// System.Int32 UnityEngine.TerrainData::get_detailWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_detailWidth_m145CC1C91FF8C752907B80338DF03440E53AEBB4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TerrainData_get_detailWidth_m145CC1C91FF8C752907B80338DF03440E53AEBB4_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_detailWidth_m145CC1C91FF8C752907B80338DF03440E53AEBB4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_detailWidth_m145CC1C91FF8C752907B80338DF03440E53AEBB4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_detailWidth()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.TerrainData::get_detailHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_detailHeight_m1DBBB1664689DD08F64A9AF4023248F23865D304 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TerrainData_get_detailHeight_m1DBBB1664689DD08F64A9AF4023248F23865D304_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_detailHeight_m1DBBB1664689DD08F64A9AF4023248F23865D304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_detailHeight_m1DBBB1664689DD08F64A9AF4023248F23865D304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_detailHeight()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::SetDetailResolution(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetDetailResolution_mB4D4C5E5AAACFBB2C624006D93CA04FA22CDA76E (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___detailResolution0, int32_t ___resolutionPerPatch1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01C61024FC1988214CCE7BFA157367437E5CD310);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5159B549D5C92D688B1DCD40C556F3CDB599A4FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66934418B61E1E301479D764A172D5D7A9222E3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77A4D95C5A66881369906720C24690D7097D85DC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___detailResolution0;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral5159B549D5C92D688B1DCD40C556F3CDB599A4FD, NULL);
		___detailResolution0 = 0;
	}

IL_0019:
	{
		int32_t L_2 = ___resolutionPerPatch1;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_3 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumDetailResolutionPerPatch_11;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = ___resolutionPerPatch1;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_5 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailResolutionPerPatch_12;
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B5_0 = 1;
	}

IL_002c:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0092;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral66934418B61E1E301479D764A172D5D7A9222E3D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral66934418B61E1E301479D764A172D5D7A9222E3D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_10 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumDetailResolutionPerPatch_11;
		V_3 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_9;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		int32_t L_14 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailResolutionPerPatch_12;
		V_3 = L_14;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral77A4D95C5A66881369906720C24690D7097D85DC);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral77A4D95C5A66881369906720C24690D7097D85DC);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_17, NULL);
		int32_t L_18 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailResolutionPerPatch_12;
		int32_t L_19 = ___resolutionPerPatch1;
		int32_t L_20 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumDetailResolutionPerPatch_11;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_19, L_20, NULL);
		int32_t L_22;
		L_22 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_18, L_21, NULL);
		___resolutionPerPatch1 = L_22;
	}

IL_0092:
	{
		int32_t L_23 = ___detailResolution0;
		int32_t L_24 = ___resolutionPerPatch1;
		V_0 = ((int32_t)(L_23/L_24));
		int32_t L_25 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_26 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailPatchCount_13;
		V_4 = (bool)((((int32_t)L_25) > ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_00da;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_28 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailPatchCount_13;
		V_3 = L_28;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_30;
		L_30 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral01C61024FC1988214CCE7BFA157367437E5CD310, L_29, _stringLiteral77A4D95C5A66881369906720C24690D7097D85DC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_30, NULL);
		int32_t L_31 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailPatchCount_13;
		int32_t L_32 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_32, 0, NULL);
		int32_t L_34;
		L_34 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_31, L_33, NULL);
		V_0 = L_34;
	}

IL_00da:
	{
		int32_t L_35 = V_0;
		int32_t L_36 = ___resolutionPerPatch1;
		TerrainData_Internal_SetDetailResolution_mF138086D635E5D45AF0357589B4107706DD624D3(__this, L_35, L_36, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_SetDetailResolution(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SetDetailResolution_mF138086D635E5D45AF0357589B4107706DD624D3 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___patchCount0, int32_t ___resolutionPerPatch1, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_SetDetailResolution_mF138086D635E5D45AF0357589B4107706DD624D3_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t, int32_t);
	static TerrainData_Internal_SetDetailResolution_mF138086D635E5D45AF0357589B4107706DD624D3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_SetDetailResolution_mF138086D635E5D45AF0357589B4107706DD624D3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_SetDetailResolution(System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___patchCount0, ___resolutionPerPatch1);
}
// System.Int32 UnityEngine.TerrainData::get_detailResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_detailResolution_m999CE72D34D858E7D35182FA8DA05CE3C92F8D72 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TerrainData_get_detailResolution_m999CE72D34D858E7D35182FA8DA05CE3C92F8D72_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_detailResolution_m999CE72D34D858E7D35182FA8DA05CE3C92F8D72_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_detailResolution_m999CE72D34D858E7D35182FA8DA05CE3C92F8D72_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_detailResolution()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.TerrainData::get_detailResolutionPerPatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_detailResolutionPerPatch_mFB05C93330007A6A3121327D203F404AD0600622 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TerrainData_get_detailResolutionPerPatch_mFB05C93330007A6A3121327D203F404AD0600622_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_detailResolutionPerPatch_mFB05C93330007A6A3121327D203F404AD0600622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_detailResolutionPerPatch_mFB05C93330007A6A3121327D203F404AD0600622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_detailResolutionPerPatch()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.DetailPrototype[] UnityEngine.TerrainData::get_detailPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* (*TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_detailPrototypes()");
	DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::set_detailPrototypes(UnityEngine.DetailPrototype[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_detailPrototypes_m9C9DDFE5DBC3B789A70DAD6D06326C1140057A31 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_set_detailPrototypes_m9C9DDFE5DBC3B789A70DAD6D06326C1140057A31_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7*);
	static TerrainData_set_detailPrototypes_m9C9DDFE5DBC3B789A70DAD6D06326C1140057A31_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_set_detailPrototypes_m9C9DDFE5DBC3B789A70DAD6D06326C1140057A31_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::set_detailPrototypes(UnityEngine.DetailPrototype[])");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32[,] UnityEngine.TerrainData::GetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* TerrainData_GetDetailLayer_m8EB9B85C8CE8836E10D4D54B3A43BFE9AF888591 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, int32_t ___layer4, const RuntimeMethod* method) 
{
	typedef Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* (*TerrainData_GetDetailLayer_m8EB9B85C8CE8836E10D4D54B3A43BFE9AF888591_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t, int32_t, int32_t, int32_t, int32_t);
	static TerrainData_GetDetailLayer_m8EB9B85C8CE8836E10D4D54B3A43BFE9AF888591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetDetailLayer_m8EB9B85C8CE8836E10D4D54B3A43BFE9AF888591_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)");
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* icallRetVal = _il2cpp_icall_func(__this, ___xBase0, ___yBase1, ___width2, ___height3, ___layer4);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::SetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetDetailLayer_m03F76CB703CB3277723319EBF29B4924E22ED84B (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___layer2, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___details3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___xBase0;
		int32_t L_1 = ___yBase1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_2 = ___details3;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 1, NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_4 = ___details3;
		NullCheck((RuntimeArray*)L_4);
		int32_t L_5;
		L_5 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_4, 0, NULL);
		int32_t L_6 = ___layer2;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_7 = ___details3;
		TerrainData_Internal_SetDetailLayer_m782D0D38E2A1BDAEAF1F3E3C2D0282991019899F(__this, L_0, L_1, L_3, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_SetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SetDetailLayer_m782D0D38E2A1BDAEAF1F3E3C2D0282991019899F (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___totalWidth2, int32_t ___totalHeight3, int32_t ___detailIndex4, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___data5, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_SetDetailLayer_m782D0D38E2A1BDAEAF1F3E3C2D0282991019899F_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t, int32_t, int32_t, int32_t, int32_t, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*);
	static TerrainData_Internal_SetDetailLayer_m782D0D38E2A1BDAEAF1F3E3C2D0282991019899F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_SetDetailLayer_m782D0D38E2A1BDAEAF1F3E3C2D0282991019899F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_SetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[,])");
	_il2cpp_icall_func(__this, ___xBase0, ___yBase1, ___totalWidth2, ___totalHeight3, ___detailIndex4, ___data5);
}
// UnityEngine.TreeInstance[] UnityEngine.TerrainData::get_treeInstances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* TerrainData_get_treeInstances_mDAB68FD1F3677BD5CB122EA943493D5FC94B2147 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* V_0 = NULL;
	{
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_0;
		L_0 = TerrainData_Internal_GetTreeInstances_m0DCDC4D93E2CEC457C5BD8D0FE898B5A632E8347(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TerrainData::set_treeInstances(UnityEngine.TreeInstance[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_treeInstances_m4B62FA8A516D3839829AA50209897EDB7647F65D (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* ___value0, const RuntimeMethod* method) 
{
	{
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_0 = ___value0;
		TerrainData_SetTreeInstances_m536FA2F30FE5085FCFB05F7BE8D26943214EAA02(__this, L_0, (bool)0, NULL);
		return;
	}
}
// UnityEngine.TreeInstance[] UnityEngine.TerrainData::Internal_GetTreeInstances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* TerrainData_Internal_GetTreeInstances_m0DCDC4D93E2CEC457C5BD8D0FE898B5A632E8347 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* (*TerrainData_Internal_GetTreeInstances_m0DCDC4D93E2CEC457C5BD8D0FE898B5A632E8347_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_Internal_GetTreeInstances_m0DCDC4D93E2CEC457C5BD8D0FE898B5A632E8347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_GetTreeInstances_m0DCDC4D93E2CEC457C5BD8D0FE898B5A632E8347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_GetTreeInstances()");
	TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::SetTreeInstances(UnityEngine.TreeInstance[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetTreeInstances_m536FA2F30FE5085FCFB05F7BE8D26943214EAA02 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* ___instances0, bool ___snapToHeightmap1, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_SetTreeInstances_m536FA2F30FE5085FCFB05F7BE8D26943214EAA02_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429*, bool);
	static TerrainData_SetTreeInstances_m536FA2F30FE5085FCFB05F7BE8D26943214EAA02_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_SetTreeInstances_m536FA2F30FE5085FCFB05F7BE8D26943214EAA02_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::SetTreeInstances(UnityEngine.TreeInstance[],System.Boolean)");
	_il2cpp_icall_func(__this, ___instances0, ___snapToHeightmap1);
}
// UnityEngine.TreePrototype[] UnityEngine.TerrainData::get_treePrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* (*TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_treePrototypes()");
	TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::set_treePrototypes(UnityEngine.TreePrototype[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_treePrototypes_m5F309E7FFEB234DA8450C4CBD43EB7045C33BCAA (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_set_treePrototypes_m5F309E7FFEB234DA8450C4CBD43EB7045C33BCAA_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A*);
	static TerrainData_set_treePrototypes_m5F309E7FFEB234DA8450C4CBD43EB7045C33BCAA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_set_treePrototypes_m5F309E7FFEB234DA8450C4CBD43EB7045C33BCAA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::set_treePrototypes(UnityEngine.TreePrototype[])");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.TerrainData::get_alphamapLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapLayers_mF8A0A4F157F7C56354C5A6E3FABF9F230F410F69 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TerrainData_get_alphamapLayers_mF8A0A4F157F7C56354C5A6E3FABF9F230F410F69_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_alphamapLayers_mF8A0A4F157F7C56354C5A6E3FABF9F230F410F69_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_alphamapLayers_mF8A0A4F157F7C56354C5A6E3FABF9F230F410F69_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_alphamapLayers()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single[,,] UnityEngine.TerrainData::GetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* TerrainData_GetAlphamaps_m2DEF5D2068D54BDAE78661483C1FC4936B06EA01 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* V_1 = NULL;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___y1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___width2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = ___height3;
		G_B5_0 = ((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B5_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B5_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84C1B2E6507AF77B7FC524F3D2F88289EB512D41)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_GetAlphamaps_m2DEF5D2068D54BDAE78661483C1FC4936B06EA01_RuntimeMethod_var)));
	}

IL_0024:
	{
		int32_t L_6 = ___x0;
		int32_t L_7 = ___y1;
		int32_t L_8 = ___width2;
		int32_t L_9 = ___height3;
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_10;
		L_10 = TerrainData_Internal_GetAlphamaps_m6891C19FF72B4394D6BAC3B098A3FCAC1FC6BF36(__this, L_6, L_7, L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_0032;
	}

IL_0032:
	{
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_11 = V_1;
		return L_11;
	}
}
// System.Single[,,] UnityEngine.TerrainData::Internal_GetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* TerrainData_Internal_GetAlphamaps_m6891C19FF72B4394D6BAC3B098A3FCAC1FC6BF36 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	typedef SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* (*TerrainData_Internal_GetAlphamaps_m6891C19FF72B4394D6BAC3B098A3FCAC1FC6BF36_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t, int32_t, int32_t, int32_t);
	static TerrainData_Internal_GetAlphamaps_m6891C19FF72B4394D6BAC3B098A3FCAC1FC6BF36_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_GetAlphamaps_m6891C19FF72B4394D6BAC3B098A3FCAC1FC6BF36_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_GetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32)");
	SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* icallRetVal = _il2cpp_icall_func(__this, ___x0, ___y1, ___width2, ___height3);
	return icallRetVal;
}
// System.Int32 UnityEngine.TerrainData::get_alphamapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapResolution_mC5D1C8FF4A5AFFCCFCF1382FED0D1AD46563D6F8 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TerrainData_get_Internal_alphamapResolution_mDA8EF6055A2022B3E1E4E6ECBF8DF4387DE8A930(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TerrainData::set_alphamapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_alphamapResolution_mECF82D6CF9A3C640B18AB6DE14666BF380E03389 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77A4D95C5A66881369906720C24690D7097D85DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC22087015E5AF858547CCEF1382837765BF820EA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___value0;
		V_0 = L_0;
		int32_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_2 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumAlphamapResolution_15;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_4 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumAlphamapResolution_16;
		G_B3_0 = ((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralC22087015E5AF858547CCEF1382837765BF820EA);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC22087015E5AF858547CCEF1382837765BF820EA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_9 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumAlphamapResolution_15;
		V_2 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		int32_t L_13 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumAlphamapResolution_16;
		V_2 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral77A4D95C5A66881369906720C24690D7097D85DC);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral77A4D95C5A66881369906720C24690D7097D85DC);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_16, NULL);
		int32_t L_17 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumAlphamapResolution_16;
		int32_t L_18 = ___value0;
		int32_t L_19 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumAlphamapResolution_15;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_18, L_19, NULL);
		int32_t L_21;
		L_21 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_17, L_20, NULL);
		V_0 = L_21;
	}

IL_007b:
	{
		int32_t L_22 = V_0;
		TerrainData_set_Internal_alphamapResolution_mA33B7F95DF603037846D76F6061355DDD1C8E556(__this, L_22, NULL);
		return;
	}
}
// System.Single UnityEngine.TerrainData::GetAlphamapResolutionInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_GetAlphamapResolutionInternal_m5C312434763B8F0BD8DE760ACF439DFEFAC2F3E5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef float (*TerrainData_GetAlphamapResolutionInternal_m5C312434763B8F0BD8DE760ACF439DFEFAC2F3E5_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_GetAlphamapResolutionInternal_m5C312434763B8F0BD8DE760ACF439DFEFAC2F3E5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetAlphamapResolutionInternal_m5C312434763B8F0BD8DE760ACF439DFEFAC2F3E5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetAlphamapResolutionInternal()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.TerrainData::get_Internal_alphamapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_Internal_alphamapResolution_mDA8EF6055A2022B3E1E4E6ECBF8DF4387DE8A930 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TerrainData_get_Internal_alphamapResolution_mDA8EF6055A2022B3E1E4E6ECBF8DF4387DE8A930_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_Internal_alphamapResolution_mDA8EF6055A2022B3E1E4E6ECBF8DF4387DE8A930_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_Internal_alphamapResolution_mDA8EF6055A2022B3E1E4E6ECBF8DF4387DE8A930_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_Internal_alphamapResolution()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::set_Internal_alphamapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_Internal_alphamapResolution_mA33B7F95DF603037846D76F6061355DDD1C8E556 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_set_Internal_alphamapResolution_mA33B7F95DF603037846D76F6061355DDD1C8E556_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t);
	static TerrainData_set_Internal_alphamapResolution_mA33B7F95DF603037846D76F6061355DDD1C8E556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_set_Internal_alphamapResolution_mA33B7F95DF603037846D76F6061355DDD1C8E556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::set_Internal_alphamapResolution(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.TerrainData::get_alphamapWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapWidth_m07E5B04B08E87AC9F66D766B363000F94C8612D4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TerrainData_get_alphamapResolution_mC5D1C8FF4A5AFFCCFCF1382FED0D1AD46563D6F8(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.TerrainData::get_alphamapHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapHeight_m4A8273D6E0E3526A31E2669FBAB240353C086AED (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TerrainData_get_alphamapResolution_mC5D1C8FF4A5AFFCCFCF1382FED0D1AD46563D6F8(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.TerrainData::get_baseMapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_baseMapResolution_mCD5E59C7A2778009CD4A4CA571B6B85CC0993C0C (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TerrainData_get_Internal_baseMapResolution_m160A9621FE9E5BE642C8CE8C8DA64A07DDF5830F(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TerrainData::set_baseMapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_baseMapResolution_mB1F3A79E687A45F695A716B8B7417B35E77C19A7 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B1390573814AE789AD19918B24F0BAB91AACF10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77A4D95C5A66881369906720C24690D7097D85DC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___value0;
		V_0 = L_0;
		int32_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_2 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumBaseMapResolution_17;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_4 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumBaseMapResolution_18;
		G_B3_0 = ((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral2B1390573814AE789AD19918B24F0BAB91AACF10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2B1390573814AE789AD19918B24F0BAB91AACF10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		int32_t L_9 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumBaseMapResolution_17;
		V_2 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		int32_t L_13 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumBaseMapResolution_18;
		V_2 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral77A4D95C5A66881369906720C24690D7097D85DC);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral77A4D95C5A66881369906720C24690D7097D85DC);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_16, NULL);
		int32_t L_17 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumBaseMapResolution_18;
		int32_t L_18 = ___value0;
		int32_t L_19 = ((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumBaseMapResolution_17;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_18, L_19, NULL);
		int32_t L_21;
		L_21 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_17, L_20, NULL);
		V_0 = L_21;
	}

IL_007b:
	{
		int32_t L_22 = V_0;
		TerrainData_set_Internal_baseMapResolution_mB7C108582B3A0100033DAA477D55A687405B5DD8(__this, L_22, NULL);
		return;
	}
}
// System.Int32 UnityEngine.TerrainData::get_Internal_baseMapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_Internal_baseMapResolution_m160A9621FE9E5BE642C8CE8C8DA64A07DDF5830F (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TerrainData_get_Internal_baseMapResolution_m160A9621FE9E5BE642C8CE8C8DA64A07DDF5830F_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_Internal_baseMapResolution_m160A9621FE9E5BE642C8CE8C8DA64A07DDF5830F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_Internal_baseMapResolution_m160A9621FE9E5BE642C8CE8C8DA64A07DDF5830F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_Internal_baseMapResolution()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::set_Internal_baseMapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_Internal_baseMapResolution_mB7C108582B3A0100033DAA477D55A687405B5DD8 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_set_Internal_baseMapResolution_mB7C108582B3A0100033DAA477D55A687405B5DD8_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t);
	static TerrainData_set_Internal_baseMapResolution_mB7C108582B3A0100033DAA477D55A687405B5DD8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_set_Internal_baseMapResolution_mB7C108582B3A0100033DAA477D55A687405B5DD8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::set_Internal_baseMapResolution(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.TerrainData::SetAlphamaps(System.Int32,System.Int32,System.Single[,,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetAlphamaps_m2FA8E29ADF4D1B2B8286ED0FE61E0CEB1663E423 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___map2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_0 = ___map2;
		NullCheck((RuntimeArray*)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 2, NULL);
		int32_t L_2;
		L_2 = TerrainData_get_alphamapLayers_mF8A0A4F157F7C56354C5A6E3FABF9F230F410F69(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6;
		L_6 = TerrainData_get_alphamapLayers_mF8A0A4F157F7C56354C5A6E3FABF9F230F410F69(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		String_t* L_9;
		L_9 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20D37E602E5899AD025CE8E2B20C26B3E134C5F3)), L_5, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_SetAlphamaps_m2FA8E29ADF4D1B2B8286ED0FE61E0CEB1663E423_RuntimeMethod_var)));
	}

IL_003c:
	{
		int32_t L_11 = ___x0;
		int32_t L_12 = ___y1;
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_13 = ___map2;
		NullCheck((RuntimeArray*)L_13);
		int32_t L_14;
		L_14 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_13, 1, NULL);
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_15 = ___map2;
		NullCheck((RuntimeArray*)L_15);
		int32_t L_16;
		L_16 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_15, 0, NULL);
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_17 = ___map2;
		TerrainData_Internal_SetAlphamaps_m87D35A2FED5E274AEBDF3ADB00A7FA477861E8FD(__this, L_11, L_12, L_14, L_16, L_17, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_SetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[,,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SetAlphamaps_m87D35A2FED5E274AEBDF3ADB00A7FA477861E8FD (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___map4, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_SetAlphamaps_m87D35A2FED5E274AEBDF3ADB00A7FA477861E8FD_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t, int32_t, int32_t, int32_t, SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488*);
	static TerrainData_Internal_SetAlphamaps_m87D35A2FED5E274AEBDF3ADB00A7FA477861E8FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_SetAlphamaps_m87D35A2FED5E274AEBDF3ADB00A7FA477861E8FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_SetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[,,])");
	_il2cpp_icall_func(__this, ___x0, ___y1, ___width2, ___height3, ___map4);
}
// System.Void UnityEngine.TerrainData::SetBaseMapDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetBaseMapDirty_m71323D916BC5353D2A357E91C5ECE55E65700618 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_SetBaseMapDirty_m71323D916BC5353D2A357E91C5ECE55E65700618_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_SetBaseMapDirty_m71323D916BC5353D2A357E91C5ECE55E65700618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_SetBaseMapDirty_m71323D916BC5353D2A357E91C5ECE55E65700618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::SetBaseMapDirty()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.TerrainData::GetAlphamapTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t);
	static TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetAlphamapTexture(System.Int32)");
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// System.Int32 UnityEngine.TerrainData::get_alphamapTextureCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapTextureCount_mF378908EA58CA135A4D58D586179418F1A6F14CD (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TerrainData_get_alphamapTextureCount_mF378908EA58CA135A4D58D586179418F1A6F14CD_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_alphamapTextureCount_mF378908EA58CA135A4D58D586179418F1A6F14CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_alphamapTextureCount_mF378908EA58CA135A4D58D586179418F1A6F14CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_alphamapTextureCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Texture2D[] UnityEngine.TerrainData::get_alphamapTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* TerrainData_get_alphamapTextures_m82B7287C772D95D4E3D6A5793A8B9A15745D8C45 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* V_3 = NULL;
	{
		int32_t L_0;
		L_0 = TerrainData_get_alphamapTextureCount_mF378908EA58CA135A4D58D586179418F1A6F14CD(__this, NULL);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_1 = (Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191*)(Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191*)SZArrayNew(Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001f;
	}

IL_0011:
	{
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C(__this, L_4, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		int32_t L_7 = V_1;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_8 = V_0;
		NullCheck(L_8);
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0011;
		}
	}
	{
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_10 = V_0;
		V_3 = L_10;
		goto IL_002d;
	}

IL_002d:
	{
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_11 = V_3;
		return L_11;
	}
}
// UnityEngine.TerrainLayer[] UnityEngine.TerrainData::get_terrainLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* TerrainData_get_terrainLayers_m3B436DF37DDD9F18A46DD6BF112925AD5B8857C8 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* (*TerrainData_get_terrainLayers_m3B436DF37DDD9F18A46DD6BF112925AD5B8857C8_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_terrainLayers_m3B436DF37DDD9F18A46DD6BF112925AD5B8857C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_terrainLayers_m3B436DF37DDD9F18A46DD6BF112925AD5B8857C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_terrainLayers()");
	TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::set_terrainLayers(UnityEngine.TerrainLayer[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_terrainLayers_m8FC80DAB5CD38A11CDB082F94DBD3186CD434671 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_set_terrainLayers_m8FC80DAB5CD38A11CDB082F94DBD3186CD434671_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0*);
	static TerrainData_set_terrainLayers_m8FC80DAB5CD38A11CDB082F94DBD3186CD434671_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_set_terrainLayers_m8FC80DAB5CD38A11CDB082F94DBD3186CD434671_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::set_terrainLayers(UnityEngine.TerrainLayer[])");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.TerrainData::Internal_CopyActiveRenderTextureToHeightmap(UnityEngine.RectInt,System.Int32,System.Int32,UnityEngine.TerrainHeightmapSyncControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_CopyActiveRenderTextureToHeightmap_m431A62A0EC8B28CE9CA58FB081A58123060EB378 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___rect0, int32_t ___destX1, int32_t ___destY2, int32_t ___syncControl3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___destX1;
		int32_t L_1 = ___destY2;
		int32_t L_2 = ___syncControl3;
		TerrainData_Internal_CopyActiveRenderTextureToHeightmap_Injected_mBCC5601037CF0D8C81E936AB9C6270C2E128EF7C(__this, (&___rect0), L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_DirtyHeightmapRegion(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.TerrainHeightmapSyncControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_DirtyHeightmapRegion_mF080B77155696B5E1E0715540DE8031A3F421FC4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___syncControl4, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_DirtyHeightmapRegion_mF080B77155696B5E1E0715540DE8031A3F421FC4_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t, int32_t, int32_t, int32_t, int32_t);
	static TerrainData_Internal_DirtyHeightmapRegion_mF080B77155696B5E1E0715540DE8031A3F421FC4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_DirtyHeightmapRegion_mF080B77155696B5E1E0715540DE8031A3F421FC4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_DirtyHeightmapRegion(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.TerrainHeightmapSyncControl)");
	_il2cpp_icall_func(__this, ___x0, ___y1, ___width2, ___height3, ___syncControl4);
}
// System.Void UnityEngine.TerrainData::SyncHeightmap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SyncHeightmap_mD8D77E9DD9063B7201D062C810CFEAF2BE743267 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_SyncHeightmap_mD8D77E9DD9063B7201D062C810CFEAF2BE743267_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_SyncHeightmap_mD8D77E9DD9063B7201D062C810CFEAF2BE743267_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_SyncHeightmap_mD8D77E9DD9063B7201D062C810CFEAF2BE743267_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::SyncHeightmap()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TerrainData::Internal_CopyActiveRenderTextureToHoles(UnityEngine.RectInt,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_CopyActiveRenderTextureToHoles_m3181CE7CD4B40E3EB42B571E3489A2226C6E0A1A (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___rect0, int32_t ___destX1, int32_t ___destY2, bool ___allowDelayedCPUSync3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___destX1;
		int32_t L_1 = ___destY2;
		bool L_2 = ___allowDelayedCPUSync3;
		TerrainData_Internal_CopyActiveRenderTextureToHoles_Injected_m79962847A7F930086EE6436D8D0EDFABF3C3F967(__this, (&___rect0), L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_DirtyHolesRegion(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_DirtyHolesRegion_mBC52464648FFA679E45C579BCC3B9FFF68DD3EBA (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, bool ___allowDelayedCPUSync4, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_DirtyHolesRegion_mBC52464648FFA679E45C579BCC3B9FFF68DD3EBA_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t, int32_t, int32_t, int32_t, bool);
	static TerrainData_Internal_DirtyHolesRegion_mBC52464648FFA679E45C579BCC3B9FFF68DD3EBA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_DirtyHolesRegion_mBC52464648FFA679E45C579BCC3B9FFF68DD3EBA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_DirtyHolesRegion(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___x0, ___y1, ___width2, ___height3, ___allowDelayedCPUSync4);
}
// System.Void UnityEngine.TerrainData::Internal_SyncHoles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SyncHoles_m536B2E7102335849E42E867DB27166BB55FED0F6 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_SyncHoles_m536B2E7102335849E42E867DB27166BB55FED0F6_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_Internal_SyncHoles_m536B2E7102335849E42E867DB27166BB55FED0F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_SyncHoles_m536B2E7102335849E42E867DB27166BB55FED0F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_SyncHoles()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TerrainData::Internal_MarkAlphamapDirtyRegion(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_MarkAlphamapDirtyRegion_mB212FE00063E5391813EA3C57C71AF5669F9C064 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___alphamapIndex0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_MarkAlphamapDirtyRegion_mB212FE00063E5391813EA3C57C71AF5669F9C064_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t, int32_t, int32_t, int32_t, int32_t);
	static TerrainData_Internal_MarkAlphamapDirtyRegion_mB212FE00063E5391813EA3C57C71AF5669F9C064_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_MarkAlphamapDirtyRegion_mB212FE00063E5391813EA3C57C71AF5669F9C064_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_MarkAlphamapDirtyRegion(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___alphamapIndex0, ___x1, ___y2, ___width3, ___height4);
}
// System.Void UnityEngine.TerrainData::Internal_ClearAlphamapDirtyRegion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_ClearAlphamapDirtyRegion_m570C14031954B78348B93B24361EB0B570622588 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___alphamapIndex0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_ClearAlphamapDirtyRegion_m570C14031954B78348B93B24361EB0B570622588_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, int32_t);
	static TerrainData_Internal_ClearAlphamapDirtyRegion_m570C14031954B78348B93B24361EB0B570622588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_ClearAlphamapDirtyRegion_m570C14031954B78348B93B24361EB0B570622588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_ClearAlphamapDirtyRegion(System.Int32)");
	_il2cpp_icall_func(__this, ___alphamapIndex0);
}
// System.Void UnityEngine.TerrainData::Internal_SyncAlphamaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_SyncAlphamaps_mFDFD1F09BB38C77A2F408331299CCF586FDC0A33 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_SyncAlphamaps_mFDFD1F09BB38C77A2F408331299CCF586FDC0A33_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_Internal_SyncAlphamaps_mFDFD1F09BB38C77A2F408331299CCF586FDC0A33_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_SyncAlphamaps_mFDFD1F09BB38C77A2F408331299CCF586FDC0A33_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_SyncAlphamaps()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Terrain[] UnityEngine.TerrainData::get_users()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* (*TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_users()");
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.TerrainData::get_SupportsCopyTextureBetweenRTAndTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainData_get_SupportsCopyTextureBetweenRTAndTexture_mE93A6D23586EABCFC4B1267F66E98A8C6C7E35BE (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2(NULL);
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&((int32_t)24)))) == ((int32_t)((int32_t)24)))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TerrainData::CopyActiveRenderTextureToHeightmap(UnityEngine.RectInt,UnityEngine.Vector2Int,UnityEngine.TerrainHeightmapSyncControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_CopyActiveRenderTextureToHeightmap_m36D01BB8242D02F3E319271CA2BC2A6B5C428EE5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourceRect0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dest1, int32_t ___syncControl2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B17_0 = 0;
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0;
		L_0 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		V_0 = L_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral156B16643114172B0351C390653795872DDA326B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToHeightmap_m36D01BB8242D02F3E319271CA2BC2A6B5C428EE5_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_5;
		L_5 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___sourceRect0), NULL);
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6;
		L_6 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___sourceRect0), NULL);
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_7;
		L_7 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___sourceRect0), NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		if ((((int32_t)L_7) > ((int32_t)L_9)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_10;
		L_10 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___sourceRect0), NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		G_B7_0 = ((((int32_t)L_10) > ((int32_t)L_12))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B7_0 = 1;
	}

IL_0052:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_14 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18EBE38BC9FEAD45E3033DDE72F02EA42CE29BE2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToHeightmap_m36D01BB8242D02F3E319271CA2BC2A6B5C428EE5_RuntimeMethod_var)));
	}

IL_0061:
	{
		int32_t L_15;
		L_15 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest1), NULL);
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_16;
		L_16 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest1), NULL);
		int32_t L_17;
		L_17 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___sourceRect0), NULL);
		int32_t L_18;
		L_18 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(__this, NULL);
		G_B12_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_16, L_17))) > ((int32_t)L_18))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B12_0 = 1;
	}

IL_0085:
	{
		V_3 = (bool)G_B12_0;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0094;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_20 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF8D1D465979FE764E697612A84BF50E45D55E4A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToHeightmap_m36D01BB8242D02F3E319271CA2BC2A6B5C428EE5_RuntimeMethod_var)));
	}

IL_0094:
	{
		int32_t L_21;
		L_21 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest1), NULL);
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_22;
		L_22 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest1), NULL);
		int32_t L_23;
		L_23 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___sourceRect0), NULL);
		int32_t L_24;
		L_24 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(__this, NULL);
		G_B17_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23))) > ((int32_t)L_24))? 1 : 0);
		goto IL_00b8;
	}

IL_00b7:
	{
		G_B17_0 = 1;
	}

IL_00b8:
	{
		V_4 = (bool)G_B17_0;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00c9;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_26 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFCFCC33CBDC7D25E1E89D072C18B1C7796D5177)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToHeightmap_m36D01BB8242D02F3E319271CA2BC2A6B5C428EE5_RuntimeMethod_var)));
	}

IL_00c9:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_27 = ___sourceRect0;
		int32_t L_28;
		L_28 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest1), NULL);
		int32_t L_29;
		L_29 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest1), NULL);
		int32_t L_30 = ___syncControl2;
		TerrainData_Internal_CopyActiveRenderTextureToHeightmap_m431A62A0EC8B28CE9CA58FB081A58123060EB378(__this, L_27, L_28, L_29, L_30, NULL);
		int32_t L_31;
		L_31 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest1), NULL);
		int32_t L_32;
		L_32 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest1), NULL);
		int32_t L_33;
		L_33 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___sourceRect0), NULL);
		int32_t L_34;
		L_34 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___sourceRect0), NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_35;
		memset((&L_35), 0, sizeof(L_35));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_35), L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		int32_t L_36 = ___syncControl2;
		TerrainCallbacks_InvokeHeightmapChangedCallback_m731ED939CBD563CCCE503062602DF5908205AD04(__this, L_35, (bool)((((int32_t)L_36) == ((int32_t)2))? 1 : 0), NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::DirtyHeightmapRegion(UnityEngine.RectInt,UnityEngine.TerrainHeightmapSyncControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_DirtyHeightmapRegion_m92C3A0182EE87E484316B0514F25C3D106349AB7 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___region0, int32_t ___syncControl1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		int32_t L_0;
		L_0 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___region0), NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___region0), NULL);
		int32_t L_3 = V_0;
		G_B3_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A1C31610227D7DF1B1F849B322637E473DDE778)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_DirtyHeightmapRegion_m92C3A0182EE87E484316B0514F25C3D106349AB7_RuntimeMethod_var)));
	}

IL_0031:
	{
		int32_t L_6;
		L_6 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___region0), NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7;
		L_7 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___region0), NULL);
		int32_t L_8 = V_0;
		G_B8_0 = ((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B8_0 = 1;
	}

IL_0048:
	{
		V_2 = (bool)G_B8_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral070224D5E619821086533BEADF16192DFFD15A7E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_DirtyHeightmapRegion_m92C3A0182EE87E484316B0514F25C3D106349AB7_RuntimeMethod_var)));
	}

IL_0057:
	{
		int32_t L_11;
		L_11 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___region0), NULL);
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_12;
		L_12 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___region0), NULL);
		int32_t L_13 = V_0;
		G_B13_0 = ((((int32_t)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0071;
	}

IL_0070:
	{
		G_B13_0 = 1;
	}

IL_0071:
	{
		V_3 = (bool)G_B13_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0080;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76417B3638C5AD1ABB78AE5ECACE0B90F1A7EDB3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_DirtyHeightmapRegion_m92C3A0182EE87E484316B0514F25C3D106349AB7_RuntimeMethod_var)));
	}

IL_0080:
	{
		int32_t L_16;
		L_16 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___region0), NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_17;
		L_17 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___region0), NULL);
		int32_t L_18 = V_0;
		G_B18_0 = ((((int32_t)L_17) > ((int32_t)L_18))? 1 : 0);
		goto IL_0097;
	}

IL_0096:
	{
		G_B18_0 = 1;
	}

IL_0097:
	{
		V_4 = (bool)G_B18_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00a8;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_20 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FDBDAC482E6C7A0FDECBBD11BED16F2D677252B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_DirtyHeightmapRegion_m92C3A0182EE87E484316B0514F25C3D106349AB7_RuntimeMethod_var)));
	}

IL_00a8:
	{
		int32_t L_21;
		L_21 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___region0), NULL);
		int32_t L_22;
		L_22 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___region0), NULL);
		int32_t L_23;
		L_23 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___region0), NULL);
		int32_t L_24;
		L_24 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___region0), NULL);
		int32_t L_25 = ___syncControl1;
		TerrainData_Internal_DirtyHeightmapRegion_mF080B77155696B5E1E0715540DE8031A3F421FC4(__this, L_21, L_22, L_23, L_24, L_25, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_26 = ___region0;
		int32_t L_27 = ___syncControl1;
		TerrainCallbacks_InvokeHeightmapChangedCallback_m731ED939CBD563CCCE503062602DF5908205AD04(__this, L_26, (bool)((((int32_t)L_27) == ((int32_t)2))? 1 : 0), NULL);
		return;
	}
}
// System.String UnityEngine.TerrainData::get_AlphamapTextureName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TerrainData_get_AlphamapTextureName_mC3E6B77E19252385A78C74D853F7CA4375A51882 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE54A69A932C178902C12FFD21DF5107332C0191);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralEE54A69A932C178902C12FFD21DF5107332C0191;
	}
}
// System.String UnityEngine.TerrainData::get_HolesTextureName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TerrainData_get_HolesTextureName_m050635081E2E26FDE05BFD35253710DE84E7A12F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A06B02EFE196FE18D42203175AC0AD263D2C7B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3A06B02EFE196FE18D42203175AC0AD263D2C7B6;
	}
}
// System.Void UnityEngine.TerrainData::CopyActiveRenderTextureToTexture(System.String,System.Int32,UnityEngine.RectInt,UnityEngine.Vector2Int,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, String_t* ___textureName0, int32_t ___textureIndex1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourceRect2, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dest3, bool ___allowDelayedCPUSync4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_17 = NULL;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	bool V_20 = false;
	int32_t G_B14_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B50_0 = 0;
	{
		String_t* L_0 = ___textureName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_4 = L_1;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B156264231A1BD638F577224D6CE5D6D0599F9A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74_RuntimeMethod_var)));
	}

IL_0018:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		V_0 = L_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_6;
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral156B16643114172B0351C390653795872DDA326B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74_RuntimeMethod_var)));
	}

IL_0036:
	{
		V_1 = 0;
		V_2 = 0;
		String_t* L_9 = ___textureName0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = TerrainData_get_HolesTextureName_m050635081E2E26FDE05BFD35253710DE84E7A12F(NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, L_10, NULL);
		V_6 = L_11;
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_13 = ___textureIndex1;
		V_7 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_0061;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4034041A2BFB962E3F3F5ED25D413C96E5176EE8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74_RuntimeMethod_var)));
	}

IL_0061:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17;
		L_17 = TerrainData_get_holesTexture_m967249F842D3BFC631ED03C847C41EE4D0A56912(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_16, L_17, NULL);
		V_8 = L_18;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DDD611BDB719CD9945011B10B0177B699ED3D75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74_RuntimeMethod_var)));
	}

IL_0083:
	{
		int32_t L_21;
		L_21 = TerrainData_get_holesResolution_m9DE109FB3A0874F7F4706543D0903AFA12D1BC53(__this, NULL);
		int32_t L_22 = L_21;
		V_2 = L_22;
		V_1 = L_22;
		goto IL_00e8;
	}

IL_008f:
	{
		String_t* L_23 = ___textureName0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = TerrainData_get_AlphamapTextureName_mC3E6B77E19252385A78C74D853F7CA4375A51882(NULL);
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, L_24, NULL);
		V_9 = L_25;
		bool L_26 = V_9;
		if (!L_26)
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_27 = ___textureIndex1;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_28 = ___textureIndex1;
		int32_t L_29;
		L_29 = TerrainData_get_alphamapTextureCount_mF378908EA58CA135A4D58D586179418F1A6F14CD(__this, NULL);
		G_B14_0 = ((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B14_0 = 1;
	}

IL_00b4:
	{
		V_10 = (bool)G_B14_0;
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00c5;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_31 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_31);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4034041A2BFB962E3F3F5ED25D413C96E5176EE8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74_RuntimeMethod_var)));
	}

IL_00c5:
	{
		int32_t L_32;
		L_32 = TerrainData_get_alphamapResolution_mC5D1C8FF4A5AFFCCFCF1382FED0D1AD46563D6F8(__this, NULL);
		int32_t L_33 = L_32;
		V_2 = L_33;
		V_1 = L_33;
		goto IL_00e8;
	}

IL_00d1:
	{
		String_t* L_34 = ___textureName0;
		String_t* L_35;
		L_35 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC540489CC1B605AE39E2C2500B1F58F00482E5D8)), L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_36 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_36, L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74_RuntimeMethod_var)));
	}

IL_00e8:
	{
		int32_t L_37;
		L_37 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___sourceRect2), NULL);
		if ((((int32_t)L_37) < ((int32_t)0)))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_38;
		L_38 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___sourceRect2), NULL);
		if ((((int32_t)L_38) < ((int32_t)0)))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_39;
		L_39 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___sourceRect2), NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_40);
		if ((((int32_t)L_39) > ((int32_t)L_41)))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_42;
		L_42 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___sourceRect2), NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_43);
		G_B23_0 = ((((int32_t)L_42) > ((int32_t)L_44))? 1 : 0);
		goto IL_011d;
	}

IL_011c:
	{
		G_B23_0 = 1;
	}

IL_011d:
	{
		V_11 = (bool)G_B23_0;
		bool L_45 = V_11;
		if (!L_45)
		{
			goto IL_012e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_46 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_46);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18EBE38BC9FEAD45E3033DDE72F02EA42CE29BE2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74_RuntimeMethod_var)));
	}

IL_012e:
	{
		int32_t L_47;
		L_47 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest3), NULL);
		if ((((int32_t)L_47) < ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_48;
		L_48 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest3), NULL);
		int32_t L_49;
		L_49 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___sourceRect2), NULL);
		int32_t L_50 = V_1;
		G_B28_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_48, L_49))) > ((int32_t)L_50))? 1 : 0);
		goto IL_014d;
	}

IL_014c:
	{
		G_B28_0 = 1;
	}

IL_014d:
	{
		V_12 = (bool)G_B28_0;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_015e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_52 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_52);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_52, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF8D1D465979FE764E697612A84BF50E45D55E4A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74_RuntimeMethod_var)));
	}

IL_015e:
	{
		int32_t L_53;
		L_53 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest3), NULL);
		if ((((int32_t)L_53) < ((int32_t)0)))
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_54;
		L_54 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest3), NULL);
		int32_t L_55;
		L_55 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___sourceRect2), NULL);
		int32_t L_56 = V_2;
		G_B33_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_54, L_55))) > ((int32_t)L_56))? 1 : 0);
		goto IL_017d;
	}

IL_017c:
	{
		G_B33_0 = 1;
	}

IL_017d:
	{
		V_13 = (bool)G_B33_0;
		bool L_57 = V_13;
		if (!L_57)
		{
			goto IL_018e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_58 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_58);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_58, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFCFCC33CBDC7D25E1E89D072C18B1C7796D5177)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74_RuntimeMethod_var)));
	}

IL_018e:
	{
		String_t* L_59 = ___textureName0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		String_t* L_60;
		L_60 = TerrainData_get_HolesTextureName_m050635081E2E26FDE05BFD35253710DE84E7A12F(NULL);
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, L_60, NULL);
		V_14 = L_61;
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_01bd;
		}
	}
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_63 = ___sourceRect2;
		int32_t L_64;
		L_64 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest3), NULL);
		int32_t L_65;
		L_65 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest3), NULL);
		bool L_66 = ___allowDelayedCPUSync4;
		TerrainData_Internal_CopyActiveRenderTextureToHoles_m3181CE7CD4B40E3EB42B571E3489A2226C6E0A1A(__this, L_63, L_64, L_65, L_66, NULL);
		goto IL_03e6;
	}

IL_01bd:
	{
		int32_t L_67 = ___textureIndex1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_68;
		L_68 = TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C(__this, L_67, NULL);
		V_3 = L_68;
		bool L_69 = ___allowDelayedCPUSync4;
		if (!L_69)
		{
			goto IL_01d0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = TerrainData_get_SupportsCopyTextureBetweenRTAndTexture_mE93A6D23586EABCFC4B1267F66E98A8C6C7E35BE(NULL);
		G_B40_0 = ((int32_t)(L_70));
		goto IL_01d1;
	}

IL_01d0:
	{
		G_B40_0 = 0;
	}

IL_01d1:
	{
		___allowDelayedCPUSync4 = (bool)G_B40_0;
		bool L_71 = ___allowDelayedCPUSync4;
		V_15 = L_71;
		bool L_72 = V_15;
		if (!L_72)
		{
			goto IL_030f;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023(L_73, NULL);
		V_16 = (bool)((((int32_t)L_74) > ((int32_t)1))? 1 : 0);
		bool L_75 = V_16;
		if (!L_75)
		{
			goto IL_02ad;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_76 = V_3;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_76);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_78 = V_3;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_78);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = RenderTexture_get_graphicsFormat_m615EA91709BD404765C0C85425CE5F3575F90302(L_80, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_82 = V_0;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = RenderTexture_get_depthStencilFormat_m6ACD9DAF17D844CFBA06249D8DB130018C370CB2(L_82, NULL);
		RenderTextureDescriptor__ctor_m8B0D32DC550540B5546891C2F6300F384D6FE692((&V_18), L_77, L_79, L_81, L_83, NULL);
		RenderTextureDescriptor_set_sRGB_mAB7A494EE8C496C22B3BBBCB90488312D46F3429((&V_18), (bool)0, NULL);
		RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539((&V_18), (bool)1, NULL);
		RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414((&V_18), (bool)0, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_84 = V_18;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_85;
		L_85 = RenderTexture_GetTemporary_mA8C827B80D3C07D0B8CDF7F5270FB5D3E53DD235(L_84, NULL);
		V_17 = L_85;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = V_17;
		NullCheck(L_86);
		bool L_87;
		L_87 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_86, NULL);
		V_19 = (bool)((((int32_t)L_87) == ((int32_t)0))? 1 : 0);
		bool L_88 = V_19;
		if (!L_88)
		{
			goto IL_024d;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_89 = V_17;
		NullCheck(L_89);
		bool L_90;
		L_90 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_89, NULL);
	}

IL_024d:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_91 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_92 = V_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718(L_91, 0, 0, L_92, 0, 0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_93 = V_0;
		int32_t L_94;
		L_94 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___sourceRect2), NULL);
		int32_t L_95;
		L_95 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___sourceRect2), NULL);
		int32_t L_96;
		L_96 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___sourceRect2), NULL);
		int32_t L_97;
		L_97 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___sourceRect2), NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_98 = V_17;
		int32_t L_99;
		L_99 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest3), NULL);
		int32_t L_100;
		L_100 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest3), NULL);
		Graphics_CopyTexture_mA6F9298621B0493A08483EF57028B66C93FFCBA8(L_93, 0, 0, L_94, L_95, L_96, L_97, L_98, 0, 0, L_99, L_100, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_101 = V_17;
		NullCheck(L_101);
		RenderTexture_GenerateMips_m107161ADCD61031F2DF07209C0CA096E9908D4F5(L_101, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_102 = V_17;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_103 = V_3;
		Graphics_CopyTexture_m613750C66DF707DB4F24570A3402EE94257C0C58(L_102, L_103, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_104 = V_17;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_104, NULL);
		goto IL_02e5;
	}

IL_02ad:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_105 = V_0;
		int32_t L_106;
		L_106 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___sourceRect2), NULL);
		int32_t L_107;
		L_107 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___sourceRect2), NULL);
		int32_t L_108;
		L_108 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___sourceRect2), NULL);
		int32_t L_109;
		L_109 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___sourceRect2), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_110 = V_3;
		int32_t L_111;
		L_111 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest3), NULL);
		int32_t L_112;
		L_112 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest3), NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_mA6F9298621B0493A08483EF57028B66C93FFCBA8(L_105, 0, 0, L_106, L_107, L_108, L_109, L_110, 0, 0, L_111, L_112, NULL);
	}

IL_02e5:
	{
		int32_t L_113 = ___textureIndex1;
		int32_t L_114;
		L_114 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest3), NULL);
		int32_t L_115;
		L_115 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest3), NULL);
		int32_t L_116;
		L_116 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___sourceRect2), NULL);
		int32_t L_117;
		L_117 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___sourceRect2), NULL);
		TerrainData_Internal_MarkAlphamapDirtyRegion_mB212FE00063E5391813EA3C57C71AF5669F9C064(__this, L_113, L_114, L_115, L_116, L_117, NULL);
		goto IL_03b8;
	}

IL_030f:
	{
		int32_t L_118;
		L_118 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(NULL);
		if ((((int32_t)L_118) == ((int32_t)((int32_t)16))))
		{
			goto IL_0323;
		}
	}
	{
		bool L_119;
		L_119 = SystemInfo_get_graphicsUVStartsAtTop_m152BEEFFF20719C9EAB612AD238114BD0B3BFE4B(NULL);
		G_B50_0 = ((((int32_t)L_119) == ((int32_t)0))? 1 : 0);
		goto IL_0324;
	}

IL_0323:
	{
		G_B50_0 = 1;
	}

IL_0324:
	{
		V_20 = (bool)G_B50_0;
		bool L_120 = V_20;
		if (!L_120)
		{
			goto IL_0366;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_121 = V_3;
		int32_t L_122;
		L_122 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___sourceRect2), NULL);
		int32_t L_123;
		L_123 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___sourceRect2), NULL);
		int32_t L_124;
		L_124 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___sourceRect2), NULL);
		int32_t L_125;
		L_125 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___sourceRect2), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_126;
		memset((&L_126), 0, sizeof(L_126));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_126), ((float)L_122), ((float)L_123), ((float)L_124), ((float)L_125), /*hidden argument*/NULL);
		int32_t L_127;
		L_127 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest3), NULL);
		int32_t L_128;
		L_128 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest3), NULL);
		NullCheck(L_121);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_121, L_126, L_127, L_128, NULL);
		goto IL_03a7;
	}

IL_0366:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_129 = V_3;
		int32_t L_130;
		L_130 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___sourceRect2), NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_131 = V_0;
		NullCheck(L_131);
		int32_t L_132;
		L_132 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_131);
		int32_t L_133;
		L_133 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___sourceRect2), NULL);
		int32_t L_134;
		L_134 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___sourceRect2), NULL);
		int32_t L_135;
		L_135 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___sourceRect2), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_136;
		memset((&L_136), 0, sizeof(L_136));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_136), ((float)L_130), ((float)((int32_t)il2cpp_codegen_subtract(L_132, L_133))), ((float)L_134), ((float)L_135), /*hidden argument*/NULL);
		int32_t L_137;
		L_137 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest3), NULL);
		int32_t L_138;
		L_138 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest3), NULL);
		NullCheck(L_129);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_129, L_136, L_137, L_138, NULL);
	}

IL_03a7:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_139 = V_3;
		NullCheck(L_139);
		Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3(L_139, (bool)1, NULL);
		int32_t L_140 = ___textureIndex1;
		TerrainData_Internal_ClearAlphamapDirtyRegion_m570C14031954B78348B93B24361EB0B570622588(__this, L_140, NULL);
	}

IL_03b8:
	{
		String_t* L_141 = ___textureName0;
		int32_t L_142;
		L_142 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___dest3), NULL);
		int32_t L_143;
		L_143 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___dest3), NULL);
		int32_t L_144;
		L_144 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___sourceRect2), NULL);
		int32_t L_145;
		L_145 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___sourceRect2), NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_146;
		memset((&L_146), 0, sizeof(L_146));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_146), L_142, L_143, L_144, L_145, /*hidden argument*/NULL);
		bool L_147 = ___allowDelayedCPUSync4;
		TerrainCallbacks_InvokeTextureChangedCallback_mB508E8B7A884854AA01AE5B88AB33E1AE40F4318(__this, L_141, L_146, (bool)((((int32_t)L_147) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_03e6:
	{
		return;
	}
}
// System.Void UnityEngine.TerrainData::DirtyTextureRegion(System.String,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_DirtyTextureRegion_mB66EE109AB4B647EDDC49E3B7A2C8F1CA0215FA5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, String_t* ___textureName0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___region1, bool ___allowDelayedCPUSync2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B25_0 = 0;
	{
		String_t* L_0 = ___textureName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B156264231A1BD638F577224D6CE5D6D0599F9A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_DirtyTextureRegion_mB66EE109AB4B647EDDC49E3B7A2C8F1CA0215FA5_RuntimeMethod_var)));
	}

IL_0016:
	{
		V_0 = 0;
		String_t* L_4 = ___textureName0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = TerrainData_get_AlphamapTextureName_mC3E6B77E19252385A78C74D853F7CA4375A51882(NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8;
		L_8 = TerrainData_get_alphamapResolution_mC5D1C8FF4A5AFFCCFCF1382FED0D1AD46563D6F8(__this, NULL);
		V_0 = L_8;
		goto IL_0063;
	}

IL_0032:
	{
		String_t* L_9 = ___textureName0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = TerrainData_get_HolesTextureName_m050635081E2E26FDE05BFD35253710DE84E7A12F(NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, L_10, NULL);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_13;
		L_13 = TerrainData_get_holesResolution_m9DE109FB3A0874F7F4706543D0903AFA12D1BC53(__this, NULL);
		V_0 = L_13;
		goto IL_0063;
	}

IL_004c:
	{
		String_t* L_14 = ___textureName0;
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC540489CC1B605AE39E2C2500B1F58F00482E5D8)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_DirtyTextureRegion_mB66EE109AB4B647EDDC49E3B7A2C8F1CA0215FA5_RuntimeMethod_var)));
	}

IL_0063:
	{
		int32_t L_17;
		L_17 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___region1), NULL);
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_18;
		L_18 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___region1), NULL);
		int32_t L_19 = V_0;
		G_B10_0 = ((((int32_t)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B10_0 = 1;
	}

IL_007d:
	{
		V_4 = (bool)G_B10_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_008e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_21 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A1C31610227D7DF1B1F849B322637E473DDE778)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_DirtyTextureRegion_mB66EE109AB4B647EDDC49E3B7A2C8F1CA0215FA5_RuntimeMethod_var)));
	}

IL_008e:
	{
		int32_t L_22;
		L_22 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___region1), NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_23;
		L_23 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___region1), NULL);
		int32_t L_24 = V_0;
		G_B15_0 = ((((int32_t)L_23) > ((int32_t)L_24))? 1 : 0);
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B15_0 = 1;
	}

IL_00a5:
	{
		V_5 = (bool)G_B15_0;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00b6;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_26 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral070224D5E619821086533BEADF16192DFFD15A7E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_DirtyTextureRegion_mB66EE109AB4B647EDDC49E3B7A2C8F1CA0215FA5_RuntimeMethod_var)));
	}

IL_00b6:
	{
		int32_t L_27;
		L_27 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___region1), NULL);
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_28;
		L_28 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___region1), NULL);
		int32_t L_29 = V_0;
		G_B20_0 = ((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d0;
	}

IL_00cf:
	{
		G_B20_0 = 1;
	}

IL_00d0:
	{
		V_6 = (bool)G_B20_0;
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_00e1;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_31 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_31);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76417B3638C5AD1ABB78AE5ECACE0B90F1A7EDB3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_DirtyTextureRegion_mB66EE109AB4B647EDDC49E3B7A2C8F1CA0215FA5_RuntimeMethod_var)));
	}

IL_00e1:
	{
		int32_t L_32;
		L_32 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___region1), NULL);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_33;
		L_33 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___region1), NULL);
		int32_t L_34 = V_0;
		G_B25_0 = ((((int32_t)L_33) > ((int32_t)L_34))? 1 : 0);
		goto IL_00f8;
	}

IL_00f7:
	{
		G_B25_0 = 1;
	}

IL_00f8:
	{
		V_7 = (bool)G_B25_0;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_0109;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_36 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FDBDAC482E6C7A0FDECBBD11BED16F2D677252B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_DirtyTextureRegion_mB66EE109AB4B647EDDC49E3B7A2C8F1CA0215FA5_RuntimeMethod_var)));
	}

IL_0109:
	{
		String_t* L_37 = ___textureName0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = TerrainData_get_HolesTextureName_m050635081E2E26FDE05BFD35253710DE84E7A12F(NULL);
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, L_38, NULL);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0141;
		}
	}
	{
		int32_t L_41;
		L_41 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___region1), NULL);
		int32_t L_42;
		L_42 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___region1), NULL);
		int32_t L_43;
		L_43 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___region1), NULL);
		int32_t L_44;
		L_44 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___region1), NULL);
		bool L_45 = ___allowDelayedCPUSync2;
		TerrainData_Internal_DirtyHolesRegion_mBC52464648FFA679E45C579BCC3B9FFF68DD3EBA(__this, L_41, L_42, L_43, L_44, L_45, NULL);
		goto IL_0183;
	}

IL_0141:
	{
		int32_t L_46;
		L_46 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___region1), NULL);
		int32_t L_47;
		L_47 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___region1), NULL);
		int32_t L_48;
		L_48 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___region1), NULL);
		int32_t L_49;
		L_49 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___region1), NULL);
		TerrainData_Internal_MarkAlphamapDirtyRegion_mB212FE00063E5391813EA3C57C71AF5669F9C064(__this, (-1), L_46, L_47, L_48, L_49, NULL);
		bool L_50 = ___allowDelayedCPUSync2;
		V_9 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_9;
		if (!L_51)
		{
			goto IL_0179;
		}
	}
	{
		String_t* L_52 = ___textureName0;
		TerrainData_SyncTexture_m4799EFAE1FACCB344F25855A7190C0CC3F8C9B2D(__this, L_52, NULL);
		goto IL_0183;
	}

IL_0179:
	{
		String_t* L_53 = ___textureName0;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_54 = ___region1;
		TerrainCallbacks_InvokeTextureChangedCallback_mB508E8B7A884854AA01AE5B88AB33E1AE40F4318(__this, L_53, L_54, (bool)0, NULL);
	}

IL_0183:
	{
		return;
	}
}
// System.Void UnityEngine.TerrainData::SyncTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SyncTexture_m4799EFAE1FACCB344F25855A7190C0CC3F8C9B2D (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, String_t* ___textureName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		String_t* L_0 = ___textureName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B156264231A1BD638F577224D6CE5D6D0599F9A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_SyncTexture_m4799EFAE1FACCB344F25855A7190C0CC3F8C9B2D_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = ___textureName0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = TerrainData_get_AlphamapTextureName_mC3E6B77E19252385A78C74D853F7CA4375A51882(NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		TerrainData_Internal_SyncAlphamaps_mFDFD1F09BB38C77A2F408331299CCF586FDC0A33(__this, NULL);
		goto IL_0074;
	}

IL_002e:
	{
		String_t* L_8 = ___textureName0;
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = TerrainData_get_HolesTextureName_m050635081E2E26FDE05BFD35253710DE84E7A12F(NULL);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		bool L_12;
		L_12 = TerrainData_IsHolesTextureCompressed_mBFE653BBF59360E5382F66592EF1F3E48ED4057D(__this, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0053;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6871A7B2B0B01537C43DB89BD7327D9E699FAF95)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_SyncTexture_m4799EFAE1FACCB344F25855A7190C0CC3F8C9B2D_RuntimeMethod_var)));
	}

IL_0053:
	{
		TerrainData_Internal_SyncHoles_m536B2E7102335849E42E867DB27166BB55FED0F6(__this, NULL);
		goto IL_0074;
	}

IL_005d:
	{
		String_t* L_15 = ___textureName0;
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC540489CC1B605AE39E2C2500B1F58F00482E5D8)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainData_SyncTexture_m4799EFAE1FACCB344F25855A7190C0CC3F8C9B2D_RuntimeMethod_var)));
	}

IL_0074:
	{
		return;
	}
}
// System.Void UnityEngine.TerrainData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData__cctor_m525F8AF6DEDDACF640BD2D24767502121ED6D9B0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E(0, NULL);
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumResolution_10 = L_0;
		int32_t L_1;
		L_1 = TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E(1, NULL);
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumDetailResolutionPerPatch_11 = L_1;
		int32_t L_2;
		L_2 = TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E(2, NULL);
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailResolutionPerPatch_12 = L_2;
		int32_t L_3;
		L_3 = TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E(3, NULL);
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailPatchCount_13 = L_3;
		int32_t L_4;
		L_4 = TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E(4, NULL);
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailsPerRes_14 = L_4;
		int32_t L_5;
		L_5 = TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E(5, NULL);
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumAlphamapResolution_15 = L_5;
		int32_t L_6;
		L_6 = TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E(6, NULL);
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumAlphamapResolution_16 = L_6;
		int32_t L_7;
		L_7 = TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E(7, NULL);
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumBaseMapResolution_17 = L_7;
		int32_t L_8;
		L_8 = TerrainData_GetBoundaryValue_mA9217CC15BBC958C9F7071B96CE74769EFDC322E(8, NULL);
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumBaseMapResolution_18 = L_8;
		return;
	}
}
// System.Void UnityEngine.TerrainData::get_heightmapScale_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_heightmapScale_Injected_m3F94935D94B0B8029E2145C33B023AB8677C39AB (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_get_heightmapScale_Injected_m3F94935D94B0B8029E2145C33B023AB8677C39AB_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TerrainData_get_heightmapScale_Injected_m3F94935D94B0B8029E2145C33B023AB8677C39AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_heightmapScale_Injected_m3F94935D94B0B8029E2145C33B023AB8677C39AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_heightmapScale_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.TerrainData::set_size_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_size_Injected_mF315143468DD64DB825C9D0A03EF491E035666D8 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_set_size_Injected_mF315143468DD64DB825C9D0A03EF491E035666D8_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TerrainData_set_size_Injected_mF315143468DD64DB825C9D0A03EF491E035666D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_set_size_Injected_mF315143468DD64DB825C9D0A03EF491E035666D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::set_size_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.TerrainData::get_bounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_bounds_Injected_mD98BEEB610CCB2688123B28111C35D3E6415BDE5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_get_bounds_Injected_mD98BEEB610CCB2688123B28111C35D3E6415BDE5_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static TerrainData_get_bounds_Injected_mD98BEEB610CCB2688123B28111C35D3E6415BDE5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_bounds_Injected_mD98BEEB610CCB2688123B28111C35D3E6415BDE5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_bounds_Injected(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.TerrainData::GetInterpolatedNormal_Injected(System.Single,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_GetInterpolatedNormal_Injected_mF6E35FCDF546E498658E864D47EB87C22B41E571 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___x0, float ___y1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret2, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_GetInterpolatedNormal_Injected_mF6E35FCDF546E498658E864D47EB87C22B41E571_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, float, float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TerrainData_GetInterpolatedNormal_Injected_mF6E35FCDF546E498658E864D47EB87C22B41E571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetInterpolatedNormal_Injected_mF6E35FCDF546E498658E864D47EB87C22B41E571_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetInterpolatedNormal_Injected(System.Single,System.Single,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___x0, ___y1, ___ret2);
}
// System.Void UnityEngine.TerrainData::get_wavingGrassTint_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_wavingGrassTint_Injected_mDDE7C4FCA35CCFAF7D2674D225DC36B4D77CAD25 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_get_wavingGrassTint_Injected_mDDE7C4FCA35CCFAF7D2674D225DC36B4D77CAD25_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static TerrainData_get_wavingGrassTint_Injected_mDDE7C4FCA35CCFAF7D2674D225DC36B4D77CAD25_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_wavingGrassTint_Injected_mDDE7C4FCA35CCFAF7D2674D225DC36B4D77CAD25_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_wavingGrassTint_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.TerrainData::set_wavingGrassTint_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassTint_Injected_mDF8BCA497383058F5054AE782FFE9CAFE63FF142 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_set_wavingGrassTint_Injected_mDF8BCA497383058F5054AE782FFE9CAFE63FF142_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static TerrainData_set_wavingGrassTint_Injected_mDF8BCA497383058F5054AE782FFE9CAFE63FF142_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_set_wavingGrassTint_Injected_mDF8BCA497383058F5054AE782FFE9CAFE63FF142_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::set_wavingGrassTint_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.TerrainData::Internal_CopyActiveRenderTextureToHeightmap_Injected(UnityEngine.RectInt&,System.Int32,System.Int32,UnityEngine.TerrainHeightmapSyncControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_CopyActiveRenderTextureToHeightmap_Injected_mBCC5601037CF0D8C81E936AB9C6270C2E128EF7C (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___rect0, int32_t ___destX1, int32_t ___destY2, int32_t ___syncControl3, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_CopyActiveRenderTextureToHeightmap_Injected_mBCC5601037CF0D8C81E936AB9C6270C2E128EF7C_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, int32_t, int32_t);
	static TerrainData_Internal_CopyActiveRenderTextureToHeightmap_Injected_mBCC5601037CF0D8C81E936AB9C6270C2E128EF7C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_CopyActiveRenderTextureToHeightmap_Injected_mBCC5601037CF0D8C81E936AB9C6270C2E128EF7C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_CopyActiveRenderTextureToHeightmap_Injected(UnityEngine.RectInt&,System.Int32,System.Int32,UnityEngine.TerrainHeightmapSyncControl)");
	_il2cpp_icall_func(__this, ___rect0, ___destX1, ___destY2, ___syncControl3);
}
// System.Void UnityEngine.TerrainData::Internal_CopyActiveRenderTextureToHoles_Injected(UnityEngine.RectInt&,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_CopyActiveRenderTextureToHoles_Injected_m79962847A7F930086EE6436D8D0EDFABF3C3F967 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___rect0, int32_t ___destX1, int32_t ___destY2, bool ___allowDelayedCPUSync3, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_CopyActiveRenderTextureToHoles_Injected_m79962847A7F930086EE6436D8D0EDFABF3C3F967_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, int32_t, bool);
	static TerrainData_Internal_CopyActiveRenderTextureToHoles_Injected_m79962847A7F930086EE6436D8D0EDFABF3C3F967_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_CopyActiveRenderTextureToHoles_Injected_m79962847A7F930086EE6436D8D0EDFABF3C3F967_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_CopyActiveRenderTextureToHoles_Injected(UnityEngine.RectInt&,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___rect0, ___destX1, ___destY2, ___allowDelayedCPUSync3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TerrainCallbacks::InvokeHeightmapChangedCallback(UnityEngine.TerrainData,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainCallbacks_InvokeHeightmapChangedCallback_m731ED939CBD563CCCE503062602DF5908205AD04 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ___terrainData0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_1 = NULL;
	int32_t V_2 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_3 = NULL;
	{
		HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* L_0 = ((TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var))->___heightmapChanged_0;
		V_0 = (bool)((!(((RuntimeObject*)(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_2 = ___terrainData0;
		NullCheck(L_2);
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_3;
		L_3 = TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4(L_2, NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0030;
	}

IL_001a:
	{
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* L_8 = ((TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var))->___heightmapChanged_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_9 = V_3;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_10 = ___heightRegion1;
		bool L_11 = ___synched2;
		NullCheck(L_8);
		HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_inline(L_8, L_9, L_10, L_11, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0030:
	{
		int32_t L_13 = V_2;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
	}

IL_0037:
	{
		return;
	}
}
// System.Void UnityEngine.TerrainCallbacks::InvokeTextureChangedCallback(UnityEngine.TerrainData,System.String,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainCallbacks_InvokeTextureChangedCallback_mB508E8B7A884854AA01AE5B88AB33E1AE40F4318 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ___terrainData0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_1 = NULL;
	int32_t V_2 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_3 = NULL;
	{
		TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* L_0 = ((TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var))->___textureChanged_1;
		V_0 = (bool)((!(((RuntimeObject*)(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_2 = ___terrainData0;
		NullCheck(L_2);
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_3;
		L_3 = TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4(L_2, NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0031;
	}

IL_001a:
	{
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* L_8 = ((TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var))->___textureChanged_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_9 = V_3;
		String_t* L_10 = ___textureName1;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_11 = ___texelRegion2;
		bool L_12 = ___synched3;
		NullCheck(L_8);
		TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_inline(L_8, L_9, L_10, L_11, L_12, NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0031:
	{
		int32_t L_14 = V_2;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
	}

IL_0038:
	{
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
void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_Multicast(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* currentDelegate = reinterpret_cast<HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___terrain0, ___heightRegion1, ___synched2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_OpenInst(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
{
	NullCheck(___terrain0);
	typedef void (*FunctionPointerType) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terrain0, ___heightRegion1, ___synched2, method);
}
void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_OpenStatic(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terrain0, ___heightRegion1, ___synched2, method);
}
void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_OpenStaticInvoker(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___terrain0, ___heightRegion1, ___synched2);
}
void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_ClosedStaticInvoker(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___terrain0, ___heightRegion1, ___synched2);
}
// System.Void UnityEngine.TerrainCallbacks/HeightmapChangedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightmapChangedCallback__ctor_m6A7E4189E0A7A1B70EE73818B93B0FC9F613648C (HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_Multicast;
}
// System.Void UnityEngine.TerrainCallbacks/HeightmapChangedCallback::Invoke(UnityEngine.Terrain,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875 (HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___terrain0, ___heightRegion1, ___synched2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_Multicast(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* currentDelegate = reinterpret_cast<TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, String_t*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___terrain0, ___textureName1, ___texelRegion2, ___synched3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_OpenInst(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
{
	NullCheck(___terrain0);
	typedef void (*FunctionPointerType) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, String_t*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terrain0, ___textureName1, ___texelRegion2, ___synched3, method);
}
void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_OpenStatic(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, String_t*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terrain0, ___textureName1, ___texelRegion2, ___synched3, method);
}
void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_OpenStaticInvoker(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, String_t*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
}
void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_ClosedStaticInvoker(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, String_t*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
}
// System.Void UnityEngine.TerrainCallbacks/TextureChangedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureChangedCallback__ctor_m64076D799FEB79E3D6BE2C4EB33CD081A398F0EF (TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_Multicast;
}
// System.Void UnityEngine.TerrainCallbacks/TextureChangedCallback::Invoke(UnityEngine.Terrain,System.String,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE (TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, String_t*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___terrain0, ___textureName1, ___texelRegion2, ___synched3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TerrainUtils.TerrainTileCoord::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___tileX0;
		__this->___tileX_0 = L_0;
		int32_t L_1 = ___tileZ1;
		__this->___tileZ_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A_AdjustorThunk (RuntimeObject* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method)
{
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*>(__this + _offset);
	TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A(_thisAdjusted, ___tileX0, ___tileZ1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Terrain UnityEngine.TerrainUtils.TerrainMap::GetTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA4944115ADCBA991881F907C9E48413EB1EFE42A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_0 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_1 = NULL;
	{
		V_0 = (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL;
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = __this->___m_terrainTiles_2;
		int32_t L_1 = ___tileX0;
		int32_t L_2 = ___tileZ1;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_3;
		memset((&L_3), 0, sizeof(L_3));
		TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mA4944115ADCBA991881F907C9E48413EB1EFE42A(L_0, L_3, (&V_0), Dictionary_2_TryGetValue_mA4944115ADCBA991881F907C9E48413EB1EFE42A_RuntimeMethod_var);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5 = V_0;
		V_1 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.TerrainUtils.TerrainMap UnityEngine.TerrainUtils.TerrainMap::CreateFromConnectedNeighbors(UnityEngine.Terrain,System.Predicate`1<UnityEngine.Terrain>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* TerrainMap_CreateFromConnectedNeighbors_m4AA17A1E61EBA1295BE150640D2D38B0E1EDD739 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___originTerrain0, Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* ___filter1, bool ___fullValidation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF28152D343320316B4F49074799EFA5A0900383C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m210F37A6777BA685DA96D47965A22617CC5E6C06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mF8FEA9F68E8B9483BB640E01E8F986CBEB03A038_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_0 = NULL;
	Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_4 = NULL;
	bool V_5 = false;
	QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B8_0 = 0;
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___originTerrain0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		V_4 = (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)NULL;
		goto IL_01e2;
	}

IL_0014:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = ___originTerrain0;
		NullCheck(L_3);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_4;
		L_4 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_5;
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		V_4 = (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)NULL;
		goto IL_01e2;
	}

IL_002e:
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_7 = (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)il2cpp_codegen_object_new(TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TerrainMap__ctor_mCDB47BA50D9D54E65754028F9CF8F91828FE616F(L_7, NULL);
		V_0 = L_7;
		Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* L_8 = (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1*)il2cpp_codegen_object_new(Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Queue_1__ctor_m210F37A6777BA685DA96D47965A22617CC5E6C06(L_8, Queue_1__ctor_m210F37A6777BA685DA96D47965A22617CC5E6C06_RuntimeMethod_var);
		V_1 = L_8;
		Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* L_9 = V_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_10 = ___originTerrain0;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_11;
		memset((&L_11), 0, sizeof(L_11));
		QueueElement__ctor_m1A6C6D9526BCDA206E451B66F7AF9AFF5445F125((&L_11), 0, 0, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5(L_9, L_11, Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5_RuntimeMethod_var);
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_12;
		L_12 = Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701(NULL);
		NullCheck(L_12);
		V_2 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		goto IL_01bd;
	}

IL_0056:
	{
		Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* L_13 = V_1;
		NullCheck(L_13);
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_14;
		L_14 = Queue_1_Dequeue_mF28152D343320316B4F49074799EFA5A0900383C(L_13, Queue_1_Dequeue_mF28152D343320316B4F49074799EFA5A0900383C_RuntimeMethod_var);
		V_6 = L_14;
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_15 = ___filter1;
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_16 = ___filter1;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_17 = V_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_18 = L_17.___terrain_2;
		NullCheck(L_16);
		bool L_19;
		L_19 = Predicate_1_Invoke_mA6B25B82B5FF8BFA2DCF9E5A8600C761222B0B2A_inline(L_16, L_18, NULL);
		G_B8_0 = ((int32_t)(L_19));
		goto IL_0072;
	}

IL_0071:
	{
		G_B8_0 = 1;
	}

IL_0072:
	{
		V_7 = (bool)G_B8_0;
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_01bc;
		}
	}
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_21 = V_0;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_22 = V_6;
		int32_t L_23 = L_22.___tileX_0;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_24 = V_6;
		int32_t L_25 = L_24.___tileZ_1;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_26 = V_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_27 = L_26.___terrain_2;
		NullCheck(L_21);
		bool L_28;
		L_28 = TerrainMap_TryToAddTerrain_m03A05C883F317FD2E6956ADD6625409E8A90BE15(L_21, L_23, L_25, L_27, NULL);
		V_8 = L_28;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_01bb;
		}
	}
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_30 = V_0;
		NullCheck(L_30);
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_31 = L_30->___m_terrainTiles_2;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024(L_31, Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var);
		int32_t L_33 = V_2;
		V_9 = (bool)((((int32_t)L_32) > ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_01cf;
	}

IL_00ba:
	{
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_35 = V_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_36 = L_35.___terrain_2;
		NullCheck(L_36);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_37;
		L_37 = Terrain_get_leftNeighbor_mA42E758BD513BC9E0FB87888FC24B3C4349A353E(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_10 = L_38;
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_00fa;
		}
	}
	{
		Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* L_40 = V_1;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_41 = V_6;
		int32_t L_42 = L_41.___tileX_0;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_43 = V_6;
		int32_t L_44 = L_43.___tileZ_1;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_45 = V_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_46 = L_45.___terrain_2;
		NullCheck(L_46);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_47;
		L_47 = Terrain_get_leftNeighbor_mA42E758BD513BC9E0FB87888FC24B3C4349A353E(L_46, NULL);
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_48;
		memset((&L_48), 0, sizeof(L_48));
		QueueElement__ctor_m1A6C6D9526BCDA206E451B66F7AF9AFF5445F125((&L_48), ((int32_t)il2cpp_codegen_subtract(L_42, 1)), L_44, L_47, /*hidden argument*/NULL);
		NullCheck(L_40);
		Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5(L_40, L_48, Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5_RuntimeMethod_var);
	}

IL_00fa:
	{
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_49 = V_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_50 = L_49.___terrain_2;
		NullCheck(L_50);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_51;
		L_51 = Terrain_get_bottomNeighbor_m31306E01318F62D214B5E0966C988FB24255406F(L_50, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_11 = L_52;
		bool L_53 = V_11;
		if (!L_53)
		{
			goto IL_013a;
		}
	}
	{
		Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* L_54 = V_1;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_55 = V_6;
		int32_t L_56 = L_55.___tileX_0;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_57 = V_6;
		int32_t L_58 = L_57.___tileZ_1;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_59 = V_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_60 = L_59.___terrain_2;
		NullCheck(L_60);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_61;
		L_61 = Terrain_get_bottomNeighbor_m31306E01318F62D214B5E0966C988FB24255406F(L_60, NULL);
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_62;
		memset((&L_62), 0, sizeof(L_62));
		QueueElement__ctor_m1A6C6D9526BCDA206E451B66F7AF9AFF5445F125((&L_62), L_56, ((int32_t)il2cpp_codegen_subtract(L_58, 1)), L_61, /*hidden argument*/NULL);
		NullCheck(L_54);
		Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5(L_54, L_62, Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5_RuntimeMethod_var);
	}

IL_013a:
	{
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_63 = V_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_64 = L_63.___terrain_2;
		NullCheck(L_64);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_65;
		L_65 = Terrain_get_rightNeighbor_mA50D19F61FFBA544E94733B097D4409B15FECC17(L_64, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_65, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_12 = L_66;
		bool L_67 = V_12;
		if (!L_67)
		{
			goto IL_017a;
		}
	}
	{
		Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* L_68 = V_1;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_69 = V_6;
		int32_t L_70 = L_69.___tileX_0;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_71 = V_6;
		int32_t L_72 = L_71.___tileZ_1;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_73 = V_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_74 = L_73.___terrain_2;
		NullCheck(L_74);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_75;
		L_75 = Terrain_get_rightNeighbor_mA50D19F61FFBA544E94733B097D4409B15FECC17(L_74, NULL);
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_76;
		memset((&L_76), 0, sizeof(L_76));
		QueueElement__ctor_m1A6C6D9526BCDA206E451B66F7AF9AFF5445F125((&L_76), ((int32_t)il2cpp_codegen_add(L_70, 1)), L_72, L_75, /*hidden argument*/NULL);
		NullCheck(L_68);
		Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5(L_68, L_76, Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5_RuntimeMethod_var);
	}

IL_017a:
	{
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_77 = V_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_78 = L_77.___terrain_2;
		NullCheck(L_78);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_79;
		L_79 = Terrain_get_topNeighbor_mCBC502C4CC0D617863D7A3A726EBFA4BD18BDF8C(L_78, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_79, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_13 = L_80;
		bool L_81 = V_13;
		if (!L_81)
		{
			goto IL_01ba;
		}
	}
	{
		Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* L_82 = V_1;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_83 = V_6;
		int32_t L_84 = L_83.___tileX_0;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_85 = V_6;
		int32_t L_86 = L_85.___tileZ_1;
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_87 = V_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_88 = L_87.___terrain_2;
		NullCheck(L_88);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_89;
		L_89 = Terrain_get_topNeighbor_mCBC502C4CC0D617863D7A3A726EBFA4BD18BDF8C(L_88, NULL);
		QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B L_90;
		memset((&L_90), 0, sizeof(L_90));
		QueueElement__ctor_m1A6C6D9526BCDA206E451B66F7AF9AFF5445F125((&L_90), L_84, ((int32_t)il2cpp_codegen_add(L_86, 1)), L_89, /*hidden argument*/NULL);
		NullCheck(L_82);
		Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5(L_82, L_90, Queue_1_Enqueue_mA9924DAB437378802B6EBEF1A0E487BAC608FDE5_RuntimeMethod_var);
	}

IL_01ba:
	{
	}

IL_01bb:
	{
	}

IL_01bc:
	{
	}

IL_01bd:
	{
		Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* L_91 = V_1;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = Queue_1_get_Count_mF8FEA9F68E8B9483BB640E01E8F986CBEB03A038_inline(L_91, Queue_1_get_Count_mF8FEA9F68E8B9483BB640E01E8F986CBEB03A038_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_92) > ((int32_t)0))? 1 : 0);
		bool L_93 = V_14;
		if (L_93)
		{
			goto IL_0056;
		}
	}

IL_01cf:
	{
		bool L_94 = ___fullValidation2;
		V_15 = L_94;
		bool L_95 = V_15;
		if (!L_95)
		{
			goto IL_01dd;
		}
	}
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_96 = V_0;
		NullCheck(L_96);
		int32_t L_97;
		L_97 = TerrainMap_Validate_mAFBB4A2D0290E25D59902A1BD5DA1EBC2ACD1326(L_96, NULL);
	}

IL_01dd:
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_98 = V_0;
		V_4 = L_98;
		goto IL_01e2;
	}

IL_01e2:
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_99 = V_4;
		return L_99;
	}
}
// UnityEngine.TerrainUtils.TerrainMap UnityEngine.TerrainUtils.TerrainMap::CreateFromPlacement(UnityEngine.Terrain,System.Predicate`1<UnityEngine.Terrain>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* TerrainMap_CreateFromPlacement_mC7822A5F4FC2A2CB119259A48F19D364ACEC5AE7 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___originTerrain0, Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* ___filter1, bool ___fullValidation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CCreateFromPlacementU3Eb__0_m703A4D4E3D378C9896199B70A89FCDF1A07C737B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	{
		U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* L_0 = (U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mAFD4AEF760F5CC7CE66BAD750DAD3697397E8945(L_0, NULL);
		V_0 = L_0;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_1;
		L_1 = Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701(NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_2;
		L_2 = Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701(NULL);
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_001f;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = ___originTerrain0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 1;
	}

IL_0020:
	{
		V_5 = (bool)G_B4_0;
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		V_6 = (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)NULL;
		goto IL_00cb;
	}

IL_002e:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = ___originTerrain0;
		NullCheck(L_6);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_7;
		L_7 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_7 = L_8;
		bool L_9 = V_7;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		V_6 = (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)NULL;
		goto IL_00cb;
	}

IL_0048:
	{
		U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* L_10 = V_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11 = ___originTerrain0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_11, NULL);
		NullCheck(L_10);
		L_10->___groupID_0 = L_12;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_13 = ___originTerrain0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___x_2;
		V_1 = L_16;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_17 = ___originTerrain0;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___z_4;
		V_2 = L_20;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_21 = ___originTerrain0;
		NullCheck(L_21);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_22;
		L_22 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_22, NULL);
		float L_24 = L_23.___x_2;
		V_3 = L_24;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_25 = ___originTerrain0;
		NullCheck(L_25);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_26;
		L_26 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_26, NULL);
		float L_28 = L_27.___z_4;
		V_4 = L_28;
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_29 = ___filter1;
		V_8 = (bool)((((RuntimeObject*)(Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055*)L_29) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00b1;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* L_31 = V_0;
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_32 = (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055*)il2cpp_codegen_object_new(Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Predicate_1__ctor_m80A5EFAAAC439A069D5782C725DF325FDD5D891C(L_32, L_31, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CCreateFromPlacementU3Eb__0_m703A4D4E3D378C9896199B70A89FCDF1A07C737B_RuntimeMethod_var), NULL);
		___filter1 = L_32;
	}

IL_00b1:
	{
		float L_33 = V_1;
		float L_34 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_35), L_33, L_34, /*hidden argument*/NULL);
		float L_36 = V_3;
		float L_37 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), L_36, L_37, /*hidden argument*/NULL);
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_39 = ___filter1;
		bool L_40 = ___fullValidation2;
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_41;
		L_41 = TerrainMap_CreateFromPlacement_m64B90ADBC1D3A1AE18CEC7D0B452377E10B2BCB5(L_35, L_38, L_39, L_40, NULL);
		V_6 = L_41;
		goto IL_00cb;
	}

IL_00cb:
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_42 = V_6;
		return L_42;
	}
}
// UnityEngine.TerrainUtils.TerrainMap UnityEngine.TerrainUtils.TerrainMap::CreateFromPlacement(UnityEngine.Vector2,UnityEngine.Vector2,System.Predicate`1<UnityEngine.Terrain>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* TerrainMap_CreateFromPlacement_m64B90ADBC1D3A1AE18CEC7D0B452377E10B2BCB5 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gridOrigin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gridSize1, Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* ___filter2, bool ___fullValidation3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_4 = NULL;
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_5 = NULL;
	int32_t V_6 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* G_B21_0 = NULL;
	{
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_0;
		L_0 = Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701(NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_1;
		L_1 = Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701(NULL);
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		V_4 = (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)NULL;
		goto IL_0102;
	}

IL_0020:
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_3 = (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)il2cpp_codegen_object_new(TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TerrainMap__ctor_mCDB47BA50D9D54E65754028F9CF8F91828FE616F(L_3, NULL);
		V_0 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___gridSize1;
		float L_5 = L_4.___x_0;
		V_1 = ((float)((1.0f)/L_5));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___gridSize1;
		float L_7 = L_6.___y_1;
		V_2 = ((float)((1.0f)/L_7));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_8;
		L_8 = Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701(NULL);
		V_5 = L_8;
		V_6 = 0;
		goto IL_00d3;
	}

IL_0050:
	{
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_9 = V_5;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_13 = V_7;
		NullCheck(L_13);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_14;
		L_14 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_8 = L_15;
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00cd;
	}

IL_006d:
	{
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_17 = ___filter2;
		if (!L_17)
		{
			goto IL_007a;
		}
	}
	{
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_18 = ___filter2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_19 = V_7;
		NullCheck(L_18);
		bool L_20;
		L_20 = Predicate_1_Invoke_mA6B25B82B5FF8BFA2DCF9E5A8600C761222B0B2A_inline(L_18, L_19, NULL);
		G_B11_0 = ((int32_t)(L_20));
		goto IL_007b;
	}

IL_007a:
	{
		G_B11_0 = 1;
	}

IL_007b:
	{
		V_9 = (bool)G_B11_0;
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_00cc;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_22 = V_7;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		V_10 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_10;
		float L_26 = L_25.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___gridOrigin0;
		float L_28 = L_27.___x_0;
		float L_29 = V_1;
		int32_t L_30;
		L_30 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)), NULL);
		V_11 = L_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_10;
		float L_32 = L_31.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ___gridOrigin0;
		float L_34 = L_33.___y_1;
		float L_35 = V_2;
		int32_t L_36;
		L_36 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_32, L_34)), L_35)), NULL);
		V_12 = L_36;
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_37 = V_0;
		int32_t L_38 = V_11;
		int32_t L_39 = V_12;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_40 = V_7;
		NullCheck(L_37);
		bool L_41;
		L_41 = TerrainMap_TryToAddTerrain_m03A05C883F317FD2E6956ADD6625409E8A90BE15(L_37, L_38, L_39, L_40, NULL);
	}

IL_00cc:
	{
	}

IL_00cd:
	{
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00d3:
	{
		int32_t L_43 = V_6;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_44 = V_5;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		bool L_45 = ___fullValidation3;
		V_13 = L_45;
		bool L_46 = V_13;
		if (!L_46)
		{
			goto IL_00ec;
		}
	}
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = TerrainMap_Validate_mAFBB4A2D0290E25D59902A1BD5DA1EBC2ACD1326(L_47, NULL);
	}

IL_00ec:
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_49 = V_0;
		NullCheck(L_49);
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_50 = L_49->___m_terrainTiles_2;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024(L_50, Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var);
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_00fd;
		}
	}
	{
		G_B21_0 = ((TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)(NULL));
		goto IL_00fe;
	}

IL_00fd:
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_52 = V_0;
		G_B21_0 = L_52;
	}

IL_00fe:
	{
		V_4 = G_B21_0;
		goto IL_0102;
	}

IL_0102:
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_53 = V_4;
		return L_53;
	}
}
// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain> UnityEngine.TerrainUtils.TerrainMap::get_terrainTiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = __this->___m_terrainTiles_2;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainUtils.TerrainMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap__ctor_mCDB47BA50D9D54E65754028F9CF8F91828FE616F (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCA22422F902B1FF70914D8FA2EF849DA0DCDC87D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_errorCode_1 = 0;
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*)il2cpp_codegen_object_new(Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mCA22422F902B1FF70914D8FA2EF849DA0DCDC87D(L_0, Dictionary_2__ctor_mCA22422F902B1FF70914D8FA2EF849DA0DCDC87D_RuntimeMethod_var);
		__this->___m_terrainTiles_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_terrainTiles_2), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.TerrainUtils.TerrainMap::AddTerrainInternal(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_AddTerrainInternal_m507CE3A3F880B33CA2330F69464E3511D5B9BD71 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___x0, int32_t ___z1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m265E9FB46C80D234AEB47C08D701628D57DBA132_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = __this->___m_terrainTiles_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024(L_0, Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = ___terrain2;
		NullCheck(L_3);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_4;
		L_4 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_4, NULL);
		__this->___m_patchSize_0 = L_5;
		goto IL_0052;
	}

IL_0026:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = ___terrain2;
		NullCheck(L_6);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_7;
		L_7 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___m_patchSize_0;
		bool L_10;
		L_10 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_8, L_9, NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_12 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_12|4));
	}

IL_0051:
	{
	}

IL_0052:
	{
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_13 = __this->___m_terrainTiles_2;
		int32_t L_14 = ___x0;
		int32_t L_15 = ___z1;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_16;
		memset((&L_16), 0, sizeof(L_16));
		TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A((&L_16), L_14, L_15, /*hidden argument*/NULL);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_17 = ___terrain2;
		NullCheck(L_13);
		Dictionary_2_Add_m265E9FB46C80D234AEB47C08D701628D57DBA132(L_13, L_16, L_17, Dictionary_2_Add_m265E9FB46C80D234AEB47C08D701628D57DBA132_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.TerrainUtils.TerrainMap::TryToAddTerrain(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainMap_TryToAddTerrain_m03A05C883F317FD2E6956ADD6625409E8A90BE15 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		V_0 = (bool)0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_3 = ___tileX0;
		int32_t L_4 = ___tileZ1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5;
		L_5 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, L_3, L_4, NULL);
		V_2 = L_5;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_9 = V_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_10 = ___terrain2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, L_10, NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_13 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_13|1));
	}

IL_0041:
	{
		goto IL_0052;
	}

IL_0044:
	{
		int32_t L_14 = ___tileX0;
		int32_t L_15 = ___tileZ1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_16 = ___terrain2;
		TerrainMap_AddTerrainInternal_m507CE3A3F880B33CA2330F69464E3511D5B9BD71(__this, L_14, L_15, L_16, NULL);
		V_0 = (bool)1;
	}

IL_0052:
	{
	}

IL_0053:
	{
		bool L_17 = V_0;
		V_5 = L_17;
		goto IL_0058;
	}

IL_0058:
	{
		bool L_18 = V_5;
		return L_18;
	}
}
// System.Void UnityEngine.TerrainUtils.TerrainMap::ValidateTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_ValidateTerrain_m8D9B035B3851E0ED8BB5877BD11F63BA85029653 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_0 = NULL;
	bool V_1 = false;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_2 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_3 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_4 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		int32_t L_0 = ___tileX0;
		int32_t L_1 = ___tileZ1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2;
		L_2 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, L_0, L_1, NULL);
		V_0 = L_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_026d;
		}
	}
	{
		int32_t L_6 = ___tileX0;
		int32_t L_7 = ___tileZ1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8;
		L_8 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), L_7, NULL);
		V_2 = L_8;
		int32_t L_9 = ___tileX0;
		int32_t L_10 = ___tileZ1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11;
		L_11 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), L_10, NULL);
		V_3 = L_11;
		int32_t L_12 = ___tileX0;
		int32_t L_13 = ___tileZ1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_14;
		L_14 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, L_12, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		V_4 = L_14;
		int32_t L_15 = ___tileX0;
		int32_t L_16 = ___tileZ1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_17;
		L_17 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), NULL);
		V_5 = L_17;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_18, NULL);
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00cf;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_21 = V_0;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_25 = V_2;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = L_27.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_29 = V_2;
		NullCheck(L_29);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_30;
		L_30 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_30, NULL);
		float L_32 = L_31.___x_2;
		bool L_33;
		L_33 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_24, ((float)il2cpp_codegen_add(L_28, L_32)), NULL);
		if (!L_33)
		{
			goto IL_00b7;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_34 = V_0;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		float L_37 = L_36.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_38 = V_2;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		float L_41 = L_40.___z_4;
		bool L_42;
		L_42 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_37, L_41, NULL);
		G_B5_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		goto IL_00b8;
	}

IL_00b7:
	{
		G_B5_0 = 1;
	}

IL_00b8:
	{
		V_7 = (bool)G_B5_0;
		bool L_43 = V_7;
		if (!L_43)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_44 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_44|8));
	}

IL_00ce:
	{
	}

IL_00cf:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_45 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_45, NULL);
		V_8 = L_46;
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0156;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_48 = V_0;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		float L_51 = L_50.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_52 = V_0;
		NullCheck(L_52);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_53;
		L_53 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_52, NULL);
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_53, NULL);
		float L_55 = L_54.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_56 = V_3;
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_56, NULL);
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		float L_59 = L_58.___x_2;
		bool L_60;
		L_60 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(((float)il2cpp_codegen_add(L_51, L_55)), L_59, NULL);
		if (!L_60)
		{
			goto IL_013e;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_61 = V_0;
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_61, NULL);
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		float L_64 = L_63.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_65 = V_3;
		NullCheck(L_65);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_65, NULL);
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		float L_68 = L_67.___z_4;
		bool L_69;
		L_69 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_64, L_68, NULL);
		G_B12_0 = ((((int32_t)L_69) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B12_0 = 1;
	}

IL_013f:
	{
		V_9 = (bool)G_B12_0;
		bool L_70 = V_9;
		if (!L_70)
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_71 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_71|8));
	}

IL_0155:
	{
	}

IL_0156:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_72 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_72, NULL);
		V_10 = L_73;
		bool L_74 = V_10;
		if (!L_74)
		{
			goto IL_01e0;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_75 = V_0;
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_75, NULL);
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		float L_78 = L_77.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_79 = V_4;
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_79, NULL);
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_80, NULL);
		float L_82 = L_81.___x_2;
		bool L_83;
		L_83 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_78, L_82, NULL);
		if (!L_83)
		{
			goto IL_01c8;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_84 = V_0;
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_84, NULL);
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_85, NULL);
		float L_87 = L_86.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_88 = V_0;
		NullCheck(L_88);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_89;
		L_89 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_88, NULL);
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_89, NULL);
		float L_91 = L_90.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_92 = V_4;
		NullCheck(L_92);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_92, NULL);
		NullCheck(L_93);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_93, NULL);
		float L_95 = L_94.___z_4;
		bool L_96;
		L_96 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(((float)il2cpp_codegen_add(L_87, L_91)), L_95, NULL);
		G_B19_0 = ((((int32_t)L_96) == ((int32_t)0))? 1 : 0);
		goto IL_01c9;
	}

IL_01c8:
	{
		G_B19_0 = 1;
	}

IL_01c9:
	{
		V_11 = (bool)G_B19_0;
		bool L_97 = V_11;
		if (!L_97)
		{
			goto IL_01df;
		}
	}
	{
		int32_t L_98 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_98|8));
	}

IL_01df:
	{
	}

IL_01e0:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_99 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_100;
		L_100 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_99, NULL);
		V_12 = L_100;
		bool L_101 = V_12;
		if (!L_101)
		{
			goto IL_026b;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_102 = V_0;
		NullCheck(L_102);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_102, NULL);
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_103, NULL);
		float L_105 = L_104.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_106 = V_5;
		NullCheck(L_106);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_106, NULL);
		NullCheck(L_107);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_107, NULL);
		float L_109 = L_108.___x_2;
		bool L_110;
		L_110 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_105, L_109, NULL);
		if (!L_110)
		{
			goto IL_0253;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_111 = V_0;
		NullCheck(L_111);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112;
		L_112 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_111, NULL);
		NullCheck(L_112);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_112, NULL);
		float L_114 = L_113.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_115 = V_5;
		NullCheck(L_115);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_115, NULL);
		NullCheck(L_116);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_116, NULL);
		float L_118 = L_117.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_119 = V_5;
		NullCheck(L_119);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_120;
		L_120 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_119, NULL);
		NullCheck(L_120);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_120, NULL);
		float L_122 = L_121.___z_4;
		bool L_123;
		L_123 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_114, ((float)il2cpp_codegen_add(L_118, L_122)), NULL);
		G_B26_0 = ((((int32_t)L_123) == ((int32_t)0))? 1 : 0);
		goto IL_0254;
	}

IL_0253:
	{
		G_B26_0 = 1;
	}

IL_0254:
	{
		V_13 = (bool)G_B26_0;
		bool L_124 = V_13;
		if (!L_124)
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_125 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_125|8));
	}

IL_026a:
	{
	}

IL_026b:
	{
	}

IL_026d:
	{
		return;
	}
}
// UnityEngine.TerrainUtils.TerrainMapStatusCode UnityEngine.TerrainUtils.TerrainMap::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainMap_Validate_mAFBB4A2D0290E25D59902A1BD5DA1EBC2ACD1326 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mBE9BF06497225D54AC2D2D7AEF6D0F94169B10D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC60AECD5D4FA770371F4B374F2B026F7198CEF03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6430F89661ED2AEDEAD6FD241BBDA21BF02135DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m88A7ECB72C871AEFAD87667D8512A109C33E7080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m7D86741C1BEF055A22281CF69C6235BFD1E7D521_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = __this->___m_terrainTiles_2;
		NullCheck(L_0);
		KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E* L_1;
		L_1 = Dictionary_2_get_Keys_mBE9BF06497225D54AC2D2D7AEF6D0F94169B10D4(L_0, Dictionary_2_get_Keys_mBE9BF06497225D54AC2D2D7AEF6D0F94169B10D4_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689 L_2;
		L_2 = KeyCollection_GetEnumerator_m7D86741C1BEF055A22281CF69C6235BFD1E7D521(L_1, KeyCollection_GetEnumerator_m7D86741C1BEF055A22281CF69C6235BFD1E7D521_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC60AECD5D4FA770371F4B374F2B026F7198CEF03((&V_0), Enumerator_Dispose_mC60AECD5D4FA770371F4B374F2B026F7198CEF03_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_0015_1:
			{
				TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_3;
				L_3 = Enumerator_get_Current_m88A7ECB72C871AEFAD87667D8512A109C33E7080_inline((&V_0), Enumerator_get_Current_m88A7ECB72C871AEFAD87667D8512A109C33E7080_RuntimeMethod_var);
				V_1 = L_3;
				TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_4 = V_1;
				int32_t L_5 = L_4.___tileX_0;
				TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_6 = V_1;
				int32_t L_7 = L_6.___tileZ_1;
				TerrainMap_ValidateTerrain_m8D9B035B3851E0ED8BB5877BD11F63BA85029653(__this, L_5, L_7, NULL);
			}

IL_0032_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m6430F89661ED2AEDEAD6FD241BBDA21BF02135DC((&V_0), Enumerator_MoveNext_m6430F89661ED2AEDEAD6FD241BBDA21BF02135DC_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		int32_t L_9 = __this->___m_errorCode_1;
		V_2 = L_9;
		goto IL_0055;
	}

IL_0055:
	{
		int32_t L_10 = V_2;
		return L_10;
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
// Conversion methods for marshalling of: UnityEngine.TerrainUtils.TerrainMap/QueueElement
IL2CPP_EXTERN_C void QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshal_pinvoke(const QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B& unmarshaled, QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___terrain_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrain' of type 'QueueElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrain_2Exception, NULL);
}
IL2CPP_EXTERN_C void QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshal_pinvoke_back(const QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshaled_pinvoke& marshaled, QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B& unmarshaled)
{
	Exception_t* ___terrain_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrain' of type 'QueueElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrain_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.TerrainUtils.TerrainMap/QueueElement
IL2CPP_EXTERN_C void QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshal_pinvoke_cleanup(QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.TerrainUtils.TerrainMap/QueueElement
IL2CPP_EXTERN_C void QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshal_com(const QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B& unmarshaled, QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshaled_com& marshaled)
{
	Exception_t* ___terrain_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrain' of type 'QueueElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrain_2Exception, NULL);
}
IL2CPP_EXTERN_C void QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshal_com_back(const QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshaled_com& marshaled, QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B& unmarshaled)
{
	Exception_t* ___terrain_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrain' of type 'QueueElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrain_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.TerrainUtils.TerrainMap/QueueElement
IL2CPP_EXTERN_C void QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshal_com_cleanup(QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.TerrainUtils.TerrainMap/QueueElement::.ctor(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueElement__ctor_m1A6C6D9526BCDA206E451B66F7AF9AFF5445F125 (QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B* __this, int32_t ___tileX0, int32_t ___tileZ1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___tileX0;
		__this->___tileX_0 = L_0;
		int32_t L_1 = ___tileZ1;
		__this->___tileZ_1 = L_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = ___terrain2;
		__this->___terrain_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___terrain_2), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void QueueElement__ctor_m1A6C6D9526BCDA206E451B66F7AF9AFF5445F125_AdjustorThunk (RuntimeObject* __this, int32_t ___tileX0, int32_t ___tileZ1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain2, const RuntimeMethod* method)
{
	QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<QueueElement_tAA6B24B69D88D5B75E2A2269B4F0A4253340271B*>(__this + _offset);
	QueueElement__ctor_m1A6C6D9526BCDA206E451B66F7AF9AFF5445F125(_thisAdjusted, ___tileX0, ___tileZ1, ___terrain2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mAFD4AEF760F5CC7CE66BAD750DAD3697397E8945 (U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0::<CreateFromPlacement>b__0(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CCreateFromPlacementU3Eb__0_m703A4D4E3D378C9896199B70A89FCDF1A07C737B (U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___x0, const RuntimeMethod* method) 
{
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_0, NULL);
		int32_t L_2 = __this->___groupID_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Boolean UnityEngine.TerrainUtils.TerrainUtility::ValidTerrainsExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainUtility_ValidTerrainsExist_m0DD08E4CEC739929A9AEBCEA849EDFE79985A207 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_0;
		L_0 = Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701(NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_1;
		L_1 = Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701(NULL);
		NullCheck(L_1);
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_1)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.TerrainUtils.TerrainUtility::ClearConnectivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainUtility_ClearConnectivity_m7448E42CD3F2941EF02C10DE358778EEAF9B0AA9 (const RuntimeMethod* method) 
{
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_0 = NULL;
	int32_t V_1 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_2 = NULL;
	bool V_3 = false;
	{
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_0;
		L_0 = Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701(NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_002b;
	}

IL_000c:
	{
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5 = V_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7(L_5, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = V_2;
		NullCheck(L_8);
		Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E(L_8, (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL, (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL, (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL, (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL, NULL);
	}

IL_0026:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002b:
	{
		int32_t L_10 = V_1;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap> UnityEngine.TerrainUtils.TerrainUtility::CollectTerrains(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* TerrainUtility_CollectTerrains_mDFCA0AFA00FFD16CEC8B4EFA9C55E3B7B6803EC4 (bool ___onlyAutoConnectedTerrains0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4E7AE6465929CEEA79B5921CFF3D4BD64E249AF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m384365266E590EDD82F8949169A3C502E643AC95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5665AD243B285B8D26138C699D544F4124AC7D78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m001233C3B4F8B3D1A8F044C9D43104F1671688DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_1_U3CCollectTerrainsU3Eb__0_m57E871EB2399E5FB7DF78B3C9EBFBF152116AC2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* V_0 = NULL;
	Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* V_1 = NULL;
	bool V_2 = false;
	Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* V_3 = NULL;
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_4 = NULL;
	int32_t V_5 = 0;
	U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_9 = NULL;
	bool V_10 = false;
	int32_t G_B6_0 = 0;
	Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* G_B18_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* L_0 = (U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m4C022C4675BA4CFC7E7AAA5692979CDE6CD8E611(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* L_1 = V_0;
		bool L_2 = ___onlyAutoConnectedTerrains0;
		NullCheck(L_1);
		L_1->___onlyAutoConnectedTerrains_0 = L_2;
		bool L_3;
		L_3 = TerrainUtility_ValidTerrainsExist_m0DD08E4CEC739929A9AEBCEA849EDFE79985A207(NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_3 = (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*)NULL;
		goto IL_00f5;
	}

IL_0021:
	{
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_5 = (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*)il2cpp_codegen_object_new(Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m5665AD243B285B8D26138C699D544F4124AC7D78(L_5, Dictionary_2__ctor_m5665AD243B285B8D26138C699D544F4124AC7D78_RuntimeMethod_var);
		V_1 = L_5;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_6;
		L_6 = Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701(NULL);
		V_4 = L_6;
		V_5 = 0;
		goto IL_00db;
	}

IL_0037:
	{
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_7 = (U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		U3CU3Ec__DisplayClass2_1__ctor_mA329ED5B221AE8787EAEA1124A2A95675FDD1695(L_7, NULL);
		V_6 = L_7;
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_8 = V_6;
		U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* L_9 = V_0;
		NullCheck(L_8);
		L_8->___CSU24U3CU3E8__locals1_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___CSU24U3CU3E8__locals1_1), (void*)L_9);
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_10 = V_6;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		L_10->___t_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___t_0), (void*)L_14);
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_15 = V_6;
		NullCheck(L_15);
		U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* L_16 = L_15->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_16);
		bool L_17 = L_16->___onlyAutoConnectedTerrains_0;
		if (!L_17)
		{
			goto IL_0072;
		}
	}
	{
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_18 = V_6;
		NullCheck(L_18);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_19 = L_18->___t_0;
		NullCheck(L_19);
		bool L_20;
		L_20 = Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7(L_19, NULL);
		G_B6_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B6_0 = 0;
	}

IL_0073:
	{
		V_7 = (bool)G_B6_0;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_007b;
		}
	}
	{
		goto IL_00d5;
	}

IL_007b:
	{
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_22 = V_1;
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_23 = V_6;
		NullCheck(L_23);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_24 = L_23->___t_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_24, NULL);
		NullCheck(L_22);
		bool L_26;
		L_26 = Dictionary_2_ContainsKey_m384365266E590EDD82F8949169A3C502E643AC95(L_22, L_25, Dictionary_2_ContainsKey_m384365266E590EDD82F8949169A3C502E643AC95_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_28 = V_6;
		NullCheck(L_28);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_29 = L_28->___t_0;
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_30 = V_6;
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_31 = (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055*)il2cpp_codegen_object_new(Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Predicate_1__ctor_m80A5EFAAAC439A069D5782C725DF325FDD5D891C(L_31, L_30, (intptr_t)((void*)U3CU3Ec__DisplayClass2_1_U3CCollectTerrainsU3Eb__0_m57E871EB2399E5FB7DF78B3C9EBFBF152116AC2C_RuntimeMethod_var), NULL);
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_32;
		L_32 = TerrainMap_CreateFromPlacement_mC7822A5F4FC2A2CB119259A48F19D364ACEC5AE7(L_29, L_31, (bool)1, NULL);
		V_9 = L_32;
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_33 = V_9;
		V_10 = (bool)((!(((RuntimeObject*)(TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00d3;
		}
	}
	{
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_35 = V_1;
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_36 = V_6;
		NullCheck(L_36);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_37 = L_36->___t_0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_37, NULL);
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_39 = V_9;
		NullCheck(L_35);
		Dictionary_2_Add_m4E7AE6465929CEEA79B5921CFF3D4BD64E249AF9(L_35, L_38, L_39, Dictionary_2_Add_m4E7AE6465929CEEA79B5921CFF3D4BD64E249AF9_RuntimeMethod_var);
	}

IL_00d3:
	{
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00db:
	{
		int32_t L_41 = V_5;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_42 = V_4;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_43 = V_1;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = Dictionary_2_get_Count_m001233C3B4F8B3D1A8F044C9D43104F1671688DC(L_43, Dictionary_2_get_Count_m001233C3B4F8B3D1A8F044C9D43104F1671688DC_RuntimeMethod_var);
		if (L_44)
		{
			goto IL_00f1;
		}
	}
	{
		G_B18_0 = ((Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*)(NULL));
		goto IL_00f2;
	}

IL_00f1:
	{
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_45 = V_1;
		G_B18_0 = L_45;
	}

IL_00f2:
	{
		V_3 = G_B18_0;
		goto IL_00f5;
	}

IL_00f5:
	{
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_46 = V_3;
		return L_46;
	}
}
// System.Void UnityEngine.TerrainUtils.TerrainUtility::AutoConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainUtility_AutoConnect_m3E435D139BE402DC495248EDD1FF2C1E9377A897 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m5461BE3EE48320EA8E593506F16860A2CB4E9056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m09F8467FB404D375259C17136F2213FC8455F2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1CEA4A6A000E5344DB72DFF5E4FF563FF67F3558_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1F085EA2ABB67CCEB29CC4A10D6FBC0F2B963349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m32D4949D8D2F580E35346D41EBB14C7933B93482_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_5 = NULL;
	Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B V_6;
	memset((&V_6), 0, sizeof(V_6));
	KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 V_7;
	memset((&V_7), 0, sizeof(V_7));
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_9 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_10 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_11 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_12 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_13 = NULL;
	{
		bool L_0;
		L_0 = TerrainUtility_ValidTerrainsExist_m0DD08E4CEC739929A9AEBCEA849EDFE79985A207(NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_013a;
	}

IL_0012:
	{
		TerrainUtility_ClearConnectivity_m7448E42CD3F2941EF02C10DE358778EEAF9B0AA9(NULL);
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_2;
		L_2 = TerrainUtility_CollectTerrains_mDFCA0AFA00FFD16CEC8B4EFA9C55E3B7B6803EC4((bool)1, NULL);
		V_0 = L_2;
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_3 = V_0;
		V_2 = (bool)((((RuntimeObject*)(Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_013a;
	}

IL_002c:
	{
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_5 = V_0;
		NullCheck(L_5);
		Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F L_6;
		L_6 = Dictionary_2_GetEnumerator_m5461BE3EE48320EA8E593506F16860A2CB4E9056(L_5, Dictionary_2_GetEnumerator_m5461BE3EE48320EA8E593506F16860A2CB4E9056_RuntimeMethod_var);
		V_3 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m09F8467FB404D375259C17136F2213FC8455F2BF((&V_3), Enumerator_Dispose_m09F8467FB404D375259C17136F2213FC8455F2BF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_011d_1;
			}

IL_0039_1:
			{
				KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 L_7;
				L_7 = Enumerator_get_Current_m1F085EA2ABB67CCEB29CC4A10D6FBC0F2B963349_inline((&V_3), Enumerator_get_Current_m1F085EA2ABB67CCEB29CC4A10D6FBC0F2B963349_RuntimeMethod_var);
				V_4 = L_7;
				TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_8;
				L_8 = KeyValuePair_2_get_Value_m32D4949D8D2F580E35346D41EBB14C7933B93482_inline((&V_4), KeyValuePair_2_get_Value_m32D4949D8D2F580E35346D41EBB14C7933B93482_RuntimeMethod_var);
				V_5 = L_8;
				TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_9 = V_5;
				NullCheck(L_9);
				Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_10;
				L_10 = TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_inline(L_9, NULL);
				NullCheck(L_10);
				Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B L_11;
				L_11 = Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473(L_10, Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473_RuntimeMethod_var);
				V_6 = L_11;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010d_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7((&V_6), Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00ff_2;
					}

IL_0060_2:
					{
						KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 L_12;
						L_12 = Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_inline((&V_6), Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_RuntimeMethod_var);
						V_7 = L_12;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_13;
						L_13 = KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_inline((&V_7), KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_RuntimeMethod_var);
						V_8 = L_13;
						TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_14 = V_5;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_15 = V_8;
						int32_t L_16 = L_15.___tileX_0;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_17 = V_8;
						int32_t L_18 = L_17.___tileZ_1;
						NullCheck(L_14);
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_19;
						L_19 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(L_14, L_16, L_18, NULL);
						V_9 = L_19;
						TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_20 = V_5;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_21 = V_8;
						int32_t L_22 = L_21.___tileX_0;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_23 = V_8;
						int32_t L_24 = L_23.___tileZ_1;
						NullCheck(L_20);
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_25;
						L_25 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(L_20, ((int32_t)il2cpp_codegen_subtract(L_22, 1)), L_24, NULL);
						V_10 = L_25;
						TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_26 = V_5;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_27 = V_8;
						int32_t L_28 = L_27.___tileX_0;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_29 = V_8;
						int32_t L_30 = L_29.___tileZ_1;
						NullCheck(L_26);
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_31;
						L_31 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(L_26, ((int32_t)il2cpp_codegen_add(L_28, 1)), L_30, NULL);
						V_11 = L_31;
						TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_32 = V_5;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_33 = V_8;
						int32_t L_34 = L_33.___tileX_0;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_35 = V_8;
						int32_t L_36 = L_35.___tileZ_1;
						NullCheck(L_32);
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_37;
						L_37 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(L_32, L_34, ((int32_t)il2cpp_codegen_add(L_36, 1)), NULL);
						V_12 = L_37;
						TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_38 = V_5;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_39 = V_8;
						int32_t L_40 = L_39.___tileX_0;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_41 = V_8;
						int32_t L_42 = L_41.___tileZ_1;
						NullCheck(L_38);
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_43;
						L_43 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(L_38, L_40, ((int32_t)il2cpp_codegen_subtract(L_42, 1)), NULL);
						V_13 = L_43;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_44 = V_9;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_45 = V_10;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_46 = V_12;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_47 = V_11;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_48 = V_13;
						NullCheck(L_44);
						Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E(L_44, L_45, L_46, L_47, L_48, NULL);
					}

IL_00ff_2:
					{
						bool L_49;
						L_49 = Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4((&V_6), Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4_RuntimeMethod_var);
						if (L_49)
						{
							goto IL_0060_2;
						}
					}
					{
						goto IL_011c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_011c_1:
			{
			}

IL_011d_1:
			{
				bool L_50;
				L_50 = Enumerator_MoveNext_m1CEA4A6A000E5344DB72DFF5E4FF563FF67F3558((&V_3), Enumerator_MoveNext_m1CEA4A6A000E5344DB72DFF5E4FF563FF67F3558_RuntimeMethod_var);
				if (L_50)
				{
					goto IL_0039_1;
				}
			}
			{
				goto IL_013a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013a:
	{
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
// System.Void UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m4C022C4675BA4CFC7E7AAA5692979CDE6CD8E611 (U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_1__ctor_mA329ED5B221AE8787EAEA1124A2A95675FDD1695 (U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1::<CollectTerrains>b__0(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_1_U3CCollectTerrainsU3Eb__0_m57E871EB2399E5FB7DF78B3C9EBFBF152116AC2C (U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___x0, const RuntimeMethod* method) 
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_0, NULL);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = __this->___t_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_002b;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* L_4 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_4);
		bool L_5 = L_4->___onlyAutoConnectedTerrains_0;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = ___x0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7(L_6, NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
	}

IL_0029:
	{
		G_B6_0 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 0;
	}

IL_002c:
	{
		return (bool)G_B6_0;
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
// UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext::get_originTerrain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* PaintContext_get_originTerrain_mCD05E4154C291B8E4400902ABA56B3C017E52338 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = __this->___U3CoriginTerrainU3Ek__BackingField_0;
		return L_0;
	}
}
// UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext::get_pixelRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0 = __this->___U3CpixelRectU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int32 UnityEngine.TerrainTools.PaintContext::get_targetTextureWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PaintContext_get_targetTextureWidth_m6ECD3E0E648DBB6632C633E06B5D6037A0B2CFEB (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtargetTextureWidthU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Int32 UnityEngine.TerrainTools.PaintContext::get_targetTextureHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PaintContext_get_targetTextureHeight_m4975CA86AC71297D69844835B8D006174F806240 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtargetTextureHeightU3Ek__BackingField_3;
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.TerrainTools.PaintContext::get_pixelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PaintContext_get_pixelSize_m625AE2931B8FBA55050107943314D6202DD930C5 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpixelSizeU3Ek__BackingField_4;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::get_sourceRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PaintContext_get_sourceRenderTexture_m45B68671807EA82C3333635B0C5BB8F5D5161B86 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___U3CsourceRenderTextureU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::set_sourceRenderTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_set_sourceRenderTexture_m729A4274969D259E689DA526313697ACA2299CD6 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___value0;
		__this->___U3CsourceRenderTextureU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceRenderTextureU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::get_destinationRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___U3CdestinationRenderTextureU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::set_destinationRenderTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_set_destinationRenderTexture_mE0DC8FD99A811C95223A9F7F0082D139EE3CF4CC (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___value0;
		__this->___U3CdestinationRenderTextureU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestinationRenderTextureU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::get_oldRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PaintContext_get_oldRenderTexture_mBE3586662ED5A1DA7AB82FC7FB01D674095E48EA (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___U3ColdRenderTextureU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::set_oldRenderTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_set_oldRenderTexture_m911313349E453DD49EC9DB4606E9A4E5C86BC043 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___value0;
		__this->___U3ColdRenderTextureU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ColdRenderTextureU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Int32 UnityEngine.TerrainTools.PaintContext::ClampContextResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PaintContext_ClampContextResolution_m90A8DECD94A9CBDA1BA2ABB4AF30B2D4A3C241B6 (int32_t ___resolution0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___resolution0;
		int32_t L_1;
		L_1 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_0, 1, ((int32_t)8192), NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::.ctor(UnityEngine.Terrain,UnityEngine.RectInt,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext__ctor_m5F36E6944154C93E1D271D4A9C077C8DAB108F86 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___pixelRect1, int32_t ___targetTextureWidth2, int32_t ___targetTextureHeight3, bool ___sharedBoundaryTexel4, bool ___fillOutsideTerrain5, const RuntimeMethod* method) 
{
	TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* V_0 = NULL;
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* G_B2_2 = NULL;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* G_B1_2 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* G_B3_3 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	float G_B5_2 = 0.0f;
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* G_B5_3 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* G_B4_3 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	float G_B6_3 = 0.0f;
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* G_B6_4 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		__this->___U3CoriginTerrainU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoriginTerrainU3Ek__BackingField_0), (void*)L_0);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_1 = ___pixelRect1;
		__this->___U3CpixelRectU3Ek__BackingField_1 = L_1;
		int32_t L_2 = ___targetTextureWidth2;
		__this->___U3CtargetTextureWidthU3Ek__BackingField_2 = L_2;
		int32_t L_3 = ___targetTextureHeight3;
		__this->___U3CtargetTextureHeightU3Ek__BackingField_3 = L_3;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = ___terrain0;
		NullCheck(L_4);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_5;
		L_5 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_4, NULL);
		V_0 = L_5;
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_6 = V_0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_6, NULL);
		float L_8 = L_7.___x_2;
		int32_t L_9 = ___targetTextureWidth2;
		bool L_10 = ___sharedBoundaryTexel4;
		G_B1_0 = ((float)L_9);
		G_B1_1 = L_8;
		G_B1_2 = __this;
		if (L_10)
		{
			G_B2_0 = ((float)L_9);
			G_B2_1 = L_8;
			G_B2_2 = __this;
			goto IL_0045;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_004a;
	}

IL_0045:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_004a:
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_11 = V_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_11, NULL);
		float L_13 = L_12.___z_4;
		int32_t L_14 = ___targetTextureHeight3;
		bool L_15 = ___sharedBoundaryTexel4;
		G_B4_0 = ((float)L_14);
		G_B4_1 = L_13;
		G_B4_2 = ((float)(G_B3_2/((float)il2cpp_codegen_subtract(G_B3_1, G_B3_0))));
		G_B4_3 = G_B3_3;
		if (L_15)
		{
			G_B5_0 = ((float)L_14);
			G_B5_1 = L_13;
			G_B5_2 = ((float)(G_B3_2/((float)il2cpp_codegen_subtract(G_B3_1, G_B3_0))));
			G_B5_3 = G_B3_3;
			goto IL_0065;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_006a;
	}

IL_0065:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_006a:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), G_B6_3, ((float)(G_B6_2/((float)il2cpp_codegen_subtract(G_B6_1, G_B6_0)))), /*hidden argument*/NULL);
		NullCheck(G_B6_4);
		G_B6_4->___U3CpixelSizeU3Ek__BackingField_4 = L_16;
		bool L_17 = ___sharedBoundaryTexel4;
		bool L_18 = ___fillOutsideTerrain5;
		PaintContext_FindTerrainTilesUnlimited_mC85574536AE3A36A4A9399DAC6F8C5171FAE1433(__this, L_17, L_18, NULL);
		return;
	}
}
// UnityEngine.TerrainTools.PaintContext UnityEngine.TerrainTools.PaintContext::CreateFromBounds(UnityEngine.Terrain,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* PaintContext_CreateFromBounds_mE034417CBA9CD6F83EAB77DA319323F458CD04E4 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___boundsInTerrainSpace1, int32_t ___inputTextureWidth2, int32_t ___inputTextureHeight3, int32_t ___extraBorderPixels4, bool ___sharedBoundaryTexel5, bool ___fillOutsideTerrain6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* V_0 = NULL;
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1 = ___terrain0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___boundsInTerrainSpace1;
		int32_t L_3 = ___inputTextureWidth2;
		int32_t L_4 = ___inputTextureHeight3;
		int32_t L_5 = ___extraBorderPixels4;
		bool L_6 = ___sharedBoundaryTexel5;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_7;
		L_7 = TerrainPaintUtility_CalcPixelRectFromBounds_mA0F27994D74342C8EECA59B32E3B24CEF52D3334(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		int32_t L_8 = ___inputTextureWidth2;
		int32_t L_9 = ___inputTextureHeight3;
		bool L_10 = ___sharedBoundaryTexel5;
		bool L_11 = ___fillOutsideTerrain6;
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_12 = (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A*)il2cpp_codegen_object_new(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		PaintContext__ctor_m5F36E6944154C93E1D271D4A9C077C8DAB108F86(L_12, L_0, L_7, L_8, L_9, L_10, L_11, NULL);
		V_0 = L_12;
		goto IL_001d;
	}

IL_001d:
	{
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_13 = V_0;
		return L_13;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::FindTerrainTilesUnlimited(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_FindTerrainTilesUnlimited_mC85574536AE3A36A4A9399DAC6F8C5171FAE1433 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, bool ___sharedBoundaryTexel0, bool ___fillOutsideTerrain1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mCDCBE8274E57C349F8AB212087D5581D34E075DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB4F7EBF9F5B2D0C8F2402827427A7E3687D7B2AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAB22E0D0E11D76089DDB513D1C6DEEA986C0EE4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass53_0_U3CFindTerrainTilesUnlimitedU3Eb__0_mA575AAFB77E11432AD4789A5E4DB47EE29ABA676_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139* V_0 = NULL;
	Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* V_1 = NULL;
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_2 = NULL;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B6_2 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	int32_t G_B13_0 = 0;
	{
		U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139* L_0 = (U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass53_0__ctor_mB1DCC08BEBB1B500CAD7277614120E2743B5853E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139* L_1 = V_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2;
		L_2 = PaintContext_get_originTerrain_mCD05E4154C291B8E4400902ABA56B3C017E52338_inline(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = PaintContext_get_pixelSize_m625AE2931B8FBA55050107943314D6202DD930C5_inline(__this, NULL);
		float L_7 = L_6.___x_0;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_8;
		L_8 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_3 = L_8;
		int32_t L_9;
		L_9 = RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B((&V_3), NULL);
		NullCheck(L_1);
		L_1->___minX_1 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_7, ((float)L_9)))));
		U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139* L_10 = V_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11;
		L_11 = PaintContext_get_originTerrain_mCD05E4154C291B8E4400902ABA56B3C017E52338_inline(__this, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = PaintContext_get_pixelSize_m625AE2931B8FBA55050107943314D6202DD930C5_inline(__this, NULL);
		float L_16 = L_15.___y_1;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_17;
		L_17 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_3 = L_17;
		int32_t L_18;
		L_18 = RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B((&V_3), NULL);
		NullCheck(L_10);
		L_10->___minZ_3 = ((float)il2cpp_codegen_add(L_14, ((float)il2cpp_codegen_multiply(L_16, ((float)L_18)))));
		U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139* L_19 = V_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_20;
		L_20 = PaintContext_get_originTerrain_mCD05E4154C291B8E4400902ABA56B3C017E52338_inline(__this, NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = PaintContext_get_pixelSize_m625AE2931B8FBA55050107943314D6202DD930C5_inline(__this, NULL);
		float L_25 = L_24.___x_0;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_26;
		L_26 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_3 = L_26;
		int32_t L_27;
		L_27 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&V_3), NULL);
		NullCheck(L_19);
		L_19->___maxX_0 = ((float)il2cpp_codegen_add(L_23, ((float)il2cpp_codegen_multiply(L_25, ((float)((int32_t)il2cpp_codegen_subtract(L_27, 1)))))));
		U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139* L_28 = V_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_29;
		L_29 = PaintContext_get_originTerrain_mCD05E4154C291B8E4400902ABA56B3C017E52338_inline(__this, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = PaintContext_get_pixelSize_m625AE2931B8FBA55050107943314D6202DD930C5_inline(__this, NULL);
		float L_34 = L_33.___y_1;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_35;
		L_35 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_3 = L_35;
		int32_t L_36;
		L_36 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&V_3), NULL);
		NullCheck(L_28);
		L_28->___maxZ_2 = ((float)il2cpp_codegen_add(L_32, ((float)il2cpp_codegen_multiply(L_34, ((float)((int32_t)il2cpp_codegen_subtract(L_36, 1)))))));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_37;
		L_37 = PaintContext_get_originTerrain_mCD05E4154C291B8E4400902ABA56B3C017E52338_inline(__this, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_37, NULL);
		float L_39 = L_38.___y_3;
		__this->___m_HeightWorldSpaceMin_9 = L_39;
		float L_40 = __this->___m_HeightWorldSpaceMin_9;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_41;
		L_41 = PaintContext_get_originTerrain_mCD05E4154C291B8E4400902ABA56B3C017E52338_inline(__this, NULL);
		NullCheck(L_41);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_42;
		L_42 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_41, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_42, NULL);
		float L_44 = L_43.___y_3;
		__this->___m_HeightWorldSpaceMax_10 = ((float)il2cpp_codegen_add(L_40, L_44));
		U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139* L_45 = V_0;
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_46 = (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055*)il2cpp_codegen_object_new(Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		Predicate_1__ctor_m80A5EFAAAC439A069D5782C725DF325FDD5D891C(L_46, L_45, (intptr_t)((void*)U3CU3Ec__DisplayClass53_0_U3CFindTerrainTilesUnlimitedU3Eb__0_mA575AAFB77E11432AD4789A5E4DB47EE29ABA676_RuntimeMethod_var), NULL);
		V_1 = L_46;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_47;
		L_47 = PaintContext_get_originTerrain_mCD05E4154C291B8E4400902ABA56B3C017E52338_inline(__this, NULL);
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_48 = V_1;
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_49;
		L_49 = TerrainMap_CreateFromConnectedNeighbors_m4AA17A1E61EBA1295BE150640D2D38B0E1EDD739(L_47, L_48, (bool)0, NULL);
		V_2 = L_49;
		List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* L_50 = (List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0*)il2cpp_codegen_object_new(List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		List_1__ctor_mAB22E0D0E11D76089DDB513D1C6DEEA986C0EE4B(L_50, List_1__ctor_mAB22E0D0E11D76089DDB513D1C6DEEA986C0EE4B_RuntimeMethod_var);
		__this->___m_TerrainTiles_8 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TerrainTiles_8), (void*)L_50);
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_51 = V_2;
		V_4 = (bool)((!(((RuntimeObject*)(TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)L_51) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_52 = V_4;
		if (!L_52)
		{
			goto IL_0293;
		}
	}
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_53 = V_2;
		NullCheck(L_53);
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_54;
		L_54 = TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_inline(L_53, NULL);
		NullCheck(L_54);
		Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B L_55;
		L_55 = Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473(L_54, Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473_RuntimeMethod_var);
		V_5 = L_55;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0283:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7((&V_5), Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0275_1;
			}

IL_0166_1:
			{
				KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 L_56;
				L_56 = Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_inline((&V_5), Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_RuntimeMethod_var);
				V_6 = L_56;
				TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_57;
				L_57 = KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_inline((&V_6), KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_RuntimeMethod_var);
				V_7 = L_57;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_58;
				L_58 = KeyValuePair_2_get_Value_mCDCBE8274E57C349F8AB212087D5581D34E075DA_inline((&V_6), KeyValuePair_2_get_Value_mCDCBE8274E57C349F8AB212087D5581D34E075DA_RuntimeMethod_var);
				V_8 = L_58;
				TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_59 = V_7;
				int32_t L_60 = L_59.___tileX_0;
				int32_t L_61;
				L_61 = PaintContext_get_targetTextureWidth_m6ECD3E0E648DBB6632C633E06B5D6037A0B2CFEB_inline(__this, NULL);
				bool L_62 = ___sharedBoundaryTexel0;
				G_B4_0 = L_61;
				G_B4_1 = L_60;
				if (L_62)
				{
					G_B5_0 = L_61;
					G_B5_1 = L_60;
					goto IL_0195_1;
				}
			}
			{
				G_B6_0 = 0;
				G_B6_1 = G_B4_0;
				G_B6_2 = G_B4_1;
				goto IL_0196_1;
			}

IL_0195_1:
			{
				G_B6_0 = 1;
				G_B6_1 = G_B5_0;
				G_B6_2 = G_B5_1;
			}

IL_0196_1:
			{
				V_9 = ((int32_t)il2cpp_codegen_multiply(G_B6_2, ((int32_t)il2cpp_codegen_subtract(G_B6_1, G_B6_0))));
				TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_63 = V_7;
				int32_t L_64 = L_63.___tileZ_1;
				int32_t L_65;
				L_65 = PaintContext_get_targetTextureHeight_m4975CA86AC71297D69844835B8D006174F806240_inline(__this, NULL);
				bool L_66 = ___sharedBoundaryTexel0;
				G_B7_0 = L_65;
				G_B7_1 = L_64;
				if (L_66)
				{
					G_B8_0 = L_65;
					G_B8_1 = L_64;
					goto IL_01ad_1;
				}
			}
			{
				G_B9_0 = 0;
				G_B9_1 = G_B7_0;
				G_B9_2 = G_B7_1;
				goto IL_01ae_1;
			}

IL_01ad_1:
			{
				G_B9_0 = 1;
				G_B9_1 = G_B8_0;
				G_B9_2 = G_B8_1;
			}

IL_01ae_1:
			{
				V_10 = ((int32_t)il2cpp_codegen_multiply(G_B9_2, ((int32_t)il2cpp_codegen_subtract(G_B9_1, G_B9_0))));
				int32_t L_67 = V_9;
				int32_t L_68 = V_10;
				int32_t L_69;
				L_69 = PaintContext_get_targetTextureWidth_m6ECD3E0E648DBB6632C633E06B5D6037A0B2CFEB_inline(__this, NULL);
				int32_t L_70;
				L_70 = PaintContext_get_targetTextureHeight_m4975CA86AC71297D69844835B8D006174F806240_inline(__this, NULL);
				RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&V_11), L_67, L_68, L_69, L_70, NULL);
				RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_71;
				L_71 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
				V_3 = L_71;
				RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_72 = V_11;
				bool L_73;
				L_73 = RectInt_Overlaps_m9E82E1C8BFDA3297221E5FDC8B8773AD3F50C4EE((&V_3), L_72, NULL);
				V_12 = L_73;
				bool L_74 = V_12;
				if (!L_74)
				{
					goto IL_0274_1;
				}
			}
			{
				bool L_75 = ___fillOutsideTerrain1;
				if (L_75)
				{
					goto IL_01e9_1;
				}
			}
			{
				G_B13_0 = 0;
				goto IL_01fa_1;
			}

IL_01e9_1:
			{
				int32_t L_76;
				L_76 = PaintContext_get_targetTextureWidth_m6ECD3E0E648DBB6632C633E06B5D6037A0B2CFEB_inline(__this, NULL);
				int32_t L_77;
				L_77 = PaintContext_get_targetTextureHeight_m4975CA86AC71297D69844835B8D006174F806240_inline(__this, NULL);
				int32_t L_78;
				L_78 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_76, L_77, NULL);
				G_B13_0 = L_78;
			}

IL_01fa_1:
			{
				V_13 = G_B13_0;
				List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* L_79 = __this->___m_TerrainTiles_8;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_80 = V_8;
				int32_t L_81 = V_9;
				int32_t L_82 = V_10;
				RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_83;
				L_83 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
				int32_t L_84;
				L_84 = PaintContext_get_targetTextureWidth_m6ECD3E0E648DBB6632C633E06B5D6037A0B2CFEB_inline(__this, NULL);
				int32_t L_85;
				L_85 = PaintContext_get_targetTextureHeight_m4975CA86AC71297D69844835B8D006174F806240_inline(__this, NULL);
				int32_t L_86 = V_13;
				TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_87;
				L_87 = TerrainTile_Make_m464414DF78B623306730F00C6DDE305D9A46AEFD(L_80, L_81, L_82, L_83, L_84, L_85, L_86, NULL);
				NullCheck(L_79);
				List_1_Add_mB4F7EBF9F5B2D0C8F2402827427A7E3687D7B2AB_inline(L_79, L_87, List_1_Add_mB4F7EBF9F5B2D0C8F2402827427A7E3687D7B2AB_RuntimeMethod_var);
				float L_88 = __this->___m_HeightWorldSpaceMin_9;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_89 = V_8;
				NullCheck(L_89);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
				L_90 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_89, NULL);
				float L_91 = L_90.___y_3;
				float L_92;
				L_92 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_88, L_91, NULL);
				__this->___m_HeightWorldSpaceMin_9 = L_92;
				float L_93 = __this->___m_HeightWorldSpaceMax_10;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_94 = V_8;
				NullCheck(L_94);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
				L_95 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_94, NULL);
				float L_96 = L_95.___y_3;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_97 = V_8;
				NullCheck(L_97);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_98;
				L_98 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_97, NULL);
				NullCheck(L_98);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
				L_99 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_98, NULL);
				float L_100 = L_99.___y_3;
				float L_101;
				L_101 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_93, ((float)il2cpp_codegen_add(L_96, L_100)), NULL);
				__this->___m_HeightWorldSpaceMax_10 = L_101;
			}

IL_0274_1:
			{
			}

IL_0275_1:
			{
				bool L_102;
				L_102 = Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4((&V_5), Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4_RuntimeMethod_var);
				if (L_102)
				{
					goto IL_0166_1;
				}
			}
			{
				goto IL_0292;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0292:
	{
	}

IL_0293:
	{
		return;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::CreateRenderTargets(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_CreateRenderTargets_m08252C94D832923CD0F129B6EEA1305DEAF18BB5 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, int32_t ___colorFormat0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFB3ECFDC368B3D96AB71F25CBBA30104A45C279);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0;
		L_0 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1;
		L_1 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = PaintContext_ClampContextResolution_m90A8DECD94A9CBDA1BA2ABB4AF30B2D4A3C241B6(L_1, NULL);
		V_0 = L_2;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_3;
		L_3 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_2 = L_3;
		int32_t L_4;
		L_4 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&V_2), NULL);
		int32_t L_5;
		L_5 = PaintContext_ClampContextResolution_m90A8DECD94A9CBDA1BA2ABB4AF30B2D4A3C241B6(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_0;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_7;
		L_7 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_2 = L_7;
		int32_t L_8;
		L_8 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&V_2), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_9 = V_1;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_10;
		L_10 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_2 = L_10;
		int32_t L_11;
		L_11 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&V_2), NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B3_0 = 1;
	}

IL_0051:
	{
		V_3 = (bool)G_B3_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_00b3;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_15;
		L_15 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_2 = L_15;
		int32_t L_16;
		L_16 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&V_2), NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_14;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_20;
		L_20 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_2 = L_20;
		int32_t L_21;
		L_21 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&V_2), NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_19;
		int32_t L_25 = ((int32_t)8192);
		RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_24;
		int32_t L_28 = ((int32_t)8192);
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralEFB3ECFDC368B3D96AB71F25CBBA30104A45C279, L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_30, NULL);
	}

IL_00b3:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = ___colorFormat0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34;
		L_34 = RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45(L_31, L_32, ((int32_t)16), L_33, 1, NULL);
		PaintContext_set_sourceRenderTexture_m729A4274969D259E689DA526313697ACA2299CD6_inline(__this, L_34, NULL);
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		int32_t L_37 = ___colorFormat0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38;
		L_38 = RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45(L_35, L_36, 0, L_37, 1, NULL);
		PaintContext_set_destinationRenderTexture_mE0DC8FD99A811C95223A9F7F0082D139EE3CF4CC_inline(__this, L_38, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39;
		L_39 = PaintContext_get_sourceRenderTexture_m45B68671807EA82C3333635B0C5BB8F5D5161B86_inline(__this, NULL);
		NullCheck(L_39);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_39, 1, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40;
		L_40 = PaintContext_get_sourceRenderTexture_m45B68671807EA82C3333635B0C5BB8F5D5161B86_inline(__this, NULL);
		NullCheck(L_40);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_40, 0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41;
		L_41 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		PaintContext_set_oldRenderTexture_m911313349E453DD49EC9DB4606E9A4E5C86BC043_inline(__this, L_41, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::Cleanup(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_Cleanup_mEB09BBB29CF7FBC5E11FC63BB2A3D651B27EB28A (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, bool ___restoreRenderTexture0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = ___restoreRenderTexture0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2;
		L_2 = PaintContext_get_oldRenderTexture_mBE3586662ED5A1DA7AB82FC7FB01D674095E48EA_inline(__this, NULL);
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_2, NULL);
	}

IL_0012:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3;
		L_3 = PaintContext_get_sourceRenderTexture_m45B68671807EA82C3333635B0C5BB8F5D5161B86_inline(__this, NULL);
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_3, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(__this, NULL);
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_4, NULL);
		PaintContext_set_sourceRenderTexture_m729A4274969D259E689DA526313697ACA2299CD6_inline(__this, (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		PaintContext_set_destinationRenderTexture_mE0DC8FD99A811C95223A9F7F0082D139EE3CF4CC_inline(__this, (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		PaintContext_set_oldRenderTexture_m911313349E453DD49EC9DB4606E9A4E5C86BC043_inline(__this, (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::GatherInternal(System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.Texture>,UnityEngine.Color,System.String,UnityEngine.Material,System.Int32,System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>,System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_GatherInternal_mB58AFCC343495B1A7E2D742CFD75F337A6FE781D (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388* ___terrainToTexture0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultColor1, String_t* ___operationName2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___blitMaterial3, int32_t ___blitPass4, Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* ___beforeBlit5, Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* ___afterBlit6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0074ED2BF6C71F0D8CDC4792F07C3D6A50B55597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE580C229C3B24A65C1A6825C90AC4FF372F2F9AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9880653A5F8B40A8D3A95F888E48D154DD500782);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* V_3 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___blitMaterial3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = TerrainPaintUtility_GetBlitMaterial_mE30CA5859A38CD72365ADAAF487060AA531FB583(NULL);
		___blitMaterial3 = L_3;
	}

IL_0014:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = PaintContext_get_sourceRenderTexture_m45B68671807EA82C3333635B0C5BB8F5D5161B86_inline(__this, NULL);
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___defaultColor1;
		GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09((bool)1, (bool)1, L_5, NULL);
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_6;
		L_6 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_1 = L_6;
		int32_t L_7;
		L_7 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&V_1), NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_8;
		L_8 = PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline(__this, NULL);
		V_1 = L_8;
		int32_t L_9;
		L_9 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&V_1), NULL);
		GL_LoadPixelMatrix_mF1C5A4508C5F110512C116A5DDE7AB0483FE961A((0.0f), ((float)L_7), (0.0f), ((float)L_9), NULL);
		V_2 = 0;
		goto IL_0180;
	}

IL_0064:
	{
		List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* L_10 = __this->___m_TerrainTiles_8;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_12;
		L_12 = List_1_get_Item_mE580C229C3B24A65C1A6825C90AC4FF372F2F9AA(L_10, L_11, List_1_get_Item_mE580C229C3B24A65C1A6825C90AC4FF372F2F9AA_RuntimeMethod_var);
		V_3 = L_12;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_13 = V_3;
		NullCheck(L_13);
		bool L_14 = L_13->___gatherEnable_7;
		V_6 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_017c;
	}

IL_0086:
	{
		Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388* L_16 = ___terrainToTexture0;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_17 = V_3;
		NullCheck(L_16);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_18;
		L_18 = Func_2_Invoke_mE5F3EEC8C9580C62DD4170B4E520030F92C0C14A_inline(L_16, L_17, NULL);
		V_4 = L_18;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_20)
		{
			goto IL_00a4;
		}
	}
	{
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_21 = V_3;
		NullCheck(L_21);
		bool L_22 = L_21->___gatherEnable_7;
		G_B8_0 = ((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B8_0 = 1;
	}

IL_00a5:
	{
		V_7 = (bool)G_B8_0;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_017c;
	}

IL_00b0:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_24 = V_4;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		int32_t L_26;
		L_26 = PaintContext_get_targetTextureWidth_m6ECD3E0E648DBB6632C633E06B5D6037A0B2CFEB_inline(__this, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00d3;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_27 = V_4;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_27);
		int32_t L_29;
		L_29 = PaintContext_get_targetTextureHeight_m4975CA86AC71297D69844835B8D006174F806240_inline(__this, NULL);
		G_B13_0 = ((((int32_t)((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d4;
	}

IL_00d3:
	{
		G_B13_0 = 1;
	}

IL_00d4:
	{
		V_8 = (bool)G_B13_0;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00f7;
		}
	}
	{
		String_t* L_31 = ___operationName2;
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_31, _stringLiteral9880653A5F8B40A8D3A95F888E48D154DD500782, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_33 = V_3;
		NullCheck(L_33);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_34 = L_33->___terrain_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_32, L_34, NULL);
		goto IL_017c;
	}

IL_00f7:
	{
		Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* L_35 = ___beforeBlit5;
		if (L_35)
		{
			goto IL_00fd;
		}
	}
	{
		goto IL_0106;
	}

IL_00fd:
	{
		Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* L_36 = ___beforeBlit5;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_37 = V_3;
		NullCheck(L_36);
		Action_1_Invoke_mC96F61A9C330ED26B44AFA411AF8BD161AB20D18_inline(L_36, L_37, NULL);
	}

IL_0106:
	{
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_38 = V_3;
		NullCheck(L_38);
		bool L_39 = L_38->___gatherEnable_7;
		V_9 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_0117;
		}
	}
	{
		goto IL_017c;
	}

IL_0117:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_41 = V_4;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Texture_get_filterMode_mFEF0AEA29E8468450EF85533965DCEBE66D02A45(L_41, NULL);
		V_5 = L_42;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_43 = V_4;
		NullCheck(L_43);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_43, 0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = ___blitMaterial3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_45 = V_4;
		NullCheck(L_44);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_44, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_45, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = ___blitMaterial3;
		int32_t L_47 = ___blitPass4;
		NullCheck(L_46);
		bool L_48;
		L_48 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_46, L_47, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_49 = V_3;
		NullCheck(L_49);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_50 = L_49->___clippedPCPixels_3;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_51 = V_3;
		NullCheck(L_51);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_52 = L_51->___paddedPCPixels_5;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_53 = V_3;
		NullCheck(L_53);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_54 = L_53->___clippedTerrainPixels_2;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_55 = V_3;
		NullCheck(L_55);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_56 = L_55->___paddedTerrainPixels_4;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_57 = V_4;
		TerrainPaintUtility_DrawQuadPadded_m48168E3A5DF4E5063D290556E06E8FF75EDD1552(L_50, L_52, L_54, L_56, L_57, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_58 = V_4;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_58, L_59, NULL);
		Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* L_60 = ___afterBlit6;
		if (L_60)
		{
			goto IL_0172;
		}
	}
	{
		goto IL_017b;
	}

IL_0172:
	{
		Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* L_61 = ___afterBlit6;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_62 = V_3;
		NullCheck(L_61);
		Action_1_Invoke_mC96F61A9C330ED26B44AFA411AF8BD161AB20D18_inline(L_61, L_62, NULL);
	}

IL_017b:
	{
	}

IL_017c:
	{
		int32_t L_63 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0180:
	{
		int32_t L_64 = V_2;
		List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* L_65 = __this->___m_TerrainTiles_8;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = List_1_get_Count_m0074ED2BF6C71F0D8CDC4792F07C3D6A50B55597_inline(L_65, List_1_get_Count_m0074ED2BF6C71F0D8CDC4792F07C3D6A50B55597_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_64) < ((int32_t)L_66))? 1 : 0);
		bool L_67 = V_10;
		if (L_67)
		{
			goto IL_0064;
		}
	}
	{
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_68;
		L_68 = PaintContext_get_oldRenderTexture_mBE3586662ED5A1DA7AB82FC7FB01D674095E48EA_inline(__this, NULL);
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_68, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::ScatterInternal(System.Func`2<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.RenderTexture>,System.String,UnityEngine.Material,System.Int32,System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>,System.Action`1<UnityEngine.TerrainTools.PaintContext/ITerrainInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_ScatterInternal_m18C7B496911CC4C7C95E40A6220B1ACCE8427149 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF* ___terrainToRT0, String_t* ___operationName1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___blitMaterial2, int32_t ___blitPass3, Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* ___beforeBlit4, Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* ___afterBlit5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0074ED2BF6C71F0D8CDC4792F07C3D6A50B55597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE580C229C3B24A65C1A6825C90AC4FF372F2F9AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA7A6A7838927EC05FCD093F480B2A3B6BD8DB7);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* V_3 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0;
		L_0 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		V_0 = L_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___blitMaterial2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = TerrainPaintUtility_GetBlitMaterial_mE30CA5859A38CD72365ADAAF487060AA531FB583(NULL);
		___blitMaterial2 = L_4;
	}

IL_0019:
	{
		V_2 = 0;
		goto IL_017b;
	}

IL_0020:
	{
		List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* L_5 = __this->___m_TerrainTiles_8;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_7;
		L_7 = List_1_get_Item_mE580C229C3B24A65C1A6825C90AC4FF372F2F9AA(L_5, L_6, List_1_get_Item_mE580C229C3B24A65C1A6825C90AC4FF372F2F9AA_RuntimeMethod_var);
		V_3 = L_7;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_8 = V_3;
		NullCheck(L_8);
		bool L_9 = L_8->___scatterEnable_8;
		V_5 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		goto IL_0177;
	}

IL_0042:
	{
		Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF* L_11 = ___terrainToRT0;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_12 = V_3;
		NullCheck(L_11);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13;
		L_13 = Func_2_Invoke_mE440B1F81FAF30DBBB1DDB969EAD0E8AC6C06278_inline(L_11, L_12, NULL);
		V_4 = L_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_15)
		{
			goto IL_0060;
		}
	}
	{
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_16 = V_3;
		NullCheck(L_16);
		bool L_17 = L_16->___scatterEnable_8;
		G_B8_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B8_0 = 1;
	}

IL_0061:
	{
		V_6 = (bool)G_B8_0;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_006c;
		}
	}
	{
		goto IL_0177;
	}

IL_006c:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = V_4;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_19);
		int32_t L_21;
		L_21 = PaintContext_get_targetTextureWidth_m6ECD3E0E648DBB6632C633E06B5D6037A0B2CFEB_inline(__this, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_008f;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = V_4;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_22);
		int32_t L_24;
		L_24 = PaintContext_get_targetTextureHeight_m4975CA86AC71297D69844835B8D006174F806240_inline(__this, NULL);
		G_B13_0 = ((((int32_t)((((int32_t)L_23) == ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0090;
	}

IL_008f:
	{
		G_B13_0 = 1;
	}

IL_0090:
	{
		V_7 = (bool)G_B13_0;
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		String_t* L_26 = ___operationName1;
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_26, _stringLiteralCEA7A6A7838927EC05FCD093F480B2A3B6BD8DB7, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_28 = V_3;
		NullCheck(L_28);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_29 = L_28->___terrain_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_27, L_29, NULL);
		goto IL_0177;
	}

IL_00b3:
	{
		Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* L_30 = ___beforeBlit4;
		if (L_30)
		{
			goto IL_00b9;
		}
	}
	{
		goto IL_00c2;
	}

IL_00b9:
	{
		Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* L_31 = ___beforeBlit4;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_32 = V_3;
		NullCheck(L_31);
		Action_1_Invoke_mC96F61A9C330ED26B44AFA411AF8BD161AB20D18_inline(L_31, L_32, NULL);
	}

IL_00c2:
	{
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_33 = V_3;
		NullCheck(L_33);
		bool L_34 = L_33->___scatterEnable_8;
		V_8 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_0177;
	}

IL_00d6:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = V_4;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_36, NULL);
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = V_4;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_37);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = V_4;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_39);
		GL_LoadPixelMatrix_mF1C5A4508C5F110512C116A5DDE7AB0483FE961A((0.0f), ((float)L_38), (0.0f), ((float)L_40), NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41;
		L_41 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(__this, NULL);
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Texture_get_filterMode_mFEF0AEA29E8468450EF85533965DCEBE66D02A45(L_41, NULL);
		V_9 = L_42;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43;
		L_43 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(__this, NULL);
		NullCheck(L_43);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_43, 0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = ___blitMaterial2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45;
		L_45 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(__this, NULL);
		NullCheck(L_44);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_44, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_45, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = ___blitMaterial2;
		int32_t L_47 = ___blitPass3;
		NullCheck(L_46);
		bool L_48;
		L_48 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_46, L_47, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_49 = V_3;
		NullCheck(L_49);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_50 = L_49->___clippedTerrainPixels_2;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_51 = V_3;
		NullCheck(L_51);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_52 = L_51->___clippedPCPixels_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53;
		L_53 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(__this, NULL);
		TerrainPaintUtility_DrawQuad_m3DF46A679C95B544FD1CA783020DFDFDA084728B(L_50, L_52, L_53, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_54;
		L_54 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(__this, NULL);
		int32_t L_55 = V_9;
		NullCheck(L_54);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_54, L_55, NULL);
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* L_56 = ___afterBlit5;
		if (L_56)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0176;
	}

IL_016d:
	{
		Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* L_57 = ___afterBlit5;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_58 = V_3;
		NullCheck(L_57);
		Action_1_Invoke_mC96F61A9C330ED26B44AFA411AF8BD161AB20D18_inline(L_57, L_58, NULL);
	}

IL_0176:
	{
	}

IL_0177:
	{
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_017b:
	{
		int32_t L_60 = V_2;
		List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* L_61 = __this->___m_TerrainTiles_8;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = List_1_get_Count_m0074ED2BF6C71F0D8CDC4792F07C3D6A50B55597_inline(L_61, List_1_get_Count_m0074ED2BF6C71F0D8CDC4792F07C3D6A50B55597_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_60) < ((int32_t)L_62))? 1 : 0);
		bool L_63 = V_10;
		if (L_63)
		{
			goto IL_0020;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_64 = V_0;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_64, NULL);
		return;
	}
}
// UnityEngine.TerrainTools.PaintContext/SplatmapUserData UnityEngine.TerrainTools.PaintContext::GetTerrainLayerUserData(UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.TerrainLayer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* PaintContext_GetTerrainLayerUserData_m2816B0CA7CA72A0492887923DE89F9382877E632 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, RuntimeObject* ___context0, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___terrainLayer1, bool ___addLayerIfDoesntExist2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98B1E8B42397703EC7F8F6F13F2D3A787AF7C6EA);
		s_Il2CppMethodInitialized = true;
	}
	SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1* G_B12_0 = NULL;
	Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1* G_B11_0 = NULL;
	{
		RuntimeObject* L_0 = ___context0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_userData() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_0);
		V_0 = ((SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A*)IsInstClass((RuntimeObject*)L_1, SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A_il2cpp_TypeInfo_var));
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_4 = ___terrainLayer1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_6 = ___terrainLayer1;
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_7 = V_0;
		NullCheck(L_7);
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_8 = L_7->___terrainLayer_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, L_8, NULL);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 1;
	}

IL_002e:
	{
		V_2 = (bool)G_B4_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_11 = V_0;
		V_3 = L_11;
		goto IL_00e5;
	}

IL_0039:
	{
		V_0 = (SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A*)NULL;
	}

IL_003c:
	{
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_12 = V_0;
		V_4 = (bool)((((RuntimeObject*)(SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00e1;
		}
	}
	{
		V_5 = (-1);
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_14 = ___terrainLayer1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_009f;
		}
	}
	{
		RuntimeObject* L_17 = ___context0;
		NullCheck(L_17);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_18;
		L_18 = InterfaceFuncInvoker0< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(0 /* UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_terrain() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_17);
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_19 = ___terrainLayer1;
		int32_t L_20;
		L_20 = TerrainPaintUtility_FindTerrainLayerIndex_mF21091EAB56A8C467F80D187A800D1288FDB135A(L_18, L_19, NULL);
		V_5 = L_20;
		int32_t L_21 = V_5;
		bool L_22 = ___addLayerIfDoesntExist2;
		V_7 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)(-1)))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_009e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1* L_24 = ((PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_StaticFields*)il2cpp_codegen_static_fields_for(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var))->___onTerrainTileBeforePaint_11;
		Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1* L_25 = L_24;
		G_B11_0 = L_25;
		if (L_25)
		{
			G_B12_0 = L_25;
			goto IL_0082;
		}
	}
	{
		goto IL_008f;
	}

IL_0082:
	{
		RuntimeObject* L_26 = ___context0;
		NullCheck(G_B12_0);
		Action_3_Invoke_m1431490CF901662B5CE5063E01732C19B4A8CE78_inline(G_B12_0, L_26, 8, _stringLiteral98B1E8B42397703EC7F8F6F13F2D3A787AF7C6EA, NULL);
	}

IL_008f:
	{
		RuntimeObject* L_27 = ___context0;
		NullCheck(L_27);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_28;
		L_28 = InterfaceFuncInvoker0< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(0 /* UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_terrain() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_27);
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_29 = ___terrainLayer1;
		int32_t L_30;
		L_30 = TerrainPaintUtility_AddTerrainLayer_mF5232126EC2C8B14BBC0ACDA0AD60652002DEC0A(L_28, L_29, NULL);
		V_5 = L_30;
	}

IL_009e:
	{
	}

IL_009f:
	{
		int32_t L_31 = V_5;
		V_8 = (bool)((((int32_t)((((int32_t)L_31) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_33 = (SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A*)il2cpp_codegen_object_new(SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		SplatmapUserData__ctor_m8B0FF764C4FB0A470238FF13FBDAD970DEDCD713(L_33, NULL);
		V_0 = L_33;
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_34 = V_0;
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_35 = ___terrainLayer1;
		NullCheck(L_34);
		L_34->___terrainLayer_0 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___terrainLayer_0), (void*)L_35);
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		L_36->___terrainLayerIndex_1 = L_37;
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		L_38->___mapIndex_2 = ((int32_t)(L_39>>2));
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		L_40->___channelIndex_3 = ((int32_t)(L_41&3));
	}

IL_00d8:
	{
		RuntimeObject* L_42 = ___context0;
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_43 = V_0;
		NullCheck(L_42);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void UnityEngine.TerrainTools.PaintContext/ITerrainInfo::set_userData(System.Object) */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_42, L_43);
	}

IL_00e1:
	{
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_44 = V_0;
		V_3 = L_44;
		goto IL_00e5;
	}

IL_00e5:
	{
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_45 = V_3;
		return L_45;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::GatherAlphamap(UnityEngine.TerrainLayer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_GatherAlphamap_m9CF436C1D0D163692E9EDF27958A1704D06E3F44 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___inputLayer0, bool ___addLayerIfDoesntExist1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC64EF7470FE34EAB51143802BA08555322D68183_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass66_0_U3CGatherAlphamapU3Eb__0_m267E46A16FA8D4413C38D05DB8E68C242563046F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass66_0_U3CGatherAlphamapU3Eb__1_mC736CCFD74BEA0444925BA18C5D877590161F531_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DF22AE5731F8A9F01D8A152804E1D3A0078E712);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* L_0 = (U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass66_0__ctor_m7546F25D02A8C4AE3CA8A1966E400F3C3DCC3FF3(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* L_2 = V_0;
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_3 = ___inputLayer0;
		NullCheck(L_2);
		L_2->___inputLayer_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___inputLayer_1), (void*)L_3);
		U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* L_4 = V_0;
		bool L_5 = ___addLayerIfDoesntExist1;
		NullCheck(L_4);
		L_4->___addLayerIfDoesntExist_2 = L_5;
		U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* L_6 = V_0;
		NullCheck(L_6);
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_7 = L_6->___inputLayer_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_010d;
	}

IL_0031:
	{
		U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* L_10 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = TerrainPaintUtility_GetCopyTerrainLayerMaterial_m4AE79A9122DBF2DF8A4932CBA9E2D7347CDACDA6(NULL);
		NullCheck(L_10);
		L_10->___copyTerrainLayerMaterial_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___copyTerrainLayerMaterial_3), (void*)L_11);
		U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* L_12 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_13 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_14 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_15), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_15);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = L_14;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_17), (0.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_17);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_18 = L_16;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_19), (0.0f), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_19);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_20 = L_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_21), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_21);
		NullCheck(L_12);
		L_12->___layerMasks_4 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___layerMasks_4), (void*)L_20);
		U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* L_22 = V_0;
		Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388* L_23 = (Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388*)il2cpp_codegen_object_new(Func_2_t2017061DB19525FE8D3726EB81E483D8660B0388_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Func_2__ctor_m3996E8EAFEEF7FD36E4DDD62A6461977D3C01167(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass66_0_U3CGatherAlphamapU3Eb__0_m267E46A16FA8D4413C38D05DB8E68C242563046F_RuntimeMethod_var), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_24), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* L_25 = V_0;
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = L_25->___copyTerrainLayerMaterial_3;
		U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* L_27 = V_0;
		Action_1_tC64EF7470FE34EAB51143802BA08555322D68183* L_28 = (Action_1_tC64EF7470FE34EAB51143802BA08555322D68183*)il2cpp_codegen_object_new(Action_1_tC64EF7470FE34EAB51143802BA08555322D68183_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Action_1__ctor_m32733FF0FDFC25B3EB123B6213BBAFBBBB0B63C0(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass66_0_U3CGatherAlphamapU3Eb__1_mC736CCFD74BEA0444925BA18C5D877590161F531_RuntimeMethod_var), NULL);
		PaintContext_GatherInternal_mB58AFCC343495B1A7E2D742CFD75F337A6FE781D(__this, L_23, L_24, _stringLiteral3DF22AE5731F8A9F01D8A152804E1D3A0078E712, L_26, 0, L_28, (Action_1_tC64EF7470FE34EAB51143802BA08555322D68183*)NULL, NULL);
	}

IL_010d:
	{
		return;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::ScatterAlphamap(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_ScatterAlphamap_m207A3E71E8014A4639C37905471D1F9C85404C91 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, String_t* ___editorUndoName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass67_0_U3CScatterAlphamapU3Eb__0_m9ABB337FFDEF8CA150010C341050F1ACE434ED78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EC33D76B6E40DB2D9C9B1D741C841FF949C8A2B);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* V_0 = NULL;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* L_0 = (U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass67_0__ctor_mF166EB7437F0888686AA463B2ED545AB463B15E6(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* L_2 = V_0;
		String_t* L_3 = ___editorUndoName0;
		NullCheck(L_2);
		L_2->___editorUndoName_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___editorUndoName_1), (void*)L_3);
		U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* L_4 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_7), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_7);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = L_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_9), (0.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_9);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = L_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_11), (0.0f), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_11);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = L_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_13), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_13);
		NullCheck(L_4);
		L_4->___layerMasks_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___layerMasks_4), (void*)L_12);
		U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* L_14 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = TerrainPaintUtility_GetCopyTerrainLayerMaterial_m4AE79A9122DBF2DF8A4932CBA9E2D7347CDACDA6(NULL);
		NullCheck(L_14);
		L_14->___copyTerrainLayerMaterial_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___copyTerrainLayerMaterial_3), (void*)L_15);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16;
		L_16 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18;
		L_18 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(__this, NULL);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		RenderTextureDescriptor__ctor_m8B0D32DC550540B5546891C2F6300F384D6FE692((&V_1), L_17, L_19, 8, 0, NULL);
		RenderTextureDescriptor_set_sRGB_mAB7A494EE8C496C22B3BBBCB90488312D46F3429((&V_1), (bool)0, NULL);
		RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539((&V_1), (bool)0, NULL);
		RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414((&V_1), (bool)0, NULL);
		U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* L_20 = V_0;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_21 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22;
		L_22 = RenderTexture_GetTemporary_mA8C827B80D3C07D0B8CDF7F5270FB5D3E53DD235(L_21, NULL);
		NullCheck(L_20);
		L_20->___tempTarget_2 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___tempTarget_2), (void*)L_22);
		U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* L_23 = V_0;
		Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF* L_24 = (Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF*)il2cpp_codegen_object_new(Func_2_t930648FC8A12D5C5290D453AB49C663FB4E884AF_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Func_2__ctor_mE68EA6637EDE9D031FBFBB3CA0E3BACCA29939A9(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass67_0_U3CScatterAlphamapU3Eb__0_m9ABB337FFDEF8CA150010C341050F1ACE434ED78_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* L_25 = V_0;
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = L_25->___copyTerrainLayerMaterial_3;
		PaintContext_ScatterInternal_m18C7B496911CC4C7C95E40A6220B1ACCE8427149(__this, L_24, _stringLiteral9EC33D76B6E40DB2D9C9B1D741C841FF949C8A2B, L_26, 0, (Action_1_tC64EF7470FE34EAB51143802BA08555322D68183*)NULL, (Action_1_tC64EF7470FE34EAB51143802BA08555322D68183*)NULL, NULL);
		U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* L_27 = V_0;
		NullCheck(L_27);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_28 = L_27->___tempTarget_2;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_28, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::OnTerrainPainted(UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.TerrainTools.PaintContext/ToolAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext_OnTerrainPainted_mA6BF9D65B8EA95D18E69FBC02D538588DEF3385E (RuntimeObject* ___tile0, int32_t ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB316F08C671DB4B5CE814339D5236BEFFDD7B6A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF634C1C87C0A161D8F03DDBC06493CAF8F48FACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6BD21F2AD5ED8CB1F0769C273903EF6323066EE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m7AF2F09D09EFA8DB2E2A396853C9B9FCFA885F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		V_0 = 0;
		goto IL_0052;
	}

IL_0005:
	{
		RuntimeObject* L_0 = ___tile0;
		NullCheck(L_0);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1;
		L_1 = InterfaceFuncInvoker0< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(0 /* UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_terrain() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_0);
		il2cpp_codegen_runtime_class_init_inline(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* L_2 = ((PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_StaticFields*)il2cpp_codegen_static_fields_for(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var))->___s_PaintedTerrain_12;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 L_4;
		L_4 = List_1_get_Item_m6BD21F2AD5ED8CB1F0769C273903EF6323066EE5(L_2, L_3, List_1_get_Item_m6BD21F2AD5ED8CB1F0769C273903EF6323066EE5_RuntimeMethod_var);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5 = L_4.___terrain_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* L_8 = ((PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_StaticFields*)il2cpp_codegen_static_fields_for(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var))->___s_PaintedTerrain_12;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 L_10;
		L_10 = List_1_get_Item_m6BD21F2AD5ED8CB1F0769C273903EF6323066EE5(L_8, L_9, List_1_get_Item_m6BD21F2AD5ED8CB1F0769C273903EF6323066EE5_RuntimeMethod_var);
		V_2 = L_10;
		int32_t* L_11 = (&(&V_2)->___action_1);
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___action1;
		*((int32_t*)L_12) = (int32_t)((int32_t)(L_13|(int32_t)L_14));
		List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* L_15 = ((PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_StaticFields*)il2cpp_codegen_static_fields_for(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var))->___s_PaintedTerrain_12;
		int32_t L_16 = V_0;
		PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 L_17 = V_2;
		NullCheck(L_15);
		List_1_set_Item_m7AF2F09D09EFA8DB2E2A396853C9B9FCFA885F39(L_15, L_16, L_17, List_1_set_Item_m7AF2F09D09EFA8DB2E2A396853C9B9FCFA885F39_RuntimeMethod_var);
		goto IL_008d;
	}

IL_004d:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* L_20 = ((PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_StaticFields*)il2cpp_codegen_static_fields_for(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var))->___s_PaintedTerrain_12;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mF634C1C87C0A161D8F03DDBC06493CAF8F48FACF_inline(L_20, List_1_get_Count_mF634C1C87C0A161D8F03DDBC06493CAF8F48FACF_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_19) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0005;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* L_23 = ((PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_StaticFields*)il2cpp_codegen_static_fields_for(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var))->___s_PaintedTerrain_12;
		il2cpp_codegen_initobj((&V_4), sizeof(PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8));
		RuntimeObject* L_24 = ___tile0;
		NullCheck(L_24);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_25;
		L_25 = InterfaceFuncInvoker0< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(0 /* UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_terrain() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_24);
		(&V_4)->___terrain_0 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___terrain_0), (void*)L_25);
		int32_t L_26 = ___action1;
		(&V_4)->___action_1 = L_26;
		PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 L_27 = V_4;
		NullCheck(L_23);
		List_1_Add_mB316F08C671DB4B5CE814339D5236BEFFDD7B6A1_inline(L_23, L_27, List_1_Add_mB316F08C671DB4B5CE814339D5236BEFFDD7B6A1_RuntimeMethod_var);
	}

IL_008d:
	{
		return;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaintContext__cctor_m381829AD174E3AB512452C6158E625AC70AEF66B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m08DF3D3EC2558D76C9D5DA8243F6B45BAA39BFA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* L_0 = (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5*)il2cpp_codegen_object_new(List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m08DF3D3EC2558D76C9D5DA8243F6B45BAA39BFA3(L_0, List_1__ctor_m08DF3D3EC2558D76C9D5DA8243F6B45BAA39BFA3_RuntimeMethod_var);
		((PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_StaticFields*)il2cpp_codegen_static_fields_for(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var))->___s_PaintedTerrain_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_StaticFields*)il2cpp_codegen_static_fields_for(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var))->___s_PaintedTerrain_12), (void*)L_0);
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
// UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/TerrainTile::UnityEngine.TerrainTools.PaintContext.ITerrainInfo.get_terrain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* TerrainTile_UnityEngine_TerrainTools_PaintContext_ITerrainInfo_get_terrain_m2B00DE94A36AD70ED919E482E7B45A88C6524D27 (TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* __this, const RuntimeMethod* method) 
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_0 = NULL;
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = __this->___terrain_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext/TerrainTile::UnityEngine.TerrainTools.PaintContext.ITerrainInfo.get_clippedTerrainPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 TerrainTile_UnityEngine_TerrainTools_PaintContext_ITerrainInfo_get_clippedTerrainPixels_mF4756DB3495110649E77905E24EDADBF345CBE02 (TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* __this, const RuntimeMethod* method) 
{
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0 = __this->___clippedTerrainPixels_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext/TerrainTile::UnityEngine.TerrainTools.PaintContext.ITerrainInfo.get_clippedPCPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 TerrainTile_UnityEngine_TerrainTools_PaintContext_ITerrainInfo_get_clippedPCPixels_m58D39841BC4DDD19502995895D3BC6990618798F (TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* __this, const RuntimeMethod* method) 
{
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0 = __this->___clippedPCPixels_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.TerrainTools.PaintContext/TerrainTile::UnityEngine.TerrainTools.PaintContext.ITerrainInfo.get_userData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TerrainTile_UnityEngine_TerrainTools_PaintContext_ITerrainInfo_get_userData_m8A130E699EDBE85C316C4DE83C1E3429D117F0DD (TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___userData_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext/TerrainTile::UnityEngine.TerrainTools.PaintContext.ITerrainInfo.set_userData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile_UnityEngine_TerrainTools_PaintContext_ITerrainInfo_set_userData_m0118BB95E521E20483826CC9D336DA2D74715A8B (TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___userData_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userData_6), (void*)L_0);
		return;
	}
}
// UnityEngine.TerrainTools.PaintContext/TerrainTile UnityEngine.TerrainTools.PaintContext/TerrainTile::Make(UnityEngine.Terrain,System.Int32,System.Int32,UnityEngine.RectInt,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* TerrainTile_Make_m464414DF78B623306730F00C6DDE305D9A46AEFD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, int32_t ___tileOriginPixelsX1, int32_t ___tileOriginPixelsY2, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___pixelRect3, int32_t ___targetTextureWidth4, int32_t ___targetTextureHeight5, int32_t ___edgePad6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F4CBF0AD58BD9A4B7CE75BECABFF6BEFA9A75F);
		s_Il2CppMethodInitialized = true;
	}
	TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* V_7 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B15_0 = 0;
	{
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_0 = (TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA*)il2cpp_codegen_object_new(TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TerrainTile__ctor_mCDA7097EEEC5D66D7E2E2A1AD7778F783EB20F8C(L_0, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_1 = L_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = ___terrain0;
		NullCheck(L_1);
		L_1->___terrain_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___terrain_0), (void*)L_2);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_3 = L_1;
		NullCheck(L_3);
		L_3->___gatherEnable_7 = (bool)1;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_4 = L_3;
		NullCheck(L_4);
		L_4->___scatterEnable_8 = (bool)1;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_5 = L_4;
		int32_t L_6 = ___tileOriginPixelsX1;
		int32_t L_7 = ___tileOriginPixelsY2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_8), L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->___tileOriginPixels_1 = L_8;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_9 = L_5;
		il2cpp_codegen_initobj((&V_5), sizeof(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8));
		int32_t L_10;
		L_10 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___pixelRect3), NULL);
		int32_t L_11 = ___tileOriginPixelsX1;
		int32_t L_12;
		L_12 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(0, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
		RectInt_set_x_m2D2F3A87E9899A29444DBDD0BB11CB19F13AA075((&V_5), L_12, NULL);
		int32_t L_13;
		L_13 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___pixelRect3), NULL);
		int32_t L_14 = ___tileOriginPixelsY2;
		int32_t L_15;
		L_15 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		RectInt_set_y_m45D5C1D817698266BED66D41A705956A1571858D((&V_5), L_15, NULL);
		int32_t L_16 = ___targetTextureWidth4;
		int32_t L_17;
		L_17 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___pixelRect3), NULL);
		int32_t L_18 = ___tileOriginPixelsX1;
		int32_t L_19;
		L_19 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_16, ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
		RectInt_set_xMax_mAA7AB05C087176CB8959369FEAAA78B80842D7A4((&V_5), L_19, NULL);
		int32_t L_20 = ___targetTextureHeight5;
		int32_t L_21;
		L_21 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___pixelRect3), NULL);
		int32_t L_22 = ___tileOriginPixelsY2;
		int32_t L_23;
		L_23 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, L_22)), NULL);
		RectInt_set_yMax_mCF47AE0D0C567664BCDE03C8601BE66D375BB3A9((&V_5), L_23, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_24 = V_5;
		NullCheck(L_9);
		L_9->___clippedTerrainPixels_2 = L_24;
		V_0 = L_9;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_25 = V_0;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_26 = V_0;
		NullCheck(L_26);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_27 = (&L_26->___clippedTerrainPixels_2);
		int32_t L_28;
		L_28 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA(L_27, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_29 = V_0;
		NullCheck(L_29);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_30 = (&L_29->___tileOriginPixels_1);
		int32_t L_31;
		L_31 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_30, NULL);
		int32_t L_32;
		L_32 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___pixelRect3), NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_33 = V_0;
		NullCheck(L_33);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_34 = (&L_33->___clippedTerrainPixels_2);
		int32_t L_35;
		L_35 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878(L_34, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_36 = V_0;
		NullCheck(L_36);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_37 = (&L_36->___tileOriginPixels_1);
		int32_t L_38;
		L_38 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_37, NULL);
		int32_t L_39;
		L_39 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___pixelRect3), NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_40 = V_0;
		NullCheck(L_40);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_41 = (&L_40->___clippedTerrainPixels_2);
		int32_t L_42;
		L_42 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7(L_41, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_43 = V_0;
		NullCheck(L_43);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_44 = (&L_43->___clippedTerrainPixels_2);
		int32_t L_45;
		L_45 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C(L_44, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_46;
		memset((&L_46), 0, sizeof(L_46));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_46), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_28, L_31)), L_32)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_38)), L_39)), L_42, L_45, /*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->___clippedPCPixels_3 = L_46;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_47 = ___terrain0;
		NullCheck(L_47);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_48;
		L_48 = Terrain_get_leftNeighbor_mA42E758BD513BC9E0FB87888FC24B3C4349A353E(L_47, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_48, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_49)
		{
			goto IL_0107;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0109;
	}

IL_0107:
	{
		int32_t L_50 = ___edgePad6;
		G_B3_0 = L_50;
	}

IL_0109:
	{
		V_1 = G_B3_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_51 = ___terrain0;
		NullCheck(L_51);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_52;
		L_52 = Terrain_get_rightNeighbor_mA50D19F61FFBA544E94733B097D4409B15FECC17(L_51, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_52, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_53)
		{
			goto IL_011b;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_011d;
	}

IL_011b:
	{
		int32_t L_54 = ___edgePad6;
		G_B6_0 = L_54;
	}

IL_011d:
	{
		V_2 = G_B6_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_55 = ___terrain0;
		NullCheck(L_55);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_56;
		L_56 = Terrain_get_bottomNeighbor_m31306E01318F62D214B5E0966C988FB24255406F(L_55, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_56, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_57)
		{
			goto IL_012f;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_0131;
	}

IL_012f:
	{
		int32_t L_58 = ___edgePad6;
		G_B9_0 = L_58;
	}

IL_0131:
	{
		V_3 = G_B9_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_59 = ___terrain0;
		NullCheck(L_59);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_60;
		L_60 = Terrain_get_topNeighbor_mCBC502C4CC0D617863D7A3A726EBFA4BD18BDF8C(L_59, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_60, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_61)
		{
			goto IL_0143;
		}
	}
	{
		G_B12_0 = 0;
		goto IL_0145;
	}

IL_0143:
	{
		int32_t L_62 = ___edgePad6;
		G_B12_0 = L_62;
	}

IL_0145:
	{
		V_4 = G_B12_0;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_63 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8));
		int32_t L_64 = V_1;
		int32_t L_65;
		L_65 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___pixelRect3), NULL);
		int32_t L_66 = ___tileOriginPixelsX1;
		int32_t L_67 = V_1;
		int32_t L_68;
		L_68 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((-L_64)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_65, L_66)), L_67)), NULL);
		RectInt_set_x_m2D2F3A87E9899A29444DBDD0BB11CB19F13AA075((&V_5), L_68, NULL);
		int32_t L_69 = V_3;
		int32_t L_70;
		L_70 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___pixelRect3), NULL);
		int32_t L_71 = ___tileOriginPixelsY2;
		int32_t L_72 = V_3;
		int32_t L_73;
		L_73 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((-L_69)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_70, L_71)), L_72)), NULL);
		RectInt_set_y_m45D5C1D817698266BED66D41A705956A1571858D((&V_5), L_73, NULL);
		int32_t L_74 = ___targetTextureWidth4;
		int32_t L_75 = V_2;
		int32_t L_76;
		L_76 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___pixelRect3), NULL);
		int32_t L_77 = ___tileOriginPixelsX1;
		int32_t L_78 = V_2;
		int32_t L_79;
		L_79 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_add(L_74, L_75)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_76, L_77)), L_78)), NULL);
		RectInt_set_xMax_mAA7AB05C087176CB8959369FEAAA78B80842D7A4((&V_5), L_79, NULL);
		int32_t L_80 = ___targetTextureHeight5;
		int32_t L_81 = V_4;
		int32_t L_82;
		L_82 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___pixelRect3), NULL);
		int32_t L_83 = ___tileOriginPixelsY2;
		int32_t L_84 = V_4;
		int32_t L_85;
		L_85 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_add(L_80, L_81)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_82, L_83)), L_84)), NULL);
		RectInt_set_yMax_mCF47AE0D0C567664BCDE03C8601BE66D375BB3A9((&V_5), L_85, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_86 = V_5;
		NullCheck(L_63);
		L_63->___paddedTerrainPixels_4 = L_86;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_87 = V_0;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_88 = V_0;
		NullCheck(L_88);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_89 = (&L_88->___clippedPCPixels_3);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_90;
		L_90 = RectInt_get_min_mAF3EA7A9FE7DCC0FABDF67FA548FC25062E49B75(L_89, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_91 = V_0;
		NullCheck(L_91);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_92 = (&L_91->___paddedTerrainPixels_4);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_93;
		L_93 = RectInt_get_min_mAF3EA7A9FE7DCC0FABDF67FA548FC25062E49B75(L_92, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_94 = V_0;
		NullCheck(L_94);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_95 = (&L_94->___clippedTerrainPixels_2);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_96;
		L_96 = RectInt_get_min_mAF3EA7A9FE7DCC0FABDF67FA548FC25062E49B75(L_95, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_97;
		L_97 = Vector2Int_op_Subtraction_m5C9A4D049F8EE288878F37C991CA1BBB738D8059_inline(L_93, L_96, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_98;
		L_98 = Vector2Int_op_Addition_m6358133A28BA913D2080FD44472D1FD1CE1AC28F_inline(L_90, L_97, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_99 = V_0;
		NullCheck(L_99);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_100 = (&L_99->___clippedPCPixels_3);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_101;
		L_101 = RectInt_get_size_mB039AB397BD0A60329D9FC6BF4096601647C204D(L_100, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_102 = V_0;
		NullCheck(L_102);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_103 = (&L_102->___paddedTerrainPixels_4);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_104;
		L_104 = RectInt_get_size_mB039AB397BD0A60329D9FC6BF4096601647C204D(L_103, NULL);
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_105 = V_0;
		NullCheck(L_105);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_106 = (&L_105->___clippedTerrainPixels_2);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_107;
		L_107 = RectInt_get_size_mB039AB397BD0A60329D9FC6BF4096601647C204D(L_106, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_108;
		L_108 = Vector2Int_op_Subtraction_m5C9A4D049F8EE288878F37C991CA1BBB738D8059_inline(L_104, L_107, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_109;
		L_109 = Vector2Int_op_Addition_m6358133A28BA913D2080FD44472D1FD1CE1AC28F_inline(L_101, L_108, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_110;
		memset((&L_110), 0, sizeof(L_110));
		RectInt__ctor_m8C6769667320E3820E3AEFF61FC3A0914251B71A((&L_110), L_98, L_109, /*hidden argument*/NULL);
		NullCheck(L_87);
		L_87->___paddedPCPixels_5 = L_110;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_111 = V_0;
		NullCheck(L_111);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_112 = (&L_111->___clippedTerrainPixels_2);
		int32_t L_113;
		L_113 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7(L_112, NULL);
		if (!L_113)
		{
			goto IL_0243;
		}
	}
	{
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_114 = V_0;
		NullCheck(L_114);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_115 = (&L_114->___clippedTerrainPixels_2);
		int32_t L_116;
		L_116 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C(L_115, NULL);
		G_B15_0 = ((((int32_t)L_116) == ((int32_t)0))? 1 : 0);
		goto IL_0244;
	}

IL_0243:
	{
		G_B15_0 = 1;
	}

IL_0244:
	{
		V_6 = (bool)G_B15_0;
		bool L_117 = V_6;
		if (!L_117)
		{
			goto IL_0265;
		}
	}
	{
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_118 = V_0;
		NullCheck(L_118);
		L_118->___gatherEnable_7 = (bool)0;
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_119 = V_0;
		NullCheck(L_119);
		L_119->___scatterEnable_8 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral99F4CBF0AD58BD9A4B7CE75BECABFF6BEFA9A75F, NULL);
	}

IL_0265:
	{
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_120 = V_0;
		V_7 = L_120;
		goto IL_026a;
	}

IL_026a:
	{
		TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* L_121 = V_7;
		return L_121;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext/TerrainTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile__ctor_mCDA7097EEEC5D66D7E2E2A1AD7778F783EB20F8C (TerrainTile_t53C52CF17484CF96D723A71C9009A05EEDE318EA* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void UnityEngine.TerrainTools.PaintContext/SplatmapUserData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplatmapUserData__ctor_m8B0FF764C4FB0A470238FF13FBDAD970DEDCD713 (SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* __this, const RuntimeMethod* method) 
{
	{
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
// Conversion methods for marshalling of: UnityEngine.TerrainTools.PaintContext/PaintedTerrain
IL2CPP_EXTERN_C void PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshal_pinvoke(const PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8& unmarshaled, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshaled_pinvoke& marshaled)
{
	Exception_t* ___terrain_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrain' of type 'PaintedTerrain': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrain_0Exception, NULL);
}
IL2CPP_EXTERN_C void PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshal_pinvoke_back(const PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshaled_pinvoke& marshaled, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8& unmarshaled)
{
	Exception_t* ___terrain_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrain' of type 'PaintedTerrain': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrain_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.TerrainTools.PaintContext/PaintedTerrain
IL2CPP_EXTERN_C void PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshal_pinvoke_cleanup(PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.TerrainTools.PaintContext/PaintedTerrain
IL2CPP_EXTERN_C void PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshal_com(const PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8& unmarshaled, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshaled_com& marshaled)
{
	Exception_t* ___terrain_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrain' of type 'PaintedTerrain': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrain_0Exception, NULL);
}
IL2CPP_EXTERN_C void PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshal_com_back(const PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshaled_com& marshaled, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8& unmarshaled)
{
	Exception_t* ___terrain_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrain' of type 'PaintedTerrain': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrain_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.TerrainTools.PaintContext/PaintedTerrain
IL2CPP_EXTERN_C void PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshal_com_cleanup(PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshaled_com& marshaled)
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
// System.Void UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass53_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0__ctor_mB1DCC08BEBB1B500CAD7277614120E2743B5853E (U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass53_0::<FindTerrainTilesUnlimited>b__0(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass53_0_U3CFindTerrainTilesUnlimitedU3Eb__0_mA575AAFB77E11432AD4789A5E4DB47EE29ABA676 (U3CU3Ec__DisplayClass53_0_t4091BFBEEC90D87654CDA2D41C23E1931D2BE139* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___t0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___t0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		V_0 = L_3;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = ___t0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___z_4;
		V_1 = L_7;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = ___t0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_12 = ___t0;
		NullCheck(L_12);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_13;
		L_13 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_13, NULL);
		float L_15 = L_14.___x_2;
		V_2 = ((float)il2cpp_codegen_add(L_11, L_15));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_16 = ___t0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_20 = ___t0;
		NullCheck(L_20);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_21;
		L_21 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_21, NULL);
		float L_23 = L_22.___z_4;
		V_3 = ((float)il2cpp_codegen_add(L_19, L_23));
		float L_24 = V_0;
		float L_25 = __this->___maxX_0;
		if ((!(((float)L_24) <= ((float)L_25))))
		{
			goto IL_0090;
		}
	}
	{
		float L_26 = V_2;
		float L_27 = __this->___minX_1;
		if ((!(((float)L_26) >= ((float)L_27))))
		{
			goto IL_0090;
		}
	}
	{
		float L_28 = V_1;
		float L_29 = __this->___maxZ_2;
		if ((!(((float)L_28) <= ((float)L_29))))
		{
			goto IL_0090;
		}
	}
	{
		float L_30 = V_3;
		float L_31 = __this->___minZ_3;
		G_B5_0 = ((((int32_t)((!(((float)L_30) >= ((float)L_31)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0091;
	}

IL_0090:
	{
		G_B5_0 = 0;
	}

IL_0091:
	{
		V_4 = (bool)G_B5_0;
		goto IL_0095;
	}

IL_0095:
	{
		bool L_32 = V_4;
		return L_32;
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
// System.Void UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass66_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0__ctor_m7546F25D02A8C4AE3CA8A1966E400F3C3DCC3FF3 (U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Texture UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass66_0::<GatherAlphamap>b__0(UnityEngine.TerrainTools.PaintContext/ITerrainInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* U3CU3Ec__DisplayClass66_0_U3CGatherAlphamapU3Eb__0_m267E46A16FA8D4413C38D05DB8E68C242563046F (U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* V_0 = NULL;
	bool V_1 = false;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_2 = NULL;
	{
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_0 = __this->___U3CU3E4__this_0;
		RuntimeObject* L_1 = ___t0;
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_2 = __this->___inputLayer_1;
		bool L_3 = __this->___addLayerIfDoesntExist_2;
		NullCheck(L_0);
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_4;
		L_4 = PaintContext_GetTerrainLayerUserData_m2816B0CA7CA72A0492887923DE89F9382877E632(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_5 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_7 = ___t0;
		NullCheck(L_7);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8;
		L_8 = InterfaceFuncInvoker0< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(0 /* UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_terrain() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_7);
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___mapIndex_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11;
		L_11 = TerrainPaintUtility_GetTerrainAlphaMapChecked_m61B8DC77E576C67F4A93CA116608ABC0786E4A92(L_8, L_10, NULL);
		V_2 = L_11;
		goto IL_003a;
	}

IL_0036:
	{
		V_2 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		goto IL_003a;
	}

IL_003a:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12 = V_2;
		return L_12;
	}
}
// System.Void UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass66_0::<GatherAlphamap>b__1(UnityEngine.TerrainTools.PaintContext/ITerrainInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0_U3CGatherAlphamapU3Eb__1_mC736CCFD74BEA0444925BA18C5D877590161F531 (U3CU3Ec__DisplayClass66_0_t0AF6DC6EDADCBDEF3A4E40B041BB301E4836DF0A* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2D2B8AFBF08CE435A02D65CDE93E631D5B66916);
		s_Il2CppMethodInitialized = true;
	}
	SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* V_0 = NULL;
	{
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_0 = __this->___U3CU3E4__this_0;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_0);
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_2;
		L_2 = PaintContext_GetTerrainLayerUserData_m2816B0CA7CA72A0492887923DE89F9382877E632(L_0, L_1, (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*)NULL, (bool)0, NULL);
		V_0 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___copyTerrainLayerMaterial_3;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = __this->___layerMasks_4;
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___channelIndex_3;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_3, _stringLiteralB2D2B8AFBF08CE435A02D65CDE93E631D5B66916, L_8, NULL);
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
// System.Void UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass67_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0__ctor_mF166EB7437F0888686AA463B2ED545AB463B15E6 (U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext/<>c__DisplayClass67_0::<ScatterAlphamap>b__0(UnityEngine.TerrainTools.PaintContext/ITerrainInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* U3CU3Ec__DisplayClass67_0_U3CScatterAlphamapU3Eb__0_m9ABB337FFDEF8CA150010C341050F1ACE434ED78 (U3CU3Ec__DisplayClass67_0_t68F0D8DDEA63A9A6D603AC984471286EBC648358* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5464267295852DB5E69711BAB248608A393CAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1531971D5051DDBE88CC53A91F81C62814E18B58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB11A5D9B46B0465D27C850A5485B7265E1AA42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2D2B8AFBF08CE435A02D65CDE93E631D5B66916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC19D8C58E2FB7E2D7B83AB595833BFBF3A717919);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB2DE5F9A17979E82E4FFB404B4A3D09D1AD04ED);
		s_Il2CppMethodInitialized = true;
	}
	SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_12 = NULL;
	Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1* G_B3_0 = NULL;
	Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1* G_B2_0 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B13_0 = 0;
	String_t* G_B17_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B17_1 = NULL;
	String_t* G_B16_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B16_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 G_B18_0;
	memset((&G_B18_0), 0, sizeof(G_B18_0));
	String_t* G_B18_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B18_2 = NULL;
	{
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_0 = __this->___U3CU3E4__this_0;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_0);
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_2;
		L_2 = PaintContext_GetTerrainLayerUserData_m2816B0CA7CA72A0492887923DE89F9382877E632(L_0, L_1, (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*)NULL, (bool)0, NULL);
		V_0 = L_2;
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_3 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_028c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1* L_5 = ((PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_StaticFields*)il2cpp_codegen_static_fields_for(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var))->___onTerrainTileBeforePaint_11;
		Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1* L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_0027;
		}
	}
	{
		goto IL_0035;
	}

IL_0027:
	{
		RuntimeObject* L_7 = ___t0;
		String_t* L_8 = __this->___editorUndoName_1;
		NullCheck(G_B3_0);
		Action_3_Invoke_m1431490CF901662B5CE5063E01732C19B4A8CE78_inline(G_B3_0, L_7, 2, L_8, NULL);
	}

IL_0035:
	{
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___mapIndex_2;
		V_2 = L_10;
		SplatmapUserData_t180D65F81C689201C6306448A4E6004E87E5E91A* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___channelIndex_3;
		V_3 = L_12;
		RuntimeObject* L_13 = ___t0;
		NullCheck(L_13);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_14;
		L_14 = InterfaceFuncInvoker0< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(0 /* UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_terrain() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_15;
		L_15 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_14, NULL);
		NullCheck(L_15);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_16;
		L_16 = TerrainData_get_alphamapTextures_m82B7287C772D95D4E3D6A5793A8B9A15745D8C45(L_15, NULL);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_20 = __this->___U3CU3E4__this_0;
		NullCheck(L_20);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21;
		L_21 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(L_20, NULL);
		NullCheck(L_21);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_21, 0, NULL);
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_22 = __this->___U3CU3E4__this_0;
		NullCheck(L_22);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23;
		L_23 = PaintContext_get_sourceRenderTexture_m45B68671807EA82C3333635B0C5BB8F5D5161B86_inline(L_22, NULL);
		NullCheck(L_23);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_23, 0, NULL);
		V_5 = 0;
		goto IL_025c;
	}

IL_0083:
	{
		int32_t L_24 = V_5;
		int32_t L_25 = V_2;
		V_8 = (bool)((((int32_t)L_24) == ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0256;
	}

IL_0094:
	{
		int32_t L_27 = V_5;
		RuntimeObject* L_28 = ___t0;
		NullCheck(L_28);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_29;
		L_29 = InterfaceFuncInvoker0< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(0 /* UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_terrain() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_29);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_30;
		L_30 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_29, NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = TerrainData_get_alphamapTextureCount_mF378908EA58CA135A4D58D586179418F1A6F14CD(L_30, NULL);
		if ((((int32_t)L_27) == ((int32_t)L_31)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_32 = V_5;
		G_B10_0 = L_32;
		goto IL_00ad;
	}

IL_00ac:
	{
		int32_t L_33 = V_2;
		G_B10_0 = L_33;
	}

IL_00ad:
	{
		V_6 = G_B10_0;
		RuntimeObject* L_34 = ___t0;
		NullCheck(L_34);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_35;
		L_35 = InterfaceFuncInvoker0< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(0 /* UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_terrain() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_36;
		L_36 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_35, NULL);
		NullCheck(L_36);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_37;
		L_37 = TerrainData_get_alphamapTextures_m82B7287C772D95D4E3D6A5793A8B9A15745D8C45(L_36, NULL);
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_7 = L_40;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = V_7;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_41);
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_43 = __this->___U3CU3E4__this_0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = PaintContext_get_targetTextureWidth_m6ECD3E0E648DBB6632C633E06B5D6037A0B2CFEB_inline(L_43, NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)L_44))))
		{
			goto IL_00f1;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_45 = V_7;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_45);
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_47 = __this->___U3CU3E4__this_0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = PaintContext_get_targetTextureHeight_m4975CA86AC71297D69844835B8D006174F806240_inline(L_47, NULL);
		G_B13_0 = ((((int32_t)((((int32_t)L_46) == ((int32_t)L_48))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B13_0 = 1;
	}

IL_00f2:
	{
		V_9 = (bool)G_B13_0;
		bool L_49 = V_9;
		if (!L_49)
		{
			goto IL_010f;
		}
	}
	{
		RuntimeObject* L_50 = ___t0;
		NullCheck(L_50);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_51;
		L_51 = InterfaceFuncInvoker0< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(0 /* UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_terrain() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_50);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral1531971D5051DDBE88CC53A91F81C62814E18B58, L_51, NULL);
		goto IL_0256;
	}

IL_010f:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = __this->___tempTarget_2;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_52, NULL);
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = __this->___tempTarget_2;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_53);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = __this->___tempTarget_2;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_55);
		GL_LoadPixelMatrix_mF1C5A4508C5F110512C116A5DDE7AB0483FE961A((0.0f), ((float)L_54), (0.0f), ((float)L_56), NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57 = __this->___copyTerrainLayerMaterial_3;
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_58 = __this->___U3CU3E4__this_0;
		NullCheck(L_58);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59;
		L_59 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(L_58, NULL);
		NullCheck(L_57);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_57, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_59, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60 = __this->___copyTerrainLayerMaterial_3;
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_61 = __this->___U3CU3E4__this_0;
		NullCheck(L_61);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62;
		L_62 = PaintContext_get_sourceRenderTexture_m45B68671807EA82C3333635B0C5BB8F5D5161B86_inline(L_61, NULL);
		NullCheck(L_60);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_60, _stringLiteral5DB11A5D9B46B0465D27C850A5485B7265E1AA42, L_62, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63 = __this->___copyTerrainLayerMaterial_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_64 = V_4;
		NullCheck(L_63);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_63, _stringLiteralC19D8C58E2FB7E2D7B83AB595833BFBF3A717919, L_64, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65 = __this->___copyTerrainLayerMaterial_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_66 = V_7;
		NullCheck(L_65);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_65, _stringLiteral0E5464267295852DB5E69711BAB248608A393CAF, L_66, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67 = __this->___copyTerrainLayerMaterial_3;
		int32_t L_68 = V_6;
		int32_t L_69 = V_2;
		G_B16_0 = _stringLiteralB2D2B8AFBF08CE435A02D65CDE93E631D5B66916;
		G_B16_1 = L_67;
		if ((((int32_t)L_68) == ((int32_t)L_69)))
		{
			G_B17_0 = _stringLiteralB2D2B8AFBF08CE435A02D65CDE93E631D5B66916;
			G_B17_1 = L_67;
			goto IL_01bf;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_70;
		L_70 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		G_B18_0 = L_70;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		goto IL_01cb;
	}

IL_01bf:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_71 = __this->___layerMasks_4;
		int32_t L_72 = V_3;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B18_0 = L_74;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
	}

IL_01cb:
	{
		NullCheck(G_B18_2);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(G_B18_2, G_B18_1, G_B18_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75 = __this->___copyTerrainLayerMaterial_3;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_76 = __this->___layerMasks_4;
		int32_t L_77 = V_3;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_75);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_75, _stringLiteralCB2DE5F9A17979E82E4FFB404B4A3D09D1AD04ED, L_79, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80 = __this->___copyTerrainLayerMaterial_3;
		NullCheck(L_80);
		bool L_81;
		L_81 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_80, 1, NULL);
		RuntimeObject* L_82 = ___t0;
		NullCheck(L_82);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_83;
		L_83 = InterfaceFuncInvoker0< RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 >::Invoke(2 /* UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_clippedPCPixels() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_82);
		RuntimeObject* L_84 = ___t0;
		NullCheck(L_84);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_85;
		L_85 = InterfaceFuncInvoker0< RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 >::Invoke(2 /* UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_clippedPCPixels() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_84);
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_86 = __this->___U3CU3E4__this_0;
		NullCheck(L_86);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_87;
		L_87 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(L_86, NULL);
		RuntimeObject* L_88 = ___t0;
		NullCheck(L_88);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_89;
		L_89 = InterfaceFuncInvoker0< RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 >::Invoke(1 /* UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_clippedTerrainPixels() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_88);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_90 = V_7;
		TerrainPaintUtility_DrawQuad2_m70891EE13A543416FBBDF98FEEC6499A2B38494A(L_83, L_85, L_87, L_89, L_90, NULL);
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		RuntimeObject* L_91 = ___t0;
		NullCheck(L_91);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_92;
		L_92 = InterfaceFuncInvoker0< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(0 /* UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_terrain() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_91);
		NullCheck(L_92);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_93;
		L_93 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_92, NULL);
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		String_t* L_94;
		L_94 = TerrainData_get_AlphamapTextureName_mC3E6B77E19252385A78C74D853F7CA4375A51882(NULL);
		int32_t L_95 = V_6;
		RuntimeObject* L_96 = ___t0;
		NullCheck(L_96);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_97;
		L_97 = InterfaceFuncInvoker0< RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 >::Invoke(2 /* UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_clippedPCPixels() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_96);
		RuntimeObject* L_98 = ___t0;
		NullCheck(L_98);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_99;
		L_99 = InterfaceFuncInvoker0< RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 >::Invoke(1 /* UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_clippedTerrainPixels() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_98);
		V_10 = L_99;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_100;
		L_100 = RectInt_get_min_mAF3EA7A9FE7DCC0FABDF67FA548FC25062E49B75((&V_10), NULL);
		NullCheck(L_93);
		TerrainData_CopyActiveRenderTextureToTexture_mC6FBAB316DCFA11F9A51A32F2943B01B0AA79A74(L_93, L_94, L_95, L_97, L_100, (bool)1, NULL);
	}

IL_0256:
	{
		int32_t L_101 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_025c:
	{
		int32_t L_102 = V_5;
		RuntimeObject* L_103 = ___t0;
		NullCheck(L_103);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_104;
		L_104 = InterfaceFuncInvoker0< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(0 /* UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext/ITerrainInfo::get_terrain() */, ITerrainInfo_tA0F36705C31F6DE6186369B7D8BC0EA8C2994D05_il2cpp_TypeInfo_var, L_103);
		NullCheck(L_104);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_105;
		L_105 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_104, NULL);
		NullCheck(L_105);
		int32_t L_106;
		L_106 = TerrainData_get_alphamapTextureCount_mF378908EA58CA135A4D58D586179418F1A6F14CD(L_105, NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_102) > ((int32_t)L_106))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_107 = V_11;
		if (L_107)
		{
			goto IL_0083;
		}
	}
	{
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		RuntimeObject* L_108 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		PaintContext_OnTerrainPainted_mA6BF9D65B8EA95D18E69FBC02D538588DEF3385E(L_108, 2, NULL);
	}

IL_028c:
	{
		V_12 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		goto IL_0291;
	}

IL_0291:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_109 = V_12;
		return L_109;
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
// UnityEngine.TerrainTools.BrushTransform UnityEngine.TerrainTools.TerrainPaintUtility::CalculateBrushTransform(UnityEngine.Terrain,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5 TerrainPaintUtility_CalculateBrushTransform_mC09FF992CED60AADB39F6FCED42DEE79BBD232DB (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___brushCenterTerrainUV1, float ___brushSize2, float ___brushRotationDegrees3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5 V_8;
	memset((&V_8), 0, sizeof(V_8));
	BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		float L_0 = ___brushRotationDegrees3;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (0.0174532924f)));
		float L_1 = V_0;
		float L_2;
		L_2 = cosf(L_1);
		V_1 = L_2;
		float L_3 = V_0;
		float L_4;
		L_4 = sinf(L_3);
		V_2 = L_4;
		float L_5 = V_1;
		float L_6 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_5, ((-L_6)), /*hidden argument*/NULL);
		float L_8 = ___brushSize2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_7, L_8, NULL);
		V_3 = L_9;
		float L_10 = V_2;
		float L_11 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), L_10, L_11, /*hidden argument*/NULL);
		float L_13 = ___brushSize2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_12, L_13, NULL);
		V_4 = L_14;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_15 = ___terrain0;
		NullCheck(L_15);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_16;
		L_16 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_16, NULL);
		V_5 = L_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___brushCenterTerrainUV1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_5;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_5;
		float L_22 = L_21.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_23), L_20, L_22, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_18, L_23, NULL);
		V_6 = L_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline((0.5f), L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_25, L_27, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline((0.5f), L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_28, L_30, NULL);
		V_7 = L_31;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_4;
		BrushTransform__ctor_mC0DC3696A91B14BEE4FF118A3723BF2311D2524D((&V_8), L_32, L_33, L_34, NULL);
		BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5 L_35 = V_8;
		V_9 = L_35;
		goto IL_0094;
	}

IL_0094:
	{
		BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5 L_36 = V_9;
		return L_36;
	}
}
// UnityEngine.TerrainTools.PaintContext UnityEngine.TerrainTools.TerrainPaintUtility::InitializePaintContext(UnityEngine.Terrain,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.Rect,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* TerrainPaintUtility_InitializePaintContext_m4AF5ECCA84C9B1B010244E35544C4E3B41F97F70 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, int32_t ___targetWidth1, int32_t ___targetHeight2, int32_t ___pcFormat3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___boundsInTerrainSpace4, int32_t ___extraBorderPixels5, bool ___sharedBoundaryTexel6, bool ___fillOutsideTerrain7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* V_0 = NULL;
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* V_1 = NULL;
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = ___boundsInTerrainSpace4;
		int32_t L_2 = ___targetWidth1;
		int32_t L_3 = ___targetHeight2;
		int32_t L_4 = ___extraBorderPixels5;
		bool L_5 = ___sharedBoundaryTexel6;
		bool L_6 = ___fillOutsideTerrain7;
		il2cpp_codegen_runtime_class_init_inline(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_7;
		L_7 = PaintContext_CreateFromBounds_mE034417CBA9CD6F83EAB77DA319323F458CD04E4(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_8 = V_0;
		int32_t L_9 = ___pcFormat3;
		NullCheck(L_8);
		PaintContext_CreateRenderTargets_m08252C94D832923CD0F129B6EEA1305DEAF18BB5(L_8, L_9, NULL);
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_10 = V_0;
		V_1 = L_10;
		goto IL_001e;
	}

IL_001e:
	{
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_11 = V_1;
		return L_11;
	}
}
// UnityEngine.TerrainTools.PaintContext UnityEngine.TerrainTools.TerrainPaintUtility::BeginPaintTexture(UnityEngine.Terrain,UnityEngine.Rect,UnityEngine.TerrainLayer,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* TerrainPaintUtility_BeginPaintTexture_m0BBFA0F86453D0363334C3E960CF7AB9AF40EA4C (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___boundsInTerrainSpace1, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___inputLayer2, int32_t ___extraBorderPixels3, bool ___fillOutsideTerrain4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* V_1 = NULL;
	bool V_2 = false;
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* V_3 = NULL;
	{
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_0 = ___inputLayer2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		V_3 = (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A*)NULL;
		goto IL_0039;
	}

IL_0010:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = ___terrain0;
		NullCheck(L_3);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_4;
		L_4 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = TerrainData_get_alphamapResolution_mC5D1C8FF4A5AFFCCFCF1382FED0D1AD46563D6F8(L_4, NULL);
		V_0 = L_5;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = ___terrain0;
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = ___boundsInTerrainSpace1;
		int32_t L_10 = ___extraBorderPixels3;
		bool L_11 = ___fillOutsideTerrain4;
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_12;
		L_12 = TerrainPaintUtility_InitializePaintContext_m4AF5ECCA84C9B1B010244E35544C4E3B41F97F70(L_6, L_7, L_8, ((int32_t)16), L_9, L_10, (bool)1, L_11, NULL);
		V_1 = L_12;
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_13 = V_1;
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_14 = ___inputLayer2;
		NullCheck(L_13);
		PaintContext_GatherAlphamap_m9CF436C1D0D163692E9EDF27958A1704D06E3F44(L_13, L_14, (bool)1, NULL);
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_15 = V_1;
		V_3 = L_15;
		goto IL_0039;
	}

IL_0039:
	{
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_16 = V_3;
		return L_16;
	}
}
// System.Void UnityEngine.TerrainTools.TerrainPaintUtility::EndPaintTexture(UnityEngine.TerrainTools.PaintContext,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPaintUtility_EndPaintTexture_m06D132134AC924F27FA3F5598E3C9F91CFC1A936 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* ___ctx0, String_t* ___editorUndoName1, const RuntimeMethod* method) 
{
	{
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_0 = ___ctx0;
		String_t* L_1 = ___editorUndoName1;
		NullCheck(L_0);
		PaintContext_ScatterAlphamap_m207A3E71E8014A4639C37905471D1F9C85404C91(L_0, L_1, NULL);
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_2 = ___ctx0;
		NullCheck(L_2);
		PaintContext_Cleanup_mEB09BBB29CF7FBC5E11FC63BB2A3D651B27EB28A(L_2, (bool)1, NULL);
		return;
	}
}
// UnityEngine.Material UnityEngine.TerrainTools.TerrainPaintUtility::GetBlitMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TerrainPaintUtility_GetBlitMaterial_mE30CA5859A38CD72365ADAAF487060AA531FB583 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9515766D6A0B7A79D305A13C1C4604A6B843AA60);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_il2cpp_TypeInfo_var))->___s_BlitMaterial_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral9515766D6A0B7A79D305A13C1C4604A6B843AA60, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_4, L_3, NULL);
		((TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_il2cpp_TypeInfo_var))->___s_BlitMaterial_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_il2cpp_TypeInfo_var))->___s_BlitMaterial_0), (void*)L_4);
	}

IL_0026:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ((TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_il2cpp_TypeInfo_var))->___s_BlitMaterial_0;
		V_1 = L_5;
		goto IL_002e;
	}

IL_002e:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Material UnityEngine.TerrainTools.TerrainPaintUtility::GetCopyTerrainLayerMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TerrainPaintUtility_GetCopyTerrainLayerMaterial_m4AE79A9122DBF2DF8A4932CBA9E2D7347CDACDA6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA95944D03DCAD8FFE6105F980B99EF579B0C0222);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_il2cpp_TypeInfo_var))->___s_CopyTerrainLayerMaterial_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralA95944D03DCAD8FFE6105F980B99EF579B0C0222, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_4, L_3, NULL);
		((TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_il2cpp_TypeInfo_var))->___s_CopyTerrainLayerMaterial_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_il2cpp_TypeInfo_var))->___s_CopyTerrainLayerMaterial_1), (void*)L_4);
	}

IL_0026:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ((TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPaintUtility_tF94AFD008614E6BB0758F0D00DE2B7B4B8A440A3_il2cpp_TypeInfo_var))->___s_CopyTerrainLayerMaterial_1;
		V_1 = L_5;
		goto IL_002e;
	}

IL_002e:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.TerrainTools.TerrainPaintUtility::DrawQuad(UnityEngine.RectInt,UnityEngine.RectInt,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPaintUtility_DrawQuad_m3DF46A679C95B544FD1CA783020DFDFDA084728B (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___destinationPixels0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourcePixels1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___sourceTexture2, const RuntimeMethod* method) 
{
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0 = ___destinationPixels0;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_1 = ___sourcePixels1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___sourceTexture2;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_3 = ___sourcePixels1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___sourceTexture2;
		TerrainPaintUtility_DrawQuad2_m70891EE13A543416FBBDF98FEEC6499A2B38494A(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainTools.TerrainPaintUtility::DrawQuad2(UnityEngine.RectInt,UnityEngine.RectInt,UnityEngine.Texture,UnityEngine.RectInt,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPaintUtility_DrawQuad2_m70891EE13A543416FBBDF98FEEC6499A2B38494A (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___destinationPixels0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourcePixels1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___sourceTexture2, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourcePixels23, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___sourceTexture24, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___destinationPixels0), NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1;
		L_1 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___destinationPixels0), NULL);
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_01f3;
		}
	}
	{
		int32_t L_3;
		L_3 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___sourcePixels1), NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___sourceTexture2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		int32_t L_6;
		L_6 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___sourcePixels1), NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = ___sourceTexture2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		int32_t L_9;
		L_9 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___sourcePixels1), NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_10 = ___sourceTexture2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
		int32_t L_12;
		L_12 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___sourcePixels1), NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13 = ___sourceTexture2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), ((float)(((float)L_3)/((float)L_5))), ((float)(((float)L_6)/((float)L_8))), ((float)(((float)L_9)/((float)L_11))), ((float)(((float)L_12)/((float)L_14))), NULL);
		int32_t L_15;
		L_15 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___sourcePixels23), NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_16 = ___sourceTexture24;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		int32_t L_18;
		L_18 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___sourcePixels23), NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_19 = ___sourceTexture24;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		int32_t L_21;
		L_21 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___sourcePixels23), NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_22 = ___sourceTexture24;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		int32_t L_24;
		L_24 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___sourcePixels23), NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_25 = ___sourceTexture24;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_25);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_2), ((float)(((float)L_15)/((float)L_17))), ((float)(((float)L_18)/((float)L_20))), ((float)(((float)L_21)/((float)L_23))), ((float)(((float)L_24)/((float)L_26))), NULL);
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		memset((&L_27), 0, sizeof(L_27));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_27), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E(L_27, NULL);
		float L_28;
		L_28 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_1), NULL);
		float L_29;
		L_29 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_1), NULL);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, L_28, L_29, NULL);
		float L_30;
		L_30 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_2), NULL);
		float L_31;
		L_31 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_2), NULL);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(1, L_30, L_31, NULL);
		int32_t L_32;
		L_32 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___destinationPixels0), NULL);
		int32_t L_33;
		L_33 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___destinationPixels0), NULL);
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)L_32), ((float)L_33), (0.0f), NULL);
		float L_34;
		L_34 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_1), NULL);
		float L_35;
		L_35 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_1), NULL);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, L_34, L_35, NULL);
		float L_36;
		L_36 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_2), NULL);
		float L_37;
		L_37 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_2), NULL);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(1, L_36, L_37, NULL);
		int32_t L_38;
		L_38 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___destinationPixels0), NULL);
		int32_t L_39;
		L_39 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___destinationPixels0), NULL);
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)L_38), ((float)L_39), (0.0f), NULL);
		float L_40;
		L_40 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_1), NULL);
		float L_41;
		L_41 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_1), NULL);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, L_40, L_41, NULL);
		float L_42;
		L_42 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_2), NULL);
		float L_43;
		L_43 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_2), NULL);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(1, L_42, L_43, NULL);
		int32_t L_44;
		L_44 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___destinationPixels0), NULL);
		int32_t L_45;
		L_45 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___destinationPixels0), NULL);
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)L_44), ((float)L_45), (0.0f), NULL);
		float L_46;
		L_46 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_1), NULL);
		float L_47;
		L_47 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_1), NULL);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, L_46, L_47, NULL);
		float L_48;
		L_48 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_2), NULL);
		float L_49;
		L_49 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_2), NULL);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(1, L_48, L_49, NULL);
		int32_t L_50;
		L_50 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___destinationPixels0), NULL);
		int32_t L_51;
		L_51 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___destinationPixels0), NULL);
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)L_50), ((float)L_51), (0.0f), NULL);
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
	}

IL_01f3:
	{
		return;
	}
}
// System.Void UnityEngine.TerrainTools.TerrainPaintUtility::DrawQuadPadded(UnityEngine.RectInt,UnityEngine.RectInt,UnityEngine.RectInt,UnityEngine.RectInt,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPaintUtility_DrawQuadPadded_m48168E3A5DF4E5063D290556E06E8FF75EDD1552 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___destinationPixels0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___destinationPixelsPadded1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourcePixels2, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___sourcePixelsPadded3, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___sourceTexture4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	{
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E(L_0, NULL);
		V_0 = 0;
		goto IL_03a5;
	}

IL_002e:
	{
		int32_t L_1 = V_0;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_3;
		L_3 = RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B((&___sourcePixelsPadded3), NULL);
		int32_t L_4;
		L_4 = RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B((&___sourcePixels2), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_1), L_3, L_4, NULL);
		int32_t L_5;
		L_5 = RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B((&___destinationPixelsPadded1), NULL);
		int32_t L_6;
		L_6 = RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B((&___destinationPixels0), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_2), L_5, L_6, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), (-1.0f), (0.0f), NULL);
		goto IL_0101;
	}

IL_007b:
	{
		int32_t L_7 = V_0;
		V_5 = (bool)((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_9;
		L_9 = RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B((&___sourcePixels2), NULL);
		int32_t L_10;
		L_10 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___sourcePixels2), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_1), L_9, L_10, NULL);
		int32_t L_11;
		L_11 = RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B((&___destinationPixels0), NULL);
		int32_t L_12;
		L_12 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___destinationPixels0), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_2), L_11, L_12, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), (0.0f), (0.0f), NULL);
		goto IL_0101;
	}

IL_00c4:
	{
		int32_t L_13;
		L_13 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___sourcePixels2), NULL);
		int32_t L_14;
		L_14 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___sourcePixelsPadded3), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_1), L_13, L_14, NULL);
		int32_t L_15;
		L_15 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___destinationPixels0), NULL);
		int32_t L_16;
		L_16 = RectInt_get_yMax_mAE5D758A1241F7722F8FB9B46861583F76C8FE44((&___destinationPixelsPadded1), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_2), L_15, L_16, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), (0.0f), (-1.0f), NULL);
	}

IL_0101:
	{
		int32_t L_17;
		L_17 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_1), 0, NULL);
		int32_t L_18;
		L_18 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_1), 1, NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0121;
		}
	}
	{
		goto IL_03a1;
	}

IL_0121:
	{
		V_7 = 0;
		goto IL_0392;
	}

IL_0129:
	{
		int32_t L_20 = V_7;
		V_12 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_12;
		if (!L_21)
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_22;
		L_22 = RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B((&___sourcePixelsPadded3), NULL);
		int32_t L_23;
		L_23 = RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B((&___sourcePixels2), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_8), L_22, L_23, NULL);
		int32_t L_24;
		L_24 = RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B((&___destinationPixelsPadded1), NULL);
		int32_t L_25;
		L_25 = RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B((&___destinationPixels0), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_9), L_24, L_25, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_10), (-1.0f), (0.0f), NULL);
		goto IL_01fe;
	}

IL_0177:
	{
		int32_t L_26 = V_7;
		V_13 = (bool)((((int32_t)L_26) == ((int32_t)1))? 1 : 0);
		bool L_27 = V_13;
		if (!L_27)
		{
			goto IL_01c1;
		}
	}
	{
		int32_t L_28;
		L_28 = RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B((&___sourcePixels2), NULL);
		int32_t L_29;
		L_29 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___sourcePixels2), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_8), L_28, L_29, NULL);
		int32_t L_30;
		L_30 = RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B((&___destinationPixels0), NULL);
		int32_t L_31;
		L_31 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___destinationPixels0), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_9), L_30, L_31, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_10), (0.0f), (0.0f), NULL);
		goto IL_01fe;
	}

IL_01c1:
	{
		int32_t L_32;
		L_32 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___sourcePixels2), NULL);
		int32_t L_33;
		L_33 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___sourcePixelsPadded3), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_8), L_32, L_33, NULL);
		int32_t L_34;
		L_34 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___destinationPixels0), NULL);
		int32_t L_35;
		L_35 = RectInt_get_xMax_mBA05CE52847E3D3CB8295055706B3E0D4350E9F0((&___destinationPixelsPadded1), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_9), L_34, L_35, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_10), (0.0f), (-1.0f), NULL);
	}

IL_01fe:
	{
		int32_t L_36;
		L_36 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_8), 0, NULL);
		int32_t L_37;
		L_37 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_8), 1, NULL);
		V_14 = (bool)((((int32_t)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_14;
		if (!L_38)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_038c;
	}

IL_021e:
	{
		int32_t L_39;
		L_39 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_8), 0, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_40 = ___sourceTexture4;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_40);
		int32_t L_42;
		L_42 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_1), 0, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_43 = ___sourceTexture4;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_43);
		int32_t L_45;
		L_45 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_8), 1, NULL);
		int32_t L_46;
		L_46 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_8), 0, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_47 = ___sourceTexture4;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_47);
		int32_t L_49;
		L_49 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_1), 1, NULL);
		int32_t L_50;
		L_50 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_1), 0, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_51 = ___sourceTexture4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_51);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_11), ((float)(((float)L_39)/((float)L_41))), ((float)(((float)L_42)/((float)L_44))), ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_45, L_46)))/((float)L_48))), ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_49, L_50)))/((float)L_52))), NULL);
		float L_53;
		L_53 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_11), NULL);
		float L_54;
		L_54 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_11), NULL);
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB(L_53, L_54, NULL);
		int32_t L_55;
		L_55 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_9), 0, NULL);
		int32_t L_56;
		L_56 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_2), 0, NULL);
		float L_57;
		L_57 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline((&V_10), 0, NULL);
		float L_58;
		L_58 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline((&V_3), 0, NULL);
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)L_55), ((float)L_56), ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_add(L_57, L_58)))), NULL);
		float L_59;
		L_59 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_11), NULL);
		float L_60;
		L_60 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_11), NULL);
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB(L_59, L_60, NULL);
		int32_t L_61;
		L_61 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_9), 0, NULL);
		int32_t L_62;
		L_62 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_2), 1, NULL);
		float L_63;
		L_63 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline((&V_10), 0, NULL);
		float L_64;
		L_64 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline((&V_3), 1, NULL);
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)L_61), ((float)L_62), ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_add(L_63, L_64)))), NULL);
		float L_65;
		L_65 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_11), NULL);
		float L_66;
		L_66 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_11), NULL);
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB(L_65, L_66, NULL);
		int32_t L_67;
		L_67 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_9), 1, NULL);
		int32_t L_68;
		L_68 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_2), 1, NULL);
		float L_69;
		L_69 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline((&V_10), 1, NULL);
		float L_70;
		L_70 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline((&V_3), 1, NULL);
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)L_67), ((float)L_68), ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_add(L_69, L_70)))), NULL);
		float L_71;
		L_71 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_11), NULL);
		float L_72;
		L_72 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_11), NULL);
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB(L_71, L_72, NULL);
		int32_t L_73;
		L_73 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_9), 1, NULL);
		int32_t L_74;
		L_74 = Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline((&V_2), 0, NULL);
		float L_75;
		L_75 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline((&V_10), 1, NULL);
		float L_76;
		L_76 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline((&V_3), 0, NULL);
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)L_73), ((float)L_74), ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_add(L_75, L_76)))), NULL);
	}

IL_038c:
	{
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0392:
	{
		int32_t L_78 = V_7;
		V_15 = (bool)((((int32_t)L_78) < ((int32_t)3))? 1 : 0);
		bool L_79 = V_15;
		if (L_79)
		{
			goto IL_0129;
		}
	}
	{
	}

IL_03a1:
	{
		int32_t L_80 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_03a5:
	{
		int32_t L_81 = V_0;
		V_16 = (bool)((((int32_t)L_81) < ((int32_t)3))? 1 : 0);
		bool L_82 = V_16;
		if (L_82)
		{
			goto IL_002e;
		}
	}
	{
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
		return;
	}
}
// UnityEngine.RectInt UnityEngine.TerrainTools.TerrainPaintUtility::CalcPixelRectFromBounds(UnityEngine.Terrain,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 TerrainPaintUtility_CalcPixelRectFromBounds_mA0F27994D74342C8EECA59B32E3B24CEF52D3334 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___boundsInTerrainSpace1, int32_t ___textureWidth2, int32_t ___textureHeight3, int32_t ___extraBorderPixels4, bool ___sharedBoundaryTexel5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		int32_t L_0 = ___textureWidth2;
		bool L_1 = ___sharedBoundaryTexel5;
		G_B1_0 = ((float)L_0);
		if (L_1)
		{
			G_B2_0 = ((float)L_0);
			goto IL_000e;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_000e:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = ___terrain0;
		NullCheck(L_2);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_3;
		L_3 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_3, NULL);
		float L_5 = L_4.___x_2;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(G_B3_1, G_B3_0))/L_5));
		int32_t L_6 = ___textureHeight3;
		bool L_7 = ___sharedBoundaryTexel5;
		G_B4_0 = ((float)L_6);
		if (L_7)
		{
			G_B5_0 = ((float)L_6);
			goto IL_0033;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0033:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = ___terrain0;
		NullCheck(L_8);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_9;
		L_9 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_9, NULL);
		float L_11 = L_10.___z_4;
		V_1 = ((float)(((float)il2cpp_codegen_subtract(G_B6_1, G_B6_0))/L_11));
		float L_12;
		L_12 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___boundsInTerrainSpace1), NULL);
		float L_13 = V_0;
		int32_t L_14;
		L_14 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(L_12, L_13)), NULL);
		int32_t L_15 = ___extraBorderPixels4;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		float L_16;
		L_16 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___boundsInTerrainSpace1), NULL);
		float L_17 = V_1;
		int32_t L_18;
		L_18 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(L_16, L_17)), NULL);
		int32_t L_19 = ___extraBorderPixels4;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		float L_20;
		L_20 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___boundsInTerrainSpace1), NULL);
		float L_21 = V_0;
		int32_t L_22;
		L_22 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		int32_t L_23 = ___extraBorderPixels4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		float L_24;
		L_24 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___boundsInTerrainSpace1), NULL);
		float L_25 = V_1;
		int32_t L_26;
		L_26 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)il2cpp_codegen_multiply(L_24, L_25)), NULL);
		int32_t L_27 = ___extraBorderPixels4;
		V_5 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		int32_t L_28 = V_4;
		int32_t L_29 = V_2;
		il2cpp_codegen_runtime_class_init_inline(PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_il2cpp_TypeInfo_var);
		int32_t L_30;
		L_30 = PaintContext_ClampContextResolution_m90A8DECD94A9CBDA1BA2ABB4AF30B2D4A3C241B6(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_28, L_29)), 1)), NULL);
		V_6 = L_30;
		int32_t L_31 = V_5;
		int32_t L_32 = V_3;
		int32_t L_33;
		L_33 = PaintContext_ClampContextResolution_m90A8DECD94A9CBDA1BA2ABB4AF30B2D4A3C241B6(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_31, L_32)), 1)), NULL);
		V_7 = L_33;
		int32_t L_34 = V_2;
		int32_t L_35 = V_3;
		int32_t L_36 = V_6;
		int32_t L_37 = V_7;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_38;
		memset((&L_38), 0, sizeof(L_38));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_38), L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
		V_8 = L_38;
		goto IL_00be;
	}

IL_00be:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_39 = V_8;
		return L_39;
	}
}
// UnityEngine.Texture2D UnityEngine.TerrainTools.TerrainPaintUtility::GetTerrainAlphaMapChecked(UnityEngine.Terrain,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainPaintUtility_GetTerrainAlphaMapChecked_m61B8DC77E576C67F4A93CA116608ABC0786E4A92 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, int32_t ___mapIndex1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	{
		int32_t L_0 = ___mapIndex1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1 = ___terrain0;
		NullCheck(L_1);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_2;
		L_2 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TerrainData_get_alphamapTextureCount_mF378908EA58CA135A4D58D586179418F1A6F14CD(L_2, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF3B79C1441F0B352BC82EDEAE7F83E650074A9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainPaintUtility_GetTerrainAlphaMapChecked_m61B8DC77E576C67F4A93CA116608ABC0786E4A92_RuntimeMethod_var)));
	}

IL_0021:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = ___terrain0;
		NullCheck(L_6);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_7;
		L_7 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_6, NULL);
		int32_t L_8 = ___mapIndex1;
		NullCheck(L_7);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9;
		L_9 = TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C(L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_0030;
	}

IL_0030:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = V_1;
		return L_10;
	}
}
// System.Int32 UnityEngine.TerrainTools.TerrainPaintUtility::FindTerrainLayerIndex(UnityEngine.Terrain,UnityEngine.TerrainLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainPaintUtility_FindTerrainLayerIndex_mF21091EAB56A8C467F80D187A800D1288FDB135A (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___inputLayer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_1;
		L_1 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_0, NULL);
		NullCheck(L_1);
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_2;
		L_2 = TerrainData_get_terrainLayers_m3B436DF37DDD9F18A46DD6BF112925AD5B8857C8(L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0028;
	}

IL_0011:
	{
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_7 = ___inputLayer1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, L_7, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_10 = V_1;
		V_3 = L_10;
		goto IL_0038;
	}

IL_0023:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0028:
	{
		int32_t L_12 = V_1;
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_13 = V_0;
		NullCheck(L_13);
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0011;
		}
	}
	{
		V_3 = (-1);
		goto IL_0038;
	}

IL_0038:
	{
		int32_t L_15 = V_3;
		return L_15;
	}
}
// System.Int32 UnityEngine.TerrainTools.TerrainPaintUtility::AddTerrainLayer(UnityEngine.Terrain,UnityEngine.TerrainLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainPaintUtility_AddTerrainLayer_mF5232126EC2C8B14BBC0ACDA0AD60652002DEC0A (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___inputLayer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* V_0 = NULL;
	int32_t V_1 = 0;
	TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_1;
		L_1 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_0, NULL);
		NullCheck(L_1);
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_2;
		L_2 = TerrainData_get_terrainLayers_m3B436DF37DDD9F18A46DD6BF112925AD5B8857C8(L_1, NULL);
		V_0 = L_2;
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_3 = V_0;
		NullCheck(L_3);
		V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		int32_t L_4 = V_1;
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_5 = (TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0*)(TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0*)SZArrayNew(TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_4, 1)));
		V_2 = L_5;
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_6 = V_0;
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_7 = V_2;
		int32_t L_8 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, L_8, NULL);
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_9 = V_2;
		int32_t L_10 = V_1;
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_11 = ___inputLayer1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*)L_11);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_12 = ___terrain0;
		NullCheck(L_12);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_13;
		L_13 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_12, NULL);
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_14 = V_2;
		NullCheck(L_13);
		TerrainData_set_terrainLayers_m8FC80DAB5CD38A11CDB082F94DBD3186CD434671(L_13, L_14, NULL);
		int32_t L_15 = V_1;
		V_3 = L_15;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t L_16 = V_3;
		return L_16;
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
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_brushOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1 (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CbrushOriginU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_brushU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushU_m96C6C42F19670792A93667FB998D6AB9C5233835 (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CbrushUU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushU_m96C6C42F19670792A93667FB998D6AB9C5233835_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = BrushTransform_get_brushU_m96C6C42F19670792A93667FB998D6AB9C5233835_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_brushV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushV_mD5FE860D6229C74AE92086F15835ED4F232814E2 (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CbrushVU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushV_mD5FE860D6229C74AE92086F15835ED4F232814E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = BrushTransform_get_brushV_mD5FE860D6229C74AE92086F15835ED4F232814E2_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_targetOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetOrigin_m257AB19A9D74C20E09A0178A2B909065744CBB1A (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CtargetOriginU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetOrigin_m257AB19A9D74C20E09A0178A2B909065744CBB1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = BrushTransform_get_targetOrigin_m257AB19A9D74C20E09A0178A2B909065744CBB1A_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_targetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetX_mBFDE3565FA7AA37EC5C15F58C6C04711F39B67D4 (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CtargetXU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetX_mBFDE3565FA7AA37EC5C15F58C6C04711F39B67D4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = BrushTransform_get_targetX_mBFDE3565FA7AA37EC5C15F58C6C04711F39B67D4_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.TerrainTools.BrushTransform::get_targetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetY_m35E99EA7B0B5E7502BDC49D9D985722B99ED3B95 (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CtargetYU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetY_m35E99EA7B0B5E7502BDC49D9D985722B99ED3B95_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = BrushTransform_get_targetY_m35E99EA7B0B5E7502BDC49D9D985722B99ED3B95_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TerrainTools.BrushTransform::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrushTransform__ctor_mC0DC3696A91B14BEE4FF118A3723BF2311D2524D (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___brushOrigin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___brushU1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___brushV2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float G_B3_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___brushU1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___brushV2;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___brushU1;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___brushV2;
		float L_7 = L_6.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		float L_8 = V_0;
		bool L_9;
		L_9 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_8, (0.0f), NULL);
		if (L_9)
		{
			goto IL_0033;
		}
	}
	{
		float L_10 = V_0;
		G_B3_0 = ((float)((1.0f)/L_10));
		goto IL_0038;
	}

IL_0033:
	{
		G_B3_0 = (1.0f);
	}

IL_0038:
	{
		V_1 = G_B3_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___brushV2;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___brushU1;
		float L_14 = L_13.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), L_12, ((-L_14)), /*hidden argument*/NULL);
		float L_16 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_15, L_16, NULL);
		V_2 = L_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___brushV2;
		float L_19 = L_18.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___brushU1;
		float L_21 = L_20.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((-L_19)), L_21, /*hidden argument*/NULL);
		float L_23 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_22, L_23, NULL);
		V_3 = L_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = ___brushOrigin0;
		float L_26 = L_25.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline(((-L_26)), L_27, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___brushOrigin0;
		float L_30 = L_29.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline(L_30, L_31, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_28, L_32, NULL);
		V_4 = L_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ___brushOrigin0;
		__this->___U3CbrushOriginU3Ek__BackingField_0 = L_34;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = ___brushU1;
		__this->___U3CbrushUU3Ek__BackingField_1 = L_35;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = ___brushV2;
		__this->___U3CbrushVU3Ek__BackingField_2 = L_36;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_4;
		__this->___U3CtargetOriginU3Ek__BackingField_3 = L_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_2;
		__this->___U3CtargetXU3Ek__BackingField_4 = L_38;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_3;
		__this->___U3CtargetYU3Ek__BackingField_5 = L_39;
		return;
	}
}
IL2CPP_EXTERN_C  void BrushTransform__ctor_mC0DC3696A91B14BEE4FF118A3723BF2311D2524D_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___brushOrigin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___brushU1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___brushV2, const RuntimeMethod* method)
{
	BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5*>(__this + _offset);
	BrushTransform__ctor_mC0DC3696A91B14BEE4FF118A3723BF2311D2524D(_thisAdjusted, ___brushOrigin0, ___brushU1, ___brushV2, method);
}
// UnityEngine.Rect UnityEngine.TerrainTools.BrushTransform::GetBrushXYBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D BrushTransform_GetBrushXYBounds_mF0BB5DFE1215819C5432C0672E73A27BDA1ED76B (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = BrushTransform_get_brushU_m96C6C42F19670792A93667FB998D6AB9C5233835_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = BrushTransform_get_brushV_mD5FE860D6229C74AE92086F15835ED4F232814E2_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_3, L_4, NULL);
		V_1 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = BrushTransform_get_brushU_m96C6C42F19670792A93667FB998D6AB9C5233835_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_6, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = BrushTransform_get_brushV_mD5FE860D6229C74AE92086F15835ED4F232814E2_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_8, L_9, NULL);
		V_2 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1_inline(__this, NULL);
		float L_12 = L_11.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___x_0;
		float L_15;
		L_15 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_12, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		float L_17 = L_16.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_2;
		float L_19 = L_18.___x_0;
		float L_20;
		L_20 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_17, L_19, NULL);
		float L_21;
		L_21 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_15, L_20, NULL);
		V_3 = L_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1_inline(__this, NULL);
		float L_23 = L_22.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		float L_25 = L_24.___x_0;
		float L_26;
		L_26 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_23, L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_1;
		float L_28 = L_27.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_2;
		float L_30 = L_29.___x_0;
		float L_31;
		L_31 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_28, L_30, NULL);
		float L_32;
		L_32 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_26, L_31, NULL);
		V_4 = L_32;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1_inline(__this, NULL);
		float L_34 = L_33.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_0;
		float L_36 = L_35.___y_1;
		float L_37;
		L_37 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_34, L_36, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_1;
		float L_39 = L_38.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_2;
		float L_41 = L_40.___y_1;
		float L_42;
		L_42 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_39, L_41, NULL);
		float L_43;
		L_43 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_37, L_42, NULL);
		V_5 = L_43;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1_inline(__this, NULL);
		float L_45 = L_44.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = V_0;
		float L_47 = L_46.___y_1;
		float L_48;
		L_48 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_45, L_47, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_1;
		float L_50 = L_49.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_2;
		float L_52 = L_51.___y_1;
		float L_53;
		L_53 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_50, L_52, NULL);
		float L_54;
		L_54 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_48, L_53, NULL);
		V_6 = L_54;
		float L_55 = V_3;
		float L_56 = V_5;
		float L_57 = V_4;
		float L_58 = V_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_59;
		L_59 = Rect_MinMaxRect_m540D2DD8C255D276AD4AE06D9CCA2A667EFA39E5(L_55, L_56, L_57, L_58, NULL);
		V_7 = L_59;
		goto IL_0109;
	}

IL_0109:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_60 = V_7;
		return L_60;
	}
}
IL2CPP_EXTERN_C  Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D BrushTransform_GetBrushXYBounds_mF0BB5DFE1215819C5432C0672E73A27BDA1ED76B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5*>(__this + _offset);
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D _returnValue;
	_returnValue = BrushTransform_GetBrushXYBounds_mF0BB5DFE1215819C5432C0672E73A27BDA1ED76B(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_inline (HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___terrain0, ___heightRegion1, ___synched2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_inline (TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, String_t*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___terrain0, ___textureName1, ___texelRegion2, ___synched3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_inline (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = __this->___m_terrainTiles_2;
		return L_0;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* PaintContext_get_originTerrain_mCD05E4154C291B8E4400902ABA56B3C017E52338_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = __this->___U3CoriginTerrainU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PaintContext_get_pixelSize_m625AE2931B8FBA55050107943314D6202DD930C5_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpixelSizeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 PaintContext_get_pixelRect_m5B74BA7635A35A622595FF04BFFC1C982BCDECB3_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0 = __this->___U3CpixelRectU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PaintContext_get_targetTextureWidth_m6ECD3E0E648DBB6632C633E06B5D6037A0B2CFEB_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtargetTextureWidthU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PaintContext_get_targetTextureHeight_m4975CA86AC71297D69844835B8D006174F806240_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtargetTextureHeightU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PaintContext_set_sourceRenderTexture_m729A4274969D259E689DA526313697ACA2299CD6_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___value0;
		__this->___U3CsourceRenderTextureU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceRenderTextureU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PaintContext_set_destinationRenderTexture_mE0DC8FD99A811C95223A9F7F0082D139EE3CF4CC_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___value0;
		__this->___U3CdestinationRenderTextureU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestinationRenderTextureU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PaintContext_get_sourceRenderTexture_m45B68671807EA82C3333635B0C5BB8F5D5161B86_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___U3CsourceRenderTextureU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PaintContext_set_oldRenderTexture_m911313349E453DD49EC9DB4606E9A4E5C86BC043_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___value0;
		__this->___U3ColdRenderTextureU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ColdRenderTextureU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PaintContext_get_oldRenderTexture_mBE3586662ED5A1DA7AB82FC7FB01D674095E48EA_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___U3ColdRenderTextureU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___U3CdestinationRenderTextureU3Ek__BackingField_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_op_Subtraction_m5C9A4D049F8EE288878F37C991CA1BBB738D8059_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___a0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___b1, const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___a0), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___b1), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___a0), NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___b1), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_4), ((int32_t)il2cpp_codegen_subtract(L_0, L_1)), ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_op_Addition_m6358133A28BA913D2080FD44472D1FD1CE1AC28F_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___a0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___b1, const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___a0), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___b1), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___a0), NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___b1), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_4), ((int32_t)il2cpp_codegen_add(L_0, L_1)), ((int32_t)il2cpp_codegen_add(L_2, L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a1;
		float L_1 = L_0.___x_0;
		float L_2 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a1;
		float L_4 = L_3.___y_1;
		float L_5 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0022;
	}

IL_0010:
	{
		int32_t L_4;
		L_4 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		V_2 = L_4;
		goto IL_0038;
	}

IL_0019:
	{
		int32_t L_5;
		L_5 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		V_2 = L_5;
		goto IL_0038;
	}

IL_0022:
	{
		int32_t L_6 = ___index0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEFFB7168E3613E48A681A1CF8ABA8CE48952519A)), L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2Int_get_Item_mBEBA58C3EF210F5B07BBB1C0F4847F31985A767C_RuntimeMethod_var)));
	}

IL_0038:
	{
		int32_t L_11 = V_2;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0022;
	}

IL_0010:
	{
		float L_4 = __this->___x_0;
		V_2 = L_4;
		goto IL_002d;
	}

IL_0019:
	{
		float L_5 = __this->___y_1;
		V_2 = L_5;
		goto IL_002d;
	}

IL_0022:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_RuntimeMethod_var)));
	}

IL_002d:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushOrigin_m77837ABD7D3250A219DF37D4943E6C8F87A12EE1_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CbrushOriginU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushU_m96C6C42F19670792A93667FB998D6AB9C5233835_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CbrushUU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_brushV_mD5FE860D6229C74AE92086F15835ED4F232814E2_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CbrushVU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetOrigin_m257AB19A9D74C20E09A0178A2B909065744CBB1A_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CtargetOriginU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetX_mBFDE3565FA7AA37EC5C15F58C6C04711F39B67D4_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CtargetXU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BrushTransform_get_targetY_m35E99EA7B0B5E7502BDC49D9D985722B99ED3B95_inline (BrushTransform_tB6733E9737CCFEE657C2B39B79E4421FB1D30EC5* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CtargetYU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mF8FEA9F68E8B9483BB640E01E8F986CBEB03A038_gshared_inline (Queue_1_tEF408088A5DAD6BDDE69FF3A57FF473A715345E1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 Enumerator_get_Current_mC41EF0278150018906F2AB9D7CF81AE865E6AA1C_gshared_inline (Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53* __this, const RuntimeMethod* method) 
{
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_0 = (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE Enumerator_get_Current_mAB48908F9E456DE35489D40F781F13159CD102CA_gshared_inline (Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE L_0 = (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_gshared_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method) 
{
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_gshared_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mEF2BD00B1D5F4DBF1CFD66724E184735DA309261_gshared_inline (Action_3_t4650988ADB675601F20A70864C39D699A6A8465D* __this, RuntimeObject* ___arg10, int32_t ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF634C1C87C0A161D8F03DDBC06493CAF8F48FACF_gshared_inline (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB316F08C671DB4B5CE814339D5236BEFFDD7B6A1_gshared_inline (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* __this, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 ___item0, const RuntimeMethod* method) 
{
	PaintedTerrainU5BU5D_t8E19EFEBF322E4B20A7A2FE2A2555D5895850CB3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		PaintedTerrainU5BU5D_t8E19EFEBF322E4B20A7A2FE2A2555D5895850CB3* L_1 = (PaintedTerrainU5BU5D_t8E19EFEBF322E4B20A7A2FE2A2555D5895850CB3*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		PaintedTerrainU5BU5D_t8E19EFEBF322E4B20A7A2FE2A2555D5895850CB3* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		PaintedTerrainU5BU5D_t8E19EFEBF322E4B20A7A2FE2A2555D5895850CB3* L_6 = V_0;
		int32_t L_7 = V_1;
		PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8)L_8);
		return;
	}

IL_0034:
	{
		PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 L_9 = ___item0;
		((  void (*) (List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5*, PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
