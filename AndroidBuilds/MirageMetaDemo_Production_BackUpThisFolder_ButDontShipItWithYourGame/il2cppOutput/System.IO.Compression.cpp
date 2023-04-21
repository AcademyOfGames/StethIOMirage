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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.IO.Compression.BrotliStream
struct BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.IO.InvalidDataException
struct InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle
struct SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4;
// Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle
struct SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16;
// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
struct TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0712C407AAC0041C84A00CDFA38D826309EC6048;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0B89752D9D44017F38B643B2D82C9CEE8132AA8A;
IL2CPP_EXTERN_C String_t* _stringLiteral18CDF77D80D162A02DCEE7C5B4DF4047C32FA20F;
IL2CPP_EXTERN_C String_t* _stringLiteral1D7DDE0CD98D0546D34DBFE1AA66C5982F4E297B;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral547999BA16094C3536189EA1CC631B96EFC47117;
IL2CPP_EXTERN_C String_t* _stringLiteral58E50E0EA29E3477BCED2CE16F851DA98AB7AB57;
IL2CPP_EXTERN_C String_t* _stringLiteral5BDD57354231082EAA6C493C3167F432E11058F5;
IL2CPP_EXTERN_C String_t* _stringLiteral602180C54D8B5D01F005ECAD78CF398B46B0AD26;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECC3496F02C1015AA4D74043A0DE13810269E15;
IL2CPP_EXTERN_C String_t* _stringLiteral742DCB290467E5A3DEF6925134096650FFD06078;
IL2CPP_EXTERN_C String_t* _stringLiteral7EDFE6869C6F3C37692861FB7160EF4E38F7BC0C;
IL2CPP_EXTERN_C String_t* _stringLiteral8E86505CF1C7AC53FD698A730A137CB783A7AA4F;
IL2CPP_EXTERN_C String_t* _stringLiteral905C7E64CA155D3E702359C1F3C76F2B7B790FC0;
IL2CPP_EXTERN_C String_t* _stringLiteral90DBF25B510B8254AB2001E4C67890377F8F1191;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC80EAF7D556B35E97D7BD4261C87B1BF066A0221;
IL2CPP_EXTERN_C String_t* _stringLiteralF086BE2A5265CF5C1E8A0332899EA2EBD8176EC5;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C String_t* _stringLiteralF8497361893F29B5DB350E7E971E316035775C9D;
IL2CPP_EXTERN_C String_t* _stringLiteralFE0CEE16B5ABB40DECDCB60FE13F095387DFC2A3;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_m8A7D7E2252BE0DEEE50BBE970AA0B3CB086622DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_m6D75C61448A96F49A1D9C018ECEDDFD55A53EEF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_mB912D44703C591A13D6E9DB0DEC6787D3B0C7F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_mE2A6658CEAC470EEE1C3F873355B0D87A485FE63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_mCE660F8708C0FCA63D261ACD872B136DAC1D25CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m0971675A516168FBAB95A659B934AD7958264E79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliDecoder_EnsureNotDisposed_m535DCEDF42829C275B6F8A6732DD08D55C5150BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliDecoder_InitializeDecoder_m7F32673D3B23DDDA39024F5B9113DE7B369C479F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliEncoder_EnsureNotDisposed_mF261E4A5E06537AE45FC41C1B870F1C3F1312B56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliEncoder_InitializeEncoder_mA3C8D746B70CE516A1988FAEEEC6D8372C34333A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_EnsureNotDisposed_mEFE1F60713EA09CCE16ABD4555E1A934D6082398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_Flush_mA394F5BC1AF55C43C52A74476D89AB9A0CA8C7C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_ReadAsync_m76D3632F4A0BA8D279495BB18D2BCB3F9ECD4901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_Read_m9AE678E95CB46F45A8809680DF518982703887D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_Seek_mDF355B0B8DC49345135E40762D19DA7F8DD7D6DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_SetLength_m77E1C58E4A746086B6A7A269F2EAEFCC9B2A823C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_ThrowInvalidBeginCall_m6C4F6B13CB405FD995AB36E4AAC72991C531300F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_ValidateParameters_mC050D2C342885D13A56165574E1455F7C11FED95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_WriteAsync_m70F3494D80F67D368868D6110AEFBB6C94B30834_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_WriteCore_mAD1B931ACBE9C3B53E7ABF4370D21B4BA35FB592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream__ctor_m1B69B5FE3585F3F11F218BE357E8BB2C1E390E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_get_Length_m0C198AE9C776726E21AF7A8B3B7A262ACCD87554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_get_Position_mC219FF3B8ADD14CD763DCE2E190CE6F45C88FAA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrotliStream_set_Position_m923404CCE64CD23E3DFA18604BC75F1D35F25104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredValueTaskAwaitable_1_GetAwaiter_m94C14DDAC561363EFCF143293D1E2E5CE74522E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredValueTaskAwaiter_GetResult_mB250A2B7423863EC0EF64C56F679FBA4FD674021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredValueTaskAwaiter_get_IsCompleted_mB0B5FC0CD4E3282961DCA3F5B5C24260680B7461_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Empty_m38B8A14AECE32E9B164F0BCD693F49993AC24625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_Slice_mE27F7313C441F1E0B44FB42C112424F9F9FE27A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C223794FC5D5DD68618D9F27D8F419DA65A0D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_mCD6418D34E9684DB6691549A225F5F9CC5C32753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFinishReadAsyncMemoryU3Ed__41_MoveNext_m2BCB958E3D630CB14AAAB911AA05B6D2C6CDD731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFlushAsyncCoreU3Ed__55_MoveNext_m1C7A1EC027BFE671FBD0DDBD28BEC17422E3BFE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CInvokeCallbackWhenTaskCompletesU3Eb__0_m2C4821F622E71609CAD575ECAC6E757A4BE5CD4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWriteAsyncMemoryCoreU3Ed__52_MoveNext_m59BE771BA4C0236DD8AD766C5344906D22DACB0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1_ConfigureAwait_m8DF55719C52ED899F1B6687F9369EDD264871A31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1__ctor_m6164BE5A3BB19E083385C0C701140EA391B90071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9397137EE44527D005A3150139535C74B9F1C126 
{
};

// System.Buffers.MemoryManager`1<System.Byte>
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Interop
struct Interop_t7A55664521EFD767DDDB5FB4003A95B55C643CB0  : public RuntimeObject
{
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Threading.Tasks.TaskToApm
struct TaskToApm_t1FABBD14AC459C47D18E9CA926E5C4F9E54169BD  : public RuntimeObject
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

// Interop/Brotli
struct Brotli_t339C5DB06EAF28914FDA6D2F54D061D756C8EAF3  : public RuntimeObject
{
};

// System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16  : public RuntimeObject
{
	// System.AsyncCallback System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0::callback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback_0;
	// System.IAsyncResult System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0::asyncResult
	RuntimeObject* ___asyncResult_1;
};

// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
struct TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031  : public RuntimeObject
{
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::Task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___Task_0;
	// System.Object System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::_state
	RuntimeObject* ____state_1;
	// System.Boolean System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::_completedSynchronously
	bool ____completedSynchronously_2;
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_38;
};

struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory_39;
};

// System.Threading.Tasks.ValueTask`1<System.Int32>
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 
{
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject* ____obj_1;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	int32_t ____result_2;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;
};

struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.ValueTask`1::s_canceledTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_canceledTask_0;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.IO.Compression.BrotliDecoder
struct BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847 
{
	// Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle System.IO.Compression.BrotliDecoder::_state
	SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* ____state_0;
	// System.Boolean System.IO.Compression.BrotliDecoder::_disposed
	bool ____disposed_1;
};
// Native definition for P/Invoke marshalling of System.IO.Compression.BrotliDecoder
struct BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshaled_pinvoke
{
	void* ____state_0;
	int32_t ____disposed_1;
};
// Native definition for COM marshalling of System.IO.Compression.BrotliDecoder
struct BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshaled_com
{
	void* ____state_0;
	int32_t ____disposed_1;
};

// System.IO.Compression.BrotliEncoder
struct BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D 
{
	// Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle System.IO.Compression.BrotliEncoder::_state
	SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* ____state_0;
	// System.Boolean System.IO.Compression.BrotliEncoder::_disposed
	bool ____disposed_1;
};
// Native definition for P/Invoke marshalling of System.IO.Compression.BrotliEncoder
struct BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshaled_pinvoke
{
	void* ____state_0;
	int32_t ____disposed_1;
};
// Native definition for COM marshalling of System.IO.Compression.BrotliEncoder
struct BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshaled_com
{
	void* ____state_0;
	int32_t ____disposed_1;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F 
{
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject* ____obj_1;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;
};

struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_StaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_canceledTask_0;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1<System.Int32>
struct ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043 
{
	// System.Threading.Tasks.ValueTask`1<TResult> System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::_value
	ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 ____value_0;
};

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>
struct ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 
{
	// System.Threading.Tasks.ValueTask`1<TResult> System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter::_value
	ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 ____value_0;
};

// System.IO.Compression.BrotliStream
struct BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.IO.Compression.BrotliStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_5;
	// System.Byte[] System.IO.Compression.BrotliStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_6;
	// System.Boolean System.IO.Compression.BrotliStream::_leaveOpen
	bool ____leaveOpen_7;
	// System.IO.Compression.CompressionMode System.IO.Compression.BrotliStream::_mode
	int32_t ____mode_8;
	// System.Int32 System.IO.Compression.BrotliStream::_activeAsyncOperation
	int32_t ____activeAsyncOperation_9;
	// System.IO.Compression.BrotliDecoder System.IO.Compression.BrotliStream::_decoder
	BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847 ____decoder_10;
	// System.Int32 System.IO.Compression.BrotliStream::_bufferOffset
	int32_t ____bufferOffset_11;
	// System.Int32 System.IO.Compression.BrotliStream::_bufferCount
	int32_t ____bufferCount_12;
	// System.IO.Compression.BrotliEncoder System.IO.Compression.BrotliStream::_encoder
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D ____encoder_13;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable
struct ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 
{
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::_value
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter
struct ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D 
{
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::_value
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value_0;
};

// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>
struct AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1::_methodBuilder
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 ____methodBuilder_0;
	// TResult System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1::_result
	int32_t ____result_1;
	// System.Boolean System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1::_haveResult
	bool ____haveResult_2;
	// System.Boolean System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1::_useBuilder
	bool ____useBuilder_3;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
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

// Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle
struct SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle
struct SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.InvalidDataException
struct InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41
struct U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6 
{
	// System.Int32 System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32> System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41::<>t__builder
	AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 ___U3CU3Et__builder_1;
	// System.IO.Compression.BrotliStream System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41::<>4__this
	BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* ___U3CU3E4__this_2;
	// System.Threading.CancellationToken System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Memory`1<System.Byte> System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41::buffer
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer_4;
	// System.Int32 System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41::<totalWritten>5__2
	int32_t ___U3CtotalWrittenU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32> System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41::<>u__1
	ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 ___U3CU3Eu__1_6;
};

// System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55
struct U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4 
{
	// System.Int32 System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.IO.Compression.BrotliStream System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55::<>4__this
	BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* ___U3CU3E4__this_2;
	// System.Threading.CancellationToken System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Buffers.OperationStatus System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55::<lastResult>5__2
	int32_t ___U3ClastResultU3E5__2_4;
	// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55::<>u__1
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ___U3CU3Eu__1_5;
};

// System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52
struct U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950 
{
	// System.Int32 System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.IO.Compression.BrotliStream System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52::<>4__this
	BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* ___U3CU3E4__this_2;
	// System.ReadOnlyMemory`1<System.Byte> System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52::buffer
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___buffer_3;
	// System.Threading.CancellationToken System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// System.Buffers.OperationStatus System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52::<lastResult>5__2
	int32_t ___U3ClastResultU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52::<>u__1
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ___U3CU3Eu__1_6;
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

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_gshared (const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Byte>(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C223794FC5D5DD68618D9F27D8F419DA65A0D7F_gshared (RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Void System.Memory`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.ValueTask`1<System.Int32>::AsTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1_gshared (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCanceled<System.Int32>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m6164BE5A3BB19E083385C0C701140EA391B90071_gshared_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___task0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::Start<System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m0971675A516168FBAB95A659B934AD7958264E79_gshared_inline (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<TResult> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlyMemory`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_mE2A6658CEAC470EEE1C3F873355B0D87A485FE63_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_mB912D44703C591A13D6E9DB0DEC6787D3B0C7F41_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4* ___stateMachine0, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_get_Empty_m38B8A14AECE32E9B164F0BCD693F49993AC24625_gshared (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1<TResult> System.Threading.Tasks.ValueTask`1<System.Int32>::ConfigureAwait(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043 ValueTask_1_ConfigureAwait_m8DF55719C52ED899F1B6687F9369EDD264871A31_gshared_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1<System.Int32>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 ConfiguredValueTaskAwaitable_1_GetAwaiter_m94C14DDAC561363EFCF143293D1E2E5CE74522E3_gshared_inline (ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_mB0B5FC0CD4E3282961DCA3F5B5C24260680B7461_gshared_inline (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>,System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_mCE660F8708C0FCA63D261ACD872B136DAC1D25CC_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* ___awaiter0, U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfiguredValueTaskAwaiter_GetResult_mB250A2B7423863EC0EF64C56F679FBA4FD674021_gshared_inline (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.Memory`1<System.Byte>::get_Span()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Int32 System.Memory`1<System.Byte>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, int32_t ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Memory`1<System.Byte>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.ReadOnlyMemory`1<T> System.ReadOnlyMemory`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ReadOnlyMemory_1_Slice_mE27F7313C441F1E0B44FB42C112424F9F9FE27A6_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_m6D75C61448A96F49A1D9C018ECEDDFD55A53EEF5_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950* ___stateMachine1, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.ReadOnlyMemory`1<T> System.Memory`1<System.Byte>::op_Implicit(System.Memory`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___memory0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_m8A7D7E2252BE0DEEE50BBE970AA0B3CB086622DE_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4* ___stateMachine1, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlyMemory`1<System.Byte>::get_Span()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m40354586DF61B7BDABD8A98289C316047D4D3DA9_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask`1<System.Int32>::.ctor(System.Object,TResult,System.Int16,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m690026098BC4DA164D43CBA851AA720C585F05C4_gshared_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, RuntimeObject* ___obj0, int32_t ___result1, int16_t ___token2, bool ___continueOnCapturedContext3, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1<System.Int32>::.ctor(System.Threading.Tasks.ValueTask`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable_1__ctor_m508597503A661BAE9FEB5315DC97BCD99E4BDCB7_gshared_inline (ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043* __this, ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>::.ctor(System.Threading.Tasks.ValueTask`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_m1FA5EBCEDA701BBF0893ECF2665D06B4CA2D97B9_gshared_inline (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* __this, ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.ValueTask`1<System.Int32>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompleted_m327391A8FC9F06A07DC95CBC77756BA963EC42A2_gshared_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.ValueTask`1<System.Int32>::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueTask_1_get_Result_m272AA34FF8C511DECB3E35C6C0A1039F0723F960_gshared_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, const RuntimeMethod* method) ;
// System.Void System.Memory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.ReadOnlyMemory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_mC964D8DBB34D4EF9D7D5E6B11E2AD9E9AAB3DE7D_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;

// System.Void Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeBrotliDecoderHandle__ctor_mBBFC1DB79F1B756A31018CF108FB228A388929F8 (SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeBrotliEncoderHandle__ctor_mE3D1226809A078B95C8F32B2EE32FD3EC7666CBD (SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliEncoder::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliEncoder_Dispose_m986392D5C6EA749269EB74351E5661BB783B8F60 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliDecoder::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliDecoder_Dispose_mC84D643DBB51DE4E9ECC1AAFDA6C9E30C8CA99A1 (BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::get_Empty()
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27 (const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (const RuntimeMethod*))ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_gshared)(method);
}
// System.Void System.IO.Compression.BrotliStream::WriteCore(System.ReadOnlySpan`1<System.Byte>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_WriteCore_mAD1B931ACBE9C3B53E7ABF4370D21B4BA35FB592 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer0, bool ___isFinalBlock1, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.Compression.BrotliStream::get_AsyncOperationIsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BrotliStream_get_AsyncOperationIsActive_m652741235A1B2152B79ACAB3AAE1FF0A61022256 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliStream::ThrowInvalidBeginCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_ThrowInvalidBeginCall_m6C4F6B13CB405FD995AB36E4AAC72991C531300F (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliStream::ValidateParameters(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_ValidateParameters_mC050D2C342885D13A56165574E1455F7C11FED95 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Void System.IO.Compression.BrotliStream::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_EnsureNotDisposed_mEFE1F60713EA09CCE16ABD4555E1A934D6082398 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Byte>(T[],System.Int32,System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline)(___array0, ___start1, ___length2, method);
}
// System.Span`1<T> System.Span`1<System.Byte>::op_Implicit(T[])
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared)(___array0, method);
}
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared)(__this, ___destination0, method);
}
// System.Void System.IO.InvalidDataException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532 (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared)(___span0, method);
}
// System.Buffers.OperationStatus System.IO.Compression.BrotliDecoder::Decompress(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliDecoder_Decompress_m0BD52E9AC534C33D8A8F1D0BC6CE1880644795C5 (BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, const RuntimeMethod*))Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline)(__this, ___start0, method);
}
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// System.IAsyncResult System.Threading.Tasks.TaskToApm::Begin(System.Threading.Tasks.Task,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToApm_Begin_m1A080755817528FB342A9A1352631ACCBF9CEBAE (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___state2, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
inline int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C223794FC5D5DD68618D9F27D8F419DA65A0D7F (RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C223794FC5D5DD68618D9F27D8F419DA65A0D7F_gshared)(___asyncResult0, method);
}
// System.Void System.Memory`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.ValueTask`1<System.Int32>::AsTask()
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1 (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21*, const RuntimeMethod*))ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1_gshared)(__this, method);
}
// System.Void System.IO.Compression.BrotliStream::EnsureNoActiveAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_EnsureNoActiveAsyncOperation_mB8E400D887D2616CDAB12E62FB89639313ADF0C8 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCanceled<System.Int32>(System.Threading.CancellationToken)
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D_gshared)(___cancellationToken0, method);
}
// System.Void System.Threading.Tasks.ValueTask`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void ValueTask_1__ctor_m6164BE5A3BB19E083385C0C701140EA391B90071_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___task0, const RuntimeMethod* method)
{
	((  void (*) (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21*, Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))ValueTask_1__ctor_m6164BE5A3BB19E083385C0C701140EA391B90071_gshared_inline)(__this, ___task0, method);
}
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.BrotliStream::FinishReadAsyncMemory(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 BrotliStream_FinishReadAsyncMemory_m48B6AA1E9FBADAB30D19E5B88B04A2B3C1BE2BDC (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::Create()
inline AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E (const RuntimeMethod* method)
{
	return ((  AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 (*) (const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::Start<System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41>(TStateMachine&)
inline void AsyncValueTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m0971675A516168FBAB95A659B934AD7958264E79_inline (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m0971675A516168FBAB95A659B934AD7958264E79_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.ValueTask`1<TResult> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::get_Task()
inline ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3 (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, const RuntimeMethod* method)
{
	return ((  ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3_gshared)(__this, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(T[])
inline void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline)(__this, ___array0, method);
}
// System.Buffers.OperationStatus System.IO.Compression.BrotliEncoder::Compress(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliEncoder_Compress_mA00FEA4D2B0999A8CC6CDD028A916FF0C586C746 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32,System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline)(__this, ___start0, method);
}
// System.Void System.Threading.Tasks.TaskToApm::End(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_mCD6418D34E9684DB6691549A225F5F9CC5C32753 (RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlyMemory`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::AsTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ValueTask_AsTask_m4D3D04C81CDCB7D7D9615B5926463B2A5D3DA010 (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.IO.Compression.BrotliStream::WriteAsyncMemoryCore(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* BrotliStream_WriteAsyncMemoryCore_mB01C54C2726891FBA6F6AAA0F712D1D31E438310 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Threading.Tasks.Task)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_mDDD3DE02109E43D5F0189559B39A1831AA878BE9_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_mE2A6658CEAC470EEE1C3F873355B0D87A485FE63 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_mE2A6658CEAC470EEE1C3F873355B0D87A485FE63_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeHandle_get_IsClosed_mD2CD4AA6E3B0A242E48080F18BC07199CAB80273 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Buffers.OperationStatus System.IO.Compression.BrotliEncoder::Flush(System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliEncoder_Flush_mB35C442FC2F5C35E10D35484062678CAA6E5AE37 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, int32_t* ___bytesWritten1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_FromCanceled_m2C682C247C1D89F6DD5A186BBBFEC1544921308E (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.IO.Compression.BrotliStream::FlushAsyncCore(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* BrotliStream_FlushAsyncCore_mA2A623D0063B1D47EFB5F41E08082818D1F58D3B (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_mB912D44703C591A13D6E9DB0DEC6787D3B0C7F41 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_mB912D44703C591A13D6E9DB0DEC6787D3B0C7F41_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.IO.Compression.BrotliStream::AsyncOperationStarting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_AsyncOperationStarting_mAC16BE1B14D6705144A85A166D67627A2D6223FF (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliStream::AsyncOperationCompleting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_AsyncOperationCompleting_mCB170E117C21840FABE601E4EF2D4EAEBA937C6B (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::get_Empty()
inline Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_get_Empty_m38B8A14AECE32E9B164F0BCD693F49993AC24625 (const RuntimeMethod* method)
{
	return ((  Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 (*) (const RuntimeMethod*))Memory_1_get_Empty_m38B8A14AECE32E9B164F0BCD693F49993AC24625_gshared)(method);
}
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1<TResult> System.Threading.Tasks.ValueTask`1<System.Int32>::ConfigureAwait(System.Boolean)
inline ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043 ValueTask_1_ConfigureAwait_m8DF55719C52ED899F1B6687F9369EDD264871A31_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043 (*) (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21*, bool, const RuntimeMethod*))ValueTask_1_ConfigureAwait_m8DF55719C52ED899F1B6687F9369EDD264871A31_gshared_inline)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1<System.Int32>::GetAwaiter()
inline ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 ConfiguredValueTaskAwaitable_1_GetAwaiter_m94C14DDAC561363EFCF143293D1E2E5CE74522E3_inline (ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 (*) (ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043*, const RuntimeMethod*))ConfiguredValueTaskAwaitable_1_GetAwaiter_m94C14DDAC561363EFCF143293D1E2E5CE74522E3_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>::get_IsCompleted()
inline bool ConfiguredValueTaskAwaiter_get_IsCompleted_mB0B5FC0CD4E3282961DCA3F5B5C24260680B7461_inline (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5*, const RuntimeMethod*))ConfiguredValueTaskAwaiter_get_IsCompleted_mB0B5FC0CD4E3282961DCA3F5B5C24260680B7461_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>,System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41>(TAwaiter&,TStateMachine&)
inline void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_mCE660F8708C0FCA63D261ACD872B136DAC1D25CC (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* ___awaiter0, U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5*, U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_mCE660F8708C0FCA63D261ACD872B136DAC1D25CC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>::GetResult()
inline int32_t ConfiguredValueTaskAwaiter_GetResult_mB250A2B7423863EC0EF64C56F679FBA4FD674021_inline (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5*, const RuntimeMethod*))ConfiguredValueTaskAwaiter_GetResult_mB250A2B7423863EC0EF64C56F679FBA4FD674021_gshared_inline)(__this, method);
}
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.Memory`1<System.Byte>::get_Span()
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline)(__this, method);
}
// System.Memory`1<T> System.Memory`1<System.Byte>::Slice(System.Int32)
inline Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, int32_t, const RuntimeMethod*))Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_gshared_inline)(__this, ___start0, method);
}
// System.Int32 System.Memory`1<System.Byte>::get_Length()
inline int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
inline void AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9 (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, Exception_t*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::SetResult(TResult)
inline void AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7 (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, int32_t ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, int32_t, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7_gshared)(__this, ___result0, method);
}
// System.Void System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishReadAsyncMemoryU3Ed__41_MoveNext_m2BCB958E3D630CB14AAAB911AA05B6D2C6CDD731 (U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, RuntimeObject*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishReadAsyncMemoryU3Ed__41_SetStateMachine_m3CBB7FCB34C38FC71900FCA7B1885DC98AE23D02 (U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Memory`1<System.Byte>::.ctor(T[])
inline void Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_gshared_inline)(__this, ___array0, method);
}
// System.Buffers.OperationStatus System.IO.Compression.BrotliEncoder::Compress(System.ReadOnlyMemory`1<System.Byte>,System.Memory`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliEncoder_Compress_m87A14378311C5A862021ADBB14A215700DF9CFC0 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___source0, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) ;
// System.ReadOnlyMemory`1<T> System.ReadOnlyMemory`1<System.Byte>::Slice(System.Int32)
inline ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ReadOnlyMemory_1_Slice_mE27F7313C441F1E0B44FB42C112424F9F9FE27A6_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, int32_t, const RuntimeMethod*))ReadOnlyMemory_1_Slice_mE27F7313C441F1E0B44FB42C112424F9F9FE27A6_gshared_inline)(__this, ___start0, method);
}
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable System.Threading.Tasks.ValueTask::ConfigureAwait(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_m6D75C61448A96F49A1D9C018ECEDDFD55A53EEF5 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D*, U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_m6D75C61448A96F49A1D9C018ECEDDFD55A53EEF5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteAsyncMemoryCoreU3Ed__52_MoveNext_m59BE771BA4C0236DD8AD766C5344906D22DACB0C (U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteAsyncMemoryCoreU3Ed__52_SetStateMachine_m47A2D1C89535AC9EE149033A3CD7B2F76FA75547 (U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Buffers.OperationStatus System.IO.Compression.BrotliEncoder::Flush(System.Memory`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliEncoder_Flush_m6085D5506175DCC762AF3D669BC7C905D885E6C3 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___destination0, int32_t* ___bytesWritten1, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::Slice(System.Int32,System.Int32)
inline Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, int32_t, int32_t, const RuntimeMethod*))Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.ReadOnlyMemory`1<T> System.Memory`1<System.Byte>::op_Implicit(System.Memory`1<T>)
inline ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___memory0, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, const RuntimeMethod*))Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD_gshared)(___memory0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_m8A7D7E2252BE0DEEE50BBE970AA0B3CB086622DE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D*, U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_m8A7D7E2252BE0DEEE50BBE970AA0B3CB086622DE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushAsyncCoreU3Ed__55_MoveNext_m1C7A1EC027BFE671FBD0DDBD28BEC17422E3BFE0 (U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushAsyncCoreU3Ed__55_SetStateMachine_mD75D8773A561E5892E3335F572C881CB0B58F489 (U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle Interop/Brotli::BrotliDecoderCreateInstance(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* Brotli_BrotliDecoderCreateInstance_m6A88BD51B6D0D07F60E15C460A5B630C806FF409 (intptr_t ___allocFunc0, intptr_t ___freeFunc1, intptr_t ___opaque2, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliDecoder::InitializeDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliDecoder_InitializeDecoder_m7F32673D3B23DDDA39024F5B9113DE7B369C479F (BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliDecoder::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliDecoder_EnsureNotDisposed_m535DCEDF42829C275B6F8A6732DD08D55C5150BE (BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliDecoder::EnsureInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliDecoder_EnsureInitialized_m6184E8782F3EBA46B1292C7AFFD9084B5A27C3BB (BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean Interop/Brotli::BrotliDecoderIsFinished(Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Brotli_BrotliDecoderIsFinished_m4B248470CF324970EFDB452045D17F36DBEEEC36 (SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* ___state0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared)(___span0, method);
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared)(___span0, method);
}
// System.Int32 Interop/Brotli::BrotliDecoderDecompressStream(Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle,System.IntPtr&,System.Byte**,System.IntPtr&,System.Byte**,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Brotli_BrotliDecoderDecompressStream_m5CA3A81C1718653B7DBC0C4CB80DB72E9C3B2182 (SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* ___state0, intptr_t* ___availableIn1, uint8_t** ___nextIn2, intptr_t* ___availableOut3, uint8_t** ___nextOut4, intptr_t* ___totalOut5, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliEncoder::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliEncoder_EnsureNotDisposed_mF261E4A5E06537AE45FC41C1B870F1C3F1312B56 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, const RuntimeMethod* method) ;
// Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle Interop/Brotli::BrotliEncoderCreateInstance(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* Brotli_BrotliEncoderCreateInstance_m73FC14FBDB2B86152CA0A9EA83A7D0B7492DAC17 (intptr_t ___allocFunc0, intptr_t ___freeFunc1, intptr_t ___opaque2, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliEncoder::InitializeEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliEncoder_InitializeEncoder_mA3C8D746B70CE516A1988FAEEEC6D8372C34333A (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.BrotliEncoder::EnsureInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliEncoder_EnsureInitialized_m05698B56A67F11A53D86774D6B729165307114E7 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, const RuntimeMethod* method) ;
// System.Buffers.OperationStatus System.IO.Compression.BrotliEncoder::Compress(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.IO.Compression.BrotliEncoderOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliEncoder_Compress_m7961246DE0986EAD0B7DA3B00EC32C18A444DF21 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, int32_t ___operation4, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlyMemory`1<System.Byte>::get_Span()
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, const RuntimeMethod*))ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline)(__this, method);
}
// System.Boolean Interop/Brotli::BrotliEncoderCompressStream(Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle,System.IO.Compression.BrotliEncoderOperation,System.IntPtr&,System.Byte**,System.IntPtr&,System.Byte**,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Brotli_BrotliEncoderCompressStream_m67A3B2A84FEE61DF49DC5B3B9B51A4D2893F104E (SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* ___state0, int32_t ___op1, intptr_t* ___availableIn2, uint8_t** ___nextIn3, intptr_t* ___availableOut4, uint8_t** ___nextOut5, intptr_t* ___totalOut6, const RuntimeMethod* method) ;
// System.Boolean Interop/Brotli::BrotliEncoderHasMoreOutput(Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Brotli_BrotliEncoderHasMoreOutput_mA2AFC09648D4ED22D7169602F491DC974754F02C (SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* ___state0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::.ctor(System.Threading.Tasks.Task,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskWrapperAsyncResult__ctor_mF1F0F980A52876DF07F5CF9B80CDD5CAE167F26D (TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, RuntimeObject* ___state1, bool ___completedSynchronously2, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) ;
// System.Object System.Threading.Tasks.Task::get_AsyncState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Task_get_AsyncState_mD702084E5686165B5571ED1D296BB5EEB81DB2D8_inline (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToApm::InvokeCallbackWhenTaskCompletes(System.Threading.Tasks.Task,System.AsyncCallback,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_InvokeCallbackWhenTaskCompletes_m8553A6EFB5AEF7E94F4377E87ACE37D1920BC932 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___antecedent0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___asyncResult2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4232277D2AB8EE7F6F66C4565C3CD16E58132C07 (U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_OnCompleted_mB6A56C98F368A70EC9FC750C492A08F62DD7EEA5 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method) ;
// System.Void Interop/Brotli::BrotliEncoderDestroyInstance(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Brotli_BrotliEncoderDestroyInstance_mC22ACF97F509C7A8E0DA4C91CDEF2050C2BC631A (intptr_t ___state0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Interop/Brotli::BrotliDecoderDestroyInstance(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Brotli_BrotliDecoderDestroyInstance_mDF10CB788AEDBD9F57645193081FB7E6B6575EF4 (intptr_t ___state0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Object,System.Int16,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m82EE965BA61F399181B8414BB6ABB146C3332D7B_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, RuntimeObject* ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_mD9583661A0F3E2D6A23C37313CC015A30097CA31_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_m063C936DEC3C86E2F3F1CB8B2C629084A95E91A1_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.ValueTask::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mC9BF7154FF125E1B49DF8D06804DBED4CBC364D9_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask::ThrowIfCompletedUnsuccessfully()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_mE62D61EB45AF96000EE4EDBB47991C7A1E62BBB1_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m40354586DF61B7BDABD8A98289C316047D4D3DA9 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m40354586DF61B7BDABD8A98289C316047D4D3DA9_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.Threading.Tasks.ValueTask`1<System.Int32>::.ctor(System.Object,TResult,System.Int16,System.Boolean)
inline void ValueTask_1__ctor_m690026098BC4DA164D43CBA851AA720C585F05C4_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, RuntimeObject* ___obj0, int32_t ___result1, int16_t ___token2, bool ___continueOnCapturedContext3, const RuntimeMethod* method)
{
	((  void (*) (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21*, RuntimeObject*, int32_t, int16_t, bool, const RuntimeMethod*))ValueTask_1__ctor_m690026098BC4DA164D43CBA851AA720C585F05C4_gshared_inline)(__this, ___obj0, ___result1, ___token2, ___continueOnCapturedContext3, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1<System.Int32>::.ctor(System.Threading.Tasks.ValueTask`1<TResult>)
inline void ConfiguredValueTaskAwaitable_1__ctor_m508597503A661BAE9FEB5315DC97BCD99E4BDCB7_inline (ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043* __this, ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 ___value0, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043*, ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21, const RuntimeMethod*))ConfiguredValueTaskAwaitable_1__ctor_m508597503A661BAE9FEB5315DC97BCD99E4BDCB7_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>::.ctor(System.Threading.Tasks.ValueTask`1<TResult>)
inline void ConfiguredValueTaskAwaiter__ctor_m1FA5EBCEDA701BBF0893ECF2665D06B4CA2D97B9_inline (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* __this, ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 ___value0, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5*, ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21, const RuntimeMethod*))ConfiguredValueTaskAwaiter__ctor_m1FA5EBCEDA701BBF0893ECF2665D06B4CA2D97B9_gshared_inline)(__this, ___value0, method);
}
// System.Boolean System.Threading.Tasks.ValueTask`1<System.Int32>::get_IsCompleted()
inline bool ValueTask_1_get_IsCompleted_m327391A8FC9F06A07DC95CBC77756BA963EC42A2_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21*, const RuntimeMethod*))ValueTask_1_get_IsCompleted_m327391A8FC9F06A07DC95CBC77756BA963EC42A2_gshared_inline)(__this, method);
}
// TResult System.Threading.Tasks.ValueTask`1<System.Int32>::get_Result()
inline int32_t ValueTask_1_get_Result_m272AA34FF8C511DECB3E35C6C0A1039F0723F960_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21*, const RuntimeMethod*))ValueTask_1_get_Result_m272AA34FF8C511DECB3E35C6C0A1039F0723F960_gshared_inline)(__this, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.Memory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
inline void Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_gshared_inline)(__this, ___obj0, ___start1, ___length2, method);
}
// System.Void System.ReadOnlyMemory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
inline void ReadOnlyMemory_1__ctor_mC964D8DBB34D4EF9D7D5E6B11E2AD9E9AAB3DE7D_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))ReadOnlyMemory_1__ctor_mC964D8DBB34D4EF9D7D5E6B11E2AD9E9AAB3DE7D_gshared_inline)(__this, ___obj0, ___start1, ___length2, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::ValidateEnd(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) ;
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_System_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL BrotliDecoderCreateInstance(intptr_t, intptr_t, intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_System_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL BrotliDecoderDecompressStream(void*, intptr_t*, uint8_t**, intptr_t*, uint8_t**, intptr_t*);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_System_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL BrotliDecoderDestroyInstance(intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_System_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL BrotliDecoderIsFinished(void*);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_System_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL BrotliEncoderCreateInstance(intptr_t, intptr_t, intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_System_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL BrotliEncoderCompressStream(void*, int32_t, intptr_t*, uint8_t**, intptr_t*, uint8_t**, intptr_t*);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_System_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL BrotliEncoderHasMoreOutput(void*);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_System_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL BrotliEncoderDestroyInstance(intptr_t);
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
// Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle Interop/Brotli::BrotliDecoderCreateInstance(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* Brotli_BrotliDecoderCreateInstance_m6A88BD51B6D0D07F60E15C460A5B630C806FF409 (intptr_t ___allocFunc0, intptr_t ___freeFunc1, intptr_t ___opaque2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(BrotliDecoderCreateInstance)(___allocFunc0, ___freeFunc1, ___opaque2);

	// Marshaling of return value back from native representation
	SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* _returnValue_unmarshaled = (SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4*)il2cpp_codegen_object_new(SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4_il2cpp_TypeInfo_var);
	SafeBrotliDecoderHandle__ctor_mBBFC1DB79F1B756A31018CF108FB228A388929F8(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Int32 Interop/Brotli::BrotliDecoderDecompressStream(Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle,System.IntPtr&,System.Byte**,System.IntPtr&,System.Byte**,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Brotli_BrotliDecoderDecompressStream_m5CA3A81C1718653B7DBC0C4CB80DB72E9C3B2182 (SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* ___state0, intptr_t* ___availableIn1, uint8_t** ___nextIn2, intptr_t* ___availableOut3, uint8_t** ___nextOut4, intptr_t* ___totalOut5, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t*, uint8_t**, intptr_t*, uint8_t**, intptr_t*);

	// Marshaling of parameter '___state0' to native representation
	void* ____state0_marshaled = NULL;
	if (___state0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("state"), NULL);
	bool ___safeHandle_reference_incremented_for____state0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___state0, (&___safeHandle_reference_incremented_for____state0), NULL);
	____state0_marshaled = reinterpret_cast<void*>((___state0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(BrotliDecoderDecompressStream)(____state0_marshaled, ___availableIn1, ___nextIn2, ___availableOut3, ___nextOut4, ___totalOut5);

	// Marshaling cleanup of parameter '___state0' native representation
	if (___safeHandle_reference_incremented_for____state0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___state0, NULL);
	}

	return returnValue;
}
// System.Void Interop/Brotli::BrotliDecoderDestroyInstance(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Brotli_BrotliDecoderDestroyInstance_mDF10CB788AEDBD9F57645193081FB7E6B6575EF4 (intptr_t ___state0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(BrotliDecoderDestroyInstance)(___state0);

}
// System.Boolean Interop/Brotli::BrotliDecoderIsFinished(Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Brotli_BrotliDecoderIsFinished_m4B248470CF324970EFDB452045D17F36DBEEEC36 (SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* ___state0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___state0' to native representation
	void* ____state0_marshaled = NULL;
	if (___state0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("state"), NULL);
	bool ___safeHandle_reference_incremented_for____state0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___state0, (&___safeHandle_reference_incremented_for____state0), NULL);
	____state0_marshaled = reinterpret_cast<void*>((___state0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(BrotliDecoderIsFinished)(____state0_marshaled);

	// Marshaling cleanup of parameter '___state0' native representation
	if (___safeHandle_reference_incremented_for____state0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___state0, NULL);
	}

	return static_cast<bool>(returnValue);
}
// Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle Interop/Brotli::BrotliEncoderCreateInstance(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* Brotli_BrotliEncoderCreateInstance_m73FC14FBDB2B86152CA0A9EA83A7D0B7492DAC17 (intptr_t ___allocFunc0, intptr_t ___freeFunc1, intptr_t ___opaque2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(BrotliEncoderCreateInstance)(___allocFunc0, ___freeFunc1, ___opaque2);

	// Marshaling of return value back from native representation
	SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* _returnValue_unmarshaled = (SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC*)il2cpp_codegen_object_new(SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC_il2cpp_TypeInfo_var);
	SafeBrotliEncoderHandle__ctor_mE3D1226809A078B95C8F32B2EE32FD3EC7666CBD(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Boolean Interop/Brotli::BrotliEncoderCompressStream(Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle,System.IO.Compression.BrotliEncoderOperation,System.IntPtr&,System.Byte**,System.IntPtr&,System.Byte**,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Brotli_BrotliEncoderCompressStream_m67A3B2A84FEE61DF49DC5B3B9B51A4D2893F104E (SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* ___state0, int32_t ___op1, intptr_t* ___availableIn2, uint8_t** ___nextIn3, intptr_t* ___availableOut4, uint8_t** ___nextOut5, intptr_t* ___totalOut6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, intptr_t*, uint8_t**, intptr_t*, uint8_t**, intptr_t*);

	// Marshaling of parameter '___state0' to native representation
	void* ____state0_marshaled = NULL;
	if (___state0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("state"), NULL);
	bool ___safeHandle_reference_incremented_for____state0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___state0, (&___safeHandle_reference_incremented_for____state0), NULL);
	____state0_marshaled = reinterpret_cast<void*>((___state0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(BrotliEncoderCompressStream)(____state0_marshaled, ___op1, ___availableIn2, ___nextIn3, ___availableOut4, ___nextOut5, ___totalOut6);

	// Marshaling cleanup of parameter '___state0' native representation
	if (___safeHandle_reference_incremented_for____state0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___state0, NULL);
	}

	return static_cast<bool>(returnValue);
}
// System.Boolean Interop/Brotli::BrotliEncoderHasMoreOutput(Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Brotli_BrotliEncoderHasMoreOutput_mA2AFC09648D4ED22D7169602F491DC974754F02C (SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* ___state0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___state0' to native representation
	void* ____state0_marshaled = NULL;
	if (___state0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("state"), NULL);
	bool ___safeHandle_reference_incremented_for____state0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___state0, (&___safeHandle_reference_incremented_for____state0), NULL);
	____state0_marshaled = reinterpret_cast<void*>((___state0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(BrotliEncoderHasMoreOutput)(____state0_marshaled);

	// Marshaling cleanup of parameter '___state0' native representation
	if (___safeHandle_reference_incremented_for____state0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___state0, NULL);
	}

	return static_cast<bool>(returnValue);
}
// System.Void Interop/Brotli::BrotliEncoderDestroyInstance(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Brotli_BrotliEncoderDestroyInstance_mC22ACF97F509C7A8E0DA4C91CDEF2050C2BC631A (intptr_t ___state0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(BrotliEncoderDestroyInstance)(___state0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.Compression.BrotliStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream__ctor_m1B69B5FE3585F3F11F218BE357E8BB2C1E390E2F (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream__ctor_m1B69B5FE3585F3F11F218BE357E8BB2C1E390E2F_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___mode1;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = ___mode1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___stream0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_4);
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE0CEE16B5ABB40DECDCB60FE13F095387DFC2A3)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream__ctor_m1B69B5FE3585F3F11F218BE357E8BB2C1E390E2F_RuntimeMethod_var)));
	}

IL_0033:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___stream0;
		NullCheck(L_7);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_7);
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral547999BA16094C3536189EA1CC631B96EFC47117)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream__ctor_m1B69B5FE3585F3F11F218BE357E8BB2C1E390E2F_RuntimeMethod_var)));
	}

IL_004b:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B89752D9D44017F38B643B2D82C9CEE8132AA8A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream__ctor_m1B69B5FE3585F3F11F218BE357E8BB2C1E390E2F_RuntimeMethod_var)));
	}

IL_005b:
	{
		int32_t L_11 = ___mode1;
		__this->____mode_8 = L_11;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = ___stream0;
		__this->____stream_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_5), (void*)L_12);
		bool L_13 = ___leaveOpen2;
		__this->____leaveOpen_7 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)65520));
		__this->____buffer_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_6), (void*)L_14);
		return;
	}
}
// System.Void System.IO.Compression.BrotliStream::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_EnsureNotDisposed_mEFE1F60713EA09CCE16ABD4555E1A934D6082398 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_5;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D7DDE0CD98D0546D34DBFE1AA66C5982F4E297B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_EnsureNotDisposed_mEFE1F60713EA09CCE16ABD4555E1A934D6082398_RuntimeMethod_var)));
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.IO.Compression.BrotliStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_Dispose_m6DA6FB9B8FDF5D0FCF1549BBC663C299C5707ABA (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				__this->____stream_5 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_5), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
				BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* L_0 = (&__this->____encoder_13);
				BrotliEncoder_Dispose_m986392D5C6EA749269EB74351E5661BB783B8F60(L_0, NULL);
				BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* L_1 = (&__this->____decoder_10);
				BrotliDecoder_Dispose_mC84D643DBB51DE4E9ECC1AAFDA6C9E30C8CA99A1(L_1, NULL);
				bool L_2 = ___disposing0;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_3 = ___disposing0;
				if (!L_3)
				{
					goto IL_0033_1;
				}
			}
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->____stream_5;
				if (!L_4)
				{
					goto IL_0033_1;
				}
			}
			{
				int32_t L_5 = __this->____mode_8;
				if ((!(((uint32_t)L_5) == ((uint32_t)1))))
				{
					goto IL_0020_1;
				}
			}
			{
				ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
				L_6 = ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27(ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_RuntimeMethod_var);
				BrotliStream_WriteCore_mAD1B931ACBE9C3B53E7ABF4370D21B4BA35FB592(__this, L_6, (bool)1, NULL);
			}

IL_0020_1:
			{
				bool L_7 = __this->____leaveOpen_7;
				if (L_7)
				{
					goto IL_0033_1;
				}
			}
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->____stream_5;
				NullCheck(L_8);
				Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_8, NULL);
			}

IL_0033_1:
			{
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		return;
	}
}
// System.Void System.IO.Compression.BrotliStream::ValidateParameters(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_ValidateParameters_mC050D2C342885D13A56165574E1455F7C11FED95 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_ValidateParameters_mC050D2C342885D13A56165574E1455F7C11FED95_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC80EAF7D556B35E97D7BD4261C87B1BF066A0221)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_ValidateParameters_mC050D2C342885D13A56165574E1455F7C11FED95_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC80EAF7D556B35E97D7BD4261C87B1BF066A0221)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_ValidateParameters_mC050D2C342885D13A56165574E1455F7C11FED95_RuntimeMethod_var)));
	}

IL_0036:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF086BE2A5265CF5C1E8A0332899EA2EBD8176EC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_ValidateParameters_mC050D2C342885D13A56165574E1455F7C11FED95_RuntimeMethod_var)));
	}

IL_0049:
	{
		return;
	}
}
// System.Boolean System.IO.Compression.BrotliStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BrotliStream_get_CanRead_m3609F7DEABBC55E3A0F07968931242CA485FBA89 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____mode_8;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->____stream_5;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->____stream_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		return L_3;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.BrotliStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BrotliStream_get_CanWrite_m299F2C8C765ACB309222905F889BAE39E3FD1BA1 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____mode_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->____stream_5;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->____stream_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		return L_3;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.BrotliStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BrotliStream_get_CanSeek_m4D53245C4B67AFB12893FA6855F5DAA0F7142B89 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int64 System.IO.Compression.BrotliStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BrotliStream_Seek_mDF355B0B8DC49345135E40762D19DA7F8DD7D6DC (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_Seek_mDF355B0B8DC49345135E40762D19DA7F8DD7D6DC_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.Compression.BrotliStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BrotliStream_get_Length_m0C198AE9C776726E21AF7A8B3B7A262ACCD87554 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_get_Length_m0C198AE9C776726E21AF7A8B3B7A262ACCD87554_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.Compression.BrotliStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BrotliStream_get_Position_mC219FF3B8ADD14CD763DCE2E190CE6F45C88FAA9 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_get_Position_mC219FF3B8ADD14CD763DCE2E190CE6F45C88FAA9_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.BrotliStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_set_Position_m923404CCE64CD23E3DFA18604BC75F1D35F25104 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_set_Position_m923404CCE64CD23E3DFA18604BC75F1D35F25104_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.BrotliStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_SetLength_m77E1C58E4A746086B6A7A269F2EAEFCC9B2A823C (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_SetLength_m77E1C58E4A746086B6A7A269F2EAEFCC9B2A823C_RuntimeMethod_var)));
	}
}
// System.Boolean System.IO.Compression.BrotliStream::get_AsyncOperationIsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BrotliStream_get_AsyncOperationIsActive_m652741235A1B2152B79ACAB3AAE1FF0A61022256 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____activeAsyncOperation_9;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void System.IO.Compression.BrotliStream::EnsureNoActiveAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_EnsureNoActiveAsyncOperation_mB8E400D887D2616CDAB12E62FB89639313ADF0C8 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = BrotliStream_get_AsyncOperationIsActive_m652741235A1B2152B79ACAB3AAE1FF0A61022256(__this, NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		BrotliStream_ThrowInvalidBeginCall_m6C4F6B13CB405FD995AB36E4AAC72991C531300F(NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void System.IO.Compression.BrotliStream::AsyncOperationStarting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_AsyncOperationStarting_mAC16BE1B14D6705144A85A166D67627A2D6223FF (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = (&__this->____activeAsyncOperation_9);
		int32_t L_1;
		L_1 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_0, 1, 0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		BrotliStream_ThrowInvalidBeginCall_m6C4F6B13CB405FD995AB36E4AAC72991C531300F(NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.IO.Compression.BrotliStream::AsyncOperationCompleting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_AsyncOperationCompleting_mCB170E117C21840FABE601E4EF2D4EAEBA937C6B (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = (&__this->____activeAsyncOperation_9);
		int32_t L_1;
		L_1 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_0, 0, 1, NULL);
		return;
	}
}
// System.Void System.IO.Compression.BrotliStream::ThrowInvalidBeginCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_ThrowInvalidBeginCall_m6C4F6B13CB405FD995AB36E4AAC72991C531300F (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral742DCB290467E5A3DEF6925134096650FFD06078)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_ThrowInvalidBeginCall_m6C4F6B13CB405FD995AB36E4AAC72991C531300F_RuntimeMethod_var)));
	}
}
// System.Int32 System.IO.Compression.BrotliStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliStream_Read_m79A32DD51DE75F6702BA1AE21FE4FA65C3F58C68 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		BrotliStream_ValidateParameters_mC050D2C342885D13A56165574E1455F7C11FED95(L_0, L_1, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		int32_t L_7;
		L_7 = VirtualFuncInvoker1< int32_t, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Span`1<System.Byte>) */, __this, L_6);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.BrotliStream::Read(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliStream_Read_m9AE678E95CB46F45A8809680DF518982703887D9 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		int32_t L_0 = __this->____mode_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58E50E0EA29E3477BCED2CE16F851DA98AB7AB57)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_Read_m9AE678E95CB46F45A8809680DF518982703887D9_RuntimeMethod_var)));
	}

IL_0013:
	{
		BrotliStream_EnsureNotDisposed_mEFE1F60713EA09CCE16ABD4555E1A934D6082398(__this, NULL);
		V_0 = 0;
		V_1 = 1;
		goto IL_014e;
	}

IL_0022:
	{
		int32_t L_2 = V_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_3 = __this->____bufferCount_12;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_4 = __this->____bufferOffset_11;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____buffer_6;
		int32_t L_6 = __this->____bufferOffset_11;
		int32_t L_7 = __this->____bufferCount_12;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		L_8 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_inline(L_5, L_6, L_7, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
		V_5 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____buffer_6;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91(L_9, Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542((&V_5), L_10, Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
	}

IL_0065:
	{
		__this->____bufferOffset_11 = 0;
		V_4 = 0;
		goto IL_009b;
	}

IL_0071:
	{
		int32_t L_11 = __this->____bufferCount_12;
		int32_t L_12 = V_4;
		__this->____bufferCount_12 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int32_t L_13 = __this->____bufferCount_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->____buffer_6;
		NullCheck(L_14);
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_009b;
		}
	}
	{
		InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* L_15 = (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral905C7E64CA155D3E702359C1F3C76F2B7B790FC0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_Read_m9AE678E95CB46F45A8809680DF518982703887D9_RuntimeMethod_var)));
	}

IL_009b:
	{
		int32_t L_16 = __this->____bufferCount_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->____buffer_6;
		NullCheck(L_17);
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_00d7;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = __this->____stream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->____buffer_6;
		int32_t L_20 = __this->____bufferCount_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->____buffer_6;
		NullCheck(L_21);
		int32_t L_22 = __this->____bufferCount_12;
		NullCheck(L_18);
		int32_t L_23;
		L_23 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_18, L_19, L_20, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_21)->max_length)), L_22)));
		int32_t L_24 = L_23;
		V_4 = L_24;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0071;
		}
	}

IL_00d7:
	{
		int32_t L_25 = __this->____bufferCount_12;
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_015e;
		}
	}

IL_00e0:
	{
		BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* L_26 = (&__this->____decoder_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->____buffer_6;
		int32_t L_28 = __this->____bufferOffset_11;
		int32_t L_29 = __this->____bufferCount_12;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_30;
		L_30 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_inline(L_27, L_28, L_29, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_31;
		L_31 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_30, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_32 = ___buffer0;
		int32_t L_33;
		L_33 = BrotliDecoder_Decompress_m0BD52E9AC534C33D8A8F1D0BC6CE1880644795C5(L_26, L_31, L_32, (&V_2), (&V_3), NULL);
		V_1 = L_33;
		int32_t L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)3))))
		{
			goto IL_011c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_35 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral602180C54D8B5D01F005ECAD78CF398B46B0AD26)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_Read_m9AE678E95CB46F45A8809680DF518982703887D9_RuntimeMethod_var)));
	}

IL_011c:
	{
		int32_t L_36 = V_2;
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_013c;
		}
	}
	{
		int32_t L_37 = __this->____bufferOffset_11;
		int32_t L_38 = V_2;
		__this->____bufferOffset_11 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
		int32_t L_39 = __this->____bufferCount_12;
		int32_t L_40 = V_2;
		__this->____bufferCount_12 = ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}

IL_013c:
	{
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_42 = V_0;
		int32_t L_43 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		int32_t L_44 = V_3;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_45;
		L_45 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___buffer0), L_44, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		___buffer0 = L_45;
	}

IL_014e:
	{
		int32_t L_46;
		L_46 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___buffer0), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_47 = V_1;
		if (L_47)
		{
			goto IL_0022;
		}
	}

IL_015e:
	{
		int32_t L_48 = V_0;
		return L_48;
	}
}
// System.IAsyncResult System.IO.Compression.BrotliStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BrotliStream_BeginRead_m3C4F24A9416B4D50540D349C536E5983539B154A (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4;
		L_4 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(25 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, __this, L_0, L_1, L_2, L_3);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___asyncCallback3;
		RuntimeObject* L_6 = ___asyncState4;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_m1A080755817528FB342A9A1352631ACCBF9CEBAE(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.BrotliStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliStream_EndRead_m36F09A8D1A2B4DB915055102F336F79F6ABEF737 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C223794FC5D5DD68618D9F27D8F419DA65A0D7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncResult0;
		int32_t L_1;
		L_1 = TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C223794FC5D5DD68618D9F27D8F419DA65A0D7F(L_0, TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C223794FC5D5DD68618D9F27D8F419DA65A0D7F_RuntimeMethod_var);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.IO.Compression.BrotliStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* BrotliStream_ReadAsync_mA7C5910BD93334E3B6AFBAD8C17605FBA1B08C61 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		BrotliStream_ValidateParameters_mC050D2C342885D13A56165574E1455F7C11FED95(L_0, L_1, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_RuntimeMethod_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___cancellationToken3;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_8;
		L_8 = VirtualFuncInvoker2< ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(26 /* System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Stream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken) */, __this, L_6, L_7);
		V_0 = L_8;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_9;
		L_9 = ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1((&V_0), ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1_RuntimeMethod_var);
		return L_9;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.BrotliStream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 BrotliStream_ReadAsync_m76D3632F4A0BA8D279495BB18D2BCB3F9ECD4901 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1__ctor_m6164BE5A3BB19E083385C0C701140EA391B90071_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____mode_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58E50E0EA29E3477BCED2CE16F851DA98AB7AB57)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_ReadAsync_m76D3632F4A0BA8D279495BB18D2BCB3F9ECD4901_RuntimeMethod_var)));
	}

IL_0013:
	{
		BrotliStream_EnsureNoActiveAsyncOperation_mB8E400D887D2616CDAB12E62FB89639313ADF0C8(__this, NULL);
		BrotliStream_EnsureNotDisposed_mEFE1F60713EA09CCE16ABD4555E1A934D6082398(__this, NULL);
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken1), NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4;
		L_4 = Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D(L_3, Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D_RuntimeMethod_var);
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ValueTask_1__ctor_m6164BE5A3BB19E083385C0C701140EA391B90071_inline((&L_5), L_4, /*hidden argument*/ValueTask_1__ctor_m6164BE5A3BB19E083385C0C701140EA391B90071_RuntimeMethod_var);
		return L_5;
	}

IL_0034:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_6 = ___buffer0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___cancellationToken1;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_8;
		L_8 = BrotliStream_FinishReadAsyncMemory_m48B6AA1E9FBADAB30D19E5B88B04A2B3C1BE2BDC(__this, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.BrotliStream::FinishReadAsyncMemory(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 BrotliStream_FinishReadAsyncMemory_m48B6AA1E9FBADAB30D19E5B88B04A2B3C1BE2BDC (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m0971675A516168FBAB95A659B934AD7958264E79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_0 = ___buffer0;
		(&V_0)->___buffer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___buffer_4))->____object_0), (void*)NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___cancellationToken1;
		(&V_0)->___cancellationToken_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_3))->____source_0), (void*)NULL);
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 L_2;
		L_2 = AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E(AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->____methodBuilder_0))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->____methodBuilder_0))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->____methodBuilder_0))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncValueTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m0971675A516168FBAB95A659B934AD7958264E79_inline(L_3, (&V_0), AsyncValueTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m0971675A516168FBAB95A659B934AD7958264E79_RuntimeMethod_var);
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_5;
		L_5 = AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3(L_4, AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void System.IO.Compression.BrotliStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_Write_m427534DAE672D6F3FC28957EEA70780793CA21FD (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		BrotliStream_ValidateParameters_mC050D2C342885D13A56165574E1455F7C11FED95(L_0, L_1, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_RuntimeMethod_var);
		BrotliStream_WriteCore_mAD1B931ACBE9C3B53E7ABF4370D21B4BA35FB592(__this, L_6, (bool)0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.BrotliStream::Write(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_Write_m849CD18E79964088B7D42245F71AF5121FFE036D (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer0, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___buffer0;
		BrotliStream_WriteCore_mAD1B931ACBE9C3B53E7ABF4370D21B4BA35FB592(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.BrotliStream::WriteCore(System.ReadOnlySpan`1<System.Byte>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_WriteCore_mAD1B931ACBE9C3B53E7ABF4370D21B4BA35FB592 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer0, bool ___isFinalBlock1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->____mode_8;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18CDF77D80D162A02DCEE7C5B4DF4047C32FA20F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_WriteCore_mAD1B931ACBE9C3B53E7ABF4370D21B4BA35FB592_RuntimeMethod_var)));
	}

IL_0014:
	{
		BrotliStream_EnsureNotDisposed_mEFE1F60713EA09CCE16ABD4555E1A934D6082398(__this, NULL);
		V_0 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____buffer_6;
		Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&V_1), L_2, Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_RuntimeMethod_var);
		goto IL_007c;
	}

IL_002b:
	{
		V_2 = 0;
		V_3 = 0;
		BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* L_3 = (&__this->____encoder_13);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___buffer0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5 = V_1;
		bool L_6 = ___isFinalBlock1;
		int32_t L_7;
		L_7 = BrotliEncoder_Compress_mA00FEA4D2B0999A8CC6CDD028A916FF0C586C746(L_3, L_4, L_5, (&V_2), (&V_3), L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_0051;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EDFE6869C6F3C37692861FB7160EF4E38F7BC0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_WriteCore_mAD1B931ACBE9C3B53E7ABF4370D21B4BA35FB592_RuntimeMethod_var)));
	}

IL_0051:
	{
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->____stream_5;
		int32_t L_12 = V_3;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_13;
		L_13 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_1), 0, L_12, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_14;
		L_14 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_13, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		NullCheck(L_11);
		VirtualActionInvoker1< ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D >::Invoke(37 /* System.Void System.IO.Stream::Write(System.ReadOnlySpan`1<System.Byte>) */, L_11, L_14);
	}

IL_006e:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_16 = V_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_17;
		L_17 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___buffer0), L_16, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___buffer0 = L_17;
	}

IL_007c:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		return;
	}
}
// System.IAsyncResult System.IO.Compression.BrotliStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BrotliStream_BeginWrite_mBE7DCD5582AD92E40884076DBA05C431880B5ABD (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(29 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, __this, L_0, L_1, L_2, L_3);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___asyncCallback3;
		RuntimeObject* L_6 = ___asyncState4;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_m1A080755817528FB342A9A1352631ACCBF9CEBAE(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void System.IO.Compression.BrotliStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_EndWrite_mF29271A0FE0E022005BB872BA263FCC3BE6CAFA7 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___asyncResult0;
		TaskToApm_End_mCD6418D34E9684DB6691549A225F5F9CC5C32753(L_0, NULL);
		return;
	}
}
// System.Threading.Tasks.Task System.IO.Compression.BrotliStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* BrotliStream_WriteAsync_mD329CD7F0BCB2BAEB014A6736C4677350F716DFB (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		BrotliStream_ValidateParameters_mC050D2C342885D13A56165574E1455F7C11FED95(L_0, L_1, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_RuntimeMethod_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___cancellationToken3;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_8;
		L_8 = VirtualFuncInvoker2< ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(30 /* System.Threading.Tasks.ValueTask System.IO.Stream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken) */, __this, L_6, L_7);
		V_0 = L_8;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = ValueTask_AsTask_m4D3D04C81CDCB7D7D9615B5926463B2A5D3DA010((&V_0), NULL);
		return L_9;
	}
}
// System.Threading.Tasks.ValueTask System.IO.Compression.BrotliStream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F BrotliStream_WriteAsync_m70F3494D80F67D368868D6110AEFBB6C94B30834 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B5_0 = NULL;
	{
		int32_t L_0 = __this->____mode_8;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18CDF77D80D162A02DCEE7C5B4DF4047C32FA20F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_WriteAsync_m70F3494D80F67D368868D6110AEFBB6C94B30834_RuntimeMethod_var)));
	}

IL_0014:
	{
		BrotliStream_EnsureNoActiveAsyncOperation_mB8E400D887D2616CDAB12E62FB89639313ADF0C8(__this, NULL);
		BrotliStream_EnsureNotDisposed_mEFE1F60713EA09CCE16ABD4555E1A934D6082398(__this, NULL);
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken1), NULL);
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_3 = ___buffer0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___cancellationToken1;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = BrotliStream_WriteAsyncMemoryCore_mB01C54C2726891FBA6F6AAA0F712D1D31E438310(__this, L_3, L_4, NULL);
		G_B5_0 = L_5;
		goto IL_0039;
	}

IL_0033:
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = ___cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_7;
		L_7 = Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D(L_6, Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D_RuntimeMethod_var);
		G_B5_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)(L_7));
	}

IL_0039:
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_8;
		memset((&L_8), 0, sizeof(L_8));
		ValueTask__ctor_mDDD3DE02109E43D5F0189559B39A1831AA878BE9_inline((&L_8), G_B5_0, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task System.IO.Compression.BrotliStream::WriteAsyncMemoryCore(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* BrotliStream_WriteAsyncMemoryCore_mB01C54C2726891FBA6F6AAA0F712D1D31E438310 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_mE2A6658CEAC470EEE1C3F873355B0D87A485FE63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_0 = ___buffer0;
		(&V_0)->___buffer_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___buffer_3))->____object_0), (void*)NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___cancellationToken1;
		(&V_0)->___cancellationToken_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_4))->____source_0), (void*)NULL);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_mE2A6658CEAC470EEE1C3F873355B0D87A485FE63(L_3, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_mE2A6658CEAC470EEE1C3F873355B0D87A485FE63_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_4, NULL);
		return L_5;
	}
}
// System.Void System.IO.Compression.BrotliStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliStream_Flush_mA394F5BC1AF55C43C52A74476D89AB9A0CA8C7C5 (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		BrotliStream_EnsureNotDisposed_mEFE1F60713EA09CCE16ABD4555E1A934D6082398(__this, NULL);
		int32_t L_0 = __this->____mode_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0081;
		}
	}
	{
		BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* L_1 = (&__this->____encoder_13);
		SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* L_2 = L_1->____state_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* L_3 = (&__this->____encoder_13);
		SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* L_4 = L_3->____state_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = SafeHandle_get_IsClosed_mD2CD4AA6E3B0A242E48080F18BC07199CAB80273(L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}

IL_002e:
	{
		return;
	}

IL_002f:
	{
		V_0 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____buffer_6;
		Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&V_1), L_6, Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_RuntimeMethod_var);
		goto IL_007d;
	}

IL_0040:
	{
		V_2 = 0;
		BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* L_7 = (&__this->____encoder_13);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8 = V_1;
		int32_t L_9;
		L_9 = BrotliEncoder_Flush_mB35C442FC2F5C35E10D35484062678CAA6E5AE37(L_7, L_8, (&V_2), NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0060;
		}
	}
	{
		InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* L_11 = (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EDFE6869C6F3C37692861FB7160EF4E38F7BC0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliStream_Flush_mA394F5BC1AF55C43C52A74476D89AB9A0CA8C7C5_RuntimeMethod_var)));
	}

IL_0060:
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = __this->____stream_5;
		int32_t L_14 = V_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_15;
		L_15 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_1), 0, L_14, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_16;
		L_16 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_15, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		NullCheck(L_13);
		VirtualActionInvoker1< ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D >::Invoke(37 /* System.Void System.IO.Stream::Write(System.ReadOnlySpan`1<System.Byte>) */, L_13, L_16);
	}

IL_007d:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}

IL_0081:
	{
		return;
	}
}
// System.Threading.Tasks.Task System.IO.Compression.BrotliStream::FlushAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* BrotliStream_FlushAsync_mC7B778FF2E19137CC4A501F2BB236AED2142DA5D (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BrotliStream_EnsureNoActiveAsyncOperation_mB8E400D887D2616CDAB12E62FB89639313ADF0C8(__this, NULL);
		BrotliStream_EnsureNotDisposed_mEFE1F60713EA09CCE16ABD4555E1A934D6082398(__this, NULL);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken0), NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___cancellationToken0;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = Task_FromCanceled_m2C682C247C1D89F6DD5A186BBBFEC1544921308E(L_1, NULL);
		return L_2;
	}

IL_001c:
	{
		int32_t L_3 = __this->____mode_8;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___cancellationToken0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = BrotliStream_FlushAsyncCore_mA2A623D0063B1D47EFB5F41E08082818D1F58D3B(__this, L_4, NULL);
		return L_5;
	}

IL_002d:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_6;
	}
}
// System.Threading.Tasks.Task System.IO.Compression.BrotliStream::FlushAsyncCore(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* BrotliStream_FlushAsyncCore_mA2A623D0063B1D47EFB5F41E08082818D1F58D3B (BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_mB912D44703C591A13D6E9DB0DEC6787D3B0C7F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___cancellationToken0;
		(&V_0)->___cancellationToken_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_3))->____source_0), (void*)NULL);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_1;
		L_1 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_mB912D44703C591A13D6E9DB0DEC6787D3B0C7F41(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_mB912D44703C591A13D6E9DB0DEC6787D3B0C7F41_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
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
// System.Void System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishReadAsyncMemoryU3Ed__41_MoveNext_m2BCB958E3D630CB14AAAB911AA05B6D2C6CDD731 (U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_mCE660F8708C0FCA63D261ACD872B136DAC1D25CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredValueTaskAwaitable_1_GetAwaiter_m94C14DDAC561363EFCF143293D1E2E5CE74522E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredValueTaskAwaiter_GetResult_mB250A2B7423863EC0EF64C56F679FBA4FD674021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredValueTaskAwaiter_get_IsCompleted_mB0B5FC0CD4E3282961DCA3F5B5C24260680B7461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Empty_m38B8A14AECE32E9B164F0BCD693F49993AC24625_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1_ConfigureAwait_m8DF55719C52ED899F1B6687F9369EDD264871A31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 V_9;
	memset((&V_9), 0, sizeof(V_9));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_10;
	memset((&V_10), 0, sizeof(V_10));
	ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 V_11;
	memset((&V_11), 0, sizeof(V_11));
	ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0017_1;
			}
		}
		{
			BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_3 = V_1;
			NullCheck(L_3);
			BrotliStream_AsyncOperationStarting_mAC16BE1B14D6705144A85A166D67627A2D6223FF(L_3, NULL);
		}

IL_0017_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0232_1:
				{// begin finally (depth: 2)
					{
						int32_t L_4 = V_0;
						if ((((int32_t)L_4) >= ((int32_t)0)))
						{
							goto IL_023c_1;
						}
					}
					{
						BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_5 = V_1;
						NullCheck(L_5);
						BrotliStream_AsyncOperationCompleting_mCB170E117C21840FABE601E4EF2D4EAEBA937C6B(L_5, NULL);
					}

IL_023c_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_6 = V_0;
					if (!L_6)
					{
						goto IL_013b_2;
					}
				}
				{
					__this->___U3CtotalWrittenU3E5__2_5 = 0;
					Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_7;
					L_7 = Memory_1_get_Empty_m38B8A14AECE32E9B164F0BCD693F49993AC24625(Memory_1_get_Empty_m38B8A14AECE32E9B164F0BCD693F49993AC24625_RuntimeMethod_var);
					V_3 = 1;
					goto IL_0215_2;
				}

IL_0032_2:
				{
					int32_t L_8 = V_3;
					if ((!(((uint32_t)L_8) == ((uint32_t)2))))
					{
						goto IL_017a_2;
					}
				}
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_9 = V_1;
					NullCheck(L_9);
					int32_t L_10 = L_9->____bufferCount_12;
					if ((((int32_t)L_10) <= ((int32_t)0)))
					{
						goto IL_0075_2;
					}
				}
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_11 = V_1;
					NullCheck(L_11);
					int32_t L_12 = L_11->____bufferOffset_11;
					if (!L_12)
					{
						goto IL_0075_2;
					}
				}
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_13 = V_1;
					NullCheck(L_13);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_13->____buffer_6;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_15 = V_1;
					NullCheck(L_15);
					int32_t L_16 = L_15->____bufferOffset_11;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_17 = V_1;
					NullCheck(L_17);
					int32_t L_18 = L_17->____bufferCount_12;
					Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
					L_19 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_inline(L_14, L_16, L_18, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
					V_7 = L_19;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_20 = V_1;
					NullCheck(L_20);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_20->____buffer_6;
					Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_22;
					L_22 = Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91(L_21, Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
					Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542((&V_7), L_22, Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
				}

IL_0075_2:
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_23 = V_1;
					NullCheck(L_23);
					L_23->____bufferOffset_11 = 0;
					V_6 = 0;
					goto IL_00ab_2;
				}

IL_0081_2:
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_24 = V_1;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_25 = V_1;
					NullCheck(L_25);
					int32_t L_26 = L_25->____bufferCount_12;
					int32_t L_27 = V_6;
					NullCheck(L_24);
					L_24->____bufferCount_12 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_28 = V_1;
					NullCheck(L_28);
					int32_t L_29 = L_28->____bufferCount_12;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_30 = V_1;
					NullCheck(L_30);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_30->____buffer_6;
					NullCheck(L_31);
					if ((((int32_t)L_29) <= ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
					{
						goto IL_00ab_2;
					}
				}
				{
					InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* L_32 = (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var)));
					NullCheck(L_32);
					InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral905C7E64CA155D3E702359C1F3C76F2B7B790FC0)), NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFinishReadAsyncMemoryU3Ed__41_MoveNext_m2BCB958E3D630CB14AAAB911AA05B6D2C6CDD731_RuntimeMethod_var)));
				}

IL_00ab_2:
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_33 = V_1;
					NullCheck(L_33);
					int32_t L_34 = L_33->____bufferCount_12;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_35 = V_1;
					NullCheck(L_35);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_35->____buffer_6;
					NullCheck(L_36);
					V_8 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))? 1 : 0);
					bool L_37 = V_8;
					if (!L_37)
					{
						goto IL_0167_2;
					}
				}
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_38 = V_1;
					NullCheck(L_38);
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_39 = L_38->____stream_5;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_40 = V_1;
					NullCheck(L_40);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = L_40->____buffer_6;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_42 = V_1;
					NullCheck(L_42);
					int32_t L_43 = L_42->____bufferCount_12;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_44 = V_1;
					NullCheck(L_44);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = L_44->____buffer_6;
					NullCheck(L_45);
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_46 = V_1;
					NullCheck(L_46);
					int32_t L_47 = L_46->____bufferCount_12;
					Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_48;
					memset((&L_48), 0, sizeof(L_48));
					Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_inline((&L_48), L_41, L_43, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_45)->max_length)), L_47)), /*hidden argument*/Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_RuntimeMethod_var);
					il2cpp_codegen_initobj((&V_10), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_49 = V_10;
					NullCheck(L_39);
					ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_50;
					L_50 = VirtualFuncInvoker2< ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(26 /* System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Stream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken) */, L_39, L_48, L_49);
					V_11 = L_50;
					ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043 L_51;
					L_51 = ValueTask_1_ConfigureAwait_m8DF55719C52ED899F1B6687F9369EDD264871A31_inline((&V_11), (bool)0, ValueTask_1_ConfigureAwait_m8DF55719C52ED899F1B6687F9369EDD264871A31_RuntimeMethod_var);
					V_12 = L_51;
					ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 L_52;
					L_52 = ConfiguredValueTaskAwaitable_1_GetAwaiter_m94C14DDAC561363EFCF143293D1E2E5CE74522E3_inline((&V_12), ConfiguredValueTaskAwaitable_1_GetAwaiter_m94C14DDAC561363EFCF143293D1E2E5CE74522E3_RuntimeMethod_var);
					V_9 = L_52;
					bool L_53;
					L_53 = ConfiguredValueTaskAwaiter_get_IsCompleted_mB0B5FC0CD4E3282961DCA3F5B5C24260680B7461_inline((&V_9), ConfiguredValueTaskAwaiter_get_IsCompleted_mB0B5FC0CD4E3282961DCA3F5B5C24260680B7461_RuntimeMethod_var);
					if (L_53)
					{
						goto IL_0158_2;
					}
				}
				{
					int32_t L_54 = 0;
					V_0 = L_54;
					__this->___U3CU3E1__state_0 = L_54;
					ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 L_55 = V_9;
					__this->___U3CU3Eu__1_6 = L_55;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_6))->____value_0))->____obj_1), (void*)NULL);
					AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_56 = (&__this->___U3CU3Et__builder_1);
					AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_mCE660F8708C0FCA63D261ACD872B136DAC1D25CC(L_56, (&V_9), __this, AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_mCE660F8708C0FCA63D261ACD872B136DAC1D25CC_RuntimeMethod_var);
					goto IL_026a;
				}

IL_013b_2:
				{
					ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 L_57 = __this->___U3CU3Eu__1_6;
					V_9 = L_57;
					ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* L_58 = (&__this->___U3CU3Eu__1_6);
					il2cpp_codegen_initobj(L_58, sizeof(ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5));
					int32_t L_59 = (-1);
					V_0 = L_59;
					__this->___U3CU3E1__state_0 = L_59;
				}

IL_0158_2:
				{
					int32_t L_60;
					L_60 = ConfiguredValueTaskAwaiter_GetResult_mB250A2B7423863EC0EF64C56F679FBA4FD674021_inline((&V_9), ConfiguredValueTaskAwaiter_GetResult_mB250A2B7423863EC0EF64C56F679FBA4FD674021_RuntimeMethod_var);
					int32_t L_61 = L_60;
					V_6 = L_61;
					V_8 = (bool)((((int32_t)L_61) > ((int32_t)0))? 1 : 0);
				}

IL_0167_2:
				{
					bool L_62 = V_8;
					if (L_62)
					{
						goto IL_0081_2;
					}
				}
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_63 = V_1;
					NullCheck(L_63);
					int32_t L_64 = L_63->____bufferCount_12;
					if ((((int32_t)L_64) <= ((int32_t)0)))
					{
						goto IL_0229_2;
					}
				}

IL_017a_2:
				{
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_65 = (&__this->___cancellationToken_3);
					CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_65, NULL);
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_66 = V_1;
					NullCheck(L_66);
					BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* L_67 = (&L_66->____decoder_10);
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_68 = V_1;
					NullCheck(L_68);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = L_68->____buffer_6;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_70 = V_1;
					NullCheck(L_70);
					int32_t L_71 = L_70->____bufferOffset_11;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_72 = V_1;
					NullCheck(L_72);
					int32_t L_73 = L_72->____bufferCount_12;
					Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_74;
					L_74 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_inline(L_69, L_71, L_73, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
					ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_75;
					L_75 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_74, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
					Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_76 = (&__this->___buffer_4);
					Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_77;
					L_77 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_76, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
					int32_t L_78;
					L_78 = BrotliDecoder_Decompress_m0BD52E9AC534C33D8A8F1D0BC6CE1880644795C5(L_67, L_75, L_77, (&V_4), (&V_5), NULL);
					V_3 = L_78;
					int32_t L_79 = V_3;
					if ((!(((uint32_t)L_79) == ((uint32_t)3))))
					{
						goto IL_01cb_2;
					}
				}
				{
					InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_80 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
					NullCheck(L_80);
					InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_80, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral602180C54D8B5D01F005ECAD78CF398B46B0AD26)), NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFinishReadAsyncMemoryU3Ed__41_MoveNext_m2BCB958E3D630CB14AAAB911AA05B6D2C6CDD731_RuntimeMethod_var)));
				}

IL_01cb_2:
				{
					int32_t L_81 = V_4;
					if ((((int32_t)L_81) <= ((int32_t)0)))
					{
						goto IL_01ee_2;
					}
				}
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_82 = V_1;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_83 = V_1;
					NullCheck(L_83);
					int32_t L_84 = L_83->____bufferOffset_11;
					int32_t L_85 = V_4;
					NullCheck(L_82);
					L_82->____bufferOffset_11 = ((int32_t)il2cpp_codegen_add(L_84, L_85));
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_86 = V_1;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_87 = V_1;
					NullCheck(L_87);
					int32_t L_88 = L_87->____bufferCount_12;
					int32_t L_89 = V_4;
					NullCheck(L_86);
					L_86->____bufferCount_12 = ((int32_t)il2cpp_codegen_subtract(L_88, L_89));
				}

IL_01ee_2:
				{
					int32_t L_90 = V_5;
					if ((((int32_t)L_90) <= ((int32_t)0)))
					{
						goto IL_0215_2;
					}
				}
				{
					int32_t L_91 = __this->___U3CtotalWrittenU3E5__2_5;
					int32_t L_92 = V_5;
					__this->___U3CtotalWrittenU3E5__2_5 = ((int32_t)il2cpp_codegen_add(L_91, L_92));
					Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_93 = (&__this->___buffer_4);
					int32_t L_94 = V_5;
					Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_95;
					L_95 = Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_inline(L_93, L_94, Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_RuntimeMethod_var);
					__this->___buffer_4 = L_95;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___buffer_4))->____object_0), (void*)NULL);
				}

IL_0215_2:
				{
					Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_96 = (&__this->___buffer_4);
					int32_t L_97;
					L_97 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_96, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
					if ((((int32_t)L_97) <= ((int32_t)0)))
					{
						goto IL_0229_2;
					}
				}
				{
					int32_t L_98 = V_3;
					if (L_98)
					{
						goto IL_0032_2;
					}
				}

IL_0229_2:
				{
					int32_t L_99 = __this->___U3CtotalWrittenU3E5__2_5;
					V_2 = L_99;
					goto IL_0256;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_023d;
		}
		throw e;
	}

CATCH_023d:
	{// begin catch(System.Exception)
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_100 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_101 = V_13;
		AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9(L_100, L_101, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_026a;
	}// end catch (depth: 1)

IL_0256:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_102 = (&__this->___U3CU3Et__builder_1);
		int32_t L_103 = V_2;
		AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7(L_102, L_103, AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7_RuntimeMethod_var);
	}

IL_026a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFinishReadAsyncMemoryU3Ed__41_MoveNext_m2BCB958E3D630CB14AAAB911AA05B6D2C6CDD731_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6*>(__this + _offset);
	U3CFinishReadAsyncMemoryU3Ed__41_MoveNext_m2BCB958E3D630CB14AAAB911AA05B6D2C6CDD731(_thisAdjusted, method);
}
// System.Void System.IO.Compression.BrotliStream/<FinishReadAsyncMemory>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishReadAsyncMemoryU3Ed__41_SetStateMachine_m3CBB7FCB34C38FC71900FCA7B1885DC98AE23D02 (U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D(L_0, L_1, AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFinishReadAsyncMemoryU3Ed__41_SetStateMachine_m3CBB7FCB34C38FC71900FCA7B1885DC98AE23D02_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6*>(__this + _offset);
	U3CFinishReadAsyncMemoryU3Ed__41_SetStateMachine_m3CBB7FCB34C38FC71900FCA7B1885DC98AE23D02(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteAsyncMemoryCoreU3Ed__52_MoveNext_m59BE771BA4C0236DD8AD766C5344906D22DACB0C (U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_m6D75C61448A96F49A1D9C018ECEDDFD55A53EEF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_Slice_mE27F7313C441F1E0B44FB42C112424F9F9FE27A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* V_1 = NULL;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D V_5;
	memset((&V_5), 0, sizeof(V_5));
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0017_1;
			}
		}
		{
			BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_3 = V_1;
			NullCheck(L_3);
			BrotliStream_AsyncOperationStarting_mAC16BE1B14D6705144A85A166D67627A2D6223FF(L_3, NULL);
		}

IL_0017_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_011b_1:
				{// begin finally (depth: 2)
					{
						int32_t L_4 = V_0;
						if ((((int32_t)L_4) >= ((int32_t)0)))
						{
							goto IL_0125_1;
						}
					}
					{
						BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_5 = V_1;
						NullCheck(L_5);
						BrotliStream_AsyncOperationCompleting_mCB170E117C21840FABE601E4EF2D4EAEBA937C6B(L_5, NULL);
					}

IL_0125_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_6 = V_0;
					if (!L_6)
					{
						goto IL_00e9_2;
					}
				}
				{
					__this->___U3ClastResultU3E5__2_5 = 1;
					goto IL_010d_2;
				}

IL_002a_2:
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_7 = V_1;
					NullCheck(L_7);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7->____buffer_6;
					Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_inline((&V_2), L_8, Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_RuntimeMethod_var);
					V_3 = 0;
					V_4 = 0;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_9 = V_1;
					NullCheck(L_9);
					BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* L_10 = (&L_9->____encoder_13);
					ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_11 = __this->___buffer_3;
					Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_12 = V_2;
					int32_t L_13;
					L_13 = BrotliEncoder_Compress_m87A14378311C5A862021ADBB14A215700DF9CFC0(L_10, L_11, L_12, (&V_3), (&V_4), (bool)0, NULL);
					__this->___U3ClastResultU3E5__2_5 = L_13;
					int32_t L_14 = __this->___U3ClastResultU3E5__2_5;
					if ((!(((uint32_t)L_14) == ((uint32_t)3))))
					{
						goto IL_006d_2;
					}
				}
				{
					InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_15 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
					NullCheck(L_15);
					InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EDFE6869C6F3C37692861FB7160EF4E38F7BC0C)), NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWriteAsyncMemoryCoreU3Ed__52_MoveNext_m59BE771BA4C0236DD8AD766C5344906D22DACB0C_RuntimeMethod_var)));
				}

IL_006d_2:
				{
					int32_t L_16 = V_3;
					if ((((int32_t)L_16) <= ((int32_t)0)))
					{
						goto IL_0083_2;
					}
				}
				{
					ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_17 = (&__this->___buffer_3);
					int32_t L_18 = V_3;
					ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_19;
					L_19 = ReadOnlyMemory_1_Slice_mE27F7313C441F1E0B44FB42C112424F9F9FE27A6_inline(L_17, L_18, ReadOnlyMemory_1_Slice_mE27F7313C441F1E0B44FB42C112424F9F9FE27A6_RuntimeMethod_var);
					__this->___buffer_3 = L_19;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___buffer_3))->____object_0), (void*)NULL);
				}

IL_0083_2:
				{
					int32_t L_20 = V_4;
					if ((((int32_t)L_20) <= ((int32_t)0)))
					{
						goto IL_010d_2;
					}
				}
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_21 = V_1;
					NullCheck(L_21);
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = L_21->____stream_5;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_23 = V_1;
					NullCheck(L_23);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = L_23->____buffer_6;
					int32_t L_25 = V_4;
					ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_26;
					memset((&L_26), 0, sizeof(L_26));
					ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_inline((&L_26), L_24, 0, L_25, /*hidden argument*/ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_RuntimeMethod_var);
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27 = __this->___cancellationToken_4;
					NullCheck(L_22);
					ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_28;
					L_28 = VirtualFuncInvoker2< ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(30 /* System.Threading.Tasks.ValueTask System.IO.Stream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken) */, L_22, L_26, L_27);
					V_6 = L_28;
					ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 L_29;
					L_29 = ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline((&V_6), (bool)0, NULL);
					V_7 = L_29;
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_30;
					L_30 = ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline((&V_7), NULL);
					V_5 = L_30;
					bool L_31;
					L_31 = ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline((&V_5), NULL);
					if (L_31)
					{
						goto IL_0106_2;
					}
				}
				{
					int32_t L_32 = 0;
					V_0 = L_32;
					__this->___U3CU3E1__state_0 = L_32;
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_33 = V_5;
					__this->___U3CU3Eu__1_6 = L_33;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_6))->____value_0))->____obj_1), (void*)NULL);
					AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_34 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_m6D75C61448A96F49A1D9C018ECEDDFD55A53EEF5(L_34, (&V_5), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950_m6D75C61448A96F49A1D9C018ECEDDFD55A53EEF5_RuntimeMethod_var);
					goto IL_0154;
				}

IL_00e9_2:
				{
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_35 = __this->___U3CU3Eu__1_6;
					V_5 = L_35;
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* L_36 = (&__this->___U3CU3Eu__1_6);
					il2cpp_codegen_initobj(L_36, sizeof(ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D));
					int32_t L_37 = (-1);
					V_0 = L_37;
					__this->___U3CU3E1__state_0 = L_37;
				}

IL_0106_2:
				{
					ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline((&V_5), NULL);
				}

IL_010d_2:
				{
					int32_t L_38 = __this->___U3ClastResultU3E5__2_5;
					if ((((int32_t)L_38) == ((int32_t)1)))
					{
						goto IL_002a_2;
					}
				}
				{
					goto IL_0126_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0126_1:
		{
			goto IL_0141;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0128;
		}
		throw e;
	}

CATCH_0128:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_39 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_40 = V_8;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_39, L_40, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0154;
	}// end catch (depth: 1)

IL_0141:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_41 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_41, NULL);
	}

IL_0154:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWriteAsyncMemoryCoreU3Ed__52_MoveNext_m59BE771BA4C0236DD8AD766C5344906D22DACB0C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950*>(__this + _offset);
	U3CWriteAsyncMemoryCoreU3Ed__52_MoveNext_m59BE771BA4C0236DD8AD766C5344906D22DACB0C(_thisAdjusted, method);
}
// System.Void System.IO.Compression.BrotliStream/<WriteAsyncMemoryCore>d__52::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteAsyncMemoryCoreU3Ed__52_SetStateMachine_m47A2D1C89535AC9EE149033A3CD7B2F76FA75547 (U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWriteAsyncMemoryCoreU3Ed__52_SetStateMachine_m47A2D1C89535AC9EE149033A3CD7B2F76FA75547_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWriteAsyncMemoryCoreU3Ed__52_t4E191F443FE4BB97340913D45BD6FD85206CB950*>(__this + _offset);
	U3CWriteAsyncMemoryCoreU3Ed__52_SetStateMachine_m47A2D1C89535AC9EE149033A3CD7B2F76FA75547(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushAsyncCoreU3Ed__55_MoveNext_m1C7A1EC027BFE671FBD0DDBD28BEC17422E3BFE0 (U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_m8A7D7E2252BE0DEEE50BBE970AA0B3CB086622DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* V_1 = NULL;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D V_4;
	memset((&V_4), 0, sizeof(V_4));
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0017_1;
			}
		}
		{
			BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_3 = V_1;
			NullCheck(L_3);
			BrotliStream_AsyncOperationStarting_mAC16BE1B14D6705144A85A166D67627A2D6223FF(L_3, NULL);
		}

IL_0017_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_011c_1:
				{// begin finally (depth: 2)
					{
						int32_t L_4 = V_0;
						if ((((int32_t)L_4) >= ((int32_t)0)))
						{
							goto IL_0126_1;
						}
					}
					{
						BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_5 = V_1;
						NullCheck(L_5);
						BrotliStream_AsyncOperationCompleting_mCB170E117C21840FABE601E4EF2D4EAEBA937C6B(L_5, NULL);
					}

IL_0126_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_6 = V_0;
					if (!L_6)
					{
						goto IL_00ea_2;
					}
				}
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_7 = V_1;
					NullCheck(L_7);
					BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D L_8 = L_7->____encoder_13;
					SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* L_9 = L_8.____state_0;
					if (!L_9)
					{
						goto IL_003d_2;
					}
				}
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_10 = V_1;
					NullCheck(L_10);
					BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D L_11 = L_10->____encoder_13;
					SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* L_12 = L_11.____state_0;
					NullCheck(L_12);
					bool L_13;
					L_13 = SafeHandle_get_IsClosed_mD2CD4AA6E3B0A242E48080F18BC07199CAB80273(L_12, NULL);
					if (!L_13)
					{
						goto IL_0042_2;
					}
				}

IL_003d_2:
				{
					goto IL_0142;
				}

IL_0042_2:
				{
					__this->___U3ClastResultU3E5__2_4 = 1;
					goto IL_010e_2;
				}

IL_004e_2:
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_14 = V_1;
					NullCheck(L_14);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->____buffer_6;
					Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_inline((&V_2), L_15, Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_RuntimeMethod_var);
					V_3 = 0;
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_16 = V_1;
					NullCheck(L_16);
					BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* L_17 = (&L_16->____encoder_13);
					Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_18 = V_2;
					int32_t L_19;
					L_19 = BrotliEncoder_Flush_m6085D5506175DCC762AF3D669BC7C905D885E6C3(L_17, L_18, (&V_3), NULL);
					__this->___U3ClastResultU3E5__2_4 = L_19;
					int32_t L_20 = __this->___U3ClastResultU3E5__2_4;
					if ((!(((uint32_t)L_20) == ((uint32_t)3))))
					{
						goto IL_0085_2;
					}
				}
				{
					InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* L_21 = (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var)));
					NullCheck(L_21);
					InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EDFE6869C6F3C37692861FB7160EF4E38F7BC0C)), NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFlushAsyncCoreU3Ed__55_MoveNext_m1C7A1EC027BFE671FBD0DDBD28BEC17422E3BFE0_RuntimeMethod_var)));
				}

IL_0085_2:
				{
					int32_t L_22 = V_3;
					if ((((int32_t)L_22) <= ((int32_t)0)))
					{
						goto IL_010e_2;
					}
				}
				{
					BrotliStream_t4510F743202AE7011C015C8B8A1A1508BE6328FB* L_23 = V_1;
					NullCheck(L_23);
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = L_23->____stream_5;
					int32_t L_25 = V_3;
					Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_26;
					L_26 = Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_inline((&V_2), 0, L_25, Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_RuntimeMethod_var);
					ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_27;
					L_27 = Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD(L_26, Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD_RuntimeMethod_var);
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28 = __this->___cancellationToken_3;
					NullCheck(L_24);
					ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_29;
					L_29 = VirtualFuncInvoker2< ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(30 /* System.Threading.Tasks.ValueTask System.IO.Stream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken) */, L_24, L_27, L_28);
					V_5 = L_29;
					ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 L_30;
					L_30 = ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline((&V_5), (bool)0, NULL);
					V_6 = L_30;
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_31;
					L_31 = ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline((&V_6), NULL);
					V_4 = L_31;
					bool L_32;
					L_32 = ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline((&V_4), NULL);
					if (L_32)
					{
						goto IL_0107_2;
					}
				}
				{
					int32_t L_33 = 0;
					V_0 = L_33;
					__this->___U3CU3E1__state_0 = L_33;
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_34 = V_4;
					__this->___U3CU3Eu__1_5 = L_34;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_5))->____value_0))->____obj_1), (void*)NULL);
					AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_35 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_m8A7D7E2252BE0DEEE50BBE970AA0B3CB086622DE(L_35, (&V_4), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4_m8A7D7E2252BE0DEEE50BBE970AA0B3CB086622DE_RuntimeMethod_var);
					goto IL_0155;
				}

IL_00ea_2:
				{
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_36 = __this->___U3CU3Eu__1_5;
					V_4 = L_36;
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* L_37 = (&__this->___U3CU3Eu__1_5);
					il2cpp_codegen_initobj(L_37, sizeof(ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D));
					int32_t L_38 = (-1);
					V_0 = L_38;
					__this->___U3CU3E1__state_0 = L_38;
				}

IL_0107_2:
				{
					ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline((&V_4), NULL);
				}

IL_010e_2:
				{
					int32_t L_39 = __this->___U3ClastResultU3E5__2_4;
					if ((((int32_t)L_39) == ((int32_t)1)))
					{
						goto IL_004e_2;
					}
				}
				{
					goto IL_0127_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0127_1:
		{
			goto IL_0142;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0129;
		}
		throw e;
	}

CATCH_0129:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_40 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_41 = V_7;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_40, L_41, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0155;
	}// end catch (depth: 1)

IL_0142:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_42 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_42, NULL);
	}

IL_0155:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFlushAsyncCoreU3Ed__55_MoveNext_m1C7A1EC027BFE671FBD0DDBD28BEC17422E3BFE0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4*>(__this + _offset);
	U3CFlushAsyncCoreU3Ed__55_MoveNext_m1C7A1EC027BFE671FBD0DDBD28BEC17422E3BFE0(_thisAdjusted, method);
}
// System.Void System.IO.Compression.BrotliStream/<FlushAsyncCore>d__55::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushAsyncCoreU3Ed__55_SetStateMachine_mD75D8773A561E5892E3335F572C881CB0B58F489 (U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFlushAsyncCoreU3Ed__55_SetStateMachine_mD75D8773A561E5892E3335F572C881CB0B58F489_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFlushAsyncCoreU3Ed__55_t030E8B364641DCF94AABD6DBD70F94D32B58CDC4*>(__this + _offset);
	U3CFlushAsyncCoreU3Ed__55_SetStateMachine_mD75D8773A561E5892E3335F572C881CB0B58F489(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.IO.Compression.BrotliDecoder
IL2CPP_EXTERN_C void BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshal_pinvoke(const BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847& unmarshaled, BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____state_0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("unmarshaled_state"), NULL);
	bool ___safeHandle_reference_incremented_for_unmarshaled_____state_0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(unmarshaled.____state_0, (&___safeHandle_reference_incremented_for_unmarshaled_____state_0), NULL);
	marshaled.____state_0 = reinterpret_cast<void*>((unmarshaled.____state_0)->___handle_0);
	marshaled.____disposed_1 = static_cast<int32_t>(unmarshaled.____disposed_1);
}
IL2CPP_EXTERN_C void BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshal_pinvoke_back(const BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshaled_pinvoke& marshaled, BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847& unmarshaled)
{
	SafeBrotliDecoderHandle__ctor_mBBFC1DB79F1B756A31018CF108FB228A388929F8(unmarshaled.____state_0, NULL);
	intptr_t unmarshaled_state_handle_temp;
	unmarshaled_state_handle_temp = (intptr_t)marshaled.____state_0;
	(unmarshaled.____state_0)->___handle_0 = unmarshaled_state_handle_temp;
	bool ___safeHandle_reference_incremented_for_unmarshaled_____state_0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(unmarshaled.____state_0, (&___safeHandle_reference_incremented_for_unmarshaled_____state_0), NULL);
	bool unmarshaled_disposed_temp_1 = false;
	unmarshaled_disposed_temp_1 = static_cast<bool>(marshaled.____disposed_1);
	unmarshaled.____disposed_1 = unmarshaled_disposed_temp_1;
}
// Conversion method for clean up from marshalling of: System.IO.Compression.BrotliDecoder
IL2CPP_EXTERN_C void BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshal_pinvoke_cleanup(BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.IO.Compression.BrotliDecoder
IL2CPP_EXTERN_C void BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshal_com(const BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847& unmarshaled, BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshaled_com& marshaled)
{
	if (unmarshaled.____state_0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("unmarshaled_state"), NULL);
	bool ___safeHandle_reference_incremented_for_unmarshaled_____state_0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(unmarshaled.____state_0, (&___safeHandle_reference_incremented_for_unmarshaled_____state_0), NULL);
	marshaled.____state_0 = reinterpret_cast<void*>((unmarshaled.____state_0)->___handle_0);
	marshaled.____disposed_1 = static_cast<int32_t>(unmarshaled.____disposed_1);
}
IL2CPP_EXTERN_C void BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshal_com_back(const BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshaled_com& marshaled, BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847& unmarshaled)
{
	SafeBrotliDecoderHandle__ctor_mBBFC1DB79F1B756A31018CF108FB228A388929F8(unmarshaled.____state_0, NULL);
	intptr_t unmarshaled_state_handle_temp;
	unmarshaled_state_handle_temp = (intptr_t)marshaled.____state_0;
	(unmarshaled.____state_0)->___handle_0 = unmarshaled_state_handle_temp;
	bool ___safeHandle_reference_incremented_for_unmarshaled_____state_0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(unmarshaled.____state_0, (&___safeHandle_reference_incremented_for_unmarshaled_____state_0), NULL);
	bool unmarshaled_disposed_temp_1 = false;
	unmarshaled_disposed_temp_1 = static_cast<bool>(marshaled.____disposed_1);
	unmarshaled.____disposed_1 = unmarshaled_disposed_temp_1;
}
// Conversion method for clean up from marshalling of: System.IO.Compression.BrotliDecoder
IL2CPP_EXTERN_C void BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshal_com_cleanup(BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847_marshaled_com& marshaled)
{
}
// System.Void System.IO.Compression.BrotliDecoder::InitializeDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliDecoder_InitializeDecoder_m7F32673D3B23DDDA39024F5B9113DE7B369C479F (BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* L_3;
		L_3 = Brotli_BrotliDecoderCreateInstance_m6A88BD51B6D0D07F60E15C460A5B630C806FF409(L_0, L_1, L_2, NULL);
		__this->____state_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_3);
		SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* L_4 = __this->____state_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_4);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_6 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BDD57354231082EAA6C493C3167F432E11058F5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliDecoder_InitializeDecoder_m7F32673D3B23DDDA39024F5B9113DE7B369C479F_RuntimeMethod_var)));
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BrotliDecoder_InitializeDecoder_m7F32673D3B23DDDA39024F5B9113DE7B369C479F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847*>(__this + _offset);
	BrotliDecoder_InitializeDecoder_m7F32673D3B23DDDA39024F5B9113DE7B369C479F(_thisAdjusted, method);
}
// System.Void System.IO.Compression.BrotliDecoder::EnsureInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliDecoder_EnsureInitialized_m6184E8782F3EBA46B1292C7AFFD9084B5A27C3BB (BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* __this, const RuntimeMethod* method) 
{
	{
		BrotliDecoder_EnsureNotDisposed_m535DCEDF42829C275B6F8A6732DD08D55C5150BE(__this, NULL);
		SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* L_0 = __this->____state_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		BrotliDecoder_InitializeDecoder_m7F32673D3B23DDDA39024F5B9113DE7B369C479F(__this, NULL);
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BrotliDecoder_EnsureInitialized_m6184E8782F3EBA46B1292C7AFFD9084B5A27C3BB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847*>(__this + _offset);
	BrotliDecoder_EnsureInitialized_m6184E8782F3EBA46B1292C7AFFD9084B5A27C3BB(_thisAdjusted, method);
}
// System.Void System.IO.Compression.BrotliDecoder::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliDecoder_Dispose_mC84D643DBB51DE4E9ECC1AAFDA6C9E30C8CA99A1 (BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* __this, const RuntimeMethod* method) 
{
	SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* G_B2_0 = NULL;
	SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* G_B1_0 = NULL;
	{
		__this->____disposed_1 = (bool)1;
		SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* L_0 = __this->____state_0;
		SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BrotliDecoder_Dispose_mC84D643DBB51DE4E9ECC1AAFDA6C9E30C8CA99A1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847*>(__this + _offset);
	BrotliDecoder_Dispose_mC84D643DBB51DE4E9ECC1AAFDA6C9E30C8CA99A1(_thisAdjusted, method);
}
// System.Void System.IO.Compression.BrotliDecoder::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliDecoder_EnsureNotDisposed_m535DCEDF42829C275B6F8A6732DD08D55C5150BE (BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_1;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E86505CF1C7AC53FD698A730A137CB783A7AA4F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECC3496F02C1015AA4D74043A0DE13810269E15)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliDecoder_EnsureNotDisposed_m535DCEDF42829C275B6F8A6732DD08D55C5150BE_RuntimeMethod_var)));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BrotliDecoder_EnsureNotDisposed_m535DCEDF42829C275B6F8A6732DD08D55C5150BE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847*>(__this + _offset);
	BrotliDecoder_EnsureNotDisposed_m535DCEDF42829C275B6F8A6732DD08D55C5150BE(_thisAdjusted, method);
}
// System.Buffers.OperationStatus System.IO.Compression.BrotliDecoder::Decompress(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliDecoder_Decompress_m0BD52E9AC534C33D8A8F1D0BC6CE1880644795C5 (BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	intptr_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		BrotliDecoder_EnsureInitialized_m6184E8782F3EBA46B1292C7AFFD9084B5A27C3BB(__this, NULL);
		int32_t* L_0 = ___bytesConsumed2;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___bytesWritten3;
		*((int32_t*)L_1) = (int32_t)0;
		SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* L_2 = __this->____state_0;
		bool L_3;
		L_3 = Brotli_BrotliDecoderIsFinished_m4B248470CF324970EFDB452045D17F36DBEEEC36(L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (int32_t)(0);
	}

IL_001c:
	{
		int32_t L_4;
		L_4 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		intptr_t L_5;
		L_5 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(L_4, NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		intptr_t L_7;
		L_7 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(L_6, NULL);
		V_1 = L_7;
		goto IL_00fc;
	}

IL_003b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8 = ___source0;
		uint8_t* L_9;
		L_9 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_8, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		V_3 = L_9;
		uint8_t* L_10 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_10);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_11 = ___destination1;
		uint8_t* L_12;
		L_12 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_11, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		V_4 = L_12;
		uint8_t* L_13 = V_4;
		uint8_t* L_14 = V_2;
		V_5 = L_14;
		V_6 = (uint8_t*)((uintptr_t)L_13);
		SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* L_15 = __this->____state_0;
		int32_t L_16;
		L_16 = Brotli_BrotliDecoderDecompressStream_m5CA3A81C1718653B7DBC0C4CB80DB72E9C3B2182(L_15, (&V_1), (uint8_t**)((uintptr_t)(&V_5)), (&V_0), (uint8_t**)((uintptr_t)(&V_6)), (&V_8), NULL);
		V_7 = L_16;
		int32_t L_17 = V_7;
		if (L_17)
		{
			goto IL_0074;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0074:
	{
		int32_t* L_18 = ___bytesConsumed2;
		int32_t* L_19 = ___bytesConsumed2;
		int32_t L_20 = *((int32_t*)L_19);
		int32_t L_21;
		L_21 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		intptr_t L_22 = V_1;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		*((int32_t*)L_18) = (int32_t)((int32_t)il2cpp_codegen_add(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, L_23))));
		int32_t* L_24 = ___bytesWritten3;
		int32_t* L_25 = ___bytesWritten3;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27;
		L_27 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		intptr_t L_28 = V_0;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, ((int32_t)il2cpp_codegen_subtract(L_27, L_29))));
		int32_t L_30 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract(L_30, 1)))
		{
			case 0:
			{
				goto IL_00b3;
			}
			case 1:
			{
				goto IL_00b7;
			}
			case 2:
			{
				goto IL_00b5;
			}
		}
	}
	{
		goto IL_00b7;
	}

IL_00b3:
	{
		return (int32_t)(0);
	}

IL_00b5:
	{
		return (int32_t)(1);
	}

IL_00b7:
	{
		int32_t L_31;
		L_31 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		intptr_t L_32 = V_1;
		int32_t L_33;
		L_33 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_32, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_34;
		L_34 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___source0), ((int32_t)il2cpp_codegen_subtract(L_31, L_33)), ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___source0 = L_34;
		int32_t L_35;
		L_35 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		intptr_t L_36 = V_0;
		int32_t L_37;
		L_37 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_36, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_38;
		L_38 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___destination1), ((int32_t)il2cpp_codegen_subtract(L_35, L_37)), Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		___destination1 = L_38;
		int32_t L_39 = V_7;
		if ((!(((uint32_t)L_39) == ((uint32_t)2))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_40;
		L_40 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if (L_40)
		{
			goto IL_00f5;
		}
	}
	{
		return (int32_t)(2);
	}

IL_00f5:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		V_3 = (uint8_t*)((uintptr_t)0);
	}

IL_00fc:
	{
		intptr_t L_41 = V_0;
		int32_t L_42;
		L_42 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_41, NULL);
		if ((((int32_t)L_42) > ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C  int32_t BrotliDecoder_Decompress_m0BD52E9AC534C33D8A8F1D0BC6CE1880644795C5_AdjustorThunk (RuntimeObject* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, const RuntimeMethod* method)
{
	BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliDecoder_t44C1E032D45246B435E3B0EEC2A2E751FD688847*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BrotliDecoder_Decompress_m0BD52E9AC534C33D8A8F1D0BC6CE1880644795C5(_thisAdjusted, ___source0, ___destination1, ___bytesConsumed2, ___bytesWritten3, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.IO.Compression.BrotliEncoder
IL2CPP_EXTERN_C void BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshal_pinvoke(const BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D& unmarshaled, BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____state_0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("unmarshaled_state"), NULL);
	bool ___safeHandle_reference_incremented_for_unmarshaled_____state_0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(unmarshaled.____state_0, (&___safeHandle_reference_incremented_for_unmarshaled_____state_0), NULL);
	marshaled.____state_0 = reinterpret_cast<void*>((unmarshaled.____state_0)->___handle_0);
	marshaled.____disposed_1 = static_cast<int32_t>(unmarshaled.____disposed_1);
}
IL2CPP_EXTERN_C void BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshal_pinvoke_back(const BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshaled_pinvoke& marshaled, BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D& unmarshaled)
{
	SafeBrotliEncoderHandle__ctor_mE3D1226809A078B95C8F32B2EE32FD3EC7666CBD(unmarshaled.____state_0, NULL);
	intptr_t unmarshaled_state_handle_temp;
	unmarshaled_state_handle_temp = (intptr_t)marshaled.____state_0;
	(unmarshaled.____state_0)->___handle_0 = unmarshaled_state_handle_temp;
	bool ___safeHandle_reference_incremented_for_unmarshaled_____state_0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(unmarshaled.____state_0, (&___safeHandle_reference_incremented_for_unmarshaled_____state_0), NULL);
	bool unmarshaled_disposed_temp_1 = false;
	unmarshaled_disposed_temp_1 = static_cast<bool>(marshaled.____disposed_1);
	unmarshaled.____disposed_1 = unmarshaled_disposed_temp_1;
}
// Conversion method for clean up from marshalling of: System.IO.Compression.BrotliEncoder
IL2CPP_EXTERN_C void BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshal_pinvoke_cleanup(BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.IO.Compression.BrotliEncoder
IL2CPP_EXTERN_C void BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshal_com(const BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D& unmarshaled, BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshaled_com& marshaled)
{
	if (unmarshaled.____state_0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("unmarshaled_state"), NULL);
	bool ___safeHandle_reference_incremented_for_unmarshaled_____state_0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(unmarshaled.____state_0, (&___safeHandle_reference_incremented_for_unmarshaled_____state_0), NULL);
	marshaled.____state_0 = reinterpret_cast<void*>((unmarshaled.____state_0)->___handle_0);
	marshaled.____disposed_1 = static_cast<int32_t>(unmarshaled.____disposed_1);
}
IL2CPP_EXTERN_C void BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshal_com_back(const BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshaled_com& marshaled, BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D& unmarshaled)
{
	SafeBrotliEncoderHandle__ctor_mE3D1226809A078B95C8F32B2EE32FD3EC7666CBD(unmarshaled.____state_0, NULL);
	intptr_t unmarshaled_state_handle_temp;
	unmarshaled_state_handle_temp = (intptr_t)marshaled.____state_0;
	(unmarshaled.____state_0)->___handle_0 = unmarshaled_state_handle_temp;
	bool ___safeHandle_reference_incremented_for_unmarshaled_____state_0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(unmarshaled.____state_0, (&___safeHandle_reference_incremented_for_unmarshaled_____state_0), NULL);
	bool unmarshaled_disposed_temp_1 = false;
	unmarshaled_disposed_temp_1 = static_cast<bool>(marshaled.____disposed_1);
	unmarshaled.____disposed_1 = unmarshaled_disposed_temp_1;
}
// Conversion method for clean up from marshalling of: System.IO.Compression.BrotliEncoder
IL2CPP_EXTERN_C void BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshal_com_cleanup(BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D_marshaled_com& marshaled)
{
}
// System.Void System.IO.Compression.BrotliEncoder::InitializeEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliEncoder_InitializeEncoder_mA3C8D746B70CE516A1988FAEEEC6D8372C34333A (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BrotliEncoder_EnsureNotDisposed_mF261E4A5E06537AE45FC41C1B870F1C3F1312B56(__this, NULL);
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* L_3;
		L_3 = Brotli_BrotliEncoderCreateInstance_m73FC14FBDB2B86152CA0A9EA83A7D0B7492DAC17(L_0, L_1, L_2, NULL);
		__this->____state_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_3);
		SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* L_4 = __this->____state_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_4);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_6 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8497361893F29B5DB350E7E971E316035775C9D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliEncoder_InitializeEncoder_mA3C8D746B70CE516A1988FAEEEC6D8372C34333A_RuntimeMethod_var)));
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BrotliEncoder_InitializeEncoder_mA3C8D746B70CE516A1988FAEEEC6D8372C34333A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D*>(__this + _offset);
	BrotliEncoder_InitializeEncoder_mA3C8D746B70CE516A1988FAEEEC6D8372C34333A(_thisAdjusted, method);
}
// System.Void System.IO.Compression.BrotliEncoder::EnsureInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliEncoder_EnsureInitialized_m05698B56A67F11A53D86774D6B729165307114E7 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, const RuntimeMethod* method) 
{
	{
		BrotliEncoder_EnsureNotDisposed_mF261E4A5E06537AE45FC41C1B870F1C3F1312B56(__this, NULL);
		SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* L_0 = __this->____state_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		BrotliEncoder_InitializeEncoder_mA3C8D746B70CE516A1988FAEEEC6D8372C34333A(__this, NULL);
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BrotliEncoder_EnsureInitialized_m05698B56A67F11A53D86774D6B729165307114E7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D*>(__this + _offset);
	BrotliEncoder_EnsureInitialized_m05698B56A67F11A53D86774D6B729165307114E7(_thisAdjusted, method);
}
// System.Void System.IO.Compression.BrotliEncoder::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliEncoder_Dispose_m986392D5C6EA749269EB74351E5661BB783B8F60 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, const RuntimeMethod* method) 
{
	SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* G_B2_0 = NULL;
	SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* G_B1_0 = NULL;
	{
		__this->____disposed_1 = (bool)1;
		SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* L_0 = __this->____state_0;
		SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BrotliEncoder_Dispose_m986392D5C6EA749269EB74351E5661BB783B8F60_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D*>(__this + _offset);
	BrotliEncoder_Dispose_m986392D5C6EA749269EB74351E5661BB783B8F60(_thisAdjusted, method);
}
// System.Void System.IO.Compression.BrotliEncoder::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrotliEncoder_EnsureNotDisposed_mF261E4A5E06537AE45FC41C1B870F1C3F1312B56 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_1;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90DBF25B510B8254AB2001E4C67890377F8F1191)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0712C407AAC0041C84A00CDFA38D826309EC6048)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BrotliEncoder_EnsureNotDisposed_mF261E4A5E06537AE45FC41C1B870F1C3F1312B56_RuntimeMethod_var)));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BrotliEncoder_EnsureNotDisposed_mF261E4A5E06537AE45FC41C1B870F1C3F1312B56_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D*>(__this + _offset);
	BrotliEncoder_EnsureNotDisposed_mF261E4A5E06537AE45FC41C1B870F1C3F1312B56(_thisAdjusted, method);
}
// System.Buffers.OperationStatus System.IO.Compression.BrotliEncoder::Flush(System.Memory`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliEncoder_Flush_m6085D5506175DCC762AF3D669BC7C905D885E6C3 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___destination0, int32_t* ___bytesWritten1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0;
		L_0 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline((&___destination0), Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		int32_t* L_1 = ___bytesWritten1;
		int32_t L_2;
		L_2 = BrotliEncoder_Flush_mB35C442FC2F5C35E10D35484062678CAA6E5AE37(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t BrotliEncoder_Flush_m6085D5506175DCC762AF3D669BC7C905D885E6C3_AdjustorThunk (RuntimeObject* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___destination0, int32_t* ___bytesWritten1, const RuntimeMethod* method)
{
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BrotliEncoder_Flush_m6085D5506175DCC762AF3D669BC7C905D885E6C3(_thisAdjusted, ___destination0, ___bytesWritten1, method);
	return _returnValue;
}
// System.Buffers.OperationStatus System.IO.Compression.BrotliEncoder::Flush(System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliEncoder_Flush_mB35C442FC2F5C35E10D35484062678CAA6E5AE37 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, int32_t* ___bytesWritten1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		L_0 = ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27(ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_RuntimeMethod_var);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1 = ___destination0;
		int32_t* L_2 = ___bytesWritten1;
		int32_t L_3;
		L_3 = BrotliEncoder_Compress_m7961246DE0986EAD0B7DA3B00EC32C18A444DF21(__this, L_0, L_1, (&V_0), L_2, 1, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t BrotliEncoder_Flush_mB35C442FC2F5C35E10D35484062678CAA6E5AE37_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, int32_t* ___bytesWritten1, const RuntimeMethod* method)
{
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BrotliEncoder_Flush_mB35C442FC2F5C35E10D35484062678CAA6E5AE37(_thisAdjusted, ___destination0, ___bytesWritten1, method);
	return _returnValue;
}
// System.Buffers.OperationStatus System.IO.Compression.BrotliEncoder::Compress(System.ReadOnlyMemory`1<System.Byte>,System.Memory`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliEncoder_Compress_m87A14378311C5A862021ADBB14A215700DF9CFC0 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___source0, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		L_0 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline((&___source0), ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline((&___destination1), Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		int32_t* L_2 = ___bytesConsumed2;
		int32_t* L_3 = ___bytesWritten3;
		bool L_4 = ___isFinalBlock4;
		int32_t L_5;
		L_5 = BrotliEncoder_Compress_mA00FEA4D2B0999A8CC6CDD028A916FF0C586C746(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t BrotliEncoder_Compress_m87A14378311C5A862021ADBB14A215700DF9CFC0_AdjustorThunk (RuntimeObject* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___source0, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method)
{
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BrotliEncoder_Compress_m87A14378311C5A862021ADBB14A215700DF9CFC0(_thisAdjusted, ___source0, ___destination1, ___bytesConsumed2, ___bytesWritten3, ___isFinalBlock4, method);
	return _returnValue;
}
// System.Buffers.OperationStatus System.IO.Compression.BrotliEncoder::Compress(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliEncoder_Compress_mA00FEA4D2B0999A8CC6CDD028A916FF0C586C746 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	int32_t* G_B2_0 = NULL;
	int32_t* G_B2_1 = NULL;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* G_B2_4 = NULL;
	int32_t* G_B1_0 = NULL;
	int32_t* G_B1_1 = NULL;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t* G_B3_1 = NULL;
	int32_t* G_B3_2 = NULL;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* G_B3_5 = NULL;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___source0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1 = ___destination1;
		int32_t* L_2 = ___bytesConsumed2;
		int32_t* L_3 = ___bytesWritten3;
		bool L_4 = ___isFinalBlock4;
		G_B1_0 = L_3;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		G_B1_4 = __this;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			G_B2_4 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_000e:
	{
		int32_t L_5;
		L_5 = BrotliEncoder_Compress_m7961246DE0986EAD0B7DA3B00EC32C18A444DF21(G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t BrotliEncoder_Compress_mA00FEA4D2B0999A8CC6CDD028A916FF0C586C746_AdjustorThunk (RuntimeObject* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method)
{
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BrotliEncoder_Compress_mA00FEA4D2B0999A8CC6CDD028A916FF0C586C746(_thisAdjusted, ___source0, ___destination1, ___bytesConsumed2, ___bytesWritten3, ___isFinalBlock4, method);
	return _returnValue;
}
// System.Buffers.OperationStatus System.IO.Compression.BrotliEncoder::Compress(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.IO.Compression.BrotliEncoderOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrotliEncoder_Compress_m7961246DE0986EAD0B7DA3B00EC32C18A444DF21 (BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, int32_t ___operation4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		BrotliEncoder_EnsureInitialized_m05698B56A67F11A53D86774D6B729165307114E7(__this, NULL);
		int32_t* L_0 = ___bytesWritten3;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___bytesConsumed2;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t L_2;
		L_2 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(L_2, NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		intptr_t L_5;
		L_5 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(L_4, NULL);
		V_1 = L_5;
		goto IL_00e6;
	}

IL_002c:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6 = ___source0;
		uint8_t* L_7;
		L_7 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_6, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		V_3 = L_7;
		uint8_t* L_8 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_8);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9 = ___destination1;
		uint8_t* L_10;
		L_10 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_9, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		V_4 = L_10;
		uint8_t* L_11 = V_4;
		uint8_t* L_12 = V_2;
		V_5 = L_12;
		V_6 = (uint8_t*)((uintptr_t)L_11);
		SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* L_13 = __this->____state_0;
		int32_t L_14 = ___operation4;
		bool L_15;
		L_15 = Brotli_BrotliEncoderCompressStream_m67A3B2A84FEE61DF49DC5B3B9B51A4D2893F104E(L_13, L_14, (&V_1), (uint8_t**)((uintptr_t)(&V_5)), (&V_0), (uint8_t**)((uintptr_t)(&V_6)), (&V_7), NULL);
		if (L_15)
		{
			goto IL_0063;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0063:
	{
		int32_t* L_16 = ___bytesConsumed2;
		int32_t* L_17 = ___bytesConsumed2;
		int32_t L_18 = *((int32_t*)L_17);
		int32_t L_19;
		L_19 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		intptr_t L_20 = V_1;
		int32_t L_21;
		L_21 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_20, NULL);
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_21))));
		int32_t* L_22 = ___bytesWritten3;
		int32_t* L_23 = ___bytesWritten3;
		int32_t L_24 = *((int32_t*)L_23);
		int32_t L_25;
		L_25 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		intptr_t L_26 = V_0;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add(L_24, ((int32_t)il2cpp_codegen_subtract(L_25, L_27))));
		intptr_t L_28 = V_0;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		int32_t L_30;
		L_30 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_00b1;
		}
	}
	{
		SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* L_31 = __this->____state_0;
		bool L_32;
		L_32 = Brotli_BrotliEncoderHasMoreOutput_mA2AFC09648D4ED22D7169602F491DC974754F02C(L_31, NULL);
		if (L_32)
		{
			goto IL_00b1;
		}
	}
	{
		intptr_t L_33 = V_1;
		int32_t L_34;
		L_34 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_33, NULL);
		if (L_34)
		{
			goto IL_00b1;
		}
	}
	{
		return (int32_t)(0);
	}

IL_00b1:
	{
		int32_t L_35;
		L_35 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		intptr_t L_36 = V_1;
		int32_t L_37;
		L_37 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_36, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_38;
		L_38 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___source0), ((int32_t)il2cpp_codegen_subtract(L_35, L_37)), ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___source0 = L_38;
		int32_t L_39;
		L_39 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		intptr_t L_40 = V_0;
		int32_t L_41;
		L_41 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_40, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_42;
		L_42 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___destination1), ((int32_t)il2cpp_codegen_subtract(L_39, L_41)), Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		___destination1 = L_42;
		V_4 = (uint8_t*)((uintptr_t)0);
		V_3 = (uint8_t*)((uintptr_t)0);
	}

IL_00e6:
	{
		intptr_t L_43 = V_0;
		int32_t L_44;
		L_44 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_43, NULL);
		if ((((int32_t)L_44) > ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C  int32_t BrotliEncoder_Compress_m7961246DE0986EAD0B7DA3B00EC32C18A444DF21_AdjustorThunk (RuntimeObject* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, int32_t ___operation4, const RuntimeMethod* method)
{
	BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BrotliEncoder_t68A8D0AFFE04E97F0C46100794F786734D2B790D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BrotliEncoder_Compress_m7961246DE0986EAD0B7DA3B00EC32C18A444DF21(_thisAdjusted, ___source0, ___destination1, ___bytesConsumed2, ___bytesWritten3, ___operation4, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IAsyncResult System.Threading.Tasks.TaskToApm::Begin(System.Threading.Tasks.Task,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToApm_Begin_m1A080755817528FB342A9A1352631ACCBF9CEBAE (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___state2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = ___task0;
		RuntimeObject* L_3 = ___state2;
		TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031* L_4 = (TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031*)il2cpp_codegen_object_new(TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TaskWrapperAsyncResult__ctor_mF1F0F980A52876DF07F5CF9B80CDD5CAE167F26D(L_4, L_2, L_3, (bool)1, NULL);
		V_0 = L_4;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___callback1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_6 = ___callback1;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline(L_6, L_7, NULL);
		goto IL_0041;
	}

IL_001d:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8 = ___task0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Task_get_AsyncState_mD702084E5686165B5571ED1D296BB5EEB81DB2D8_inline(L_8, NULL);
		RuntimeObject* L_10 = ___state2;
		if ((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)L_10)))
		{
			goto IL_0032;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11 = ___task0;
		RuntimeObject* L_12 = ___state2;
		TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031* L_13 = (TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031*)il2cpp_codegen_object_new(TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		TaskWrapperAsyncResult__ctor_mF1F0F980A52876DF07F5CF9B80CDD5CAE167F26D(L_13, L_11, L_12, (bool)0, NULL);
		V_1 = L_13;
		RuntimeObject* L_14 = V_1;
		G_B6_0 = L_14;
		goto IL_0035;
	}

IL_0032:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_15 = ___task0;
		V_1 = L_15;
		RuntimeObject* L_16 = V_1;
		G_B6_0 = L_16;
	}

IL_0035:
	{
		V_0 = G_B6_0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_17 = ___callback1;
		if (!L_17)
		{
			goto IL_0041;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18 = ___task0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_19 = ___callback1;
		RuntimeObject* L_20 = V_0;
		TaskToApm_InvokeCallbackWhenTaskCompletes_m8553A6EFB5AEF7E94F4377E87ACE37D1920BC932(L_18, L_19, L_20, NULL);
	}

IL_0041:
	{
		RuntimeObject* L_21 = V_0;
		return L_21;
	}
}
// System.Void System.Threading.Tasks.TaskToApm::End(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_mCD6418D34E9684DB6691549A225F5F9CC5C32753 (RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___asyncResult0;
		V_1 = ((TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031* L_2 = V_1;
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = L_2->___Task_0;
		V_0 = L_3;
		goto IL_001a;
	}

IL_0013:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_4, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
	}

IL_001a:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5 = V_0;
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskToApm_End_mCD6418D34E9684DB6691549A225F5F9CC5C32753_RuntimeMethod_var)));
	}

IL_0023:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7 = V_0;
		NullCheck(L_7);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8;
		L_8 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_7, NULL);
		V_2 = L_8;
		TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToApm::InvokeCallbackWhenTaskCompletes(System.Threading.Tasks.Task,System.AsyncCallback,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_InvokeCallbackWhenTaskCompletes_m8553A6EFB5AEF7E94F4377E87ACE37D1920BC932 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___antecedent0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___asyncResult2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CInvokeCallbackWhenTaskCompletesU3Eb__0_m2C4821F622E71609CAD575ECAC6E757A4BE5CD4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16* V_0 = NULL;
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16* L_0 = (U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m4232277D2AB8EE7F6F66C4565C3CD16E58132C07(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16* L_1 = V_0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_2 = ___callback1;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16* L_3 = V_0;
		RuntimeObject* L_4 = ___asyncResult2;
		NullCheck(L_3);
		L_3->___asyncResult_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___asyncResult_1), (void*)L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5 = ___antecedent0;
		NullCheck(L_5);
		ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_6;
		L_6 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_5, (bool)0, NULL);
		V_1 = L_6;
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_7;
		L_7 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_1), NULL);
		V_2 = L_7;
		U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CInvokeCallbackWhenTaskCompletesU3Eb__0_m2C4821F622E71609CAD575ECAC6E757A4BE5CD4F_RuntimeMethod_var), NULL);
		ConfiguredTaskAwaiter_OnCompleted_mB6A56C98F368A70EC9FC750C492A08F62DD7EEA5((&V_2), L_9, NULL);
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
// System.Void System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::.ctor(System.Threading.Tasks.Task,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskWrapperAsyncResult__ctor_mF1F0F980A52876DF07F5CF9B80CDD5CAE167F26D (TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, RuntimeObject* ___state1, bool ___completedSynchronously2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___task0;
		__this->___Task_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Task_0), (void*)L_0);
		RuntimeObject* L_1 = ___state1;
		__this->____state_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_1), (void*)L_1);
		bool L_2 = ___completedSynchronously2;
		__this->____completedSynchronously_2 = L_2;
		return;
	}
}
// System.Object System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::System.IAsyncResult.get_AsyncState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskWrapperAsyncResult_System_IAsyncResult_get_AsyncState_m29AE39D37A24BC4FCB79ED5F37AF16814C7DB323 (TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____state_1;
		return L_0;
	}
}
// System.Boolean System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::System.IAsyncResult.get_CompletedSynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskWrapperAsyncResult_System_IAsyncResult_get_CompletedSynchronously_m4DA0F3A48335A386436B255ED4D7B6EF941DC39C (TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____completedSynchronously_2;
		return L_0;
	}
}
// System.Boolean System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::System.IAsyncResult.get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskWrapperAsyncResult_System_IAsyncResult_get_IsCompleted_m02CCA4658D6C1A2F667137EB32FA082E066D3B9C (TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031* __this, const RuntimeMethod* method) 
{
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = __this->___Task_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
		return L_1;
	}
}
// System.Threading.WaitHandle System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::System.IAsyncResult.get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* TaskWrapperAsyncResult_System_IAsyncResult_get_AsyncWaitHandle_mBD9F33A9F96E111E376192FC1F867CF219C8AB83 (TaskWrapperAsyncResult_t92158810980B265A1FF167BF0DACCCFA1C015031* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = __this->___Task_0;
		NullCheck(L_0);
		WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* L_1;
		L_1 = InterfaceFuncInvoker0< WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* >::Invoke(1 /* System.Threading.WaitHandle System.IAsyncResult::get_AsyncWaitHandle() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
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
// System.Void System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4232277D2AB8EE7F6F66C4565C3CD16E58132C07 (U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0::<InvokeCallbackWhenTaskCompletes>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CInvokeCallbackWhenTaskCompletesU3Eb__0_m2C4821F622E71609CAD575ECAC6E757A4BE5CD4F (U3CU3Ec__DisplayClass3_0_t6BC2E023E6DE5D3016A3EB19344094FE169AEA16* __this, const RuntimeMethod* method) 
{
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_0 = __this->___callback_0;
		RuntimeObject* L_1 = __this->___asyncResult_1;
		NullCheck(L_0);
		AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline(L_0, L_1, NULL);
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
// System.Void Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeBrotliEncoderHandle__ctor_mE3D1226809A078B95C8F32B2EE32FD3EC7666CBD (SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Boolean Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeBrotliEncoderHandle_ReleaseHandle_m1FF8C199FF5E3AC767A2A1061E032E84AC7A1321 (SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		Brotli_BrotliEncoderDestroyInstance_mC22ACF97F509C7A8E0DA4C91CDEF2050C2BC631A(L_0, NULL);
		return (bool)1;
	}
}
// System.Boolean Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeBrotliEncoderHandle_get_IsInvalid_mE2293BEB437BE8E2C96FBD3F32DBA266A5410D4F (SafeBrotliEncoderHandle_tBB3281B260EB62859B7B4AFA1325D182535832CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		return L_2;
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
// System.Void Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeBrotliDecoderHandle__ctor_mBBFC1DB79F1B756A31018CF108FB228A388929F8 (SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Boolean Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeBrotliDecoderHandle_ReleaseHandle_m4C9646BB3B6966D5EA1C9E5C87106E1A3AC761B4 (SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		Brotli_BrotliDecoderDestroyInstance_mDF10CB788AEDBD9F57645193081FB7E6B6575EF4(L_0, NULL);
		return (bool)1;
	}
}
// System.Boolean Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeBrotliDecoderHandle_get_IsInvalid_m7764BAC5E3200B9273C9CED3BCF01BF831AF7F1B (SafeBrotliDecoderHandle_t4ADB3A3F1FB74F2CD5864D40860D952BA3560AF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_mDDD3DE02109E43D5F0189559B39A1831AA878BE9_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) 
{
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___task0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)38), NULL);
	}

IL_000a:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = ___task0;
		__this->____obj_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_1), (void*)L_1);
		__this->____continueOnCapturedContext_3 = (bool)1;
		__this->____token_2 = (int16_t)0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____obj_1;
		int16_t L_1 = __this->____token_2;
		bool L_2 = ___continueOnCapturedContext0;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTask__ctor_m82EE965BA61F399181B8414BB6ABB146C3332D7B_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ConfiguredValueTaskAwaitable__ctor_mD9583661A0F3E2D6A23C37313CC015A30097CA31_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_0 = __this->____value_0;
		ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredValueTaskAwaiter__ctor_m063C936DEC3C86E2F3F1CB8B2C629084A95E91A1_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* L_0 = (&__this->____value_0);
		bool L_1;
		L_1 = ValueTask_get_IsCompleted_mC9BF7154FF125E1B49DF8D06804DBED4CBC364D9_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* L_0 = (&__this->____value_0);
		ValueTask_ThrowIfCompletedUnsuccessfully_mE62D61EB45AF96000EE4EDBB47991C7A1E62BBB1_inline(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ar0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Task_get_AsyncState_mD702084E5686165B5571ED1D296BB5EEB81DB2D8_inline (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_stateObject_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___array0;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___start1;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		NullCheck((RuntimeArray*)L_14);
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		int32_t L_17 = ___start1;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, L_17);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer_0 = L_19;
		int32_t L_20 = ___length2;
		__this->____length_1 = L_20;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___length2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___array0;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___start1;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		__this->____object_0 = (RuntimeObject*)L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object_0), (void*)(RuntimeObject*)L_14);
		int32_t L_15 = ___start1;
		__this->____index_1 = L_15;
		int32_t L_16 = ___length2;
		__this->____length_2 = L_16;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m6164BE5A3BB19E083385C0C701140EA391B90071_gshared_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___task0, const RuntimeMethod* method) 
{
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_0 = ___task0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)38), NULL);
	}

IL_000a:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1 = ___task0;
		__this->____obj_1 = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_1), (void*)(RuntimeObject*)L_1);
		int32_t* L_2 = (int32_t*)(&__this->____result_2);
		il2cpp_codegen_initobj(L_2, sizeof(int32_t));
		__this->____continueOnCapturedContext_4 = (bool)1;
		__this->____token_3 = (int16_t)0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m0971675A516168FBAB95A659B934AD7958264E79_gshared_inline (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_0 = (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*)(&__this->____methodBuilder_0);
		U3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_Start_TisU3CFinishReadAsyncMemoryU3Ed__41_tAC4F17970D2F2754774454046EEF15C1509B5EC6_m40354586DF61B7BDABD8A98289C316047D4D3DA9(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7 = ___start1;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___array0;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = ___start1;
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_add<uint8_t,int32_t>(L_10, L_11);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer_0 = L_13;
		int32_t L_14 = ___length2;
		__this->____length_1 = L_14;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___array0;
		NullCheck((RuntimeObject*)L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___array0;
		NullCheck((RuntimeArray*)L_7);
		uint8_t* L_8;
		L_8 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_7, NULL);
		uint8_t* L_9;
		L_9 = il2cpp_unsafe_as_ref<uint8_t>(L_8);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_10;
		memset((&L_10), 0, sizeof(L_10));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_10), L_9);
		__this->____pointer_0 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___array0;
		NullCheck(L_11);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___length1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7 = ___start1;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___array0;
		__this->____object_0 = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object_0), (void*)(RuntimeObject*)L_8);
		int32_t L_9 = ___start1;
		__this->____index_1 = L_9;
		int32_t L_10 = ___length2;
		__this->____length_2 = L_10;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043 ValueTask_1_ConfigureAwait_m8DF55719C52ED899F1B6687F9369EDD264871A31_gshared_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____obj_1;
		int32_t L_1 = (int32_t)__this->____result_2;
		int16_t L_2 = (int16_t)__this->____token_3;
		bool L_3 = ___continueOnCapturedContext0;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTask_1__ctor_m690026098BC4DA164D43CBA851AA720C585F05C4_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ConfiguredValueTaskAwaitable_1__ctor_m508597503A661BAE9FEB5315DC97BCD99E4BDCB7_inline((&L_5), L_4, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 ConfiguredValueTaskAwaitable_1_GetAwaiter_m94C14DDAC561363EFCF143293D1E2E5CE74522E3_gshared_inline (ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_0 = (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21)__this->____value_0;
		ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredValueTaskAwaiter__ctor_m1FA5EBCEDA701BBF0893ECF2665D06B4CA2D97B9_inline((&L_1), L_0, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_mB0B5FC0CD4E3282961DCA3F5B5C24260680B7461_gshared_inline (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* L_0 = (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21*)(&__this->____value_0);
		bool L_1;
		L_1 = ValueTask_1_get_IsCompleted_m327391A8FC9F06A07DC95CBC77756BA963EC42A2_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfiguredValueTaskAwaiter_GetResult_mB250A2B7423863EC0EF64C56F679FBA4FD674021_gshared_inline (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* L_0 = (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21*)(&__this->____value_0);
		int32_t L_1;
		L_1 = ValueTask_1_get_Result_m272AA34FF8C511DECB3E35C6C0A1039F0723F960_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->____index_1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->____object_0;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(4 /* System.Span`1<T> System.Buffers.MemoryManager`1<System.Byte>::GetSpan() */, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))));
		V_0 = L_2;
		int32_t L_3 = (int32_t)__this->____index_1;
		int32_t L_4 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_5;
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->____object_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_1;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_13 = V_1;
		NullCheck(L_13);
		Il2CppChar* L_14;
		L_14 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_13, NULL);
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_as_ref<uint8_t>(L_14);
		String_t* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_18), L_15, L_17, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		V_0 = L_18;
		int32_t L_19 = (int32_t)__this->____index_1;
		int32_t L_20 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21;
		L_21 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_21;
	}

IL_0089:
	{
		RuntimeObject* L_22 = (RuntimeObject*)__this->____object_0;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_23 = (RuntimeObject*)__this->____object_0;
		int32_t L_24 = (int32_t)__this->____index_1;
		int32_t L_25 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_26), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13))), L_24, ((int32_t)(L_25&((int32_t)2147483647LL))), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_26;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_27 = V_0;
		return L_27;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____length_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___start0;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)24), NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____object_0;
		int32_t L_5 = (int32_t)__this->____index_1;
		int32_t L_6 = ___start0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___start0;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_inline((&L_9), L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), ((int32_t)il2cpp_codegen_subtract(L_7, L_8)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___array0;
		NullCheck((RuntimeObject*)L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___array0;
		__this->____object_0 = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object_0), (void*)(RuntimeObject*)L_7);
		__this->____index_1 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___array0;
		NullCheck(L_8);
		__this->____length_2 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ReadOnlyMemory_1_Slice_mE27F7313C441F1E0B44FB42C112424F9F9FE27A6_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____length_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___start0;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)24), NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____object_0;
		int32_t L_5 = (int32_t)__this->____index_1;
		int32_t L_6 = ___start0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___start0;
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_9;
		memset((&L_9), 0, sizeof(L_9));
		ReadOnlyMemory_1__ctor_mC964D8DBB34D4EF9D7D5E6B11E2AD9E9AAB3DE7D_inline((&L_9), L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), ((int32_t)il2cpp_codegen_subtract(L_7, L_8)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____length_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___start0;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) <= ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = ___length1;
		int32_t L_5 = V_1;
		int32_t L_6 = ___start0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))))))
		{
			goto IL_001e;
		}
	}

IL_0019:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001e:
	{
		RuntimeObject* L_7 = (RuntimeObject*)__this->____object_0;
		int32_t L_8 = (int32_t)__this->____index_1;
		int32_t L_9 = ___start0;
		int32_t L_10 = ___length1;
		int32_t L_11 = V_0;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_inline((&L_12), L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), ((int32_t)(L_10|((int32_t)(L_11&((int32_t)-2147483648LL))))), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = (int32_t)__this->____index_1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->____object_0;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(4 /* System.Span`1<T> System.Buffers.MemoryManager`1<System.Byte>::GetSpan() */, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6))));
		V_0 = L_2;
		int32_t L_3 = (int32_t)__this->____index_1;
		int32_t L_4 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))(L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return L_6;
	}

IL_0039:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject* L_12 = (RuntimeObject*)__this->____object_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var));
		String_t* L_13 = V_1;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_14 = V_1;
		NullCheck(L_14);
		Il2CppChar* L_15;
		L_15 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		String_t* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_19;
		memset((&L_19), 0, sizeof(L_19));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_19), L_16, L_18, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_2 = L_19;
		int32_t L_20 = (int32_t)__this->____index_1;
		int32_t L_21 = (int32_t)__this->____length_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_22;
		L_22 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&V_2), L_20, L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_22;
	}

IL_008e:
	{
		RuntimeObject* L_23 = (RuntimeObject*)__this->____object_0;
		if (!L_23)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_24 = (RuntimeObject*)__this->____object_0;
		int32_t L_25 = (int32_t)__this->____index_1;
		int32_t L_26 = (int32_t)__this->____length_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_27;
		memset((&L_27), 0, sizeof(L_27));
		ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline((&L_27), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13))), L_25, ((int32_t)(L_26&((int32_t)2147483647LL))), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_27;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_28 = V_2;
		return L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m82EE965BA61F399181B8414BB6ABB146C3332D7B_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, RuntimeObject* ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___obj0;
		__this->____obj_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_1), (void*)L_0);
		int16_t L_1 = ___token1;
		__this->____token_2 = L_1;
		bool L_2 = ___continueOnCapturedContext2;
		__this->____continueOnCapturedContext_3 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_mD9583661A0F3E2D6A23C37313CC015A30097CA31_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_m063C936DEC3C86E2F3F1CB8B2C629084A95E91A1_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mC9BF7154FF125E1B49DF8D06804DBED4CBC364D9_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var, L_7, L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_mE62D61EB45AF96000EE4EDBB47991C7A1E62BBB1_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751(L_4, NULL);
		return;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = il2cpp_unsafe_as<RuntimeObject*>(L_5);
		int16_t L_7 = __this->____token_2;
		NullCheck(L_6);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16) */, IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___ptr0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___ptr0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m690026098BC4DA164D43CBA851AA720C585F05C4_gshared_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, RuntimeObject* ___obj0, int32_t ___result1, int16_t ___token2, bool ___continueOnCapturedContext3, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___obj0;
		__this->____obj_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_1), (void*)L_0);
		int32_t L_1 = ___result1;
		__this->____result_2 = L_1;
		int16_t L_2 = ___token2;
		__this->____token_3 = L_2;
		bool L_3 = ___continueOnCapturedContext3;
		__this->____continueOnCapturedContext_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable_1__ctor_m508597503A661BAE9FEB5315DC97BCD99E4BDCB7_gshared_inline (ConfiguredValueTaskAwaitable_1_tFC447A18AC65308F7F44174D3C3422A194549043* __this, ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_m1FA5EBCEDA701BBF0893ECF2665D06B4CA2D97B9_gshared_inline (ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* __this, ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompleted_m327391A8FC9F06A07DC95CBC77756BA963EC42A2_gshared_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* V_1 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____obj_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = (int16_t)__this->____token_3;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource`1<System.Int32>::GetStatus(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12), L_7, L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueTask_1_get_Result_m272AA34FF8C511DECB3E35C6C0A1039F0723F960_gshared_inline (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* V_1 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____obj_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____result_2;
		return L_2;
	}

IL_0011:
	{
		RuntimeObject* L_3 = V_0;
		V_1 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5 = V_1;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_7;
	}

IL_0028:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = il2cpp_unsafe_as<RuntimeObject*>(L_8);
		int16_t L_10 = (int16_t)__this->____token_3;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(2 /* TResult System.Threading.Tasks.Sources.IValueTaskSource`1<System.Int32>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12), L_9, L_10);
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___obj0;
		__this->____object_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object_0), (void*)L_0);
		int32_t L_1 = ___start1;
		__this->____index_1 = L_1;
		int32_t L_2 = ___length2;
		__this->____length_2 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_mC964D8DBB34D4EF9D7D5E6B11E2AD9E9AAB3DE7D_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___obj0;
		__this->____object_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object_0), (void*)L_0);
		int32_t L_1 = ___start1;
		__this->____index_1 = L_1;
		int32_t L_2 = ___length2;
		__this->____length_2 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___length1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_10;
	}
}
