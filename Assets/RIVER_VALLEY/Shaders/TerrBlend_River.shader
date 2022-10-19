Shader "URP/Terrain/TerrBlend_River"
{
	Properties {
		[Space(20)]
		[Toggle(_OCCLUSIONMAP)] _OcclusionToggle ("Use Occlusion Map", Float) = 0
		[NoScaleOffset] _OcclusionMap("Occlusion Map", 2D) = "bump" {}
		_OcclusionStrength("Occlusion Strength", Range(0.0, 1.0)) = 1.0

		[Space(20)]
		[Toggle(_SPECULARHIGHLIGHTS_OFF)] _SpecularHighlights("Turn Specular Highlights Off", Float) = 0
		[Toggle(_ENVIRONMENTREFLECTIONS_OFF)] _EnvironmentalReflections("Turn Environmental Reflections Off", Float) = 0	
		
		[Space(20)]	
		_SnowAdd("Add_snow_peak", Range(-0.93, 0.43)) = 0
		_SnowAdd2("Add_snow_field", Range(0, 1)) = 0
		_Color ("Main Color", Color) = (1,1,1,1)
		_ColorGrass0 ("Grass0", Color) = (1,1,1,1)
		_ColorGrass1 ("Grass1", Color) = (1,1,1,1)
		_ColorGrass2 ("Grass2", Color) = (1,1,1,1)
		_ColorGrass3 ("Grass_snow", Color) = (1,1,1,1)
		_OldGrass("OldGrass", Range(3, 200)) = 14
		_OldGrass2("OldGrass2", Range(3, 200)) = 14
		_ColorStones1 ("Stones1", Color) = (1,1,1,1)

		_SpecColor ("Specular Color", Color) = (0.5, 0.5, 0.5, 1)
		_Shininess ("Shininess", Range (0.01, 0.2)) = 0.01
		
		[MainTexture] _BaseMap("ColorMap (RGB)", 2D) = "black" {}
		
		[HideInInspector] _Control ("Control (RGBA)", 2D) = "red" {}
		_Mask1 ("Mask1 (RGBA)", 2D) = "red" {}
		[HideInInspector] _Splat3 ("Layer 3 (A)", 2D) = "black" {}
		[HideInInspector] _Splat2 ("Layer 2 (B)", 2D) = "black" {}
		[HideInInspector] _Splat1 ("Layer 1 (G)", 2D) = "black" {}
		[HideInInspector] _Splat0 ("Layer 0 (R)", 2D) = "white" {}
		[HideInInspector] _Normal3 ("Normal 3 (A)", 2D) = "bump" {}
		[HideInInspector] _Normal2 ("Normal 2 (B)", 2D) = "bump" {}
		[HideInInspector] _Normal1 ("Normal 1 (G)", 2D) = "bump" {}
		[HideInInspector] _Normal0 ("Normal 0 (R)", 2D) = "bump" {}		
		
		_Tiling ("Tiling", Range (0.01, 80)) = 0.05
		
		_HeightSplatAll ("Grass(R) Cliff(G) Stones(B) Snow(a)", 2D) = "black" {}
		_Parallax ("Height", Range (0.005, 0.08)) = 0.02
		
		_Cube ("Reflection Cubemap", Cube) = "" {}
		_ReflectColor ("Reflection Color", Color) = (1,1,1,0.5)	
	}
	SubShader {
		Tags {
			"RenderPipeline"="UniversalPipeline"
			"RenderType"="Opaque"
			"Queue" = "Geometry-100"
			"TerrainCompatible"="True"
		}

		HLSLINCLUDE
		#include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
		
		CBUFFER_START(UnityPerMaterial)
		float4 _Cube_ST;
		float4 _BaseMap_ST;
		float4 _EmissionColor;
		float4 _SpecColor;

		float4 _Mask1_ST;
		float4 _HeightSplatAll_ST;		
		
		float4 _Splat0_ST;
		float4 _Splat1_ST;
		float4 _Splat2_ST;
		float4 _Splat3_ST;
	
		half _OcclusionStrength;		
		half _Parallax;

		half4 _Color;
		half4 _ColorGrass1;
		half4 _ColorGrass0;
		half4 _ColorGrass2;
		half4 _ColorGrass3;
		half4 _ColorStones1;
		half _OldGrass;
		half _OldGrass2;
		half _StoneAdd;
		half _GrassAdd;
		half _SnowAdd;
		half _SnowAdd2;
		half _Shininess;
		half _Tiling;		
		CBUFFER_END
		
		ENDHLSL

		Pass {
			Name "ForwardLit"
			Tags { "LightMode"="UniversalForward" }

			HLSLPROGRAM

			#undef _NORMALMAP
			#define _SPECULAR_SETUP
			
			#pragma vertex LitPassVertex
			#pragma fragment LitPassFragment

			// Material Keywords			
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
			
			TEXTURE2D(_Control); 				SAMPLER(sampler_Control);
			TEXTURE2D(_Mask1); 					SAMPLER(sampler_Mask1);
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
			
			TEXTURECUBE(_Cube);					SAMPLER(sampler_Cube);


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
				half3 worldViewDir					: TEXCOORD4;
				half3 worldRefl						: TEXCOORD5;
				
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
				
				float2 uv_Mask1						: TEXCOORD13;
				
				
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
				OUT.uv_Mask1 = TRANSFORM_TEX(IN.uv, _Mask1);

				OUT.worldViewDir = viewDirWS;
				OUT.worldRefl = reflect(-viewDirWS, normalInputs.normalWS);			
				
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

			// Calculates UV offset for parallax bump mapping
			// inline float2 ParallaxOffset( half h, half height, half3 viewDir )
			// {
			//     h = h * height - height/2.0;
			//     float3 v = normalize(viewDir);
			//     v.z += 0.42;
			//     return h * (v.xy / v.z);
			// }
			
			// ---------------------------------------------------------------------------
			// Fragment Shader
			// ---------------------------------------------------------------------------
			
			half4 LitPassFragment(Varyings IN) : SV_Target {
				// Setup SurfaceData
				SurfaceData surfaceData = (SurfaceData)0;				

				//half3 viewDirWS = TransformWorldToObject(GetCameraPositionWS());

				float3 Normal = float3(0, 0, 1);
				float3 worldNormal = normalize(mul(Normal, (float3x3)unity_WorldToObject));
				float3 projNormal = saturate(pow(worldNormal * 1.4, 30));
				//float2 invertY = float2(1, -1);

				//half4 h = SAMPLE_TEXTURE2D(_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat3).a;
				//float2 offset = ParallaxOffset (h, _Parallax, viewDirWS);
				//IN.uv_Splat3 += offset*5;
				
				//half4 hgrass = SAMPLE_TEXTURE2D(_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat0).r;
				//float2 offset1 = ParallaxOffset(hgrass, _Parallax, viewDirWS);
				//IN.uv_Splat0 += offset1 * 2;

				//half4 h2 = SAMPLE_TEXTURE2D(_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat1).g;
				//float2 offset2 = ParallaxOffset (h2, _Parallax, viewDirWS);
				//IN.uv_Splat1 += offset2*5;
				
				//half4 h3 = SAMPLE_TEXTURE2D(_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat2).b;
				//float2 offset3 = ParallaxOffset (h3, _Parallax, viewDirWS);
				//IN.uv_Splat2 += offset3*2;

				half4 ColorTex = SAMPLE_TEXTURE2D(_BaseMap, sampler_BaseMap, IN.uv_Mask1);
				half4 MaskTex = SAMPLE_TEXTURE2D(_Mask1, sampler_Mask1, IN.uv_Mask1);
				half4 ControlTex = SAMPLE_TEXTURE2D(_Control, sampler_Control, IN.uv_Mask1);

				//-------------------------------------------------------
				// SIDE X
				float4 x = SAMPLE_TEXTURE2D(_Splat1, sampler_Splat1,  frac(IN.positionWS.zy / _Tiling));
				float4 x_n = SAMPLE_TEXTURE2D(_Normal1, sampler_Normal1, frac(IN.positionWS.zy / _Tiling));
				// TOP / BOTTOM
				float4 y = SAMPLE_TEXTURE2D(_Splat1, sampler_Splat1,  frac(IN.positionWS.zx / _Tiling));
				float4 y_n = SAMPLE_TEXTURE2D(_Normal1, sampler_Normal1,  frac(IN.positionWS.zx / _Tiling));
				// SIDE Z    
				float4 z = SAMPLE_TEXTURE2D(_Splat1, sampler_Splat1,  frac(IN.positionWS.xy / _Tiling));
				float4 z_n = SAMPLE_TEXTURE2D(_Normal1, sampler_Normal1,  frac(IN.positionWS.xy / _Tiling));
				//-------------------------------------------------------

				half4 Detail0 = SAMPLE_TEXTURE2D (_Splat0, sampler_Splat0, IN.uv_Splat0);
				half4 Detail0_dots = SAMPLE_TEXTURE2D (_Splat0, sampler_Splat0, IN.uv_Splat0/2);
				half4 Detail1 = SAMPLE_TEXTURE2D (_Splat1, sampler_Splat1, IN.positionWS.zy / _Tiling);
				half4 Detail2 = SAMPLE_TEXTURE2D (_Splat2, sampler_Splat2, IN.uv_Splat2);
				half4 Detail2_2 = SAMPLE_TEXTURE2D (_Splat2, sampler_Splat2, IN.uv_Splat2);
				
				half4 Random_mask_1 = SAMPLE_TEXTURE2D (_Splat2, sampler_Splat2, IN.uv_Mask1);
				half4 Detail2_3 = SAMPLE_TEXTURE2D (_Splat1, sampler_Splat1, IN.uv_Splat2);
				half4 Detail3 = SAMPLE_TEXTURE2D (_Splat3, sampler_Splat3, IN.uv_Splat3);

				//Grass -----------------------------------------------
				float4 textureGrassWhite = SAMPLE_TEXTURE2D (_Splat0, sampler_Splat0, IN.uv_Splat0) * _ColorGrass1;
				float4 textureGrass0 = SAMPLE_TEXTURE2D (_Splat0, sampler_Splat0, IN.uv_Splat0) * _ColorGrass0;
				float4 textureGrass1 = SAMPLE_TEXTURE2D (_Splat0, sampler_Splat0, IN.uv_Splat0) * _ColorGrass1 * ColorTex;
				float4 textureGrass2 = SAMPLE_TEXTURE2D (_Splat2, sampler_Splat2, IN.uv_Splat0) * _ColorGrass2 ;
				float4 textureGrass3 = SAMPLE_TEXTURE2D (_Splat3, sampler_Splat3, IN.uv_Splat0) * _ColorGrass3;
				//Stones ----------------------------------------------
				float4 textureStones1 = SAMPLE_TEXTURE2D (_Splat2, sampler_Splat2, IN.uv_Splat2) * _ColorStones1;
				float4 textureStones2 = SAMPLE_TEXTURE2D (_Splat2, sampler_Splat2, IN.uv_Splat2);
				float4 textureStones3 = SAMPLE_TEXTURE2D (_Splat3, sampler_Splat3, IN.uv_Splat2);
				float4 textureStones4 = SAMPLE_TEXTURE2D (_Splat2, sampler_Splat2, IN.uv_Splat2);
				float4 textureStones5 = SAMPLE_TEXTURE2D (_Splat2, sampler_Splat2, IN.uv_Splat2) * ColorTex;

				float a_white = MaskTex.r * ((Detail0_dots.a)-Random_mask_1-Random_mask_1+0.13);
				float a00 = ((MaskTex.r * (Detail0.a) * ColorTex.a +MaskTex.a*0.5+MaskTex.b+MaskTex.b+MaskTex.b)+(((Random_mask_1*ColorTex.a)*1.5)-Random_mask_1.a*25));
				float a0 = MaskTex.r* MaskTex.r;
				float a1 = MaskTex.g + ControlTex.g;
				float a2 = ((MaskTex.b - 1 - MaskTex.g - MaskTex.r*2-MaskTex.r - MaskTex.a)+ColorTex.a);
				//water_1
				float a2_water = ((MaskTex.b*3-MaskTex.a*5-MaskTex.r*5-MaskTex.g)-MaskTex.r*50)*5;
				//SNOW_TOP
				float a3 = (((MaskTex.a/2 -_SnowAdd*1.6 + Random_mask_1.a + ControlTex.a-MaskTex.g-MaskTex.r-_GrassAdd-MaskTex.g*50+Random_mask_1-ControlTex.r)
						+Random_mask_1.a*0.8)*Random_mask_1.a*4+(1-Random_mask_1.a*4))-ColorTex.a*10;
				float a4 = 1-MaskTex.r;
				//SNOW_TOP_DUST
				float a5 = (MaskTex.a/2 -_SnowAdd*1.6 + Random_mask_1.a + ControlTex.a-MaskTex.r-_GrassAdd+Random_mask_1)*Random_mask_1.a*80*Random_mask_1.a*(Detail0);

				half4 HeightSplatTex1 = SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat0).r*1.4;
				half4 HeightSplatTex2 = SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat1).g;
				half4 HeightSplatTex3 = SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat2).b*1.2 +(1.14/20)*5;
				//half4 HeightSplatTex4 = SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat3 - offset).a -1.39 +(1.14/20)*1.4 *Random_mask_1.a*Random_mask_1.a*Random_mask_1.a;
				half4 HeightSplatTex4 =  SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat3).a -1.39 +(1.14/20)*1.4 *Random_mask_1.a*Random_mask_1.a*Random_mask_1.a;

				half4 HeightSplatGrass0 = SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat0).r * MaskTex.b;
				half4 HeightSplatGrass1 = SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat0).r*2 * (Detail0.a)+ _ColorGrass1.a;
				half4 HeightSplatGrass2 = SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat1).r + 0.72+ _ColorGrass2.a;
				half4 HeightSplatGrass3 = SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat1).r + 0.72+ _ColorGrass3.a;

				half4 HeightSplatStones1 = SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat1).b+ _ColorStones1.a;
				half4 HeightSplatStones2 = SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat2).b;
				half4 HeightSplatStones3 = SAMPLE_TEXTURE2D (_HeightSplatAll, sampler_HeightSplatAll, IN.uv_Splat3).b;
				float mgrass = (max(max(max(HeightSplatGrass0.rgb + a00, HeightSplatGrass1.rgb + a0), HeightSplatGrass2.rgb + a1*8), HeightSplatGrass3.rgb + a2*5)) - 0.15;

				float mStones = (max(max(HeightSplatStones1.rgb + a1, HeightSplatStones2.rgb + a2), HeightSplatStones3.rgb + a3)) - 0.01;

				float g_white = max(HeightSplatGrass0.rgb + a_white * _OldGrass2 - mgrass, 0);
				float g00 = max(HeightSplatGrass0.rgb + a00 * _OldGrass - mgrass, 0);
				float g0 = max(HeightSplatGrass1.rgb + a0 - mgrass, 0); 
			    float g1 = max(HeightSplatGrass2.rgb + a1 * 8 - mgrass, 0) + ControlTex.g;
			    float g2 = max(HeightSplatGrass2.rgb + a2 - mgrass, 0);
			    float g2_snow = max(HeightSplatGrass1.rgb + a5 *0.73 - mgrass, 0);

			    float s0 = max(HeightSplatStones1.rgb + a1 - mStones, 0);
			    float s1 = max(HeightSplatStones2.rgb + a2 - mStones, 0);
			    float s2 = max(HeightSplatStones3.rgb + a3 - mStones, 0);
			    float s3 = max(HeightSplatStones2.rgb + a4*3-a0-a1+a2-MaskTex.a*5 - mStones, 0);

				float4 GrassWhiteTex = textureGrassWhite;
				float4 Grass0Tex = textureGrass0;
			    float4 Grass1Tex = textureGrass1;
			    float4 Grass2Tex = textureGrass2;
			    float4 Grass3Tex = textureGrass3;

			    float4 Stones1Tex = textureStones1;
			    float4 Stones2Tex = textureStones2;
			    float4 Stones3Tex = textureStones3;
			    float4 Stones4Tex = textureStones4;
				float4 Stones5Tex = textureStones5;

			    half4 texGrass = (GrassWhiteTex * g_white + Grass0Tex * g00 +  Grass1Tex * g0 + Grass2Tex * g1 + Grass3Tex * g2_snow) / (g_white + g00 + g0 + g1 + g2_snow);

			    half4 texStones = (Stones1Tex * s0 + Stones2Tex * s1 + Stones3Tex * s2 + Stones4Tex * s3) / (s0 + s1 + s2 + s3);
				
			    float ma = (max(max(max(HeightSplatTex1.rgb + a0, HeightSplatTex2.rgb + a1), HeightSplatTex3.rgb + a2), HeightSplatTex4.rgb + a3)) - 0.01;

			    float b0 = max(HeightSplatTex1.rgb + a0 - ma, 0)*5;
			    float b1 = max(HeightSplatTex2.rgb + a1 - ma, 0)*50;
			    float b2 = max(HeightSplatTex3.rgb + a2 - ma, 0)*4;
			    float b3 = max(HeightSplatTex4.rgb + a3 - ma, 0)*50;
			    
				float b4 = max(HeightSplatTex3.rgb + ColorTex.a/9 +g0+ g1 - ma, 0);

				float b4_snow = _SnowAdd2 * max(HeightSplatTex2.rgb +((MaskTex.b*5*Random_mask_1.a*10)+(MaskTex.b*5*ControlTex.a))+(MaskTex.a+ColorTex.a-MaskTex.r)*0.77 - ma, 0)*(MaskTex.r+MaskTex.a);
				float b5 = (max(HeightSplatTex2.rgb + (a2_water)- ma, 0));
				float b6 = max(HeightSplatTex3.rgb - ma, 0);
			    
			    float Grass_snow = _SnowAdd2 * max(HeightSplatStones2.rgb*1.6 + (b4 - b0-MaskTex.b*100)*ControlTex.r - ma, 0);
			    float Ice_snow = _SnowAdd2 * max(HeightSplatStones2.rgb*MaskTex.a*20 + MaskTex.b*5*ControlTex.a-Random_mask_1*50-MaskTex.r*100 - ma, 0);
			    
			    float4 texture0 = texGrass;
			    float4 texture1 = SAMPLE_TEXTURE2D (_Splat1, sampler_Splat1, IN.positionWS.zx / _Tiling);
			    float4 texture2 = texStones;
			    float4 texture3 = Detail3;
				float4 texture4 = textureStones4;
				float4 texture5 = textureStones5;

			    half4 tex = (texture0 * b0 + texture1 * b1 + texture2 * b2 + texture3 * (b3+b4_snow+Grass_snow+Ice_snow) + texture4 * b4 + texture5 * b5 + texture2 * b6) / (b0 + b1 + b2 + (b3+b4_snow) + b4 + b5 + b6+Ice_snow);
			   
				texture0 = SAMPLE_TEXTURE2D (_Normal0, sampler_Normal0, IN.uv_Splat0);
				texture1 = SAMPLE_TEXTURE2D (_Normal1, sampler_Normal1, IN.positionWS.zx / _Tiling);
				texture2 = SAMPLE_TEXTURE2D (_Normal2, sampler_Normal2, IN.uv_Splat2);
				texture3 = SAMPLE_TEXTURE2D (_Normal3, sampler_Normal3, IN.uv_Splat3);
				
				float4 mixnormal = (texture0 * b0 + texture1 * b1 + texture2 * b2 + texture3 * (b3+b4_snow+b4*Random_mask_1.a*3+Ice_snow) + texture2 * b4 + texture2 * b5) / (b0 + b1 + b2 + (b3+b4_snow+b4*Random_mask_1.a*3) + b4 + b5+Ice_snow);

				surfaceData.normalTS = normalize(UnpackNormal(mixnormal)*1.5);
				//surfaceData.normalTS = normalize(mixnormal*1.5); //Strange line

				surfaceData.albedo = z.rgb;
				surfaceData.albedo = lerp(surfaceData.albedo, x.rgb, projNormal.x);
				surfaceData.albedo = lerp(surfaceData.albedo, y.rgb, projNormal.y);
				surfaceData.albedo = lerp(tex.rgb, surfaceData.albedo, a1) * _Color;

				surfaceData.smoothness = 1 * MaskTex.a - MaskTex.r +0.06;
				surfaceData.alpha = _Color.a;	
				  
				half4 reflcol_dirt = SAMPLE_TEXTURECUBE(_Cube, sampler_Cube, IN.worldRefl)*10;
				reflcol_dirt *= ColorTex.a;
				
				reflcol_dirt *= b2;
				reflcol_dirt *= b1;
				
				reflcol_dirt *= SAMPLE_TEXTURE2D(_BaseMap, sampler_BaseMap, IN.uv_Mask1);
				reflcol_dirt *= SAMPLE_TEXTURE2D(_Mask1, sampler_Mask1, IN.uv_Mask1).a;
				
				half4 reflcol_snow = SAMPLE_TEXTURECUBE(_Cube, sampler_Cube, IN.worldRefl) * 40;
				// reflcol_snow *= (SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/1.5).a * SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/2 + _Time/800).a);
				// reflcol_snow *= b3;
				// reflcol_snow += (SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/1.5).a * SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/2 + _Time/800).a)*s3;
				// reflcol_snow += (SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/1.5).a * SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/2 + _Time/800).a)*s3;
				// reflcol_snow += (SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/1.5).a * SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/2 + _Time/800).a)*g1; 

				reflcol_snow *= (SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/1.5).a * SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/2).a);
				reflcol_snow *= b3;
				reflcol_snow += (SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/1.5).a * SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/2).a)*s3;
				reflcol_snow += (SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/1.5).a * SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/2).a)*s3;
				reflcol_snow += (SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/1.5).a * SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/2).a)*g1; 

				reflcol_snow += b2;
				reflcol_snow += s3/15;
				
				half4 reflcol_stone = SAMPLE_TEXTURECUBE(_Cube, sampler_Cube, IN.worldRefl)/1;
					reflcol_stone *= b6;
					//reflcol_stone *= (SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/1.5).a * SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/2 + _Time/800).a);
					reflcol_stone *= (SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/1.5).a * SAMPLE_TEXTURE2D(_Splat3, sampler_Splat3, IN.uv_Splat3/2).a);
				half4 reflcol_stone_2 = SAMPLE_TEXTURECUBE(_Cube, sampler_Cube, IN.worldRefl)/50;
					reflcol_stone_2 *= s3*2;
				
				surfaceData.emission = reflcol_dirt.rgb + reflcol_snow.rgb + (reflcol_stone.rgb);
				surfaceData.occlusion = SampleOcclusion(IN.uv);
				
				surfaceData.metallic = 1.0h; //specular set
				surfaceData.specular = _SpecColor * _Shininess;
			
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