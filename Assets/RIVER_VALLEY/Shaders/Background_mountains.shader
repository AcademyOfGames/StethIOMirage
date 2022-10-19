Shader "URP/2Bumped Specular"
{
	Properties {
		[MainTexture] _BaseMap("Base Map (RGB) Smoothness / Alpha (A)", 2D) = "white" {}
		[MainColor]   _BaseColor("Base Color", Color) = (1, 1, 1, 1)		

		[Space(20)]		
		_Smoothness("Smoothness", Range(0.0, 1.0)) = 0.5
		_SpecColor("Specular Color", Color) = (0.5, 0.5, 0.5, 0.5)

		[Space(20)]		
		[NoScaleOffset] _BumpMap("Normal Map", 2D) = "bump" {}
		_BumpScale("Bump Scale", Float) = 1

		[Space(20)]
		[Toggle(_OCCLUSIONMAP)] _OcclusionToggle ("Use Occlusion Map", Float) = 0
		[NoScaleOffset] _OcclusionMap("Occlusion Map", 2D) = "bump" {}
		_OcclusionStrength("Occlusion Strength", Range(0.0, 1.0)) = 1.0

		[Space(20)]
		[Toggle(_EMISSION)] _Emission ("Emission", Float) = 0
		[HDR] _EmissionColor("Emission Color", Color) = (0,0,0)
		[NoScaleOffset]_EmissionMap("Emission Map", 2D) = "black" {}

		[Space(20)]
		[Toggle(_SPECULARHIGHLIGHTS_OFF)] _SpecularHighlights("Turn Specular Highlights Off", Float) = 0
		[Toggle(_ENVIRONMENTREFLECTIONS_OFF)] _EnvironmentalReflections("Turn Environmental Reflections Off", Float) = 0	
		
		[Space(20)]	
		_Shininess ("Shininess", Range (0.03, 1)) = 0.078125
		_Blur("Blur", Range(0.01, 1)) = 0.02
		
		_Mask("Mask (RGBA)", 2D) = "red" {}
		_Splat3("Snow (a)", 2D) = "black" {}
		_Splat2("Stone (B)", 2D) = "black" {}
		_Splat1("Cliff (G)", 2D) = "black" {}
		_Splat0("Grass (R)", 2D) = "white" {}

		_Normal3("SnowN (A)", 2D) = "bump" {}
		_Normal2("StonesN (B)", 2D) = "bump" {}
		_Normal1("CliffN (G)", 2D) = "bump" {}
		_Normal0("GrassN (R)", 2D) = "bump" {}
		
		_HeightSplatAll("Grass(R) Cliff(G) Stones(B) Snow(a)", 2D) = "black" {}	
	}
	SubShader {
		Tags {
			"RenderPipeline"="UniversalPipeline"
			"RenderType"="Opaque"
			"Queue"="Geometry"
		}
		
		LOD 400

		HLSLINCLUDE
		#include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

		CBUFFER_START(UnityPerMaterial)
		float4 _BaseMap_ST;
		float4 _BaseColor;
		float4 _EmissionColor;
		float4 _SpecColor;

		float4 _Mask_ST;
		float4 _BumpMap_ST;
		float4 _HeightSplatAll_ST;		
		
		float4 _Splat0_ST;
		float4 _Splat1_ST;
		float4 _Splat2_ST;
		float4 _Splat3_ST;
		
		float4 _Normal0_ST;
		float4 _Normal1_ST;
		float4 _Normal2_ST;
		float4 _Normal3_ST;
		
		float _Smoothness;
		float _OcclusionStrength;
		float _BumpScale;
		float _Shininess;
		float _Blur;		
		CBUFFER_END
		ENDHLSL

		Pass {
			Name "ForwardLit"
			Tags { "LightMode"="UniversalForward" }			
			
			HLSLPROGRAM

			#define _NORMALMAP
			#define _SPECULAR_SETUP
			
			#pragma vertex LitPassVertex
			#pragma fragment LitPassFragment

		
			// Material Keywords
			#pragma shader_feature_local _NORMALMAP
			#pragma shader_feature_local_fragment _EMISSION
			#pragma shader_feature_local_fragment _OCCLUSIONMAP			

			#pragma shader_feature_local_fragment _SPECULARHIGHLIGHTS_OFF
			#pragma shader_feature_local_fragment _ENVIRONMENTREFLECTIONS_OFF
			#pragma shader_feature_local_fragment _SPECULAR_SETUP
			#pragma shader_feature_local _RECEIVE_SHADOWS_OFF

			// URP Keywords
			#pragma multi_compile _ _MAIN_LIGHT_SHADOWS
			#pragma multi_compile _ _MAIN_LIGHT_SHADOWS_CASCADE		

			#pragma multi_compile _ _ADDITIONAL_LIGHTS_VERTEX _ADDITIONAL_LIGHTS
			#pragma multi_compile_fragment _ _ADDITIONAL_LIGHT_SHADOWS
			#pragma multi_compile_fragment _ _SHADOWS_SOFT
			#pragma multi_compile_fragment _ _SCREEN_SPACE_OCCLUSION // v10+ only (for SSAO support)
			#pragma multi_compile _ LIGHTMAP_SHADOW_MIXING // v10+ only, renamed from "_MIXED_LIGHTING_SUBTRACTIVE"
			#pragma multi_compile _ SHADOWS_SHADOWMASK // v10+ only

			// Unity Keywords
			#pragma multi_compile _ LIGHTMAP_ON
			#pragma multi_compile _ DIRLIGHTMAP_COMBINED
			#pragma multi_compile_fog	
		
			TEXTURE2D(_Mask); 					SAMPLER(sampler_Mask);		
			TEXTURE2D(_HeightSplatAll); 		SAMPLER(sampler_HeightSplatAll);
			TEXTURE2D(_OcclusionMap); 			SAMPLER(sampler_OcclusionMap);
			TEXTURE2D(_Splat0); 				SAMPLER(sampler_Splat0);
			TEXTURE2D(_Splat1); 				SAMPLER(sampler_Splat1);
			TEXTURE2D(_Splat2); 				SAMPLER(sampler_Splat2);
			TEXTURE2D(_Splat3); 				SAMPLER(sampler_Splat3);		
			TEXTURE2D(_Normal0); 				SAMPLER(sampler_Normal0);
			TEXTURE2D(_Normal1); 				SAMPLER(sampler_Normal1);
			TEXTURE2D(_Normal2); 				SAMPLER(sampler_Normal2);
			TEXTURE2D(_Normal3); 				SAMPLER(sampler_Normal3);

			// ---------------------------------------------------------------------------
			// Structs
			// ---------------------------------------------------------------------------

			#include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Lighting.hlsl"			
			
			struct Attributes {
				float4 positionOS	: POSITION;		
				float4 tangentOS 	: TANGENT;
				float4 normalOS		: NORMAL;
				float2 uv		    : TEXCOORD0;
				float2 lightmapUV	: TEXCOORD1;
				float4 color		: COLOR;
			};

			struct Varyings {
				float4 positionCS 					: SV_POSITION;
				float2 uv		    				: TEXCOORD0;
				DECLARE_LIGHTMAP_OR_SH(lightmapUV, vertexSH, 1);
				float3 positionWS					: TEXCOORD2;
			
				half4 normalWS						: TEXCOORD3;    // xyz: normal, w: viewDir.x
				half4 tangentWS						: TEXCOORD4;    // xyz: tangent, w: viewDir.y
				half4 bitangentWS					: TEXCOORD5;    // xyz: bitangent, w: viewDir.z	
				
				#ifdef _ADDITIONAL_LIGHTS_VERTEX
					half4 fogFactorAndVertexLight	: TEXCOORD6; // x: fogFactor, yzw: vertex light
				#else
					half  fogFactor					: TEXCOORD6;
				#endif

				#if defined(REQUIRES_VERTEX_SHADOW_COORD_INTERPOLATOR)
					float4 shadowCoord 				: TEXCOORD7;
				#endif

				
				float2 uv_Splat0					: TEXCOORD8;
				float2 uv_Splat1					: TEXCOORD9;
				float2 uv_Splat2					: TEXCOORD10;
				float2 uv_Splat3					: TEXCOORD11;
				
				float2 uv_BumpMap					: TEXCOORD12;
				
				float4 color						: COLOR;
			};

			#include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/SurfaceInput.hlsl"
			#include "PBRInput.hlsl"

			// ---------------------------------------------------------------------------
			// Vertex Shader
			// ---------------------------------------------------------------------------

			Varyings LitPassVertex(Attributes IN) {
				Varyings OUT = (Varyings)0;

				VertexPositionInputs positionInputs = GetVertexPositionInputs(IN.positionOS.xyz);
				VertexNormalInputs normalInputs = GetVertexNormalInputs(IN.normalOS.xyz, IN.tangentOS);			

				OUT.positionCS = positionInputs.positionCS;
				OUT.positionWS = positionInputs.positionWS;

				half3 viewDirWS = GetWorldSpaceViewDir(positionInputs.positionWS);
				half3 vertexLight = VertexLighting(positionInputs.positionWS, normalInputs.normalWS);
				half fogFactor = ComputeFogFactor(positionInputs.positionCS.z);				
				
				OUT.normalWS = half4(normalInputs.normalWS, viewDirWS.x);
				OUT.tangentWS = half4(normalInputs.tangentWS, viewDirWS.y);
				OUT.bitangentWS = half4(normalInputs.bitangentWS, viewDirWS.z);				

				OUTPUT_LIGHTMAP_UV(IN.lightmapUV, unity_LightmapST, OUT.lightmapUV);
				OUTPUT_SH(OUT.normalWS.xyz, OUT.vertexSH);

				#ifdef _ADDITIONAL_LIGHTS_VERTEX
					OUT.fogFactorAndVertexLight = half4(fogFactor, vertexLight);
				#else
					OUT.fogFactor = fogFactor;
				#endif

				#if defined(REQUIRES_VERTEX_SHADOW_COORD_INTERPOLATOR)
					OUT.shadowCoord = GetShadowCoord(positionInputs);
				#endif

				OUT.uv = TRANSFORM_TEX(IN.uv, _BaseMap);
				OUT.uv_Splat0 = TRANSFORM_TEX(IN.uv, _Splat0);
            	OUT.uv_Splat1 = TRANSFORM_TEX(IN.uv, _Splat1);
            	OUT.uv_Splat2 = TRANSFORM_TEX(IN.uv, _Splat2);
            	OUT.uv_Splat3 = TRANSFORM_TEX(IN.uv, _Splat3);
				OUT.uv_BumpMap = TRANSFORM_TEX(IN.uv, _BumpMap);
				OUT.color = IN.color;
				return OUT;
			}
			
			half SampleOcclusion(float2 uv)
			{
				#ifdef _OCCLUSIONMAP
				#if defined(SHADER_API_GLES)
					return SAMPLE_TEXTURE2D(_OcclusionMap, sampler_OcclusionMap, uv).g;
				#else
					half occ = SAMPLE_TEXTURE2D(_OcclusionMap, sampler_OcclusionMap, uv).g;
					return LerpWhiteTo(occ, _OcclusionStrength);
				#endif
				#else
					return 1.0;
				#endif
			}
			
			// ---------------------------------------------------------------------------
			// Fragment Shader
			// ---------------------------------------------------------------------------
			half4 LitPassFragment(Varyings IN) : SV_Target {
				// Setup SurfaceData
				SurfaceData surfaceData = (SurfaceData)0;

				float4 ColorTex = SAMPLE_TEXTURE2D(_BaseMap, sampler_BaseMap, IN.uv);
				float4 MaskTex = SAMPLE_TEXTURE2D(_Mask, sampler_Mask, IN.uv);            

				float4 Detail0 = SAMPLE_TEXTURE2D(_Splat0, sampler_Splat0, IN.uv_Splat0) * ColorTex * _BaseColor;
				float4 Detail1 = SAMPLE_TEXTURE2D(_Splat1, sampler_Splat1, IN.uv_Splat1) * ColorTex * _BaseColor;
				float4 Detail2 = SAMPLE_TEXTURE2D(_Splat2, sampler_Splat2, IN.uv_Splat2) * _BaseColor;
				float4 Detail3 = SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3);

				float4 HeightSplatTex1 = SAMPLE_TEXTURE2D(_HeightSplatAll,sampler_HeightSplatAll, IN.uv_Splat0).r;
				float4 HeightSplatTex2 = SAMPLE_TEXTURE2D(_HeightSplatAll,sampler_HeightSplatAll, IN.uv_Splat1).g;
				float4 HeightSplatTex3 = SAMPLE_TEXTURE2D(_HeightSplatAll,sampler_HeightSplatAll, IN.uv_Splat2).b;
				float4 HeightSplatTex4 = SAMPLE_TEXTURE2D(_HeightSplatAll,sampler_HeightSplatAll, IN.uv_Splat3).a;

				float a0 = MaskTex.r;
				float a1 = MaskTex.g;
				float a2 = MaskTex.b;
				float a3 = MaskTex.a;

				float ma = (max(max(max(HeightSplatTex1.rgb + a0, HeightSplatTex2.rgb + a1), HeightSplatTex3.rgb + a2), HeightSplatTex4.rgb + a3)) - _Blur;

				float b0 = max(HeightSplatTex1.rgb + a0 - ma, 0);
				float b1 = max(HeightSplatTex2.rgb + a1 - ma, 0);
				float b2 = max(HeightSplatTex3.rgb + a2 - ma, 0);
				float b3 = max(HeightSplatTex4.rgb + a3 - ma, 0);

				float4 texture0 = Detail0;
				float4 texture1 = Detail1;
				float4 texture2 = Detail2;
				float4 texture3 = Detail3;
            	
				float4 tex = (texture0 * b0 + texture1 * b1 + texture2 * b2 + texture3 * b3) / (b0 + b1 + b2 + b3);			        	
            	
				texture0 = SAMPLE_TEXTURE2D(_Normal0,sampler_Normal0, IN.uv_Splat0);
				texture1 = SAMPLE_TEXTURE2D(_Normal1,sampler_Normal1, IN.uv_Splat1);
				texture2 = SAMPLE_TEXTURE2D(_Normal2,sampler_Normal2, IN.uv_Splat2);
				texture3 = SAMPLE_TEXTURE2D(_Normal3,sampler_Normal3, IN.uv_Splat3);
				float4 mixnormal = (texture0 * b0 + texture1 * b1 + texture2 * b2 + texture3 * b3) / (b0 + b1 + b2 + b3);

				
				half3 Normal = normalize(UnpackNormal(mixnormal) * 1.5 + SampleNormal(IN.uv_BumpMap, TEXTURE2D_ARGS(_BumpMap, sampler_BumpMap), _BumpScale) * 3);

				surfaceData.albedo = tex  * IN.color.rgb;
				surfaceData.normalTS = Normal;			
				surfaceData.emission = SampleEmission(IN.uv, _EmissionColor.rgb, TEXTURE2D_ARGS(_EmissionMap, sampler_EmissionMap));
				surfaceData.occlusion = SampleOcclusion(IN.uv);
				
				surfaceData.metallic = 1.0h; //specular set
				surfaceData.specular = _SpecColor.rgb;
				surfaceData.smoothness = _Shininess;

				// Setup InputData
				InputData inputData;
				InitializeInputData(IN, surfaceData.normalTS, inputData);
				
				half4 color = UniversalFragmentPBR(inputData, surfaceData);

				// Fog
				color.rgb = MixFog(color.rgb, inputData.fogCoord);			
				return color;
			}
			ENDHLSL
		}
	}
}