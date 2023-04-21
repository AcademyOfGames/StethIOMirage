#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410 (void);
// 0x00000002 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile_Internal(System.String,System.UInt32,System.UInt64)
extern void AssetBundle_LoadFromFile_Internal_m806E92FA35F9FF7F9868058055FB347B9E35BD74 (void);
// 0x00000003 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
extern void AssetBundle_LoadFromFile_mAFD7B0E8F0A0A88E9BB60180EBA0A99B8B3F2629 (void);
// 0x00000004 UnityEngine.AssetBundleCreateRequest UnityEngine.AssetBundle::LoadFromMemoryAsync_Internal(System.Byte[],System.UInt32)
extern void AssetBundle_LoadFromMemoryAsync_Internal_m9D90D48F46D71E441B4A19659C9004EF40E9CD1B (void);
// 0x00000005 UnityEngine.AssetBundleCreateRequest UnityEngine.AssetBundle::LoadFromMemoryAsync(System.Byte[])
extern void AssetBundle_LoadFromMemoryAsync_mDDA8EC114E4097156F40C337B45837872998348F (void);
// 0x00000006 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String)
extern void AssetBundle_LoadAsset_m25926A405F3AB79A4DF2447F23A09957EC7F063E (void);
// 0x00000007 T UnityEngine.AssetBundle::LoadAsset(System.String)
// 0x00000008 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern void AssetBundle_LoadAsset_m021FE0B52DD660E54AE4C225D9AE66147902B8FE (void);
// 0x00000009 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern void AssetBundle_LoadAsset_Internal_mD096392756815901FE982C1AF64DDF0846551433 (void);
// 0x0000000A UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetAsync(System.String,System.Type)
extern void AssetBundle_LoadAssetAsync_mDAE70E6DD6F9D5360A5D0C7A74F3989174C2FEDB (void);
// 0x0000000B UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetAsync_Internal(System.String,System.Type)
extern void AssetBundle_LoadAssetAsync_Internal_m2F3749CA103E883447AE6629E342D4C0D39A2FBE (void);
// 0x0000000C System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern void AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B (void);
// 0x0000000D System.String[] UnityEngine.AssetBundle::GetAllAssetNames()
extern void AssetBundle_GetAllAssetNames_m44504DB9E055412F0DF2071A769A243219708CC3 (void);
// 0x0000000E System.String[] UnityEngine.AssetBundle::GetAllScenePaths()
extern void AssetBundle_GetAllScenePaths_m75D1CD4415067D64A8265A7929B6FF76B91B62FE (void);
// 0x0000000F UnityEngine.Object UnityEngine.AssetBundleRequest::GetResult()
extern void AssetBundleRequest_GetResult_mC1C60D584906835F86BF82C44E8B62B6EB9171D6 (void);
// 0x00000010 UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
extern void AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C (void);
// 0x00000011 System.Void UnityEngine.AssetBundleRequest::.ctor()
extern void AssetBundleRequest__ctor_mD73743E1532E41D8AD2871C00A7FCDA5157171C0 (void);
// 0x00000012 UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
extern void AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21 (void);
// 0x00000013 System.Void UnityEngine.AssetBundleCreateRequest::.ctor()
extern void AssetBundleCreateRequest__ctor_mAD1A6314795AC1B548A29A32E01815D33B6D0B46 (void);
static Il2CppMethodPointer s_methodPointers[19] = 
{
	AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410,
	AssetBundle_LoadFromFile_Internal_m806E92FA35F9FF7F9868058055FB347B9E35BD74,
	AssetBundle_LoadFromFile_mAFD7B0E8F0A0A88E9BB60180EBA0A99B8B3F2629,
	AssetBundle_LoadFromMemoryAsync_Internal_m9D90D48F46D71E441B4A19659C9004EF40E9CD1B,
	AssetBundle_LoadFromMemoryAsync_mDDA8EC114E4097156F40C337B45837872998348F,
	AssetBundle_LoadAsset_m25926A405F3AB79A4DF2447F23A09957EC7F063E,
	NULL,
	AssetBundle_LoadAsset_m021FE0B52DD660E54AE4C225D9AE66147902B8FE,
	AssetBundle_LoadAsset_Internal_mD096392756815901FE982C1AF64DDF0846551433,
	AssetBundle_LoadAssetAsync_mDAE70E6DD6F9D5360A5D0C7A74F3989174C2FEDB,
	AssetBundle_LoadAssetAsync_Internal_m2F3749CA103E883447AE6629E342D4C0D39A2FBE,
	AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B,
	AssetBundle_GetAllAssetNames_m44504DB9E055412F0DF2071A769A243219708CC3,
	AssetBundle_GetAllScenePaths_m75D1CD4415067D64A8265A7929B6FF76B91B62FE,
	AssetBundleRequest_GetResult_mC1C60D584906835F86BF82C44E8B62B6EB9171D6,
	AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C,
	AssetBundleRequest__ctor_mD73743E1532E41D8AD2871C00A7FCDA5157171C0,
	AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21,
	AssetBundleCreateRequest__ctor_mAD1A6314795AC1B548A29A32E01815D33B6D0B46,
};
static const int32_t s_InvokerIndices[19] = 
{
	11534,
	14544,
	17648,
	15840,
	17648,
	8312,
	0,
	4345,
	4345,
	4345,
	4345,
	9098,
	11337,
	11337,
	11337,
	11337,
	11534,
	11337,
	11534,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000007, { 0, 2 } },
};
extern const uint32_t g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57;
extern const uint32_t g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	19,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
