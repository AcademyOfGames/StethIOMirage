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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,FlatBuffers.StringOffset>
struct Dictionary_2_t6822B8DE331FF1F31775E75ED63812351017B0C5;
// System.Collections.Generic.Dictionary`2<System.String,FlatBuffers.StringOffset>
struct Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685;
// System.Collections.Generic.Dictionary`2<System.Type,System.Int32>
struct Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FlatBuffers.StringOffset>
struct KeyCollection_tE2AE4F149DF92B70503321AD084A966BFE4C9396;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Int32>
struct KeyCollection_tE2F56A37776137F5D3C1BA6C49999EF1EC0E216F;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FlatBuffers.StringOffset>
struct ValueCollection_t7B3938B9E03AD7D4FFAC6D79FD87A641C73B5EE5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Int32>
struct ValueCollection_tAD56DF94D7373625A22E80E942606DC8509CB6D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,FlatBuffers.StringOffset>[]
struct EntryU5BU5D_tB0CFC5DEA8382858A89980F6D685A420E9EA03EF;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Int32>[]
struct EntryU5BU5D_tD80C7495BA8BE64BC139A54FA961AB3EC66D7319;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// FlatBuffers.ByteArrayAllocator
struct ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A;
// FlatBuffers.ByteBuffer
struct ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687;
// FlatBuffers.ByteBufferAllocator
struct ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// FlatBuffers.FlatBufferBuilder
struct FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03C8E3B92EE96B3FD2A91DA91293948493E3E8A2;
IL2CPP_EXTERN_C String_t* _stringLiteral199E4FFB39C13BBE1FDA495B03AF558B41481909;
IL2CPP_EXTERN_C String_t* _stringLiteral2205190534B4BE18F7F950DFE08B06C83FB45673;
IL2CPP_EXTERN_C String_t* _stringLiteral2BDD4D5F5701CF6858D53C77EF8AA4E2BB1DE24B;
IL2CPP_EXTERN_C String_t* _stringLiteral3228EDC2035E419A5666E21CC182B6179D1E2E00;
IL2CPP_EXTERN_C String_t* _stringLiteral42AE8812EFD84589E3176177109FE0F328DC8CBB;
IL2CPP_EXTERN_C String_t* _stringLiteral44372B7E3F3252B67169F88E9A2F221315E6A635;
IL2CPP_EXTERN_C String_t* _stringLiteral4B33AF065A94EDF87433444D126A8EA5295CF031;
IL2CPP_EXTERN_C String_t* _stringLiteral52D6D3390D307B3C94B228D999DA8179B7FF93D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9B8A4C32D7AA01D1E25E8FFA4EE6463F9750C3AF;
IL2CPP_EXTERN_C String_t* _stringLiteralC44B38A15BDBCAD499AB9873471A436DF6E85AF5;
IL2CPP_EXTERN_C String_t* _stringLiteralCE378C12583FCFFB1F6AAFC952A850C43B484A57;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF5ED2B8C034CC48222B60B179CC4F0F1E66634;
IL2CPP_EXTERN_C String_t* _stringLiteralD1680709E54C5E6335DFDBFD1FE2B1A90F93EBBF;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteArrayAllocator_GrowFront_mA06ED6A2D951244E39F01A7C1940EA1CFFFAF97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mBB0088C6CE234D1E02C2E94EAAF1F57220393DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m78BDA710336C59F28C49926731D2EECCFFA1BF23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m077496F94DE88E21F780A919E3D1FFDF5D0A5B41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0AF6A9E01056850C9F7AE464B4099CA3F6D5E8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mBF5A02EBC5E3D65360C789DE5D129EB1AA4F4FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlatBufferBuilder_AddOffset_mF725CCEE6AC66F893241EA7C26B2167D9F47A6BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlatBufferBuilder_EndTable_m772E0A02E93065B84873649A5FB8FF6D32D52E2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlatBufferBuilder_Finish_m7036AC77DC6C2208E94E6039BA79923CA765D26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlatBufferBuilder_Nested_m4C2666BE28EA19DCB093465A8195032B62A5419D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlatBufferBuilder_NotNested_m6C803933CD4AFD427859E0EC3C0494F238995D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlatBufferBuilder_Required_m3A98BEEA0CD401E817A64C31873B906DF2371C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlatBufferBuilder_StartTable_mB8D77C3F3C30246B110913204FB3D77B34547D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlatBufferBuilder__ctor_mA35C0FED324DB538F8D635B7D1796EFB1A0CD821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m59DE31F2A332C821208E5845619E2D9C2C293D0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Table___has_identifier_mC28A292BDBE990B762F131370CA88B8837A17CBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t306CCF0EB180EE276FE9D7E9BADBCD0769A5DD22 
{
};

// System.Collections.Generic.Dictionary`2<System.String,FlatBuffers.StringOffset>
struct Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB0CFC5DEA8382858A89980F6D685A420E9EA03EF* ____entries_1;
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
	KeyCollection_tE2AE4F149DF92B70503321AD084A966BFE4C9396* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7B3938B9E03AD7D4FFAC6D79FD87A641C73B5EE5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Int32>
struct Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD80C7495BA8BE64BC139A54FA961AB3EC66D7319* ____entries_1;
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
	KeyCollection_tE2F56A37776137F5D3C1BA6C49999EF1EC0E216F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAD56DF94D7373625A22E80E942606DC8509CB6D2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// FlatBuffers.ByteBuffer
struct ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687  : public RuntimeObject
{
	// FlatBuffers.ByteBufferAllocator FlatBuffers.ByteBuffer::_buffer
	ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* ____buffer_0;
	// System.Int32 FlatBuffers.ByteBuffer::_pos
	int32_t ____pos_1;
	// System.Single[] FlatBuffers.ByteBuffer::floathelper
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___floathelper_3;
	// System.Int32[] FlatBuffers.ByteBuffer::inthelper
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___inthelper_4;
	// System.Double[] FlatBuffers.ByteBuffer::doublehelper
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___doublehelper_5;
	// System.UInt64[] FlatBuffers.ByteBuffer::ulonghelper
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ulonghelper_6;
};

struct ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Int32> FlatBuffers.ByteBuffer::genericSizes
	Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* ___genericSizes_2;
};

// FlatBuffers.ByteBufferAllocator
struct ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6  : public RuntimeObject
{
	// System.Byte[] FlatBuffers.ByteBufferAllocator::<Buffer>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CBufferU3Ek__BackingField_0;
	// System.Int32 FlatBuffers.ByteBufferAllocator::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
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
	RuntimeObject* ___s_InternalSyncObject_61;
};

// FlatBuffers.FlatBufferBuilder
struct FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8  : public RuntimeObject
{
	// System.Int32 FlatBuffers.FlatBufferBuilder::_space
	int32_t ____space_0;
	// FlatBuffers.ByteBuffer FlatBuffers.FlatBufferBuilder::_bb
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ____bb_1;
	// System.Int32 FlatBuffers.FlatBufferBuilder::_minAlign
	int32_t ____minAlign_2;
	// System.Int32[] FlatBuffers.FlatBufferBuilder::_vtable
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____vtable_3;
	// System.Int32 FlatBuffers.FlatBufferBuilder::_vtableSize
	int32_t ____vtableSize_4;
	// System.Int32 FlatBuffers.FlatBufferBuilder::_objectStart
	int32_t ____objectStart_5;
	// System.Int32[] FlatBuffers.FlatBufferBuilder::_vtables
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____vtables_6;
	// System.Int32 FlatBuffers.FlatBufferBuilder::_numVtables
	int32_t ____numVtables_7;
	// System.Int32 FlatBuffers.FlatBufferBuilder::_vectorNumElems
	int32_t ____vectorNumElems_8;
	// System.Collections.Generic.Dictionary`2<System.String,FlatBuffers.StringOffset> FlatBuffers.FlatBufferBuilder::_sharedStringMap
	Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685* ____sharedStringMap_9;
	// System.Boolean FlatBuffers.FlatBufferBuilder::<ForceDefaults>k__BackingField
	bool ___U3CForceDefaultsU3Ek__BackingField_10;
};

// FlatBuffers.FlatBufferConstants
struct FlatBufferConstants_tB26F09601F0E8A840D3DAD6C07BD9339852EBCE1  : public RuntimeObject
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

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
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

// FlatBuffers.ByteArrayAllocator
struct ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A  : public ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6
{
	// System.Byte[] FlatBuffers.ByteArrayAllocator::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
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

// FlatBuffers.StringOffset
struct StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 
{
	// System.Int32 FlatBuffers.StringOffset::Value
	int32_t ___Value_0;
};

// FlatBuffers.Struct
struct Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129 
{
	// System.Int32 FlatBuffers.Struct::<bb_pos>k__BackingField
	int32_t ___U3Cbb_posU3Ek__BackingField_0;
	// FlatBuffers.ByteBuffer FlatBuffers.Struct::<bb>k__BackingField
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___U3CbbU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of FlatBuffers.Struct
struct Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshaled_pinvoke
{
	int32_t ___U3Cbb_posU3Ek__BackingField_0;
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___U3CbbU3Ek__BackingField_1;
};
// Native definition for COM marshalling of FlatBuffers.Struct
struct Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshaled_com
{
	int32_t ___U3Cbb_posU3Ek__BackingField_0;
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___U3CbbU3Ek__BackingField_1;
};

// FlatBuffers.Table
struct Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184 
{
	// System.Int32 FlatBuffers.Table::<bb_pos>k__BackingField
	int32_t ___U3Cbb_posU3Ek__BackingField_0;
	// FlatBuffers.ByteBuffer FlatBuffers.Table::<bb>k__BackingField
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___U3CbbU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of FlatBuffers.Table
struct Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshaled_pinvoke
{
	int32_t ___U3Cbb_posU3Ek__BackingField_0;
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___U3CbbU3Ek__BackingField_1;
};
// Native definition for COM marshalling of FlatBuffers.Table
struct Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshaled_com
{
	int32_t ___U3Cbb_posU3Ek__BackingField_0;
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___U3CbbU3Ek__BackingField_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// FlatBuffers.VectorOffset
struct VectorOffset_t06A7EFA11E476235DAEC0555F37CE058020EFDB7 
{
	// System.Int32 FlatBuffers.VectorOffset::Value
	int32_t ___Value_0;
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

// System.Nullable`1<System.ArraySegment`1<System.Byte>>
struct Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___value_1;
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

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};


// T[] FlatBuffers.ByteBuffer::ToArray<System.Byte>(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41_gshared (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___pos0, int32_t ___len1, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,FlatBuffers.StringOffset>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6D89AB7F74896B5023C979D153CA849BACCAD37B_gshared (Dictionary_2_t6822B8DE331FF1F31775E75ED63812351017B0C5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,FlatBuffers.StringOffset>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mAC8CB57D517925E6B8AFFDF550E92CB7988A6E81_gshared (Dictionary_2_t6822B8DE331FF1F31775E75ED63812351017B0C5* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,FlatBuffers.StringOffset>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 Dictionary_2_get_Item_m241FFE18855D20E69D1F78DB7C4D4CE03FCD6E59_gshared (Dictionary_2_t6822B8DE331FF1F31775E75ED63812351017B0C5* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,FlatBuffers.StringOffset>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7F0E383A4B1368C8C1CB71693ECADD34DC002457_gshared (Dictionary_2_t6822B8DE331FF1F31775E75ED63812351017B0C5* __this, RuntimeObject* ___key0, StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 ___value1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.ArraySegment`1<System.Byte>>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m59DE31F2A332C821208E5845619E2D9C2C293D0C_gshared (Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___value0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBufferAllocator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBufferAllocator__ctor_m7C1453B65F28713BFC6B49449CFEB27C248922C5 (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteArrayAllocator::InitBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayAllocator_InitBuffer_m39B614780A23417D61E4B0CE23B740C1EEAEF624 (ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A* __this, const RuntimeMethod* method) ;
// System.Int32 FlatBuffers.ByteBufferAllocator::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteBufferAllocator_get_Length_mE2291B2C7C8F09122C6D398991CB122549168B06_inline (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBufferAllocator::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBufferAllocator_set_Length_mDC66546FC7CCEFCB94389326174BDBB0BE0CDF04_inline (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBufferAllocator::set_Buffer(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBufferAllocator_set_Buffer_mFA0311046887E82886ADDC5A64ABD4B0C96F70F3_inline (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer__ctor_m68B9BA8DEBFFB291207948F87E7F002F3062CA5C (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer__ctor_m64834B1936D6E2D6B25D584D5530613497E9C1EB (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___pos1, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteArrayAllocator::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayAllocator__ctor_mD300D492E8152DA2A495A04CDD01437C7E3F3530 (ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Int32 FlatBuffers.ByteBuffer::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteBuffer_get_Position_m555C6B2D9D3C8A99438DC1E5537591883E769432_inline (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::.ctor(FlatBuffers.ByteBufferAllocator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer__ctor_m17A4C7444415B6E38E7A3D7F0A31831030B73262 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* ___allocator0, int32_t ___position1, const RuntimeMethod* method) ;
// T[] FlatBuffers.ByteBuffer::ToArray<System.Byte>(System.Int32,System.Int32)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___pos0, int32_t ___len1, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687*, int32_t, int32_t, const RuntimeMethod*))ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41_gshared)(__this, ___pos0, ___len1, method);
}
// System.Int32 FlatBuffers.ByteBuffer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, const RuntimeMethod* method) ;
// System.Byte[] FlatBuffers.ByteBufferAllocator::get_Buffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3ECA346D73AA420F6F484BE23BFECAF3A64F6BAC (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::AssertOffsetAndLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutByte(System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutByte_m7A52A00508052F2122A94F865F2E8DE3DD894D35 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, uint8_t ___value1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::WriteLittleEndian(System.Int32,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_WriteLittleEndian_m72031092230CBE59A39A805AFBEDC9FB44B6B421 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int32_t ___count1, uint64_t ___data2, const RuntimeMethod* method) ;
// System.UInt64 FlatBuffers.ByteBuffer::ReadLittleEndian(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ByteBuffer_ReadLittleEndian_mC2B6DC447C05F624EA5566354CA8FB51BD3C0818 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m0AF6A9E01056850C9F7AE464B4099CA3F6D5E8EC (Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904 (Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* __this, Type_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455*, Type_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer__ctor_m689E0A5B75C23EF14FA57756160566934073C485 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_Reset_m760ADD088828CA75E243CDF4E1911AEE6CCA0909 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutByte(System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutByte_m2F811045EA5CC4E7673ECBC116B9E8F5604453A5 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, uint8_t ___value1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::GrowFront(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_GrowFront_m337E62843CFA9AF815C083BE0330F3ECF0034FD1 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___newSize0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::GrowBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_GrowBuffer_m3E592575571053BE2A39C9FDF730BD8B40854F0D (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::Pad(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Pad_m70BEA0D6E28160D424A3404471AABDB34C06D7BA (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutSbyte(System.Int32,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutSbyte_mC5B341F45F15695B13D24D83E262CD26A150D742 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int8_t ___value1, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutShort(System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutShort_m65C67DD0312C57B1584535CAC8BF7712D8171F85 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int16_t ___value1, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutUshort(System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutUshort_m306C916C6A8625EFCD64D286AEF1EE4A0D1F4D57 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, uint16_t ___value1, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutInt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutInt_m4363047F51F1A6AC808C6FB2656EB348326A0DDC (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutUint(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutUint_m3CC14BACBC667E9D0143A9EBD212966B324AD751 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, uint32_t ___value1, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutLong(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutLong_m405D9811B24853AA455B98A691DA87C95C17F147 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int64_t ___value1, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutUlong(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutUlong_m636FDB8837D550B31CC007C353EBF85A17F538A4 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, uint64_t ___value1, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutFloat_m1ABC6DD8AEFF6D5DD414A9098FD8EC9BD0B7E100 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, float ___value1, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutDouble(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutDouble_mC832C23F019B5757010B88950A92A1E2DC2A37C4 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, double ___value1, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::Prep(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___size0, int32_t ___additionalBytes1, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::PutBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutBool_m919FD181275BA284218F11188B560D49C29D7250 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, bool ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::PutSbyte(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutSbyte_mED8486CCAF7CB801DC4D2C7AE9CDB86B3BCC4D92 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int8_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::PutByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutByte_mC89F195518039F3C71CA4190D1EB4792694DBDEE (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint8_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::PutShort(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutShort_m5B13BE80F4041BD2D8230C432CF2FDA3C4B5CCA6 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int16_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::PutUshort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutUshort_m5707A343B3101FC5BFC90DA1A88AB2F6F8669D3E (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint16_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::PutInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutInt_m8A790BB660946B7EC7BC7D1B80FDAD6441F2A959 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::PutUint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutUint_mA099B3CC899734D911A58FACF8DC758DBE713347 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint32_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::PutLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutLong_m7BBB791F68F9ABF11BB975938DC3CDB872A60AEA (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int64_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::PutUlong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutUlong_m412E2810C55EE366437A26AAB9BF3AB4EAF8554C (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint64_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::PutFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutFloat_m08F7F53E554CCE0E6E3E3F068953CD81EA837D11 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, float ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::PutDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutDouble_m6B6CBF5E7E635F17741689D218BB0A75F997B62B (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, double ___x0, const RuntimeMethod* method) ;
// System.Int32 FlatBuffers.FlatBufferBuilder::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlatBufferBuilder_get_Offset_mCA9238967F1AB213A36279A196727E532A56EB8C (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::NotNested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_NotNested_m6C803933CD4AFD427859E0EC3C0494F238995D1D (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.VectorOffset::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VectorOffset__ctor_m85FEC438EF81171B324D7C82D0FC26DAFAE1B3F9_inline (VectorOffset_t06A7EFA11E476235DAEC0555F37CE058020EFDB7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean FlatBuffers.FlatBufferBuilder::get_ForceDefaults()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddBool_m854162EADBE82D4D7B65531607012369C6EBD734 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, bool ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::Slot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___voffset0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddSbyte(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddSbyte_m353040C0FBAF47AA4799E0F240216E6FF99CB8C2 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int8_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddByte_m430B0F0C00D9EDFBDBD36093E6940902E68DC574 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint8_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddShort(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddShort_m1916D451151E8A2AAAF6D2E00B666BDEFFEE5A6C (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int16_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddUshort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddUshort_m86BAABF83947A93ED8CFD849D3C0BFD1C23E247B (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint16_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddInt_m0A6102DE5EB4103311E2846DEE055B112A8F5E92 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddUint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddUint_mFBDC25112DFB53220214F9B31C1333FFFF000A48 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint32_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddLong_m448E673CCBE3FA205601A1EDF96E4BE9B2C7601C (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int64_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddUlong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddUlong_m22407E6E32E0663166B0AF4181DE53D66E9A12CA (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint64_t ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddFloat_m8BD091A8500929A4C03903AACEDD7032688998DE (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, float ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddDouble_m1E81E4895AAAD205D58C402EFB2A17EEF8363050 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, double ___x0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::AddOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddOffset_mF725CCEE6AC66F893241EA7C26B2167D9F47A6BC (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___off0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::StartVector(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_StartVector_m9F976AF571BCAF646C07E8AE41184425D697C8F5 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___elemSize0, int32_t ___count1, int32_t ___alignment2, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::PutStringUTF8(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutStringUTF8_mDEE8E48B0BD9A813AA72E59CC70A36F4F4186D23 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, String_t* ___value1, const RuntimeMethod* method) ;
// FlatBuffers.VectorOffset FlatBuffers.FlatBufferBuilder::EndVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VectorOffset_t06A7EFA11E476235DAEC0555F37CE058020EFDB7 FlatBufferBuilder_EndVector_m60E6339BD87B0DFC0CAE57B611B3D1C86BBAF7BE (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.StringOffset::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringOffset__ctor_mB4911A2248132F3DD037CCD12BCA8504A11BFA38_inline (StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,FlatBuffers.StringOffset>::.ctor()
inline void Dictionary_2__ctor_m077496F94DE88E21F780A919E3D1FFDF5D0A5B41 (Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685*, const RuntimeMethod*))Dictionary_2__ctor_m6D89AB7F74896B5023C979D153CA849BACCAD37B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FlatBuffers.StringOffset>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m78BDA710336C59F28C49926731D2EECCFFA1BF23 (Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mAC8CB57D517925E6B8AFFDF550E92CB7988A6E81_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,FlatBuffers.StringOffset>::get_Item(TKey)
inline StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 Dictionary_2_get_Item_mBF5A02EBC5E3D65360C789DE5D129EB1AA4F4FF5 (Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 (*) (Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m241FFE18855D20E69D1F78DB7C4D4CE03FCD6E59_gshared)(__this, ___key0, method);
}
// FlatBuffers.StringOffset FlatBuffers.FlatBufferBuilder::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 FlatBufferBuilder_CreateString_mD808EDCB28D8E9F99E5E4CEF9EB81C13D073CE42 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,FlatBuffers.StringOffset>::Add(TKey,TValue)
inline void Dictionary_2_Add_mBB0088C6CE234D1E02C2E94EAAF1F57220393DD8 (Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685* __this, String_t* ___key0, StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685*, String_t*, StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567, const RuntimeMethod*))Dictionary_2_Add_m7F0E383A4B1368C8C1CB71693ECADD34DC002457_gshared)(__this, ___key0, ___value1, method);
}
// System.Void FlatBuffers.FlatBufferBuilder::Nested(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Nested_m4C2666BE28EA19DCB093465A8195032B62A5419D (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int16 FlatBuffers.ByteBuffer::GetShort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ByteBuffer_GetShort_m6628854280052481ED8DEDEB63F9E504AA7C50AE (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 FlatBuffers.ByteBuffer::GetInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9 (RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Void FlatBuffers.ByteBuffer::set_Position(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuffer_set_Position_mE29BEDE72B66A0DEA211C82B512D7505F797D246_inline (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::Finish(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Finish_mC6B361DDD72889790C07EDBE4E914BA0E082E46E (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___rootTable0, bool ___sizePrefix1, const RuntimeMethod* method) ;
// System.Byte[] FlatBuffers.ByteBuffer::ToSizedArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuffer_ToSizedArray_mA7FF2B172784408A3E71B72EA28733486B8E9038 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.FlatBufferBuilder::Finish(System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Finish_m7036AC77DC6C2208E94E6039BA79923CA765D26A (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___rootTable0, String_t* ___fileIdentifier1, bool ___sizePrefix2, const RuntimeMethod* method) ;
// System.Int32 FlatBuffers.Struct::get_bb_pos()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Struct_get_bb_pos_m82A17FCD325212F0B750AB24A84C7E11C53C4958_inline (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.Struct::set_bb_pos(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Struct_set_bb_pos_m7260ED755B284ED3897596BAD71EA793FE2CF01A_inline (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, int32_t ___value0, const RuntimeMethod* method) ;
// FlatBuffers.ByteBuffer FlatBuffers.Struct::get_bb()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* Struct_get_bb_m72B24D9FA8A59A4C3D4CCB1B58D56B4E1C47A0D2_inline (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.Struct::set_bb(FlatBuffers.ByteBuffer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Struct_set_bb_mE21699C8E659C0B3236A372A952CD5576DC424FA_inline (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___value0, const RuntimeMethod* method) ;
// System.Void FlatBuffers.Struct::.ctor(System.Int32,FlatBuffers.ByteBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Struct__ctor_m6F308262E6322CD58C029C399B283741142BC332 (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, int32_t ____i0, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ____bb1, const RuntimeMethod* method) ;
// System.Int32 FlatBuffers.Table::get_bb_pos()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Table_get_bb_pos_m545E7278AFDFB85EC02C6D9A585E15536DF9D84C_inline (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.Table::set_bb_pos(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Table_set_bb_pos_mD8BF0235A8E81947A5D6DA3A8886D283FBF02607_inline (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// FlatBuffers.ByteBuffer FlatBuffers.Table::get_bb()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.Table::set_bb(FlatBuffers.ByteBuffer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Table_set_bb_m456A85E473B834DC861FE104253F9C64FD9D3DF3_inline (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___value0, const RuntimeMethod* method) ;
// FlatBuffers.ByteBuffer FlatBuffers.Table::get_ByteBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* Table_get_ByteBuffer_m086F603C31F13509788B531425D5D97020075FBB (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, const RuntimeMethod* method) ;
// System.Void FlatBuffers.Table::.ctor(System.Int32,FlatBuffers.ByteBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Table__ctor_m70A7DAF7B10FB4F61F34B12BD63CED132D1B5EA3 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ____i0, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ____bb1, const RuntimeMethod* method) ;
// System.Int32 FlatBuffers.Table::__offset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table___offset_m14AD47D1A5FE2C26B61D018DD45272E48396190D (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___vtableOffset0, const RuntimeMethod* method) ;
// System.Int32 FlatBuffers.Table::__indirect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table___indirect_mB9CB22F7A6F5D31EB3D07646F31BDE06AFF3BB86 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.String FlatBuffers.ByteBuffer::GetStringUTF8(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ByteBuffer_GetStringUTF8_m03913BCD0AE7D2A2EE15CF7CEA6B2E269D143668 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___startPos0, int32_t ___len1, const RuntimeMethod* method) ;
// System.String FlatBuffers.Table::__string(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Table___string_m98D5C3DE4F2181B6949B6453EEB3D946E65B587D (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.Int32 FlatBuffers.Table::__vector_len(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table___vector_len_mB1B31BC661699FB507535610BEAE8116DB23D1E4 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.Int32 FlatBuffers.Table::__vector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table___vector_m7898454CDD1EEFF2844E76CE368C0331E9F50120 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.ArraySegment`1<System.Byte> FlatBuffers.ByteBuffer::ToArraySegment(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ByteBuffer_ToArraySegment_m27386FE4DD6EB446A2E259B2B2B60EAE4B846578 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___pos0, int32_t ___len1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.ArraySegment`1<System.Byte>>::.ctor(T)
inline void Nullable_1__ctor_m59DE31F2A332C821208E5845619E2D9C2C293D0C (Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, const RuntimeMethod*))Nullable_1__ctor_m59DE31F2A332C821208E5845619E2D9C2C293D0C_gshared)(__this, ___value0, method);
}
// System.Nullable`1<System.ArraySegment`1<System.Byte>> FlatBuffers.Table::__vector_as_arraysegment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5 Table___vector_as_arraysegment_m1B590BF61D93AF2911C24B71180B47190F7B4868 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.Byte FlatBuffers.ByteBuffer::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ByteBuffer_Get_m34C82639D0DD9AE3DEA4FF2F975B9545CF88E3FC (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
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
// System.Byte[] FlatBuffers.ByteBufferAllocator::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14 (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CBufferU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void FlatBuffers.ByteBufferAllocator::set_Buffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBufferAllocator_set_Buffer_mFA0311046887E82886ADDC5A64ABD4B0C96F70F3 (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CBufferU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBufferU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 FlatBuffers.ByteBufferAllocator::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBufferAllocator_get_Length_mE2291B2C7C8F09122C6D398991CB122549168B06 (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void FlatBuffers.ByteBufferAllocator::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBufferAllocator_set_Length_mDC66546FC7CCEFCB94389326174BDBB0BE0CDF04 (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLengthU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void FlatBuffers.ByteBufferAllocator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBufferAllocator__ctor_m7C1453B65F28713BFC6B49449CFEB27C248922C5 (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, const RuntimeMethod* method) 
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
// System.Void FlatBuffers.ByteArrayAllocator::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayAllocator__ctor_mD300D492E8152DA2A495A04CDD01437C7E3F3530 (ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	{
		ByteBufferAllocator__ctor_m7C1453B65F28713BFC6B49449CFEB27C248922C5(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		__this->____buffer_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_2), (void*)L_0);
		ByteArrayAllocator_InitBuffer_m39B614780A23417D61E4B0CE23B740C1EEAEF624(__this, NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteArrayAllocator::GrowFront(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayAllocator_GrowFront_mA06ED6A2D951244E39F01A7C1940EA1CFFFAF97C (ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A* __this, int32_t ___newSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = ByteBufferAllocator_get_Length_mE2291B2C7C8F09122C6D398991CB122549168B06_inline(__this, NULL);
		if (!((int64_t)(((int64_t)L_0)&((int64_t)(uint64_t)((uint32_t)((int32_t)-1073741824))))))
		{
			goto IL_001b;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2205190534B4BE18F7F950DFE08B06C83FB45673)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteArrayAllocator_GrowFront_mA06ED6A2D951244E39F01A7C1940EA1CFFFAF97C_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t L_2 = ___newSize0;
		int32_t L_3;
		L_3 = ByteBufferAllocator_get_Length_mE2291B2C7C8F09122C6D398991CB122549168B06_inline(__this, NULL);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002f;
		}
	}
	{
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44372B7E3F3252B67169F88E9A2F221315E6A635)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteArrayAllocator_GrowFront_mA06ED6A2D951244E39F01A7C1940EA1CFFFAF97C_RuntimeMethod_var)));
	}

IL_002f:
	{
		int32_t L_5 = ___newSize0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____buffer_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = ___newSize0;
		int32_t L_10;
		L_10 = ByteBufferAllocator_get_Length_mE2291B2C7C8F09122C6D398991CB122549168B06_inline(__this, NULL);
		int32_t L_11;
		L_11 = ByteBufferAllocator_get_Length_mE2291B2C7C8F09122C6D398991CB122549168B06_inline(__this, NULL);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		__this->____buffer_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_2), (void*)L_12);
		ByteArrayAllocator_InitBuffer_m39B614780A23417D61E4B0CE23B740C1EEAEF624(__this, NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteArrayAllocator::InitBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayAllocator_InitBuffer_m39B614780A23417D61E4B0CE23B740C1EEAEF624 (ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer_2;
		NullCheck(L_0);
		ByteBufferAllocator_set_Length_mDC66546FC7CCEFCB94389326174BDBB0BE0CDF04_inline(__this, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer_2;
		ByteBufferAllocator_set_Buffer_mFA0311046887E82886ADDC5A64ABD4B0C96F70F3_inline(__this, L_1, NULL);
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
// System.Void FlatBuffers.ByteBuffer::.ctor(FlatBuffers.ByteBufferAllocator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer__ctor_m17A4C7444415B6E38E7A3D7F0A31831030B73262 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* ___allocator0, int32_t ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___floathelper_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___floathelper_3), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___inthelper_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inthelper_4), (void*)L_1);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___doublehelper_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___doublehelper_5), (void*)L_2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___ulonghelper_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ulonghelper_6), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_4 = ___allocator0;
		__this->____buffer_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_0), (void*)L_4);
		int32_t L_5 = ___position1;
		__this->____pos_1 = L_5;
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer__ctor_m689E0A5B75C23EF14FA57756160566934073C485 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___size0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		ByteBuffer__ctor_m68B9BA8DEBFFB291207948F87E7F002F3062CA5C(__this, L_1, NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer__ctor_m68B9BA8DEBFFB291207948F87E7F002F3062CA5C (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		ByteBuffer__ctor_m64834B1936D6E2D6B25D584D5530613497E9C1EB(__this, L_0, 0, NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer__ctor_m64834B1936D6E2D6B25D584D5530613497E9C1EB (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___pos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___floathelper_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___floathelper_3), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___inthelper_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inthelper_4), (void*)L_1);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___doublehelper_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___doublehelper_5), (void*)L_2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___ulonghelper_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ulonghelper_6), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___buffer0;
		ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A* L_5 = (ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A*)il2cpp_codegen_object_new(ByteArrayAllocator_t89955F94C9C7146BD3C3E1CB753C8D9DA4DD551A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ByteArrayAllocator__ctor_mD300D492E8152DA2A495A04CDD01437C7E3F3530(L_5, L_4, NULL);
		__this->____buffer_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_0), (void*)L_5);
		int32_t L_6 = ___pos1;
		__this->____pos_1 = L_6;
		return;
	}
}
// System.Int32 FlatBuffers.ByteBuffer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuffer_get_Position_m555C6B2D9D3C8A99438DC1E5537591883E769432 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos_1;
		return L_0;
	}
}
// System.Void FlatBuffers.ByteBuffer::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_set_Position_mE29BEDE72B66A0DEA211C82B512D7505F797D246 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____pos_1 = L_0;
		return;
	}
}
// System.Int32 FlatBuffers.ByteBuffer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, const RuntimeMethod* method) 
{
	{
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_0 = __this->____buffer_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteBufferAllocator_get_Length_mE2291B2C7C8F09122C6D398991CB122549168B06_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void FlatBuffers.ByteBuffer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_Reset_m760ADD088828CA75E243CDF4E1911AEE6CCA0909 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, const RuntimeMethod* method) 
{
	{
		__this->____pos_1 = 0;
		return;
	}
}
// FlatBuffers.ByteBuffer FlatBuffers.ByteBuffer::Duplicate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ByteBuffer_Duplicate_m6B79BB4EE22DAC21D33B3B7595849A03E464F56E (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_0 = __this->____buffer_0;
		int32_t L_1;
		L_1 = ByteBuffer_get_Position_m555C6B2D9D3C8A99438DC1E5537591883E769432_inline(__this, NULL);
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_2 = (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687*)il2cpp_codegen_object_new(ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ByteBuffer__ctor_m17A4C7444415B6E38E7A3D7F0A31831030B73262(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void FlatBuffers.ByteBuffer::GrowFront(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_GrowFront_m337E62843CFA9AF815C083BE0330F3ECF0034FD1 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___newSize0, const RuntimeMethod* method) 
{
	{
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_0 = __this->____buffer_0;
		int32_t L_1 = ___newSize0;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(4 /* System.Void FlatBuffers.ByteBufferAllocator::GrowFront(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Byte[] FlatBuffers.ByteBuffer::ToArray(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuffer_ToArray_m3E3367F31D427D31E40D938809B5E7184081CED7 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___pos0, int32_t ___len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___pos0;
		int32_t L_1 = ___len1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41(__this, L_0, L_1, ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41_RuntimeMethod_var);
		return L_2;
	}
}
// System.Byte[] FlatBuffers.ByteBuffer::ToSizedArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuffer_ToSizedArray_mA7FF2B172784408A3E71B72EA28733486B8E9038 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ByteBuffer_get_Position_m555C6B2D9D3C8A99438DC1E5537591883E769432_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(__this, NULL);
		int32_t L_2;
		L_2 = ByteBuffer_get_Position_m555C6B2D9D3C8A99438DC1E5537591883E769432_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41(__this, L_0, ((int32_t)il2cpp_codegen_subtract(L_1, L_2)), ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41_RuntimeMethod_var);
		return L_3;
	}
}
// System.Byte[] FlatBuffers.ByteBuffer::ToFullArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuffer_ToFullArray_m4EB5933CCC8E5795218AB0B455B5C09E116D5413 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41(__this, 0, L_0, ByteBuffer_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5525AD3460F2DAB674480E1ECC1F437360014B41_RuntimeMethod_var);
		return L_1;
	}
}
// System.ArraySegment`1<System.Byte> FlatBuffers.ByteBuffer::ToArraySegment(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ByteBuffer_ToArraySegment_m27386FE4DD6EB446A2E259B2B2B60EAE4B846578 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___pos0, int32_t ___len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_0 = __this->____buffer_0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_0, NULL);
		int32_t L_2 = ___pos0;
		int32_t L_3 = ___len1;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_4), L_1, L_2, L_3, /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		return L_4;
	}
}
// System.IO.MemoryStream FlatBuffers.ByteBuffer::ToMemoryStream(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ByteBuffer_ToMemoryStream_m2D71CBA076276B834A2088B50A8D77775667DC91 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___pos0, int32_t ___len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_0 = __this->____buffer_0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_0, NULL);
		int32_t L_2 = ___pos0;
		int32_t L_3 = ___len1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MemoryStream__ctor_m3ECA346D73AA420F6F484BE23BFECAF3A64F6BAC(L_4, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.UInt16 FlatBuffers.ByteBuffer::ReverseBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ByteBuffer_ReverseBytes_mB61F2C0177D49D48C7A8E1B34776EC3F7ED72A1D (uint16_t ___input0, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___input0;
		uint16_t L_1 = ___input0;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)255)))<<8))|((int32_t)((uint32_t)((int32_t)((int32_t)L_1&((int32_t)65280)))>>8)))));
	}
}
// System.UInt32 FlatBuffers.ByteBuffer::ReverseBytes(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ByteBuffer_ReverseBytes_mD1A977EC81D932A8518612E1A8822E753809F7A2 (uint32_t ___input0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___input0;
		uint32_t L_1 = ___input0;
		uint32_t L_2 = ___input0;
		uint32_t L_3 = ___input0;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)255)))<<((int32_t)24)))|((int32_t)(((int32_t)((int32_t)L_1&((int32_t)65280)))<<8))))|((int32_t)((uint32_t)((int32_t)((int32_t)L_2&((int32_t)16711680)))>>8))))|((int32_t)((uint32_t)((int32_t)((int32_t)L_3&((int32_t)-16777216)))>>((int32_t)24)))));
	}
}
// System.UInt64 FlatBuffers.ByteBuffer::ReverseBytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ByteBuffer_ReverseBytes_mE978CBFD68EEA308E43F9605C743299B9A9606C2 (uint64_t ___input0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___input0;
		uint64_t L_1 = ___input0;
		uint64_t L_2 = ___input0;
		uint64_t L_3 = ___input0;
		uint64_t L_4 = ___input0;
		uint64_t L_5 = ___input0;
		uint64_t L_6 = ___input0;
		uint64_t L_7 = ___input0;
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)((int64_t)L_0&((int64_t)((int32_t)255))))<<((int32_t)56)))|((int64_t)(((int64_t)((int64_t)L_1&((int64_t)((int32_t)65280))))<<((int32_t)40)))))|((int64_t)(((int64_t)((int64_t)L_2&((int64_t)((int32_t)16711680))))<<((int32_t)24)))))|((int64_t)(((int64_t)((int64_t)L_3&((int64_t)(uint64_t)((uint32_t)((int32_t)-16777216)))))<<8))))|((int64_t)((uint64_t)((int64_t)((int64_t)L_4&((int64_t)1095216660480LL)))>>8))))|((int64_t)((uint64_t)((int64_t)((int64_t)L_5&((int64_t)280375465082880LL)))>>((int32_t)24)))))|((int64_t)((uint64_t)((int64_t)((int64_t)L_6&((int64_t)71776119061217280LL)))>>((int32_t)40)))))|((int64_t)((uint64_t)((int64_t)((int64_t)L_7&((int64_t)-72057594037927936LL)))>>((int32_t)56)))));
	}
}
// System.Void FlatBuffers.ByteBuffer::WriteLittleEndian(System.Int32,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_WriteLittleEndian_m72031092230CBE59A39A805AFBEDC9FB44B6B421 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int32_t ___count1, uint64_t ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_1 = __this->____buffer_0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_1, NULL);
		int32_t L_3 = ___offset0;
		int32_t L_4 = V_0;
		uint64_t L_5 = ___data2;
		int32_t L_6 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_3, L_4))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_5>>((int32_t)(((int32_t)il2cpp_codegen_multiply(L_6, 8))&((int32_t)63)))))));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___count1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_002c:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0030:
	{
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_10 = __this->____buffer_0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_10, NULL);
		int32_t L_12 = ___offset0;
		int32_t L_13 = ___count1;
		int32_t L_14 = V_1;
		uint64_t L_15 = ___data2;
		int32_t L_16 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_12, L_13)), 1)), L_14))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_15>>((int32_t)(((int32_t)il2cpp_codegen_multiply(L_16, 8))&((int32_t)63)))))));
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0050:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___count1;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}
}
// System.UInt64 FlatBuffers.ByteBuffer::ReadLittleEndian(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ByteBuffer_ReadLittleEndian_mC2B6DC447C05F624EA5566354CA8FB51BD3C0818 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___offset0;
		int32_t L_1 = ___count1;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, L_1, NULL);
		V_0 = ((int64_t)0);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_2 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		V_1 = 0;
		goto IL_0034;
	}

IL_0016:
	{
		uint64_t L_3 = V_0;
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_4 = __this->____buffer_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_4, NULL);
		int32_t L_6 = ___offset0;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_1;
		V_0 = ((int64_t)((int64_t)L_3|((int64_t)(((int64_t)(uint64_t)L_9)<<((int32_t)(((int32_t)il2cpp_codegen_multiply(L_10, 8))&((int32_t)63)))))));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0034:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___count1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0064;
	}

IL_003a:
	{
		V_2 = 0;
		goto IL_0060;
	}

IL_003e:
	{
		uint64_t L_14 = V_0;
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_15 = __this->____buffer_0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_15, NULL);
		int32_t L_17 = ___offset0;
		int32_t L_18 = ___count1;
		int32_t L_19 = V_2;
		NullCheck(L_16);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_17, L_18)), 1)), L_19));
		uint8_t L_21 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = V_2;
		V_0 = ((int64_t)((int64_t)L_14|((int64_t)(((int64_t)(uint64_t)L_21)<<((int32_t)(((int32_t)il2cpp_codegen_multiply(L_22, 8))&((int32_t)63)))))));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0060:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = ___count1;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_003e;
		}
	}

IL_0064:
	{
		uint64_t L_26 = V_0;
		return L_26;
	}
}
// System.Void FlatBuffers.ByteBuffer::AssertOffsetAndLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___offset0;
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_2 = __this->____buffer_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ByteBufferAllocator_get_Length_mE2291B2C7C8F09122C6D398991CB122549168B06_inline(L_2, NULL);
		int32_t L_4 = ___length1;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)))))
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B_RuntimeMethod_var)));
	}

IL_001a:
	{
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutSbyte(System.Int32,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutSbyte_mC5B341F45F15695B13D24D83E262CD26A150D742 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int8_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 1, NULL);
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_1 = __this->____buffer_0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_1, NULL);
		int32_t L_3 = ___offset0;
		int8_t L_4 = ___value1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)L_4));
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutByte(System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutByte_m7A52A00508052F2122A94F865F2E8DE3DD894D35 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, uint8_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 1, NULL);
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_1 = __this->____buffer_0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_1, NULL);
		int32_t L_3 = ___offset0;
		uint8_t L_4 = ___value1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutByte(System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutByte_m2F811045EA5CC4E7673ECBC116B9E8F5604453A5 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, uint8_t ___value1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___offset0;
		int32_t L_1 = ___count2;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, L_1, NULL);
		V_0 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_2 = __this->____buffer_0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_2, NULL);
		int32_t L_4 = ___offset0;
		int32_t L_5 = V_0;
		uint8_t L_6 = ___value1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, L_5))), (uint8_t)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___count2;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::Put(System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_Put_mA4F98EFBA86A8A6744C1EA49860809A98BE96766 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, uint8_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		uint8_t L_1 = ___value1;
		ByteBuffer_PutByte_m7A52A00508052F2122A94F865F2E8DE3DD894D35(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutStringUTF8(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutStringUTF8_mDEE8E48B0BD9A813AA72E59CC70A36F4F4186D23 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		String_t* L_1 = ___value1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, L_2, NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_4 = ___value1;
		String_t* L_5 = ___value1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_7 = __this->____buffer_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_7, NULL);
		int32_t L_9 = ___offset0;
		NullCheck(L_3);
		int32_t L_10;
		L_10 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(20 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_3, L_4, 0, L_6, L_8, L_9);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutShort(System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutShort_m65C67DD0312C57B1584535CAC8BF7712D8171F85 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int16_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 2, NULL);
		int32_t L_1 = ___offset0;
		int16_t L_2 = ___value1;
		ByteBuffer_WriteLittleEndian_m72031092230CBE59A39A805AFBEDC9FB44B6B421(__this, L_1, 2, ((int64_t)L_2), NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutUshort(System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutUshort_m306C916C6A8625EFCD64D286AEF1EE4A0D1F4D57 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, uint16_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 2, NULL);
		int32_t L_1 = ___offset0;
		uint16_t L_2 = ___value1;
		ByteBuffer_WriteLittleEndian_m72031092230CBE59A39A805AFBEDC9FB44B6B421(__this, L_1, 2, ((int64_t)(uint64_t)L_2), NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutInt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutInt_m4363047F51F1A6AC808C6FB2656EB348326A0DDC (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 4, NULL);
		int32_t L_1 = ___offset0;
		int32_t L_2 = ___value1;
		ByteBuffer_WriteLittleEndian_m72031092230CBE59A39A805AFBEDC9FB44B6B421(__this, L_1, 4, ((int64_t)L_2), NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutUint(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutUint_m3CC14BACBC667E9D0143A9EBD212966B324AD751 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, uint32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 4, NULL);
		int32_t L_1 = ___offset0;
		uint32_t L_2 = ___value1;
		ByteBuffer_WriteLittleEndian_m72031092230CBE59A39A805AFBEDC9FB44B6B421(__this, L_1, 4, ((int64_t)(uint64_t)L_2), NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutLong(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutLong_m405D9811B24853AA455B98A691DA87C95C17F147 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, int64_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 8, NULL);
		int32_t L_1 = ___offset0;
		int64_t L_2 = ___value1;
		ByteBuffer_WriteLittleEndian_m72031092230CBE59A39A805AFBEDC9FB44B6B421(__this, L_1, 8, L_2, NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutUlong(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutUlong_m636FDB8837D550B31CC007C353EBF85A17F538A4 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, uint64_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 8, NULL);
		int32_t L_1 = ___offset0;
		uint64_t L_2 = ___value1;
		ByteBuffer_WriteLittleEndian_m72031092230CBE59A39A805AFBEDC9FB44B6B421(__this, L_1, 8, L_2, NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutFloat_m1ABC6DD8AEFF6D5DD414A9098FD8EC9BD0B7E100 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, float ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 4, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___floathelper_3;
		float L_2 = ___value1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___floathelper_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___inthelper_4;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, 4, NULL);
		int32_t L_5 = ___offset0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___inthelper_4;
		NullCheck(L_6);
		int32_t L_7 = 0;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteBuffer_WriteLittleEndian_m72031092230CBE59A39A805AFBEDC9FB44B6B421(__this, L_5, 4, ((int64_t)L_8), NULL);
		return;
	}
}
// System.Void FlatBuffers.ByteBuffer::PutDouble(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_PutDouble_mC832C23F019B5757010B88950A92A1E2DC2A37C4 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___offset0, double ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 8, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = __this->___doublehelper_5;
		double L_2 = ___value1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = __this->___doublehelper_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___ulonghelper_6;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, 8, NULL);
		int32_t L_5 = ___offset0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___ulonghelper_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		int64_t L_8 = (int64_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteBuffer_WriteLittleEndian_m72031092230CBE59A39A805AFBEDC9FB44B6B421(__this, L_5, 8, L_8, NULL);
		return;
	}
}
// System.SByte FlatBuffers.ByteBuffer::GetSbyte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t ByteBuffer_GetSbyte_m670F1BA8064BFD21FB493E9172264A1AAC2C8905 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 1, NULL);
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_1 = __this->____buffer_0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_1, NULL);
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return ((int8_t)L_5);
	}
}
// System.Byte FlatBuffers.ByteBuffer::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ByteBuffer_Get_m34C82639D0DD9AE3DEA4FF2F975B9545CF88E3FC (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		ByteBuffer_AssertOffsetAndLength_m6190A3CF8F9323EB8416B4E1A7B4AC71E26D168B(__this, L_0, 1, NULL);
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_1 = __this->____buffer_0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_1, NULL);
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.String FlatBuffers.ByteBuffer::GetStringUTF8(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ByteBuffer_GetStringUTF8_m03913BCD0AE7D2A2EE15CF7CEA6B2E269D143668 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___startPos0, int32_t ___len1, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* L_1 = __this->____buffer_0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline(L_1, NULL);
		int32_t L_3 = ___startPos0;
		int32_t L_4 = ___len1;
		NullCheck(L_0);
		String_t* L_5;
		L_5 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(38 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_0, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Int16 FlatBuffers.ByteBuffer::GetShort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ByteBuffer_GetShort_m6628854280052481ED8DEDEB63F9E504AA7C50AE (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		uint64_t L_1;
		L_1 = ByteBuffer_ReadLittleEndian_mC2B6DC447C05F624EA5566354CA8FB51BD3C0818(__this, L_0, 2, NULL);
		return ((int16_t)L_1);
	}
}
// System.UInt16 FlatBuffers.ByteBuffer::GetUshort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ByteBuffer_GetUshort_m67E1DCA329F122D3B09F48F0EE9523825E24AF74 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		uint64_t L_1;
		L_1 = ByteBuffer_ReadLittleEndian_mC2B6DC447C05F624EA5566354CA8FB51BD3C0818(__this, L_0, 2, NULL);
		return (uint16_t)((int32_t)(uint16_t)L_1);
	}
}
// System.Int32 FlatBuffers.ByteBuffer::GetInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		uint64_t L_1;
		L_1 = ByteBuffer_ReadLittleEndian_mC2B6DC447C05F624EA5566354CA8FB51BD3C0818(__this, L_0, 4, NULL);
		return ((int32_t)L_1);
	}
}
// System.UInt32 FlatBuffers.ByteBuffer::GetUint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ByteBuffer_GetUint_mDB295A9656BCB55EF126DF029ADD5342867E61D6 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		uint64_t L_1;
		L_1 = ByteBuffer_ReadLittleEndian_mC2B6DC447C05F624EA5566354CA8FB51BD3C0818(__this, L_0, 4, NULL);
		return ((int32_t)(uint32_t)L_1);
	}
}
// System.Int64 FlatBuffers.ByteBuffer::GetLong(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ByteBuffer_GetLong_m2894090467A5A7AECBDC0A12BC2ADED371A90CD2 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		uint64_t L_1;
		L_1 = ByteBuffer_ReadLittleEndian_mC2B6DC447C05F624EA5566354CA8FB51BD3C0818(__this, L_0, 8, NULL);
		return L_1;
	}
}
// System.UInt64 FlatBuffers.ByteBuffer::GetUlong(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ByteBuffer_GetUlong_m0C09E77F773BEDC95701CD5DE1181E18F7111067 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		uint64_t L_1;
		L_1 = ByteBuffer_ReadLittleEndian_mC2B6DC447C05F624EA5566354CA8FB51BD3C0818(__this, L_0, 8, NULL);
		return L_1;
	}
}
// System.Single FlatBuffers.ByteBuffer::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ByteBuffer_GetFloat_mB3B8EFCAA12E5EF3DF38FEA6F8F3AF8607F13363 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		uint64_t L_1;
		L_1 = ByteBuffer_ReadLittleEndian_mC2B6DC447C05F624EA5566354CA8FB51BD3C0818(__this, L_0, 4, NULL);
		V_0 = ((int32_t)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___inthelper_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___inthelper_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = __this->___floathelper_3;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, 4, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___floathelper_3;
		NullCheck(L_6);
		int32_t L_7 = 0;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}
}
// System.Double FlatBuffers.ByteBuffer::GetDouble(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ByteBuffer_GetDouble_mF4405F36F1EB4DED2419326338C3561D00864445 (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		uint64_t L_1;
		L_1 = ByteBuffer_ReadLittleEndian_mC2B6DC447C05F624EA5566354CA8FB51BD3C0818(__this, L_0, 8, NULL);
		V_0 = L_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->___ulonghelper_6;
		uint64_t L_3 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___ulonghelper_6;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = __this->___doublehelper_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, 8, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = __this->___doublehelper_5;
		NullCheck(L_6);
		int32_t L_7 = 0;
		double L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}
}
// System.Void FlatBuffers.ByteBuffer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer__cctor_mD524D61EFB18E54A3497FE4FAFA88F74DE73E26D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0AF6A9E01056850C9F7AE464B4099CA3F6D5E8EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_0 = (Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455*)il2cpp_codegen_object_new(Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m0AF6A9E01056850C9F7AE464B4099CA3F6D5E8EC(L_0, Dictionary_2__ctor_m0AF6A9E01056850C9F7AE464B4099CA3F6D5E8EC_RuntimeMethod_var);
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904(L_1, L_3, 1, Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_4 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904(L_4, L_6, 4, Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_7 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904(L_7, L_9, 8, Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_10 = L_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904(L_10, L_12, 1, Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_13 = L_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904(L_13, L_15, 1, Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_16 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_16);
		Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904(L_16, L_18, 2, Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_19 = L_16;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		NullCheck(L_19);
		Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904(L_19, L_21, 2, Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_22 = L_19;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		NullCheck(L_22);
		Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904(L_22, L_24, 4, Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_25 = L_22;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_25);
		Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904(L_25, L_27, 4, Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_28 = L_25;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		NullCheck(L_28);
		Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904(L_28, L_30, 8, Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_31 = L_28;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		NullCheck(L_31);
		Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904(L_31, L_33, 8, Dictionary_2_Add_mD091A436B1895D7A2D6C1848C6C84487C5873904_RuntimeMethod_var);
		((ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687_StaticFields*)il2cpp_codegen_static_fields_for(ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687_il2cpp_TypeInfo_var))->___genericSizes_2 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687_StaticFields*)il2cpp_codegen_static_fields_for(ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687_il2cpp_TypeInfo_var))->___genericSizes_2), (void*)L_31);
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
// System.Void FlatBuffers.FlatBufferBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder__ctor_mA35C0FED324DB538F8D635B7D1796EFB1A0CD821 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___initialSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____minAlign_2 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____vtable_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vtable_3), (void*)L_0);
		__this->____vtableSize_4 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____vtables_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vtables_6), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_2 = ___initialSize0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_3 = ___initialSize0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B8A4C32D7AA01D1E25E8FFA4EE6463F9750C3AF)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC44B38A15BDBCAD499AB9873471A436DF6E85AF5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatBufferBuilder__ctor_mA35C0FED324DB538F8D635B7D1796EFB1A0CD821_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_7 = ___initialSize0;
		__this->____space_0 = L_7;
		int32_t L_8 = ___initialSize0;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_9 = (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687*)il2cpp_codegen_object_new(ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ByteBuffer__ctor_m689E0A5B75C23EF14FA57756160566934073C485(L_9, L_8, NULL);
		__this->____bb_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bb_1), (void*)L_9);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::.ctor(FlatBuffers.ByteBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder__ctor_m360CFB7657B9625CB0BD916B11DA26D734C44F30 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____minAlign_2 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____vtable_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vtable_3), (void*)L_0);
		__this->____vtableSize_4 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____vtables_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vtables_6), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_2 = ___buffer0;
		__this->____bb_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bb_1), (void*)L_2);
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_3 = ___buffer0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_3, NULL);
		__this->____space_0 = L_4;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_5 = ___buffer0;
		NullCheck(L_5);
		ByteBuffer_Reset_m760ADD088828CA75E243CDF4E1911AEE6CCA0909(L_5, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Clear_m048B2A75658A5B0CFDB0276334A5A635F595FF93 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_0, NULL);
		__this->____space_0 = L_1;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_2 = __this->____bb_1;
		NullCheck(L_2);
		ByteBuffer_Reset_m760ADD088828CA75E243CDF4E1911AEE6CCA0909(L_2, NULL);
		__this->____minAlign_2 = 1;
		goto IL_003e;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____vtable_3;
		int32_t L_4 = __this->____vtableSize_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		int32_t L_5 = V_0;
		__this->____vtableSize_4 = L_5;
		int32_t L_6 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)0);
	}

IL_003e:
	{
		int32_t L_7 = __this->____vtableSize_4;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		__this->____vtableSize_4 = (-1);
		__this->____objectStart_5 = 0;
		__this->____numVtables_7 = 0;
		__this->____vectorNumElems_8 = 0;
		return;
	}
}
// System.Boolean FlatBuffers.FlatBufferBuilder::get_ForceDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CForceDefaultsU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::set_ForceDefaults(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_set_ForceDefaults_m0BEE67125E88B0EEBB825270F929E29FE38C2390 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CForceDefaultsU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Int32 FlatBuffers.FlatBufferBuilder::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlatBufferBuilder_get_Offset_mCA9238967F1AB213A36279A196727E532A56EB8C (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_0, NULL);
		int32_t L_2 = __this->____space_0;
		return ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::Pad(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Pad_m70BEA0D6E28160D424A3404471AABDB34C06D7BA (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ___size0;
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		V_0 = L_3;
		__this->____space_0 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = ___size0;
		NullCheck(L_0);
		ByteBuffer_PutByte_m2F811045EA5CC4E7673ECBC116B9E8F5604453A5(L_0, L_4, (uint8_t)0, L_5, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::GrowBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_GrowBuffer_m3E592575571053BE2A39C9FDF730BD8B40854F0D (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_1 = __this->____bb_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_1, NULL);
		NullCheck(L_0);
		ByteBuffer_GrowFront_m337E62843CFA9AF815C083BE0330F3ECF0034FD1(L_0, ((int32_t)(L_2<<1)), NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::Prep(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___size0, int32_t ___additionalBytes1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___size0;
		int32_t L_1 = __this->____minAlign_2;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = ___size0;
		__this->____minAlign_2 = L_2;
	}

IL_0010:
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_3 = __this->____bb_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_3, NULL);
		int32_t L_5 = __this->____space_0;
		int32_t L_6 = ___additionalBytes1;
		int32_t L_7 = ___size0;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(((~((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_4, L_5)), L_6)))), 1))&((int32_t)il2cpp_codegen_subtract(L_7, 1))));
		goto IL_005a;
	}

IL_002e:
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_8 = __this->____bb_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_8, NULL);
		V_1 = L_9;
		FlatBufferBuilder_GrowBuffer_m3E592575571053BE2A39C9FDF730BD8B40854F0D(__this, NULL);
		int32_t L_10 = __this->____space_0;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_11 = __this->____bb_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_11, NULL);
		int32_t L_13 = V_1;
		__this->____space_0 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13))));
	}

IL_005a:
	{
		int32_t L_14 = __this->____space_0;
		int32_t L_15 = V_0;
		int32_t L_16 = ___size0;
		int32_t L_17 = ___additionalBytes1;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_15, L_16)), L_17)))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_19 = V_0;
		FlatBufferBuilder_Pad_m70BEA0D6E28160D424A3404471AABDB34C06D7BA(__this, L_19, NULL);
	}

IL_0072:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::PutBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutBool_m919FD181275BA284218F11188B560D49C29D7250 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, bool ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* G_B3_2 = NULL;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		V_0 = L_2;
		__this->____space_0 = L_2;
		int32_t L_3 = V_0;
		bool L_4 = ___x0;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		NullCheck(G_B3_2);
		ByteBuffer_PutByte_m7A52A00508052F2122A94F865F2E8DE3DD894D35(G_B3_2, G_B3_1, (uint8_t)((int32_t)(uint8_t)G_B3_0), NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::PutSbyte(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutSbyte_mED8486CCAF7CB801DC4D2C7AE9CDB86B3BCC4D92 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int8_t ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		V_0 = L_2;
		__this->____space_0 = L_2;
		int32_t L_3 = V_0;
		int8_t L_4 = ___x0;
		NullCheck(L_0);
		ByteBuffer_PutSbyte_mC5B341F45F15695B13D24D83E262CD26A150D742(L_0, L_3, L_4, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::PutByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutByte_mC89F195518039F3C71CA4190D1EB4792694DBDEE (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint8_t ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		V_0 = L_2;
		__this->____space_0 = L_2;
		int32_t L_3 = V_0;
		uint8_t L_4 = ___x0;
		NullCheck(L_0);
		ByteBuffer_PutByte_m7A52A00508052F2122A94F865F2E8DE3DD894D35(L_0, L_3, L_4, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::PutShort(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutShort_m5B13BE80F4041BD2D8230C432CF2FDA3C4B5CCA6 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int16_t ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 2));
		V_0 = L_2;
		__this->____space_0 = L_2;
		int32_t L_3 = V_0;
		int16_t L_4 = ___x0;
		NullCheck(L_0);
		ByteBuffer_PutShort_m65C67DD0312C57B1584535CAC8BF7712D8171F85(L_0, L_3, L_4, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::PutUshort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutUshort_m5707A343B3101FC5BFC90DA1A88AB2F6F8669D3E (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint16_t ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 2));
		V_0 = L_2;
		__this->____space_0 = L_2;
		int32_t L_3 = V_0;
		uint16_t L_4 = ___x0;
		NullCheck(L_0);
		ByteBuffer_PutUshort_m306C916C6A8625EFCD64D286AEF1EE4A0D1F4D57(L_0, L_3, L_4, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::PutInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutInt_m8A790BB660946B7EC7BC7D1B80FDAD6441F2A959 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 4));
		V_0 = L_2;
		__this->____space_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ___x0;
		NullCheck(L_0);
		ByteBuffer_PutInt_m4363047F51F1A6AC808C6FB2656EB348326A0DDC(L_0, L_3, L_4, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::PutUint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutUint_mA099B3CC899734D911A58FACF8DC758DBE713347 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint32_t ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 4));
		V_0 = L_2;
		__this->____space_0 = L_2;
		int32_t L_3 = V_0;
		uint32_t L_4 = ___x0;
		NullCheck(L_0);
		ByteBuffer_PutUint_m3CC14BACBC667E9D0143A9EBD212966B324AD751(L_0, L_3, L_4, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::PutLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutLong_m7BBB791F68F9ABF11BB975938DC3CDB872A60AEA (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int64_t ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		V_0 = L_2;
		__this->____space_0 = L_2;
		int32_t L_3 = V_0;
		int64_t L_4 = ___x0;
		NullCheck(L_0);
		ByteBuffer_PutLong_m405D9811B24853AA455B98A691DA87C95C17F147(L_0, L_3, L_4, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::PutUlong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutUlong_m412E2810C55EE366437A26AAB9BF3AB4EAF8554C (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint64_t ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		V_0 = L_2;
		__this->____space_0 = L_2;
		int32_t L_3 = V_0;
		uint64_t L_4 = ___x0;
		NullCheck(L_0);
		ByteBuffer_PutUlong_m636FDB8837D550B31CC007C353EBF85A17F538A4(L_0, L_3, L_4, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::PutFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutFloat_m08F7F53E554CCE0E6E3E3F068953CD81EA837D11 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, float ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 4));
		V_0 = L_2;
		__this->____space_0 = L_2;
		int32_t L_3 = V_0;
		float L_4 = ___x0;
		NullCheck(L_0);
		ByteBuffer_PutFloat_m1ABC6DD8AEFF6D5DD414A9098FD8EC9BD0B7E100(L_0, L_3, L_4, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::PutDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_PutDouble_m6B6CBF5E7E635F17741689D218BB0A75F997B62B (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, double ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		int32_t L_1 = __this->____space_0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		V_0 = L_2;
		__this->____space_0 = L_2;
		int32_t L_3 = V_0;
		double L_4 = ___x0;
		NullCheck(L_0);
		ByteBuffer_PutDouble_mC832C23F019B5757010B88950A92A1E2DC2A37C4(L_0, L_3, L_4, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddBool_m854162EADBE82D4D7B65531607012369C6EBD734 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, bool ___x0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 1, 0, NULL);
		bool L_0 = ___x0;
		FlatBufferBuilder_PutBool_m919FD181275BA284218F11188B560D49C29D7250(__this, L_0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddSbyte(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddSbyte_m353040C0FBAF47AA4799E0F240216E6FF99CB8C2 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int8_t ___x0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 1, 0, NULL);
		int8_t L_0 = ___x0;
		FlatBufferBuilder_PutSbyte_mED8486CCAF7CB801DC4D2C7AE9CDB86B3BCC4D92(__this, L_0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddByte_m430B0F0C00D9EDFBDBD36093E6940902E68DC574 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint8_t ___x0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 1, 0, NULL);
		uint8_t L_0 = ___x0;
		FlatBufferBuilder_PutByte_mC89F195518039F3C71CA4190D1EB4792694DBDEE(__this, L_0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddShort(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddShort_m1916D451151E8A2AAAF6D2E00B666BDEFFEE5A6C (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int16_t ___x0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 2, 0, NULL);
		int16_t L_0 = ___x0;
		FlatBufferBuilder_PutShort_m5B13BE80F4041BD2D8230C432CF2FDA3C4B5CCA6(__this, L_0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddUshort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddUshort_m86BAABF83947A93ED8CFD849D3C0BFD1C23E247B (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint16_t ___x0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 2, 0, NULL);
		uint16_t L_0 = ___x0;
		FlatBufferBuilder_PutUshort_m5707A343B3101FC5BFC90DA1A88AB2F6F8669D3E(__this, L_0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddInt_m0A6102DE5EB4103311E2846DEE055B112A8F5E92 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 4, 0, NULL);
		int32_t L_0 = ___x0;
		FlatBufferBuilder_PutInt_m8A790BB660946B7EC7BC7D1B80FDAD6441F2A959(__this, L_0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddUint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddUint_mFBDC25112DFB53220214F9B31C1333FFFF000A48 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint32_t ___x0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 4, 0, NULL);
		uint32_t L_0 = ___x0;
		FlatBufferBuilder_PutUint_mA099B3CC899734D911A58FACF8DC758DBE713347(__this, L_0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddLong_m448E673CCBE3FA205601A1EDF96E4BE9B2C7601C (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int64_t ___x0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 8, 0, NULL);
		int64_t L_0 = ___x0;
		FlatBufferBuilder_PutLong_m7BBB791F68F9ABF11BB975938DC3CDB872A60AEA(__this, L_0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddUlong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddUlong_m22407E6E32E0663166B0AF4181DE53D66E9A12CA (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, uint64_t ___x0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 8, 0, NULL);
		uint64_t L_0 = ___x0;
		FlatBufferBuilder_PutUlong_m412E2810C55EE366437A26AAB9BF3AB4EAF8554C(__this, L_0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddFloat_m8BD091A8500929A4C03903AACEDD7032688998DE (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, float ___x0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 4, 0, NULL);
		float L_0 = ___x0;
		FlatBufferBuilder_PutFloat_m08F7F53E554CCE0E6E3E3F068953CD81EA837D11(__this, L_0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddDouble_m1E81E4895AAAD205D58C402EFB2A17EEF8363050 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, double ___x0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 8, 0, NULL);
		double L_0 = ___x0;
		FlatBufferBuilder_PutDouble_m6B6CBF5E7E635F17741689D218BB0A75F997B62B(__this, L_0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddOffset_mF725CCEE6AC66F893241EA7C26B2167D9F47A6BC (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___off0, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 4, 0, NULL);
		int32_t L_0 = ___off0;
		int32_t L_1;
		L_1 = FlatBufferBuilder_get_Offset_mCA9238967F1AB213A36279A196727E532A56EB8C(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatBufferBuilder_AddOffset_mF725CCEE6AC66F893241EA7C26B2167D9F47A6BC_RuntimeMethod_var)));
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = FlatBufferBuilder_get_Offset_mCA9238967F1AB213A36279A196727E532A56EB8C(__this, NULL);
		int32_t L_4 = ___off0;
		___off0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_3, L_4)), 4));
		int32_t L_5 = ___off0;
		FlatBufferBuilder_PutInt_m8A790BB660946B7EC7BC7D1B80FDAD6441F2A959(__this, L_5, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::StartVector(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_StartVector_m9F976AF571BCAF646C07E8AE41184425D697C8F5 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___elemSize0, int32_t ___count1, int32_t ___alignment2, const RuntimeMethod* method) 
{
	{
		FlatBufferBuilder_NotNested_m6C803933CD4AFD427859E0EC3C0494F238995D1D(__this, NULL);
		int32_t L_0 = ___count1;
		__this->____vectorNumElems_8 = L_0;
		int32_t L_1 = ___elemSize0;
		int32_t L_2 = ___count1;
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, 4, ((int32_t)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		int32_t L_3 = ___alignment2;
		int32_t L_4 = ___elemSize0;
		int32_t L_5 = ___count1;
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(__this, L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		return;
	}
}
// FlatBuffers.VectorOffset FlatBuffers.FlatBufferBuilder::EndVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VectorOffset_t06A7EFA11E476235DAEC0555F37CE058020EFDB7 FlatBufferBuilder_EndVector_m60E6339BD87B0DFC0CAE57B611B3D1C86BBAF7BE (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____vectorNumElems_8;
		FlatBufferBuilder_PutInt_m8A790BB660946B7EC7BC7D1B80FDAD6441F2A959(__this, L_0, NULL);
		int32_t L_1;
		L_1 = FlatBufferBuilder_get_Offset_mCA9238967F1AB213A36279A196727E532A56EB8C(__this, NULL);
		VectorOffset_t06A7EFA11E476235DAEC0555F37CE058020EFDB7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		VectorOffset__ctor_m85FEC438EF81171B324D7C82D0FC26DAFAE1B3F9_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::Nested(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Nested_m4C2666BE28EA19DCB093465A8195032B62A5419D (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___obj0;
		int32_t L_1;
		L_1 = FlatBufferBuilder_get_Offset_mCA9238967F1AB213A36279A196727E532A56EB8C(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B33AF065A94EDF87433444D126A8EA5295CF031)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatBufferBuilder_Nested_m4C2666BE28EA19DCB093465A8195032B62A5419D_RuntimeMethod_var)));
	}

IL_0014:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::NotNested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_NotNested_m6C803933CD4AFD427859E0EC3C0494F238995D1D (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____vtableSize_4;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42AE8812EFD84589E3176177109FE0F328DC8CBB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatBufferBuilder_NotNested_m6C803933CD4AFD427859E0EC3C0494F238995D1D_RuntimeMethod_var)));
	}

IL_0014:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::StartTable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_StartTable_mB8D77C3F3C30246B110913204FB3D77B34547D10 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___numfields0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___numfields0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1680709E54C5E6335DFDBFD1FE2B1A90F93EBBF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatBufferBuilder_StartTable_mB8D77C3F3C30246B110913204FB3D77B34547D10_RuntimeMethod_var)));
	}

IL_000f:
	{
		FlatBufferBuilder_NotNested_m6C803933CD4AFD427859E0EC3C0494F238995D1D(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____vtable_3;
		NullCheck(L_2);
		int32_t L_3 = ___numfields0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) >= ((int32_t)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = ___numfields0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->____vtable_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vtable_3), (void*)L_5);
	}

IL_002c:
	{
		int32_t L_6 = ___numfields0;
		__this->____vtableSize_4 = L_6;
		int32_t L_7;
		L_7 = FlatBufferBuilder_get_Offset_mCA9238967F1AB213A36279A196727E532A56EB8C(__this, NULL);
		__this->____objectStart_5 = L_7;
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::Slot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___voffset0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___voffset0;
		int32_t L_1 = __this->____vtableSize_4;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BDD4D5F5701CF6858D53C77EF8AA4E2BB1DE24B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908_RuntimeMethod_var)));
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____vtable_3;
		int32_t L_4 = ___voffset0;
		int32_t L_5;
		L_5 = FlatBufferBuilder_get_Offset_mCA9238967F1AB213A36279A196727E532A56EB8C(__this, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddBool(System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddBool_m87A0FE545FCCFA01D80BCC21E5545EA51CB94630 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, bool ___x1, bool ___d2, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		bool L_1 = ___x1;
		bool L_2 = ___d2;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}

IL_000c:
	{
		bool L_3 = ___x1;
		FlatBufferBuilder_AddBool_m854162EADBE82D4D7B65531607012369C6EBD734(__this, L_3, NULL);
		int32_t L_4 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_4, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddSbyte(System.Int32,System.SByte,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddSbyte_m6B8B37EFCE284EB6090B102ED8DAF93B100C1BF3 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, int8_t ___x1, int8_t ___d2, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int8_t L_1 = ___x1;
		int8_t L_2 = ___d2;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}

IL_000c:
	{
		int8_t L_3 = ___x1;
		FlatBufferBuilder_AddSbyte_m353040C0FBAF47AA4799E0F240216E6FF99CB8C2(__this, L_3, NULL);
		int32_t L_4 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_4, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddByte(System.Int32,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddByte_m91A5DCE00EC68E4FDB3AC929C0EA91296095F85A (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, uint8_t ___x1, uint8_t ___d2, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		uint8_t L_1 = ___x1;
		uint8_t L_2 = ___d2;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}

IL_000c:
	{
		uint8_t L_3 = ___x1;
		FlatBufferBuilder_AddByte_m430B0F0C00D9EDFBDBD36093E6940902E68DC574(__this, L_3, NULL);
		int32_t L_4 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_4, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddShort(System.Int32,System.Int16,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddShort_mC30BE78029B3681F4147CBAFFF9F900CAF579D1E (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, int16_t ___x1, int32_t ___d2, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int16_t L_1 = ___x1;
		int32_t L_2 = ___d2;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}

IL_000c:
	{
		int16_t L_3 = ___x1;
		FlatBufferBuilder_AddShort_m1916D451151E8A2AAAF6D2E00B666BDEFFEE5A6C(__this, L_3, NULL);
		int32_t L_4 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_4, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddUshort(System.Int32,System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddUshort_mF4EEA8DF85322DCF10EA2BF51EE5D900487FD917 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, uint16_t ___x1, uint16_t ___d2, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		uint16_t L_1 = ___x1;
		uint16_t L_2 = ___d2;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}

IL_000c:
	{
		uint16_t L_3 = ___x1;
		FlatBufferBuilder_AddUshort_m86BAABF83947A93ED8CFD849D3C0BFD1C23E247B(__this, L_3, NULL);
		int32_t L_4 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_4, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddInt(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddInt_m96E35F9FB340A6E38F7A9E2380CE4DD1B38C4C90 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, int32_t ___x1, int32_t ___d2, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___x1;
		int32_t L_2 = ___d2;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___x1;
		FlatBufferBuilder_AddInt_m0A6102DE5EB4103311E2846DEE055B112A8F5E92(__this, L_3, NULL);
		int32_t L_4 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_4, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddUint(System.Int32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddUint_m5B4D6F744053D50093AA172BD9B8247D414B4886 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, uint32_t ___x1, uint32_t ___d2, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		uint32_t L_1 = ___x1;
		uint32_t L_2 = ___d2;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}

IL_000c:
	{
		uint32_t L_3 = ___x1;
		FlatBufferBuilder_AddUint_mFBDC25112DFB53220214F9B31C1333FFFF000A48(__this, L_3, NULL);
		int32_t L_4 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_4, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddLong(System.Int32,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddLong_m1F52A510C42D8C379D349487E41EA14A00A7F5E6 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, int64_t ___x1, int64_t ___d2, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int64_t L_1 = ___x1;
		int64_t L_2 = ___d2;
		if ((((int64_t)L_1) == ((int64_t)L_2)))
		{
			goto IL_001a;
		}
	}

IL_000c:
	{
		int64_t L_3 = ___x1;
		FlatBufferBuilder_AddLong_m448E673CCBE3FA205601A1EDF96E4BE9B2C7601C(__this, L_3, NULL);
		int32_t L_4 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_4, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddUlong(System.Int32,System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddUlong_mFA4E7E4E64BC80A08AB63055198314175AD97667 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, uint64_t ___x1, uint64_t ___d2, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		uint64_t L_1 = ___x1;
		uint64_t L_2 = ___d2;
		if ((((int64_t)L_1) == ((int64_t)L_2)))
		{
			goto IL_001a;
		}
	}

IL_000c:
	{
		uint64_t L_3 = ___x1;
		FlatBufferBuilder_AddUlong_m22407E6E32E0663166B0AF4181DE53D66E9A12CA(__this, L_3, NULL);
		int32_t L_4 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_4, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddFloat(System.Int32,System.Single,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddFloat_m9A6CDAA218E524CAD20C2BFC4B5D75C466805A35 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, float ___x1, double ___d2, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		float L_1 = ___x1;
		double L_2 = ___d2;
		if ((((double)((double)L_1)) == ((double)L_2)))
		{
			goto IL_001b;
		}
	}

IL_000d:
	{
		float L_3 = ___x1;
		FlatBufferBuilder_AddFloat_m8BD091A8500929A4C03903AACEDD7032688998DE(__this, L_3, NULL);
		int32_t L_4 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_4, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddDouble(System.Int32,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddDouble_mCCD9D85AFD58B2DA1D52BCF2589D92A8B5431CBD (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, double ___x1, double ___d2, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		double L_1 = ___x1;
		double L_2 = ___d2;
		if ((((double)L_1) == ((double)L_2)))
		{
			goto IL_001a;
		}
	}

IL_000c:
	{
		double L_3 = ___x1;
		FlatBufferBuilder_AddDouble_m1E81E4895AAAD205D58C402EFB2A17EEF8363050(__this, L_3, NULL);
		int32_t L_4 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_4, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddOffset(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddOffset_mB3E9AEED5599EF0F4FE316552840494EDEF4B08C (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___o0, int32_t ___x1, int32_t ___d2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x1;
		int32_t L_1 = ___d2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___x1;
		FlatBufferBuilder_AddOffset_mF725CCEE6AC66F893241EA7C26B2167D9F47A6BC(__this, L_2, NULL);
		int32_t L_3 = ___o0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_3, NULL);
	}

IL_0012:
	{
		return;
	}
}
// FlatBuffers.StringOffset FlatBuffers.FlatBufferBuilder::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 FlatBufferBuilder_CreateString_mD808EDCB28D8E9F99E5E4CEF9EB81C13D073CE42 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		FlatBufferBuilder_NotNested_m6C803933CD4AFD427859E0EC3C0494F238995D1D(__this, NULL);
		FlatBufferBuilder_AddByte_m430B0F0C00D9EDFBDBD36093E6940902E68DC574(__this, (uint8_t)0, NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		FlatBufferBuilder_StartVector_m9F976AF571BCAF646C07E8AE41184425D697C8F5(__this, 1, L_3, 1, NULL);
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_4 = __this->____bb_1;
		int32_t L_5 = __this->____space_0;
		int32_t L_6 = V_0;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		V_1 = L_7;
		__this->____space_0 = L_7;
		int32_t L_8 = V_1;
		String_t* L_9 = ___s0;
		NullCheck(L_4);
		ByteBuffer_PutStringUTF8_mDEE8E48B0BD9A813AA72E59CC70A36F4F4186D23(L_4, L_8, L_9, NULL);
		VectorOffset_t06A7EFA11E476235DAEC0555F37CE058020EFDB7 L_10;
		L_10 = FlatBufferBuilder_EndVector_m60E6339BD87B0DFC0CAE57B611B3D1C86BBAF7BE(__this, NULL);
		int32_t L_11 = L_10.___Value_0;
		StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 L_12;
		memset((&L_12), 0, sizeof(L_12));
		StringOffset__ctor_mB4911A2248132F3DD037CCD12BCA8504A11BFA38_inline((&L_12), L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// FlatBuffers.StringOffset FlatBuffers.FlatBufferBuilder::CreateSharedString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 FlatBufferBuilder_CreateSharedString_mE8B449C8652F89425A81A59FC9C1639355338303 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mBB0088C6CE234D1E02C2E94EAAF1F57220393DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m78BDA710336C59F28C49926731D2EECCFFA1BF23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m077496F94DE88E21F780A919E3D1FFDF5D0A5B41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mBF5A02EBC5E3D65360C789DE5D129EB1AA4F4FF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685* L_0 = __this->____sharedStringMap_9;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685* L_1 = (Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685*)il2cpp_codegen_object_new(Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m077496F94DE88E21F780A919E3D1FFDF5D0A5B41(L_1, Dictionary_2__ctor_m077496F94DE88E21F780A919E3D1FFDF5D0A5B41_RuntimeMethod_var);
		__this->____sharedStringMap_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sharedStringMap_9), (void*)L_1);
	}

IL_0013:
	{
		Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685* L_2 = __this->____sharedStringMap_9;
		String_t* L_3 = ___s0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m78BDA710336C59F28C49926731D2EECCFFA1BF23(L_2, L_3, Dictionary_2_ContainsKey_m78BDA710336C59F28C49926731D2EECCFFA1BF23_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685* L_5 = __this->____sharedStringMap_9;
		String_t* L_6 = ___s0;
		NullCheck(L_5);
		StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 L_7;
		L_7 = Dictionary_2_get_Item_mBF5A02EBC5E3D65360C789DE5D129EB1AA4F4FF5(L_5, L_6, Dictionary_2_get_Item_mBF5A02EBC5E3D65360C789DE5D129EB1AA4F4FF5_RuntimeMethod_var);
		return L_7;
	}

IL_002e:
	{
		String_t* L_8 = ___s0;
		StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 L_9;
		L_9 = FlatBufferBuilder_CreateString_mD808EDCB28D8E9F99E5E4CEF9EB81C13D073CE42(__this, L_8, NULL);
		V_0 = L_9;
		Dictionary_2_t36A0AEFC5BF8C4CE738ED50074ACFAFD574C1685* L_10 = __this->____sharedStringMap_9;
		String_t* L_11 = ___s0;
		StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_Add_mBB0088C6CE234D1E02C2E94EAAF1F57220393DD8(L_10, L_11, L_12, Dictionary_2_Add_mBB0088C6CE234D1E02C2E94EAAF1F57220393DD8_RuntimeMethod_var);
		StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567 L_13 = V_0;
		return L_13;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::AddStruct(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_AddStruct_mB7972BDD43B58DF8528FEC320E65481B9EF17ACB (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___voffset0, int32_t ___x1, int32_t ___d2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x1;
		int32_t L_1 = ___d2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___x1;
		FlatBufferBuilder_Nested_m4C2666BE28EA19DCB093465A8195032B62A5419D(__this, L_2, NULL);
		int32_t L_3 = ___voffset0;
		FlatBufferBuilder_Slot_m2CDE14C43B6F98FDAC67A3460DC78401553CC908(__this, L_3, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Int32 FlatBuffers.FlatBufferBuilder::EndTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlatBufferBuilder_EndTable_m772E0A02E93065B84873649A5FB8FF6D32D52E2B (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	int32_t V_8 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = __this->____vtableSize_4;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3228EDC2035E419A5666E21CC182B6179D1E2E00)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatBufferBuilder_EndTable_m772E0A02E93065B84873649A5FB8FF6D32D52E2B_RuntimeMethod_var)));
	}

IL_0014:
	{
		FlatBufferBuilder_AddInt_m0A6102DE5EB4103311E2846DEE055B112A8F5E92(__this, 0, NULL);
		int32_t L_2;
		L_2 = FlatBufferBuilder_get_Offset_mCA9238967F1AB213A36279A196727E532A56EB8C(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = __this->____vtableSize_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		goto IL_0031;
	}

IL_002d:
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
	}

IL_0031:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____vtable_3;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_002d;
		}
	}

IL_003f:
	{
		int32_t L_10 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		goto IL_0074;
	}

IL_0045:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____vtable_3;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0052;
		}
	}
	{
		G_B10_0 = 0;
		goto IL_005c;
	}

IL_0052:
	{
		int32_t L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____vtable_3;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		G_B10_0 = ((int32_t)il2cpp_codegen_subtract(L_15, L_19));
	}

IL_005c:
	{
		V_4 = ((int16_t)G_B10_0);
		int16_t L_20 = V_4;
		FlatBufferBuilder_AddShort_m1916D451151E8A2AAAF6D2E00B666BDEFFEE5A6C(__this, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____vtable_3;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)0);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_0074:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_25 = V_0;
		int32_t L_26 = __this->____objectStart_5;
		FlatBufferBuilder_AddShort_m1916D451151E8A2AAAF6D2E00B666BDEFFEE5A6C(__this, ((int16_t)((int32_t)il2cpp_codegen_subtract(L_25, L_26))), NULL);
		int32_t L_27 = V_2;
		FlatBufferBuilder_AddShort_m1916D451151E8A2AAAF6D2E00B666BDEFFEE5A6C(__this, ((int16_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_27, 2)), 2))), NULL);
		V_3 = 0;
		V_1 = 0;
		goto IL_011c;
	}

IL_009c:
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_28 = __this->____bb_1;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_28, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____vtables_6;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_29, L_33));
		int32_t L_34 = __this->____space_0;
		V_6 = L_34;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_35 = __this->____bb_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int16_t L_37;
		L_37 = ByteBuffer_GetShort_m6628854280052481ED8DEDEB63F9E504AA7C50AE(L_35, L_36, NULL);
		V_7 = L_37;
		int16_t L_38 = V_7;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_39 = __this->____bb_1;
		int32_t L_40 = V_6;
		NullCheck(L_39);
		int16_t L_41;
		L_41 = ByteBuffer_GetShort_m6628854280052481ED8DEDEB63F9E504AA7C50AE(L_39, L_40, NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)L_41))))
		{
			goto IL_0118;
		}
	}
	{
		V_8 = 2;
		goto IL_0107;
	}

IL_00df:
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_42 = __this->____bb_1;
		int32_t L_43 = V_5;
		int32_t L_44 = V_8;
		NullCheck(L_42);
		int16_t L_45;
		L_45 = ByteBuffer_GetShort_m6628854280052481ED8DEDEB63F9E504AA7C50AE(L_42, ((int32_t)il2cpp_codegen_add(L_43, L_44)), NULL);
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_46 = __this->____bb_1;
		int32_t L_47 = V_6;
		int32_t L_48 = V_8;
		NullCheck(L_46);
		int16_t L_49;
		L_49 = ByteBuffer_GetShort_m6628854280052481ED8DEDEB63F9E504AA7C50AE(L_46, ((int32_t)il2cpp_codegen_add(L_47, L_48)), NULL);
		if ((!(((uint32_t)L_45) == ((uint32_t)L_49))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_50, 2));
	}

IL_0107:
	{
		int32_t L_51 = V_8;
		int16_t L_52 = V_7;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00df;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____vtables_6;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_3 = L_56;
		goto IL_0128;
	}

IL_0118:
	{
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_011c:
	{
		int32_t L_58 = V_1;
		int32_t L_59 = __this->____numVtables_7;
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_009c;
		}
	}

IL_0128:
	{
		int32_t L_60 = V_3;
		if (!L_60)
		{
			goto IL_0154;
		}
	}
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_61 = __this->____bb_1;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_61, NULL);
		int32_t L_63 = V_0;
		__this->____space_0 = ((int32_t)il2cpp_codegen_subtract(L_62, L_63));
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_64 = __this->____bb_1;
		int32_t L_65 = __this->____space_0;
		int32_t L_66 = V_3;
		int32_t L_67 = V_0;
		NullCheck(L_64);
		ByteBuffer_PutInt_m4363047F51F1A6AC808C6FB2656EB348326A0DDC(L_64, L_65, ((int32_t)il2cpp_codegen_subtract(L_66, L_67)), NULL);
		goto IL_01d1;
	}

IL_0154:
	{
		int32_t L_68 = __this->____numVtables_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = __this->____vtables_6;
		NullCheck(L_69);
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)(((RuntimeArray*)L_69)->max_length))))))
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_70 = __this->____numVtables_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_70, 2)));
		V_9 = L_71;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = __this->____vtables_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = __this->____vtables_6;
		NullCheck(L_74);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_72, (RuntimeArray*)L_73, ((int32_t)(((RuntimeArray*)L_74)->max_length)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_9;
		__this->____vtables_6 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vtables_6), (void*)L_75);
	}

IL_0190:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = __this->____vtables_6;
		int32_t L_77 = __this->____numVtables_7;
		V_10 = L_77;
		int32_t L_78 = V_10;
		__this->____numVtables_7 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		int32_t L_79 = V_10;
		int32_t L_80;
		L_80 = FlatBufferBuilder_get_Offset_mCA9238967F1AB213A36279A196727E532A56EB8C(__this, NULL);
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (int32_t)L_80);
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_81 = __this->____bb_1;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_82 = __this->____bb_1;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_82, NULL);
		int32_t L_84 = V_0;
		int32_t L_85;
		L_85 = FlatBufferBuilder_get_Offset_mCA9238967F1AB213A36279A196727E532A56EB8C(__this, NULL);
		int32_t L_86 = V_0;
		NullCheck(L_81);
		ByteBuffer_PutInt_m4363047F51F1A6AC808C6FB2656EB348326A0DDC(L_81, ((int32_t)il2cpp_codegen_subtract(L_83, L_84)), ((int32_t)il2cpp_codegen_subtract(L_85, L_86)), NULL);
	}

IL_01d1:
	{
		__this->____vtableSize_4 = (-1);
		int32_t L_87 = V_0;
		return L_87;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::Required(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Required_m3A98BEEA0CD401E817A64C31873B906DF2371C9D (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___table0, int32_t ___field1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_0, NULL);
		int32_t L_2 = ___table0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		int32_t L_3 = V_0;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_4 = __this->____bb_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_4, L_5, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, L_6));
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_7 = __this->____bb_1;
		int32_t L_8 = V_1;
		int32_t L_9 = ___field1;
		NullCheck(L_7);
		int16_t L_10;
		L_10 = ByteBuffer_GetShort_m6628854280052481ED8DEDEB63F9E504AA7C50AE(L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), NULL);
		if (((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_11 = ___field1;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		String_t* L_14;
		L_14 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52D6D3390D307B3C94B228D999DA8179B7FF93D2)), L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE378C12583FCFFB1F6AAFC952A850C43B484A57)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_15 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatBufferBuilder_Required_m3A98BEEA0CD401E817A64C31873B906DF2371C9D_RuntimeMethod_var)));
	}

IL_004b:
	{
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::Finish(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Finish_mC6B361DDD72889790C07EDBE4E914BA0E082E46E (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___rootTable0, bool ___sizePrefix1, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* G_B3_3 = NULL;
	{
		int32_t L_0 = __this->____minAlign_2;
		bool L_1 = ___sizePrefix1;
		G_B1_0 = 4;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_1)
		{
			G_B2_0 = 4;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000f:
	{
		NullCheck(G_B3_3);
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(G_B3_3, G_B3_2, ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0)), NULL);
		int32_t L_2 = ___rootTable0;
		FlatBufferBuilder_AddOffset_mF725CCEE6AC66F893241EA7C26B2167D9F47A6BC(__this, L_2, NULL);
		bool L_3 = ___sizePrefix1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_4 = __this->____bb_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_4, NULL);
		int32_t L_6 = __this->____space_0;
		FlatBufferBuilder_AddInt_m0A6102DE5EB4103311E2846DEE055B112A8F5E92(__this, ((int32_t)il2cpp_codegen_subtract(L_5, L_6)), NULL);
	}

IL_0037:
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_7 = __this->____bb_1;
		int32_t L_8 = __this->____space_0;
		NullCheck(L_7);
		ByteBuffer_set_Position_mE29BEDE72B66A0DEA211C82B512D7505F797D246_inline(L_7, L_8, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::Finish(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Finish_m5BB5FEF98B7C105EFD8BD12E9E9DFC36BBF6DCD5 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___rootTable0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___rootTable0;
		FlatBufferBuilder_Finish_mC6B361DDD72889790C07EDBE4E914BA0E082E46E(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::FinishSizePrefixed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_FinishSizePrefixed_mA7121E0F8C1DE0E3FC74AFD70B8E3CBCC41E8FF4 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___rootTable0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___rootTable0;
		FlatBufferBuilder_Finish_mC6B361DDD72889790C07EDBE4E914BA0E082E46E(__this, L_0, (bool)1, NULL);
		return;
	}
}
// FlatBuffers.ByteBuffer FlatBuffers.FlatBufferBuilder::get_DataBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* FlatBufferBuilder_get_DataBuffer_mE891FB8DC5571356FEEF0D0E9F71F36B4544A41A (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		return L_0;
	}
}
// System.Byte[] FlatBuffers.FlatBufferBuilder::SizedByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FlatBufferBuilder_SizedByteArray_mF9252AA75A2035598E8686469E7FB5CDAA81ACCF (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->____bb_1;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ByteBuffer_ToSizedArray_mA7FF2B172784408A3E71B72EA28733486B8E9038(L_0, NULL);
		return L_1;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::Finish(System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Finish_m7036AC77DC6C2208E94E6039BA79923CA765D26A (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___rootTable0, String_t* ___fileIdentifier1, bool ___sizePrefix2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* G_B3_3 = NULL;
	{
		int32_t L_0 = __this->____minAlign_2;
		bool L_1 = ___sizePrefix2;
		G_B1_0 = 4;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_1)
		{
			G_B2_0 = 4;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000f:
	{
		NullCheck(G_B3_3);
		FlatBufferBuilder_Prep_m7282FA30C5918EB7F2DEC731458E525284BDB4A5(G_B3_3, G_B3_2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0)), 4)), NULL);
		String_t* L_2 = ___fileIdentifier1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_4 = 4;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEF5ED2B8C034CC48222B60B179CC4F0F1E66634)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral03C8E3B92EE96B3FD2A91DA91293948493E3E8A2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatBufferBuilder_Finish_m7036AC77DC6C2208E94E6039BA79923CA765D26A_RuntimeMethod_var)));
	}

IL_003b:
	{
		V_0 = 3;
		goto IL_0051;
	}

IL_003f:
	{
		String_t* L_8 = ___fileIdentifier1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		FlatBufferBuilder_AddByte_m430B0F0C00D9EDFBDBD36093E6940902E68DC574(__this, (uint8_t)((int32_t)(uint8_t)L_10), NULL);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0051:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_13 = ___rootTable0;
		bool L_14 = ___sizePrefix2;
		FlatBufferBuilder_Finish_mC6B361DDD72889790C07EDBE4E914BA0E082E46E(__this, L_13, L_14, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::Finish(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_Finish_m99EBADCA596FFB0EBC7D7CCAF1FA21EC9639DAD6 (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___rootTable0, String_t* ___fileIdentifier1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___rootTable0;
		String_t* L_1 = ___fileIdentifier1;
		FlatBufferBuilder_Finish_m7036AC77DC6C2208E94E6039BA79923CA765D26A(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void FlatBuffers.FlatBufferBuilder::FinishSizePrefixed(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferBuilder_FinishSizePrefixed_mEA627DE552E0B7F581671E4ADAC404142B1BEC7B (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, int32_t ___rootTable0, String_t* ___fileIdentifier1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___rootTable0;
		String_t* L_1 = ___fileIdentifier1;
		FlatBufferBuilder_Finish_m7036AC77DC6C2208E94E6039BA79923CA765D26A(__this, L_0, L_1, (bool)1, NULL);
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
// System.Void FlatBuffers.FlatBufferConstants::FLATBUFFERS_1_11_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferConstants_FLATBUFFERS_1_11_1_m97A323F16AE3A11064E6A9B4A49480C942D1CF15 (const RuntimeMethod* method) 
{
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
// System.Void FlatBuffers.StringOffset::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringOffset__ctor_mB4911A2248132F3DD037CCD12BCA8504A11BFA38 (StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___Value_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StringOffset__ctor_mB4911A2248132F3DD037CCD12BCA8504A11BFA38_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567*>(__this + _offset);
	StringOffset__ctor_mB4911A2248132F3DD037CCD12BCA8504A11BFA38_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlatBuffers.VectorOffset::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorOffset__ctor_m85FEC438EF81171B324D7C82D0FC26DAFAE1B3F9 (VectorOffset_t06A7EFA11E476235DAEC0555F37CE058020EFDB7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___Value_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void VectorOffset__ctor_m85FEC438EF81171B324D7C82D0FC26DAFAE1B3F9_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	VectorOffset_t06A7EFA11E476235DAEC0555F37CE058020EFDB7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VectorOffset_t06A7EFA11E476235DAEC0555F37CE058020EFDB7*>(__this + _offset);
	VectorOffset__ctor_m85FEC438EF81171B324D7C82D0FC26DAFAE1B3F9_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: FlatBuffers.Struct
IL2CPP_EXTERN_C void Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshal_pinvoke(const Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129& unmarshaled, Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CbbU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<bb>k__BackingField' of type 'Struct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CbbU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshal_pinvoke_back(const Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshaled_pinvoke& marshaled, Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129& unmarshaled)
{
	Exception_t* ___U3CbbU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<bb>k__BackingField' of type 'Struct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CbbU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: FlatBuffers.Struct
IL2CPP_EXTERN_C void Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshal_pinvoke_cleanup(Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FlatBuffers.Struct
IL2CPP_EXTERN_C void Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshal_com(const Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129& unmarshaled, Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshaled_com& marshaled)
{
	Exception_t* ___U3CbbU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<bb>k__BackingField' of type 'Struct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CbbU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshal_com_back(const Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshaled_com& marshaled, Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129& unmarshaled)
{
	Exception_t* ___U3CbbU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<bb>k__BackingField' of type 'Struct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CbbU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: FlatBuffers.Struct
IL2CPP_EXTERN_C void Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshal_com_cleanup(Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129_marshaled_com& marshaled)
{
}
// System.Int32 FlatBuffers.Struct::get_bb_pos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Struct_get_bb_pos_m82A17FCD325212F0B750AB24A84C7E11C53C4958 (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3Cbb_posU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Struct_get_bb_pos_m82A17FCD325212F0B750AB24A84C7E11C53C4958_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Struct_get_bb_pos_m82A17FCD325212F0B750AB24A84C7E11C53C4958_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FlatBuffers.Struct::set_bb_pos(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Struct_set_bb_pos_m7260ED755B284ED3897596BAD71EA793FE2CF01A (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3Cbb_posU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Struct_set_bb_pos_m7260ED755B284ED3897596BAD71EA793FE2CF01A_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129*>(__this + _offset);
	Struct_set_bb_pos_m7260ED755B284ED3897596BAD71EA793FE2CF01A_inline(_thisAdjusted, ___value0, method);
}
// FlatBuffers.ByteBuffer FlatBuffers.Struct::get_bb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* Struct_get_bb_m72B24D9FA8A59A4C3D4CCB1B58D56B4E1C47A0D2 (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->___U3CbbU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* Struct_get_bb_m72B24D9FA8A59A4C3D4CCB1B58D56B4E1C47A0D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129*>(__this + _offset);
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* _returnValue;
	_returnValue = Struct_get_bb_m72B24D9FA8A59A4C3D4CCB1B58D56B4E1C47A0D2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FlatBuffers.Struct::set_bb(FlatBuffers.ByteBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Struct_set_bb_mE21699C8E659C0B3236A372A952CD5576DC424FA (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___value0, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = ___value0;
		__this->___U3CbbU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbbU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Struct_set_bb_mE21699C8E659C0B3236A372A952CD5576DC424FA_AdjustorThunk (RuntimeObject* __this, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___value0, const RuntimeMethod* method)
{
	Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129*>(__this + _offset);
	Struct_set_bb_mE21699C8E659C0B3236A372A952CD5576DC424FA_inline(_thisAdjusted, ___value0, method);
}
// System.Void FlatBuffers.Struct::.ctor(System.Int32,FlatBuffers.ByteBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Struct__ctor_m6F308262E6322CD58C029C399B283741142BC332 (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, int32_t ____i0, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ____bb1, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = ____bb1;
		Struct_set_bb_mE21699C8E659C0B3236A372A952CD5576DC424FA_inline(__this, L_0, NULL);
		int32_t L_1 = ____i0;
		Struct_set_bb_pos_m7260ED755B284ED3897596BAD71EA793FE2CF01A_inline(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Struct__ctor_m6F308262E6322CD58C029C399B283741142BC332_AdjustorThunk (RuntimeObject* __this, int32_t ____i0, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ____bb1, const RuntimeMethod* method)
{
	Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129*>(__this + _offset);
	Struct__ctor_m6F308262E6322CD58C029C399B283741142BC332(_thisAdjusted, ____i0, ____bb1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: FlatBuffers.Table
IL2CPP_EXTERN_C void Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshal_pinvoke(const Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184& unmarshaled, Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CbbU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<bb>k__BackingField' of type 'Table': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CbbU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshal_pinvoke_back(const Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshaled_pinvoke& marshaled, Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184& unmarshaled)
{
	Exception_t* ___U3CbbU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<bb>k__BackingField' of type 'Table': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CbbU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: FlatBuffers.Table
IL2CPP_EXTERN_C void Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshal_pinvoke_cleanup(Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FlatBuffers.Table
IL2CPP_EXTERN_C void Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshal_com(const Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184& unmarshaled, Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshaled_com& marshaled)
{
	Exception_t* ___U3CbbU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<bb>k__BackingField' of type 'Table': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CbbU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshal_com_back(const Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshaled_com& marshaled, Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184& unmarshaled)
{
	Exception_t* ___U3CbbU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<bb>k__BackingField' of type 'Table': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CbbU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: FlatBuffers.Table
IL2CPP_EXTERN_C void Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshal_com_cleanup(Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184_marshaled_com& marshaled)
{
}
// System.Int32 FlatBuffers.Table::get_bb_pos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table_get_bb_pos_m545E7278AFDFB85EC02C6D9A585E15536DF9D84C (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3Cbb_posU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Table_get_bb_pos_m545E7278AFDFB85EC02C6D9A585E15536DF9D84C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Table_get_bb_pos_m545E7278AFDFB85EC02C6D9A585E15536DF9D84C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FlatBuffers.Table::set_bb_pos(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Table_set_bb_pos_mD8BF0235A8E81947A5D6DA3A8886D283FBF02607 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3Cbb_posU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Table_set_bb_pos_mD8BF0235A8E81947A5D6DA3A8886D283FBF02607_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	Table_set_bb_pos_mD8BF0235A8E81947A5D6DA3A8886D283FBF02607_inline(_thisAdjusted, ___value0, method);
}
// FlatBuffers.ByteBuffer FlatBuffers.Table::get_bb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->___U3CbbU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* _returnValue;
	_returnValue = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FlatBuffers.Table::set_bb(FlatBuffers.ByteBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Table_set_bb_m456A85E473B834DC861FE104253F9C64FD9D3DF3 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___value0, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = ___value0;
		__this->___U3CbbU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbbU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Table_set_bb_m456A85E473B834DC861FE104253F9C64FD9D3DF3_AdjustorThunk (RuntimeObject* __this, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___value0, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	Table_set_bb_m456A85E473B834DC861FE104253F9C64FD9D3DF3_inline(_thisAdjusted, ___value0, method);
}
// FlatBuffers.ByteBuffer FlatBuffers.Table::get_ByteBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* Table_get_ByteBuffer_m086F603C31F13509788B531425D5D97020075FBB (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0;
		L_0 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* Table_get_ByteBuffer_m086F603C31F13509788B531425D5D97020075FBB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* _returnValue;
	_returnValue = Table_get_ByteBuffer_m086F603C31F13509788B531425D5D97020075FBB(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FlatBuffers.Table::.ctor(System.Int32,FlatBuffers.ByteBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Table__ctor_m70A7DAF7B10FB4F61F34B12BD63CED132D1B5EA3 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ____i0, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ____bb1, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = ____bb1;
		Table_set_bb_m456A85E473B834DC861FE104253F9C64FD9D3DF3_inline(__this, L_0, NULL);
		int32_t L_1 = ____i0;
		Table_set_bb_pos_mD8BF0235A8E81947A5D6DA3A8886D283FBF02607_inline(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Table__ctor_m70A7DAF7B10FB4F61F34B12BD63CED132D1B5EA3_AdjustorThunk (RuntimeObject* __this, int32_t ____i0, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ____bb1, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	Table__ctor_m70A7DAF7B10FB4F61F34B12BD63CED132D1B5EA3(_thisAdjusted, ____i0, ____bb1, method);
}
// System.Int32 FlatBuffers.Table::__offset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table___offset_m14AD47D1A5FE2C26B61D018DD45272E48396190D (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___vtableOffset0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Table_get_bb_pos_m545E7278AFDFB85EC02C6D9A585E15536DF9D84C_inline(__this, NULL);
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_1;
		L_1 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		int32_t L_2;
		L_2 = Table_get_bb_pos_m545E7278AFDFB85EC02C6D9A585E15536DF9D84C_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_1, L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_3));
		int32_t L_4 = ___vtableOffset0;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_5;
		L_5 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int16_t L_7;
		L_7 = ByteBuffer_GetShort_m6628854280052481ED8DEDEB63F9E504AA7C50AE(L_5, L_6, NULL);
		if ((((int32_t)L_4) < ((int32_t)L_7)))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}

IL_002a:
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_8;
		L_8 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		int32_t L_9 = V_0;
		int32_t L_10 = ___vtableOffset0;
		NullCheck(L_8);
		int16_t L_11;
		L_11 = ByteBuffer_GetShort_m6628854280052481ED8DEDEB63F9E504AA7C50AE(L_8, ((int32_t)il2cpp_codegen_add(L_9, L_10)), NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t Table___offset_m14AD47D1A5FE2C26B61D018DD45272E48396190D_AdjustorThunk (RuntimeObject* __this, int32_t ___vtableOffset0, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Table___offset_m14AD47D1A5FE2C26B61D018DD45272E48396190D(_thisAdjusted, ___vtableOffset0, method);
	return _returnValue;
}
// System.Int32 FlatBuffers.Table::__offset(System.Int32,System.Int32,FlatBuffers.ByteBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table___offset_m54B484D7AD813A80B03B28ED5ACF2F5C4B704CC9 (int32_t ___vtableOffset0, int32_t ___offset1, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___bb2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = ___bb2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteBuffer_get_Length_m088E51EC8F612D64E9CA6316FE658877B9BFD3D7(L_0, NULL);
		int32_t L_2 = ___offset1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_3 = ___bb2;
		int32_t L_4 = V_0;
		int32_t L_5 = ___vtableOffset0;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_6 = ___bb2;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_6, L_7, NULL);
		NullCheck(L_3);
		int16_t L_9;
		L_9 = ByteBuffer_GetShort_m6628854280052481ED8DEDEB63F9E504AA7C50AE(L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), L_8)), NULL);
		int32_t L_10 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_9, L_10));
	}
}
// System.Int32 FlatBuffers.Table::__indirect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table___indirect_mB9CB22F7A6F5D31EB3D07646F31BDE06AFF3BB86 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___offset0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_1;
		L_1 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		int32_t L_2 = ___offset0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_1, L_2, NULL);
		return ((int32_t)il2cpp_codegen_add(L_0, L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Table___indirect_mB9CB22F7A6F5D31EB3D07646F31BDE06AFF3BB86_AdjustorThunk (RuntimeObject* __this, int32_t ___offset0, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Table___indirect_mB9CB22F7A6F5D31EB3D07646F31BDE06AFF3BB86(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// System.Int32 FlatBuffers.Table::__indirect(System.Int32,FlatBuffers.ByteBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table___indirect_mBD4F8222FB0BAE3A58B8FD59B55D907F954DBE6D (int32_t ___offset0, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___bb1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_1 = ___bb1;
		int32_t L_2 = ___offset0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_1, L_2, NULL);
		return ((int32_t)il2cpp_codegen_add(L_0, L_3));
	}
}
// System.String FlatBuffers.Table::__string(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Table___string_m98D5C3DE4F2181B6949B6453EEB3D946E65B587D (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___offset0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___offset0;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_1;
		L_1 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		int32_t L_2 = ___offset0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_1, L_2, NULL);
		___offset0 = ((int32_t)il2cpp_codegen_add(L_0, L_3));
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_4;
		L_4 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		int32_t L_5 = ___offset0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_4, L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = ___offset0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 4));
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_8;
		L_8 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = ByteBuffer_GetStringUTF8_m03913BCD0AE7D2A2EE15CF7CEA6B2E269D143668(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  String_t* Table___string_m98D5C3DE4F2181B6949B6453EEB3D946E65B587D_AdjustorThunk (RuntimeObject* __this, int32_t ___offset0, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Table___string_m98D5C3DE4F2181B6949B6453EEB3D946E65B587D(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// System.Int32 FlatBuffers.Table::__vector_len(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table___vector_len_mB1B31BC661699FB507535610BEAE8116DB23D1E4 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___offset0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		int32_t L_1;
		L_1 = Table_get_bb_pos_m545E7278AFDFB85EC02C6D9A585E15536DF9D84C_inline(__this, NULL);
		___offset0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___offset0;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_3;
		L_3 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		int32_t L_4 = ___offset0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_3, L_4, NULL);
		___offset0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_6;
		L_6 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		int32_t L_7 = ___offset0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t Table___vector_len_mB1B31BC661699FB507535610BEAE8116DB23D1E4_AdjustorThunk (RuntimeObject* __this, int32_t ___offset0, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Table___vector_len_mB1B31BC661699FB507535610BEAE8116DB23D1E4(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// System.Int32 FlatBuffers.Table::__vector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table___vector_m7898454CDD1EEFF2844E76CE368C0331E9F50120 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___offset0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		int32_t L_1;
		L_1 = Table_get_bb_pos_m545E7278AFDFB85EC02C6D9A585E15536DF9D84C_inline(__this, NULL);
		___offset0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___offset0;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_3;
		L_3 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		int32_t L_4 = ___offset0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_3, L_4, NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_2, L_5)), 4));
	}
}
IL2CPP_EXTERN_C  int32_t Table___vector_m7898454CDD1EEFF2844E76CE368C0331E9F50120_AdjustorThunk (RuntimeObject* __this, int32_t ___offset0, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Table___vector_m7898454CDD1EEFF2844E76CE368C0331E9F50120(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// System.Nullable`1<System.ArraySegment`1<System.Byte>> FlatBuffers.Table::__vector_as_arraysegment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5 Table___vector_as_arraysegment_m1B590BF61D93AF2911C24B71180B47190F7B4868 (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___offset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m59DE31F2A332C821208E5845619E2D9C2C293D0C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___offset0;
		int32_t L_1;
		L_1 = Table___offset_m14AD47D1A5FE2C26B61D018DD45272E48396190D(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5));
		Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5 L_3 = V_3;
		return L_3;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Table___vector_m7898454CDD1EEFF2844E76CE368C0331E9F50120(__this, L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = Table___vector_len_mB1B31BC661699FB507535610BEAE8116DB23D1E4(__this, L_6, NULL);
		V_2 = L_7;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_8;
		L_8 = Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline(__this, NULL);
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_11;
		L_11 = ByteBuffer_ToArraySegment_m27386FE4DD6EB446A2E259B2B2B60EAE4B846578(L_8, L_9, L_10, NULL);
		Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Nullable_1__ctor_m59DE31F2A332C821208E5845619E2D9C2C293D0C((&L_12), L_11, /*hidden argument*/Nullable_1__ctor_m59DE31F2A332C821208E5845619E2D9C2C293D0C_RuntimeMethod_var);
		return L_12;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5 Table___vector_as_arraysegment_m1B590BF61D93AF2911C24B71180B47190F7B4868_AdjustorThunk (RuntimeObject* __this, int32_t ___offset0, const RuntimeMethod* method)
{
	Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184*>(__this + _offset);
	Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5 _returnValue;
	_returnValue = Table___vector_as_arraysegment_m1B590BF61D93AF2911C24B71180B47190F7B4868(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// System.Boolean FlatBuffers.Table::__has_identifier(FlatBuffers.ByteBuffer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Table___has_identifier_mC28A292BDBE990B762F131370CA88B8837A17CBE (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___bb0, String_t* ___ident1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___ident1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = 4;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEF5ED2B8C034CC48222B60B179CC4F0F1E66634)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral199E4FFB39C13BBE1FDA495B03AF558B41481909)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Table___has_identifier_mC28A292BDBE990B762F131370CA88B8837A17CBE_RuntimeMethod_var)));
	}

IL_0024:
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0028:
	{
		String_t* L_6 = ___ident1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_9 = ___bb0;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_10 = ___bb0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ByteBuffer_get_Position_m555C6B2D9D3C8A99438DC1E5537591883E769432_inline(L_10, NULL);
		int32_t L_12 = V_0;
		NullCheck(L_9);
		uint8_t L_13;
		L_13 = ByteBuffer_Get_m34C82639D0DD9AE3DEA4FF2F975B9545CF88E3FC(L_9, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_11, 4)), L_12)), NULL);
		if ((((int32_t)L_8) == ((int32_t)L_13)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0043:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0047:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}
}
// System.Int32 FlatBuffers.Table::CompareStrings(System.Int32,System.Int32,FlatBuffers.ByteBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table_CompareStrings_mC573123740BE63BE45B3A6C68D1584925B438189 (int32_t ___offset_10, int32_t ___offset_21, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___bb2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	uint8_t V_7 = 0x0;
	{
		int32_t L_0 = ___offset_10;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_1 = ___bb2;
		int32_t L_2 = ___offset_10;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_1, L_2, NULL);
		___offset_10 = ((int32_t)il2cpp_codegen_add(L_0, L_3));
		int32_t L_4 = ___offset_21;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_5 = ___bb2;
		int32_t L_6 = ___offset_21;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_5, L_6, NULL);
		___offset_21 = ((int32_t)il2cpp_codegen_add(L_4, L_7));
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_8 = ___bb2;
		int32_t L_9 = ___offset_10;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_8, L_9, NULL);
		V_0 = L_10;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_11 = ___bb2;
		int32_t L_12 = ___offset_21;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_11, L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = ___offset_10;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 4));
		int32_t L_15 = ___offset_21;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 4));
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_16, L_17, NULL);
		V_4 = L_18;
		V_5 = 0;
		goto IL_0066;
	}

IL_003c:
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_19 = ___bb2;
		int32_t L_20 = V_5;
		int32_t L_21 = V_2;
		NullCheck(L_19);
		uint8_t L_22;
		L_22 = ByteBuffer_Get_m34C82639D0DD9AE3DEA4FF2F975B9545CF88E3FC(L_19, ((int32_t)il2cpp_codegen_add(L_20, L_21)), NULL);
		V_6 = L_22;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_23 = ___bb2;
		int32_t L_24 = V_5;
		int32_t L_25 = V_3;
		NullCheck(L_23);
		uint8_t L_26;
		L_26 = ByteBuffer_Get_m34C82639D0DD9AE3DEA4FF2F975B9545CF88E3FC(L_23, ((int32_t)il2cpp_codegen_add(L_24, L_25)), NULL);
		V_7 = L_26;
		uint8_t L_27 = V_6;
		uint8_t L_28 = V_7;
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_0060;
		}
	}
	{
		uint8_t L_29 = V_6;
		uint8_t L_30 = V_7;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)L_30));
	}

IL_0060:
	{
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0066:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
// System.Int32 FlatBuffers.Table::CompareStrings(System.Int32,System.Byte[],FlatBuffers.ByteBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Table_CompareStrings_m87D15959E0E671B449145CAAD879A052A675895F (int32_t ___offset_10, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___bb2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	{
		int32_t L_0 = ___offset_10;
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_1 = ___bb2;
		int32_t L_2 = ___offset_10;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_1, L_2, NULL);
		___offset_10 = ((int32_t)il2cpp_codegen_add(L_0, L_3));
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_4 = ___bb2;
		int32_t L_5 = ___offset_10;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = ByteBuffer_GetInt_m7F3800199AC370ACE0163E111CD1879EDA27F0EC(L_4, L_5, NULL);
		V_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___key1;
		NullCheck(L_7);
		V_1 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		int32_t L_8 = ___offset_10;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 4));
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_9, L_10, NULL);
		V_3 = L_11;
		V_4 = 0;
		goto IL_004a;
	}

IL_0028:
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_12 = ___bb2;
		int32_t L_13 = V_4;
		int32_t L_14 = V_2;
		NullCheck(L_12);
		uint8_t L_15;
		L_15 = ByteBuffer_Get_m34C82639D0DD9AE3DEA4FF2F975B9545CF88E3FC(L_12, ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
		V_5 = L_15;
		uint8_t L_16 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___key1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_16) == ((int32_t)L_20)))
		{
			goto IL_0044;
		}
	}
	{
		uint8_t L_21 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___key1;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_25));
	}

IL_0044:
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_004a:
	{
		int32_t L_27 = V_4;
		int32_t L_28 = V_3;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		return ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteBufferAllocator_get_Length_mE2291B2C7C8F09122C6D398991CB122549168B06_inline (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBufferAllocator_set_Length_mDC66546FC7CCEFCB94389326174BDBB0BE0CDF04_inline (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLengthU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBufferAllocator_set_Buffer_mFA0311046887E82886ADDC5A64ABD4B0C96F70F3_inline (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CBufferU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBufferU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteBuffer_get_Position_m555C6B2D9D3C8A99438DC1E5537591883E769432_inline (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBufferAllocator_get_Buffer_m8159C647261A7DA0B2ABA889034F9716BCF6AC14_inline (ByteBufferAllocator_tC6B2DA01EB94B75A6480FAB1BD2F36AAB63957C6* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CBufferU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VectorOffset__ctor_m85FEC438EF81171B324D7C82D0FC26DAFAE1B3F9_inline (VectorOffset_t06A7EFA11E476235DAEC0555F37CE058020EFDB7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___Value_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlatBufferBuilder_get_ForceDefaults_mCFC67892E55CF9F65EE51BEAA35359424D9D3EE7_inline (FlatBufferBuilder_t49C58AE4F823C25436E502B31EAF4B8A95774EA8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CForceDefaultsU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringOffset__ctor_mB4911A2248132F3DD037CCD12BCA8504A11BFA38_inline (StringOffset_t99522D495018D157BB2DDB0FA484BD54D8C72567* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___Value_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuffer_set_Position_mE29BEDE72B66A0DEA211C82B512D7505F797D246_inline (ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____pos_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Struct_get_bb_pos_m82A17FCD325212F0B750AB24A84C7E11C53C4958_inline (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3Cbb_posU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Struct_set_bb_pos_m7260ED755B284ED3897596BAD71EA793FE2CF01A_inline (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3Cbb_posU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* Struct_get_bb_m72B24D9FA8A59A4C3D4CCB1B58D56B4E1C47A0D2_inline (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->___U3CbbU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Struct_set_bb_mE21699C8E659C0B3236A372A952CD5576DC424FA_inline (Struct_tBC11BEDB03422D98F163C51C3D4F62F336C7E129* __this, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___value0, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = ___value0;
		__this->___U3CbbU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbbU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Table_get_bb_pos_m545E7278AFDFB85EC02C6D9A585E15536DF9D84C_inline (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3Cbb_posU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Table_set_bb_pos_mD8BF0235A8E81947A5D6DA3A8886D283FBF02607_inline (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3Cbb_posU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* Table_get_bb_m8EB6C5D752AA4B92B3EA4CC02B848EC4E637FAD7_inline (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = __this->___U3CbbU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Table_set_bb_m456A85E473B834DC861FE104253F9C64FD9D3DF3_inline (Table_t9D5CEBA9829F6A99A79AC5A5C7D56BD3E2523184* __this, ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* ___value0, const RuntimeMethod* method) 
{
	{
		ByteBuffer_t08D42FC45774ECF4173B3425A36D230AE2422687* L_0 = ___value0;
		__this->___U3CbbU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbbU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
