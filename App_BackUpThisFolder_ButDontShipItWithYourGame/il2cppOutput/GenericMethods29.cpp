#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B;
// ES3Settings
struct ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2;
// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE;
// ES3Types.ES3Type_Matrix4x4
struct ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB;
// ES3Types.ES3Type_Mesh
struct ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91;
// ES3Types.ES3Type_MeshCollider
struct ES3Type_MeshCollider_t96DD97091484CBFB779CEF06FF7DB20316204BF0;
// ES3Types.ES3Type_MeshFilter
struct ES3Type_MeshFilter_t0E0076AB34A6FEB7271055F15BFF23F404718692;
// ES3Types.ES3Type_MeshRenderer
struct ES3Type_MeshRenderer_t77D2DF1271A375EB07D56D76CD0A2D7FD34EE1AF;
// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_BoneWeightArray_tBBD7D6DE0F35D261E6D5725F39E0FA3A5C865669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color32Array_t8A8F9418743913DF51F9C885D120C141F8128AA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Matrix4x4Array_t7C8F97AD44D8A9FC2CE3EE0537BCDFB7F6BAF379_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_PhysicMaterial_t174608FC37690E7E93EAA92E279037AA9F45537E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3Array_tFFC3CC98FFC9DFE3081138F2301CC4E89F9B8FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector4Array_t2DA9F41F14BAA4ABDD9265D487384A0E3F9D9DA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_intArray_tDA3929E9D27488FE6365A35BE444CE2245D5327C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057B3BF6FF011F75099CE84564ABE58C872288F4;
IL2CPP_EXTERN_C String_t* _stringLiteral05F6EAE9494DB0450DB43C3691D64129962ED751;
IL2CPP_EXTERN_C String_t* _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734;
IL2CPP_EXTERN_C String_t* _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14;
IL2CPP_EXTERN_C String_t* _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19;
IL2CPP_EXTERN_C String_t* _stringLiteral27906925D50A15B990B586241F08C8ED14226340;
IL2CPP_EXTERN_C String_t* _stringLiteral2E4D3331FC63E1049224549936FAF640E4D0E137;
IL2CPP_EXTERN_C String_t* _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A;
IL2CPP_EXTERN_C String_t* _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED;
IL2CPP_EXTERN_C String_t* _stringLiteral36587A0761A180514C267B50EA888F89871F71DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA;
IL2CPP_EXTERN_C String_t* _stringLiteral3F8C67011B093417D89377E9DBF57017943FDA11;
IL2CPP_EXTERN_C String_t* _stringLiteral3FDCFD736F0A209B476605D31B517A9412093986;
IL2CPP_EXTERN_C String_t* _stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B;
IL2CPP_EXTERN_C String_t* _stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8;
IL2CPP_EXTERN_C String_t* _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F;
IL2CPP_EXTERN_C String_t* _stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383;
IL2CPP_EXTERN_C String_t* _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF771DC1DDB512A8FAB7AF357549BD349530F7D;
IL2CPP_EXTERN_C String_t* _stringLiteral82A38EB534B163662598A55A70842F5AA8919477;
IL2CPP_EXTERN_C String_t* _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14;
IL2CPP_EXTERN_C String_t* _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0;
IL2CPP_EXTERN_C String_t* _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438;
IL2CPP_EXTERN_C String_t* _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728;
IL2CPP_EXTERN_C String_t* _stringLiteral9A92D5C8DA89C6E80E74B010F4E5AAA4F4E0C945;
IL2CPP_EXTERN_C String_t* _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B;
IL2CPP_EXTERN_C String_t* _stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F;
IL2CPP_EXTERN_C String_t* _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12;
IL2CPP_EXTERN_C String_t* _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F;
IL2CPP_EXTERN_C String_t* _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7;
IL2CPP_EXTERN_C String_t* _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2;
IL2CPP_EXTERN_C String_t* _stringLiteralD18BDC2D30848C2775BAB81B1520EB5760429863;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A11128F810D574390DA344F324014E964D1876;
IL2CPP_EXTERN_C String_t* _stringLiteralD52AA944806C2B3BFAE356FC41F3C256E5900C8D;
IL2CPP_EXTERN_C String_t* _stringLiteralD66FED67EA1ADEC87F718BC4CEE5ABBE11B4ED17;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m35E5836D69BB170524BEC9A9878B5B7FD144849B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_mF69BA8185F08C5760B34338C09A093AF4DBA1268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBED8067992048B8235F965838499FB03E34C4F21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_mC1C3122CFB0C39F09F0921C5B372E0F7BC4780FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m88F5AE4F47F57108F2D11503B0CF0F3A8B39DE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m4DA8381A8D7D235C6FB9C8602FFF09C8ADD61EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m21A35630F47AA42AB097D915807D6BD53CBF3CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m2E281152A940F223547F05BA3E2942B1C8E0A1E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMatrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_m93EC5EE6A76C4D457230328688C2FC181101B4DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m1F66D8A5665BB474661ED5537E62D626955D6136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_m4AC0559E287D622872CC2AF1D86E01D5B087E705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_mB304BCA0B08E6B3DC4277CD20BF0C7EAC55B336A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mF7F8CC6CE7025057CF127A89A9AE1DE8F3E37635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_m198B4EC21F93C7DAD95FBC8A492A4515E9F037E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mF29BE32BD3850E939A3F7917D53747BEC47DF47A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_mAF4024F192D9B88638B432FEBFC6070E7F550D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var;

struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B  : public RuntimeObject
{
	// ES3Settings ES3Reader::settings
	ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2* ___settings_0;
	// System.Int32 ES3Reader::serializationDepth
	int32_t ___serializationDepth_1;
	// System.String ES3Reader::overridePropertiesName
	String_t* ___overridePropertiesName_2;
};

// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE  : public RuntimeObject
{
	// ES3Internal.ES3Member[] ES3Types.ES3Type::members
	ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC* ___members_1;
	// System.Type ES3Types.ES3Type::type
	Type_t* ___type_2;
	// System.Boolean ES3Types.ES3Type::isPrimitive
	bool ___isPrimitive_3;
	// System.Boolean ES3Types.ES3Type::isValueType
	bool ___isValueType_4;
	// System.Boolean ES3Types.ES3Type::isCollection
	bool ___isCollection_5;
	// System.Boolean ES3Types.ES3Type::isDictionary
	bool ___isDictionary_6;
	// System.Boolean ES3Types.ES3Type::isEnum
	bool ___isEnum_7;
	// System.Boolean ES3Types.ES3Type::isES3TypeUnityObject
	bool ___isES3TypeUnityObject_8;
	// System.Boolean ES3Types.ES3Type::isReflectedType
	bool ___isReflectedType_9;
	// System.Boolean ES3Types.ES3Type::isUnsupported
	bool ___isUnsupported_10;
	// System.Int32 ES3Types.ES3Type::priority
	int32_t ___priority_11;
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

// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A  : public RuntimeObject
{
	// ES3Reader ES3Reader/ES3ReaderPropertyEnumerator::reader
	ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader_0;
};

// UnityEngine.BoneWeight
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;
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

// ES3Types.ES3CollectionType
struct ES3CollectionType_t44F700ABD9762AA11192E0508699C23DBF3DE151  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
	// ES3Types.ES3Type ES3Types.ES3CollectionType::elementType
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___elementType_12;
};

// ES3Types.ES3ObjectType
struct ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_AnimationCurve
struct ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_AnimationCurve::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Bounds
struct ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Bounds::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Matrix4x4
struct ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Matrix4x4::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxCurve::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Vector4
struct ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector4::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_bool
struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_bool::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_float
struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_float::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_int
struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_int::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_string
struct ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_string::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
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

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// ES3Types.ES3ArrayType
struct ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535  : public ES3CollectionType_t44F700ABD9762AA11192E0508699C23DBF3DE151
{
};

// ES3Types.ES3Type_PhysicMaterial
struct ES3Type_PhysicMaterial_t174608FC37690E7E93EAA92E279037AA9F45537E  : public ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6
{
};

struct ES3Type_PhysicMaterial_t174608FC37690E7E93EAA92E279037AA9F45537E_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_PhysicMaterial::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3UnityObjectType
struct ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6  : public ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6
{
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

// ES3Types.ES3Type_BoneWeightArray
struct ES3Type_BoneWeightArray_tBBD7D6DE0F35D261E6D5725F39E0FA3A5C865669  : public ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535
{
};

struct ES3Type_BoneWeightArray_tBBD7D6DE0F35D261E6D5725F39E0FA3A5C865669_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_BoneWeightArray::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Color32Array
struct ES3Type_Color32Array_t8A8F9418743913DF51F9C885D120C141F8128AA7  : public ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535
{
};

struct ES3Type_Color32Array_t8A8F9418743913DF51F9C885D120C141F8128AA7_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color32Array::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_GameObject
struct ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
	// System.Boolean ES3Types.ES3Type_GameObject::saveChildren
	bool ___saveChildren_15;
};

struct ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_GameObject::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_14;
};

// ES3Types.ES3Type_Matrix4x4Array
struct ES3Type_Matrix4x4Array_t7C8F97AD44D8A9FC2CE3EE0537BCDFB7F6BAF379  : public ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535
{
};

struct ES3Type_Matrix4x4Array_t7C8F97AD44D8A9FC2CE3EE0537BCDFB7F6BAF379_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Matrix4x4Array::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Mesh
struct ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

struct ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Mesh::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Vector2Array
struct ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79  : public ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535
{
};

struct ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector2Array::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Vector3Array
struct ES3Type_Vector3Array_tFFC3CC98FFC9DFE3081138F2301CC4E89F9B8FDA  : public ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535
{
};

struct ES3Type_Vector3Array_tFFC3CC98FFC9DFE3081138F2301CC4E89F9B8FDA_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector3Array::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Vector4Array
struct ES3Type_Vector4Array_t2DA9F41F14BAA4ABDD9265D487384A0E3F9D9DA4  : public ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535
{
};

struct ES3Type_Vector4Array_t2DA9F41F14BAA4ABDD9265D487384A0E3F9D9DA4_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector4Array::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_intArray
struct ES3Type_intArray_tDA3929E9D27488FE6365A35BE444CE2245D5327C  : public ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535
{
};

struct ES3Type_intArray_tDA3929E9D27488FE6365A35BE444CE2245D5327C_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_intArray::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
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

// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ES3Types.ES3Type_MeshCollider
struct ES3Type_MeshCollider_t96DD97091484CBFB779CEF06FF7DB20316204BF0  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3Type_MeshCollider_t96DD97091484CBFB779CEF06FF7DB20316204BF0_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MeshCollider::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_MeshFilter
struct ES3Type_MeshFilter_t0E0076AB34A6FEB7271055F15BFF23F404718692  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3Type_MeshFilter_t0E0076AB34A6FEB7271055F15BFF23F404718692_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MeshFilter::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_MeshRenderer
struct ES3Type_MeshRenderer_t77D2DF1271A375EB07D56D76CD0A2D7FD34EE1AF  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3Type_MeshRenderer_t77D2DF1271A375EB07D56D76CD0A2D7FD34EE1AF_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MeshRenderer::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Transform
struct ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_StaticFields
{
	// System.Int32 ES3Types.ES3Type_Transform::countRead
	int32_t ___countRead_13;
	// ES3Types.ES3Type ES3Types.ES3Type_Transform::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_14;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
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
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T ES3Reader::ReadProperty<UnityEngine.Vector4>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_gshared (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Object>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Reader_ReadProperty_TisRuntimeObject_m25CD8B3AE810EB9830D26EAF7CE29982B544887B_gshared (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method) ;

// T ES3Reader::ReadProperty<UnityEngine.Vector4>(ES3Types.ES3Type)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948 (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___column1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mesh::get_isReadable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void ES3Internal.ES3Debug::LogWarning(System.String,UnityEngine.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Debug_LogWarning_mDCFB14CEB39EB6808DBFCCABC1CF310A112AA63A (String_t* ___msg0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, int32_t ___indent2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F (ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_boneWeights(UnityEngine.BoneWeight[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv3(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv3_m447FE1800C6FA36F8E4AD996A001F4A26E04A5A2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv4(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv4_mC87359C3EEA7219ABF70375148B98DC95577F9A3 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_subMeshCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Int32[]>(ES3Types.ES3Type)
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m35E5836D69BB170524BEC9A9878B5B7FD144849B (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisRuntimeObject_m25CD8B3AE810EB9830D26EAF7CE29982B544887B_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles0, int32_t ___submesh1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshCollider::set_convex(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_convex_m20482D687240D0921BA76B77983403E55A2E3CE1 (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_contactOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_contactOffset_mEDA8D778F641338733D140E76FCA0D6B29203B52 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_sharedMaterial(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshRenderer::set_additionalVertexStreams(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshRenderer_set_additionalVertexStreams_m868D054ACBD5ECCE2B5B43781F7932F886B86379 (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightmapIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_realtimeLightmapIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightmapScaleOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_realtimeLightmapScaleOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeProxyVolumeOverride(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_probeAnchor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_mode(UnityEngine.ParticleSystemCurveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMax(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMin(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constant(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7BEC82CEC98194758DD739E2D82AA3939F0381D4_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m09C6EE5B60477E3B2906548BAFD5E19C7E3AAE4F_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB3963116447C56E6C8C522BDE868DC1FC9D0E656_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m2B58C02F9C28A8899E5CD70F09D931E1AA3AB5CC_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m57AA1E005D73A70C551DD17EE215D5B3681D3DC5_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2F96909A1F973BA5467DAEEB5F6BB3063F9B992_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m6A35D7AB8ADA5550A5FF6910A3289BAFE0D26CBA_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEA418A2732FFDA8201CB3EFEB2A0C043BF9A7A3E_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mC8F1E749209A2C77D38707D20656874EEB1F24DB_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mB3EEE244770251C777EA516CF940335099EA0881_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisRuntimeObject_mA12BEDA1C93A19074AB59B01091700CC97C08D17_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4ABE60D735398F61790FCAB3931DAB5EA71352A1_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2842AD882536AEDB8BF261EF1D1D63F9DA764009_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m37BED2C94295B088B0EF216BE5C0C460B3571244_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m72B2EE0AC6D9C45559ACBB4C7209686AF2D4D170_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mCA1D8CEE677C9BFC8BF93C077DBF1DDE16D00FC4_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m6795E8884D7E36C6A3CBD20470AB9E8E76998B4E_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m8F6DD84D731B048E0CE081033955D1842350D962_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m1A85F975BE5F52E87080A10F3F372905CFA7CD4A_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m5D38471DB79086DFB094D6702F33097BDA7A0C47_gshared (ES3Type_Matrix4x4_t39D82048A48FF984190EDD7E564881B417C153BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB557B17944879FFDA4B7C3513CC4249C193C6948_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Mesh::ReadUnityObject<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Mesh_ReadUnityObject_TisRuntimeObject_mE78A8FFBD307264FCB5E8E1F952B53E8551846F9_gshared (ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var obj = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// ReadUnityObject<T>(reader, obj);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = V_0;
		NullCheck((ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6*)__this, L_1, (RuntimeObject*)L_2);
		// return obj;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void ES3Types.ES3Type_Mesh::ReadUnityObject<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Mesh_ReadUnityObject_TisRuntimeObject_m0622D1A0C8BE2B6360163EA59410CFB9866B3996_gshared (ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m35E5836D69BB170524BEC9A9878B5B7FD144849B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_mF69BA8185F08C5760B34338C09A093AF4DBA1268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBED8067992048B8235F965838499FB03E34C4F21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_mC1C3122CFB0C39F09F0921C5B372E0F7BC4780FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m4DA8381A8D7D235C6FB9C8602FFF09C8ADD61EBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMatrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_m93EC5EE6A76C4D457230328688C2FC181101B4DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_m198B4EC21F93C7DAD95FBC8A492A4515E9F037E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mF29BE32BD3850E939A3F7917D53747BEC47DF47A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_mAF4024F192D9B88638B432FEBFC6070E7F550D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_BoneWeightArray_tBBD7D6DE0F35D261E6D5725F39E0FA3A5C865669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color32Array_t8A8F9418743913DF51F9C885D120C141F8128AA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Matrix4x4Array_t7C8F97AD44D8A9FC2CE3EE0537BCDFB7F6BAF379_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3Array_tFFC3CC98FFC9DFE3081138F2301CC4E89F9B8FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4Array_t2DA9F41F14BAA4ABDD9265D487384A0E3F9D9DA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_intArray_tDA3929E9D27488FE6365A35BE444CE2245D5327C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057B3BF6FF011F75099CE84564ABE58C872288F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05F6EAE9494DB0450DB43C3691D64129962ED751);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E4D3331FC63E1049224549936FAF640E4D0E137);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F8C67011B093417D89377E9DBF57017943FDA11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FDCFD736F0A209B476605D31B517A9412093986);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF771DC1DDB512A8FAB7AF357549BD349530F7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A92D5C8DA89C6E80E74B010F4E5AAA4F4E0C945);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18BDC2D30848C2775BAB81B1520EB5760429863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD52AA944806C2B3BFAE356FC41F3C256E5900C8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD66FED67EA1ADEC87F718BC4CEE5ABBE11B4ED17);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	RuntimeObject* V_11 = NULL;
	{
		// var instance = (UnityEngine.Mesh)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)CastclassSealed((RuntimeObject*)L_0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var));
		// if (instance == null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_0400;
	}

IL_0018:
	{
		// if (!instance.isReadable)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0(L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		// ES3Internal.ES3Debug.LogWarning("Easy Save cannot load the vertices for this Mesh because it is not marked as readable, so it will be loaded by reference. To load the vertex data for this Mesh, check the 'Read/Write Enabled' checkbox in its Import Settings.", instance);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = V_0;
		ES3Debug_LogWarning_mDCFB14CEB39EB6808DBFCCABC1CF310A112AA63A(_stringLiteralD18BDC2D30848C2775BAB81B1520EB5760429863, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_7, 0, NULL);
	}

IL_0032:
	{
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___reader0;
		NullCheck(L_8);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_9;
		L_9 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_8);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_9, NULL);
		V_3 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03eb:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_3;
					V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_12 = V_11;
					if (!L_12)
					{
						goto IL_03ff;
					}
				}
				{
					RuntimeObject* L_13 = V_11;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_03ff:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03de_1;
			}

IL_0044_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				V_4 = ((String_t*)CastclassSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var));
				// if (!instance.isReadable)
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = V_0;
				NullCheck(L_16);
				bool L_17;
				L_17 = Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0(L_16, NULL);
				V_5 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
				bool L_18 = V_5;
				if (!L_18)
				{
					goto IL_006e_1;
				}
			}
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___reader0;
				NullCheck(L_19);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_19);
				// continue;
				goto IL_03de_1;
			}

IL_006e_1:
			{
				// switch (propertyName)
				String_t* L_20 = V_4;
				V_7 = L_20;
				String_t* L_21 = V_7;
				V_6 = L_21;
				String_t* L_22 = V_6;
				uint32_t L_23;
				L_23 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_22, NULL);
				V_8 = L_23;
				uint32_t L_24 = V_8;
				if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1971520285)))))
				{
					goto IL_00eb_1;
				}
			}
			{
				uint32_t L_25 = V_8;
				if ((!(((uint32_t)L_25) <= ((uint32_t)((int32_t)1029089800)))))
				{
					goto IL_00be_1;
				}
			}
			{
				uint32_t L_26 = V_8;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)247908339))))
				{
					goto IL_01c0_1;
				}
			}
			{
				goto IL_009f_1;
			}

IL_009f_1:
			{
				uint32_t L_27 = V_8;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)502968136))))
				{
					goto IL_017e_1;
				}
			}
			{
				goto IL_00ad_1;
			}

IL_00ad_1:
			{
				uint32_t L_28 = V_8;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)1029089800))))
				{
					goto IL_0168_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_00be_1:
			{
				uint32_t L_29 = V_8;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)1229132946))))
				{
					goto IL_01ec_1;
				}
			}
			{
				goto IL_00cc_1;
			}

IL_00cc_1:
			{
				uint32_t L_30 = V_8;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)2082523534))))
				{
					goto IL_01aa_1;
				}
			}
			{
				goto IL_00da_1;
			}

IL_00da_1:
			{
				uint32_t L_31 = V_8;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-1971520285))))
				{
					goto IL_01d6_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_00eb_1:
			{
				uint32_t L_32 = V_8;
				if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)-609673453)))))
				{
					goto IL_0121_1;
				}
			}
			{
				uint32_t L_33 = V_8;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-1068190384))))
				{
					goto IL_0194_1;
				}
			}
			{
				goto IL_0102_1;
			}

IL_0102_1:
			{
				uint32_t L_34 = V_8;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-660245694))))
				{
					goto IL_025a_1;
				}
			}
			{
				goto IL_0110_1;
			}

IL_0110_1:
			{
				uint32_t L_35 = V_8;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)-609673453))))
				{
					goto IL_0270_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_0121_1:
			{
				uint32_t L_36 = V_8;
				if ((!(((uint32_t)L_36) <= ((uint32_t)((int32_t)-191268896)))))
				{
					goto IL_0149_1;
				}
			}
			{
				uint32_t L_37 = V_8;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-220709380))))
				{
					goto IL_0244_1;
				}
			}
			{
				goto IL_0138_1;
			}

IL_0138_1:
			{
				uint32_t L_38 = V_8;
				if ((((int32_t)L_38) == ((int32_t)((int32_t)-191268896))))
				{
					goto IL_0202_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_0149_1:
			{
				uint32_t L_39 = V_8;
				if ((((int32_t)L_39) == ((int32_t)((int32_t)-174491277))))
				{
					goto IL_0218_1;
				}
			}
			{
				goto IL_0157_1;
			}

IL_0157_1:
			{
				uint32_t L_40 = V_8;
				if ((((int32_t)L_40) == ((int32_t)((int32_t)-90603182))))
				{
					goto IL_022e_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_0168_1:
			{
				String_t* L_41 = V_6;
				bool L_42;
				L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteral057B3BF6FF011F75099CE84564ABE58C872288F4, NULL);
				if (L_42)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_017e_1:
			{
				String_t* L_43 = V_6;
				bool L_44;
				L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC, NULL);
				if (L_44)
				{
					goto IL_029d_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_0194_1:
			{
				String_t* L_45 = V_6;
				bool L_46;
				L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral3FDCFD736F0A209B476605D31B517A9412093986, NULL);
				if (L_46)
				{
					goto IL_02b4_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_01aa_1:
			{
				String_t* L_47 = V_6;
				bool L_48;
				L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F, NULL);
				if (L_48)
				{
					goto IL_02cb_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_01c0_1:
			{
				String_t* L_49 = V_6;
				bool L_50;
				L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0, NULL);
				if (L_50)
				{
					goto IL_02e2_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_01d6_1:
			{
				String_t* L_51 = V_6;
				bool L_52;
				L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8, NULL);
				if (L_52)
				{
					goto IL_02f9_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_01ec_1:
			{
				String_t* L_53 = V_6;
				bool L_54;
				L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteral2E4D3331FC63E1049224549936FAF640E4D0E137, NULL);
				if (L_54)
				{
					goto IL_0310_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_0202_1:
			{
				String_t* L_55 = V_6;
				bool L_56;
				L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteral9A92D5C8DA89C6E80E74B010F4E5AAA4F4E0C945, NULL);
				if (L_56)
				{
					goto IL_0327_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_0218_1:
			{
				String_t* L_57 = V_6;
				bool L_58;
				L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteral05F6EAE9494DB0450DB43C3691D64129962ED751, NULL);
				if (L_58)
				{
					goto IL_033e_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_022e_1:
			{
				String_t* L_59 = V_6;
				bool L_60;
				L_60 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, _stringLiteralD66FED67EA1ADEC87F718BC4CEE5ABBE11B4ED17, NULL);
				if (L_60)
				{
					goto IL_0355_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_0244_1:
			{
				String_t* L_61 = V_6;
				bool L_62;
				L_62 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_61, _stringLiteralD52AA944806C2B3BFAE356FC41F3C256E5900C8D, NULL);
				if (L_62)
				{
					goto IL_0369_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_025a_1:
			{
				String_t* L_63 = V_6;
				bool L_64;
				L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteral7EF771DC1DDB512A8FAB7AF357549BD349530F7D, NULL);
				if (L_64)
				{
					goto IL_037d_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_0270_1:
			{
				String_t* L_65 = V_6;
				bool L_66;
				L_66 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_65, _stringLiteral3F8C67011B093417D89377E9DBF57017943FDA11, NULL);
				if (L_66)
				{
					goto IL_0391_1;
				}
			}
			{
				goto IL_03d4_1;
			}

IL_0286_1:
			{
				// instance.bounds = reader.Read<UnityEngine.Bounds>(ES3Type_Bounds.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_67 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_68);
				Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_70;
				L_70 = GenericVirtualFuncInvoker1< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBED8067992048B8235F965838499FB03E34C4F21_RuntimeMethod_var, L_68, L_69);
				NullCheck(L_67);
				Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E(L_67, L_70, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_029d_1:
			{
				// instance.boneWeights = reader.Read<UnityEngine.BoneWeight[]>(ES3Type_BoneWeightArray.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_71 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_BoneWeightArray_tBBD7D6DE0F35D261E6D5725F39E0FA3A5C865669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_BoneWeightArray_tBBD7D6DE0F35D261E6D5725F39E0FA3A5C865669_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_72);
				BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_74;
				L_74 = GenericVirtualFuncInvoker1< BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_mF69BA8185F08C5760B34338C09A093AF4DBA1268_RuntimeMethod_var, L_72, L_73);
				NullCheck(L_71);
				Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7(L_71, L_74, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_02b4_1:
			{
				// instance.bindposes = reader.Read<UnityEngine.Matrix4x4[]>(ES3Type_Matrix4x4Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_75 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_Matrix4x4Array_t7C8F97AD44D8A9FC2CE3EE0537BCDFB7F6BAF379_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Matrix4x4Array_t7C8F97AD44D8A9FC2CE3EE0537BCDFB7F6BAF379_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_76);
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_78;
				L_78 = GenericVirtualFuncInvoker1< Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMatrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_m93EC5EE6A76C4D457230328688C2FC181101B4DC_RuntimeMethod_var, L_76, L_77);
				NullCheck(L_75);
				Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_75, L_78, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_02cb_1:
			{
				// instance.vertices = reader.Read<UnityEngine.Vector3[]>(ES3Type_Vector3Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_79 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_Vector3Array_tFFC3CC98FFC9DFE3081138F2301CC4E89F9B8FDA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3Array_tFFC3CC98FFC9DFE3081138F2301CC4E89F9B8FDA_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_80);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_82;
				L_82 = GenericVirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mF29BE32BD3850E939A3F7917D53747BEC47DF47A_RuntimeMethod_var, L_80, L_81);
				NullCheck(L_79);
				Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_79, L_82, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_02e2_1:
			{
				// instance.normals = reader.Read<UnityEngine.Vector3[]>(ES3Type_Vector3Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_83 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_84 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_85 = ((ES3Type_Vector3Array_tFFC3CC98FFC9DFE3081138F2301CC4E89F9B8FDA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3Array_tFFC3CC98FFC9DFE3081138F2301CC4E89F9B8FDA_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_84);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86;
				L_86 = GenericVirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mF29BE32BD3850E939A3F7917D53747BEC47DF47A_RuntimeMethod_var, L_84, L_85);
				NullCheck(L_83);
				Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_83, L_86, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_02f9_1:
			{
				// instance.tangents = reader.Read<UnityEngine.Vector4[]>(ES3Type_Vector4Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_87 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_Vector4Array_t2DA9F41F14BAA4ABDD9265D487384A0E3F9D9DA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4Array_t2DA9F41F14BAA4ABDD9265D487384A0E3F9D9DA4_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_88);
				Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_90;
				L_90 = GenericVirtualFuncInvoker1< Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_mAF4024F192D9B88638B432FEBFC6070E7F550D39_RuntimeMethod_var, L_88, L_89);
				NullCheck(L_87);
				Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B(L_87, L_90, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_0310_1:
			{
				// instance.uv = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_91 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_93 = ((ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_92);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_94;
				L_94 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_m198B4EC21F93C7DAD95FBC8A492A4515E9F037E1_RuntimeMethod_var, L_92, L_93);
				NullCheck(L_91);
				Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_91, L_94, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_0327_1:
			{
				// instance.uv2 = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_95 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_97 = ((ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_96);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_98;
				L_98 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_m198B4EC21F93C7DAD95FBC8A492A4515E9F037E1_RuntimeMethod_var, L_96, L_97);
				NullCheck(L_95);
				Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5(L_95, L_98, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_033e_1:
			{
				// instance.uv3 = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_99 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_101 = ((ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_100);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_102;
				L_102 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_m198B4EC21F93C7DAD95FBC8A492A4515E9F037E1_RuntimeMethod_var, L_100, L_101);
				NullCheck(L_99);
				Mesh_set_uv3_m447FE1800C6FA36F8E4AD996A001F4A26E04A5A2(L_99, L_102, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_0355_1:
			{
				// instance.uv4 = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_103 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_105 = ((ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_tFF554D3BC0143DFE98A7784D1EC957D50CC17A79_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_104);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_106;
				L_106 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_m198B4EC21F93C7DAD95FBC8A492A4515E9F037E1_RuntimeMethod_var, L_104, L_105);
				NullCheck(L_103);
				Mesh_set_uv4_mC87359C3EEA7219ABF70375148B98DC95577F9A3(L_103, L_106, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_0369_1:
			{
				// instance.colors32 = reader.Read<UnityEngine.Color32[]>(ES3Type_Color32Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_107 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_108 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_109 = ((ES3Type_Color32Array_t8A8F9418743913DF51F9C885D120C141F8128AA7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color32Array_t8A8F9418743913DF51F9C885D120C141F8128AA7_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_108);
				Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_110;
				L_110 = GenericVirtualFuncInvoker1< Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_mC1C3122CFB0C39F09F0921C5B372E0F7BC4780FF_RuntimeMethod_var, L_108, L_109);
				NullCheck(L_107);
				Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F(L_107, L_110, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_037d_1:
			{
				// instance.triangles = reader.Read<System.Int32[]>(ES3Type_intArray.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_111 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_112 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_113 = ((ES3Type_intArray_tDA3929E9D27488FE6365A35BE444CE2245D5327C_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_intArray_tDA3929E9D27488FE6365A35BE444CE2245D5327C_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_112);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114;
				L_114 = GenericVirtualFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m4DA8381A8D7D235C6FB9C8602FFF09C8ADD61EBF_RuntimeMethod_var, L_112, L_113);
				NullCheck(L_111);
				Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_111, L_114, NULL);
				// break;
				goto IL_03dd_1;
			}

IL_0391_1:
			{
				// instance.subMeshCount = reader.Read<System.Int32>(ES3Type_int.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_115 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_116 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_117 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_116);
				int32_t L_118;
				L_118 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_116, L_117);
				NullCheck(L_115);
				Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28(L_115, L_118, NULL);
				// for(int i=0; i<instance.subMeshCount; i++)
				V_9 = 0;
				goto IL_03c2_1;
			}

IL_03a8_1:
			{
				// instance.SetTriangles(reader.ReadProperty<int[]>(ES3Type_intArray.Instance), i);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_119 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_121 = ((ES3Type_intArray_tDA3929E9D27488FE6365A35BE444CE2245D5327C_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_intArray_tDA3929E9D27488FE6365A35BE444CE2245D5327C_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_120);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122;
				L_122 = ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m35E5836D69BB170524BEC9A9878B5B7FD144849B(L_120, L_121, ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m35E5836D69BB170524BEC9A9878B5B7FD144849B_RuntimeMethod_var);
				int32_t L_123 = V_9;
				NullCheck(L_119);
				Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258(L_119, L_122, L_123, NULL);
				// for(int i=0; i<instance.subMeshCount; i++)
				int32_t L_124 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_124, 1));
			}

IL_03c2_1:
			{
				// for(int i=0; i<instance.subMeshCount; i++)
				int32_t L_125 = V_9;
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_126 = V_0;
				NullCheck(L_126);
				int32_t L_127;
				L_127 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_126, NULL);
				V_10 = (bool)((((int32_t)L_125) < ((int32_t)L_127))? 1 : 0);
				bool L_128 = V_10;
				if (L_128)
				{
					goto IL_03a8_1;
				}
			}
			{
				// break;
				goto IL_03dd_1;
			}

IL_03d4_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
				NullCheck(L_129);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_129);
				// break;
				goto IL_03dd_1;
			}

IL_03dd_1:
			{
			}

IL_03de_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_130 = V_3;
				NullCheck(L_130);
				bool L_131;
				L_131 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_130);
				if (L_131)
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_0400;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0400:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MeshCollider::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MeshCollider_ReadComponent_TisRuntimeObject_m5396E0BF2A3BB29A2BF4F37635679663D588A6B9_gshared (ES3Type_MeshCollider_t96DD97091484CBFB779CEF06FF7DB20316204BF0* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_m4AC0559E287D622872CC2AF1D86E01D5B087E705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_PhysicMaterial_t174608FC37690E7E93EAA92E279037AA9F45537E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// var instance = (UnityEngine.MeshCollider)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*)CastclassClass((RuntimeObject*)L_0, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0120;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0120:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ff_1;
			}

IL_001a_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				// switch(propertyName)
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F, NULL);
				if (L_12)
				{
					goto IL_007d_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA, NULL);
				if (L_14)
				{
					goto IL_0091_1;
				}
			}
			{
				String_t* L_15 = V_3;
				bool L_16;
				L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_16)
				{
					goto IL_00a5_1;
				}
			}
			{
				String_t* L_17 = V_3;
				bool L_18;
				L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B, NULL);
				if (L_18)
				{
					goto IL_00b9_1;
				}
			}
			{
				String_t* L_19 = V_3;
				bool L_20;
				L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383, NULL);
				if (L_20)
				{
					goto IL_00cd_1;
				}
			}
			{
				String_t* L_21 = V_3;
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED, NULL);
				if (L_22)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_00f5_1;
			}

IL_007d_1:
			{
				// instance.sharedMesh = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_23 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_25 = ((ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_24);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26;
				L_26 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var, L_24, L_25);
				NullCheck(L_23);
				MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_23, L_26, NULL);
				// break;
				goto IL_00fe_1;
			}

IL_0091_1:
			{
				// instance.convex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_27 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_28 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_29 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_28);
				bool L_30;
				L_30 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_28, L_29);
				NullCheck(L_27);
				MeshCollider_set_convex_m20482D687240D0921BA76B77983403E55A2E3CE1(L_27, L_30, NULL);
				// break;
				goto IL_00fe_1;
			}

IL_00a5_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_31 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_32);
				bool L_34;
				L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_31);
				Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_31, L_34, NULL);
				// break;
				goto IL_00fe_1;
			}

IL_00b9_1:
			{
				// instance.isTrigger = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_35 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_36);
				bool L_38;
				L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_35);
				Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_35, L_38, NULL);
				// break;
				goto IL_00fe_1;
			}

IL_00cd_1:
			{
				// instance.contactOffset = reader.Read<System.Single>(ES3Type_float.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_39 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_40);
				float L_42;
				L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_39);
				Collider_set_contactOffset_mEDA8D778F641338733D140E76FCA0D6B29203B52((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_39, L_42, NULL);
				// break;
				goto IL_00fe_1;
			}

IL_00e1_1:
			{
				// instance.sharedMaterial = reader.Read<UnityEngine.PhysicMaterial>(ES3Type_PhysicMaterial.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_43 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_PhysicMaterial_t174608FC37690E7E93EAA92E279037AA9F45537E_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_PhysicMaterial_t174608FC37690E7E93EAA92E279037AA9F45537E_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_44);
				PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_46;
				L_46 = GenericVirtualFuncInvoker1< PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_m4AC0559E287D622872CC2AF1D86E01D5B087E705_RuntimeMethod_var, L_44, L_45);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_43);
				Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_43, L_46, NULL);
				// break;
				goto IL_00fe_1;
			}

IL_00f5_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
				NullCheck(L_47);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
				// break;
				goto IL_00fe_1;
			}

IL_00fe_1:
			{
			}

IL_00ff_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_48 = V_1;
				NullCheck(L_48);
				bool L_49;
				L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_48);
				if (L_49)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0121;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0121:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MeshFilter::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MeshFilter_ReadComponent_TisRuntimeObject_m958050D3E84BCC4C27D181DFBB1939B526FB3757_gshared (ES3Type_MeshFilter_t0E0076AB34A6FEB7271055F15BFF23F404718692* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// var instance = (UnityEngine.MeshFilter)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)CastclassSealed((RuntimeObject*)L_0, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0075;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0075:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0057_1;
			}

IL_0017_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				// switch(propertyName)
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F, NULL);
				if (L_12)
				{
					goto IL_0039_1;
				}
			}
			{
				goto IL_004d_1;
			}

IL_0039_1:
			{
				// instance.sharedMesh = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_13 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_14 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_15 = ((ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16;
				L_16 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var, L_14, L_15);
				NullCheck(L_13);
				MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_13, L_16, NULL);
				// break;
				goto IL_0056_1;
			}

IL_004d_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
				NullCheck(L_17);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_17);
				// break;
				goto IL_0056_1;
			}

IL_0056_1:
			{
			}

IL_0057_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_18 = V_1;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0076;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MeshRenderer::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MeshRenderer_ReadComponent_TisRuntimeObject_m96BFBD9C6BF4E8996020584F9A5A1B35167678D3_gshared (ES3Type_MeshRenderer_t77D2DF1271A375EB07D56D76CD0A2D7FD34EE1AF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m88F5AE4F47F57108F2D11503B0CF0F3A8B39DE95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m21A35630F47AA42AB097D915807D6BD53CBF3CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m2E281152A940F223547F05BA3E2942B1C8E0A1E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m1F66D8A5665BB474661ED5537E62D626955D6136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_mB304BCA0B08E6B3DC4277CD20BF0C7EAC55B336A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mF7F8CC6CE7025057CF127A89A9AE1DE8F3E37635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73792CCBAF937C765700AA0D7388BC226F003166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A38EB534B163662598A55A70842F5AA8919477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	uint32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = (UnityEngine.MeshRenderer)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)CastclassClass((RuntimeObject*)L_0, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_044f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_6;
					if (!L_5)
					{
						goto IL_0463;
					}
				}
				{
					RuntimeObject* L_6 = V_6;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0463:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0442_1;
			}

IL_001a_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				// switch(propertyName)
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				uint32_t L_12;
				L_12 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_11, NULL);
				V_5 = L_12;
				uint32_t L_13 = V_5;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)1039612288)))))
				{
					goto IL_00d8_1;
				}
			}
			{
				uint32_t L_14 = V_5;
				if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)394058932)))))
				{
					goto IL_0091_1;
				}
			}
			{
				uint32_t L_15 = V_5;
				if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)258071601)))))
				{
					goto IL_0072_1;
				}
			}
			{
				uint32_t L_16 = V_5;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_018f_1;
				}
			}
			{
				goto IL_0061_1;
			}

IL_0061_1:
			{
				uint32_t L_17 = V_5;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)258071601))))
				{
					goto IL_028b_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_0072_1:
			{
				uint32_t L_18 = V_5;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)369730773))))
				{
					goto IL_01e3_1;
				}
			}
			{
				goto IL_0080_1;
			}

IL_0080_1:
			{
				uint32_t L_19 = V_5;
				if ((((int32_t)L_19) == ((int32_t)((int32_t)394058932))))
				{
					goto IL_020d_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_0091_1:
			{
				uint32_t L_20 = V_5;
				if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)594369155)))))
				{
					goto IL_00b9_1;
				}
			}
			{
				uint32_t L_21 = V_5;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)560621451))))
				{
					goto IL_01b9_1;
				}
			}
			{
				goto IL_00a8_1;
			}

IL_00a8_1:
			{
				uint32_t L_22 = V_5;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)594369155))))
				{
					goto IL_017a_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_00b9_1:
			{
				uint32_t L_23 = V_5;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)899577978))))
				{
					goto IL_01f8_1;
				}
			}
			{
				goto IL_00c7_1;
			}

IL_00c7_1:
			{
				uint32_t L_24 = V_5;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)1039612288))))
				{
					goto IL_0276_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_00d8_1:
			{
				uint32_t L_25 = V_5;
				if ((!(((uint32_t)L_25) <= ((uint32_t)((int32_t)2066010489)))))
				{
					goto IL_0128_1;
				}
			}
			{
				uint32_t L_26 = V_5;
				if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1681590497)))))
				{
					goto IL_0109_1;
				}
			}
			{
				uint32_t L_27 = V_5;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)1435400483))))
				{
					goto IL_02a0_1;
				}
			}
			{
				goto IL_00f8_1;
			}

IL_00f8_1:
			{
				uint32_t L_28 = V_5;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)1681590497))))
				{
					goto IL_02ca_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_0109_1:
			{
				uint32_t L_29 = V_5;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)2056288458))))
				{
					goto IL_01ce_1;
				}
			}
			{
				goto IL_0117_1;
			}

IL_0117_1:
			{
				uint32_t L_30 = V_5;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)2066010489))))
				{
					goto IL_0222_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_0128_1:
			{
				uint32_t L_31 = V_5;
				if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-879427281)))))
				{
					goto IL_014d_1;
				}
			}
			{
				uint32_t L_32 = V_5;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)-1450632603))))
				{
					goto IL_01a4_1;
				}
			}
			{
				goto IL_013c_1;
			}

IL_013c_1:
			{
				uint32_t L_33 = V_5;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-879427281))))
				{
					goto IL_0237_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_014d_1:
			{
				uint32_t L_34 = V_5;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-641088577))))
				{
					goto IL_0261_1;
				}
			}
			{
				goto IL_015b_1;
			}

IL_015b_1:
			{
				uint32_t L_35 = V_5;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)-170312451))))
				{
					goto IL_02b5_1;
				}
			}
			{
				goto IL_0169_1;
			}

IL_0169_1:
			{
				uint32_t L_36 = V_5;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-95858950))))
				{
					goto IL_024c_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_017a_1:
			{
				String_t* L_37 = V_3;
				bool L_38;
				L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86, NULL);
				if (L_38)
				{
					goto IL_02df_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_018f_1:
			{
				String_t* L_39 = V_3;
				bool L_40;
				L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_40)
				{
					goto IL_02f6_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_01a4_1:
			{
				String_t* L_41 = V_3;
				bool L_42;
				L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2, NULL);
				if (L_42)
				{
					goto IL_030d_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_01b9_1:
			{
				String_t* L_43 = V_3;
				bool L_44;
				L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B, NULL);
				if (L_44)
				{
					goto IL_031f_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_01ce_1:
			{
				String_t* L_45 = V_3;
				bool L_46;
				L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19, NULL);
				if (L_46)
				{
					goto IL_0336_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_01e3_1:
			{
				String_t* L_47 = V_3;
				bool L_48;
				L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral82A38EB534B163662598A55A70842F5AA8919477, NULL);
				if (L_48)
				{
					goto IL_0348_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_01f8_1:
			{
				String_t* L_49 = V_3;
				bool L_50;
				L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166, NULL);
				if (L_50)
				{
					goto IL_035f_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_020d_1:
			{
				String_t* L_51 = V_3;
				bool L_52;
				L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B, NULL);
				if (L_52)
				{
					goto IL_0376_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_0222_1:
			{
				String_t* L_53 = V_3;
				bool L_54;
				L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438, NULL);
				if (L_54)
				{
					goto IL_038d_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_0237_1:
			{
				String_t* L_55 = V_3;
				bool L_56;
				L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9, NULL);
				if (L_56)
				{
					goto IL_039f_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_024c_1:
			{
				String_t* L_57 = V_3;
				bool L_58;
				L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728, NULL);
				if (L_58)
				{
					goto IL_03b6_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_0261_1:
			{
				String_t* L_59 = V_3;
				bool L_60;
				L_60 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7, NULL);
				if (L_60)
				{
					goto IL_03c5_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_0276_1:
			{
				String_t* L_61 = V_3;
				bool L_62;
				L_62 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_61, _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A, NULL);
				if (L_62)
				{
					goto IL_03d9_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_028b_1:
			{
				String_t* L_63 = V_3;
				bool L_64;
				L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14, NULL);
				if (L_64)
				{
					goto IL_03ed_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_02a0_1:
			{
				String_t* L_65 = V_3;
				bool L_66;
				L_66 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_65, _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA, NULL);
				if (L_66)
				{
					goto IL_03fc_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_02b5_1:
			{
				String_t* L_67 = V_3;
				bool L_68;
				L_68 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_67, _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4, NULL);
				if (L_68)
				{
					goto IL_0410_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_02ca_1:
			{
				String_t* L_69 = V_3;
				bool L_70;
				L_70 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_69, _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734, NULL);
				if (L_70)
				{
					goto IL_0424_1;
				}
			}
			{
				goto IL_0438_1;
			}

IL_02df_1:
			{
				// instance.additionalVertexStreams = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_71 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_72);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_74;
				L_74 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var, L_72, L_73);
				NullCheck(L_71);
				MeshRenderer_set_additionalVertexStreams_m868D054ACBD5ECCE2B5B43781F7932F886B86379(L_71, L_74, NULL);
				// break;
				goto IL_0441_1;
			}

IL_02f6_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_75 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_76);
				bool L_78;
				L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_75);
				Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_75, L_78, NULL);
				// break;
				goto IL_0441_1;
			}

IL_030d_1:
			{
				// instance.shadowCastingMode = reader.Read<UnityEngine.Rendering.ShadowCastingMode>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_79 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
				NullCheck(L_80);
				int32_t L_81;
				L_81 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mF7F8CC6CE7025057CF127A89A9AE1DE8F3E37635_RuntimeMethod_var, L_80);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_79);
				Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_79, L_81, NULL);
				// break;
				goto IL_0441_1;
			}

IL_031f_1:
			{
				// instance.receiveShadows = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_82 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_84 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_83);
				bool L_85;
				L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_83, L_84);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_82);
				Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_82, L_85, NULL);
				// break;
				goto IL_0441_1;
			}

IL_0336_1:
			{
				// instance.sharedMaterials = reader.Read<UnityEngine.Material[]>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_86 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
				NullCheck(L_87);
				MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_88;
				L_88 = GenericVirtualFuncInvoker0< MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* >::Invoke(ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m2E281152A940F223547F05BA3E2942B1C8E0A1E3_RuntimeMethod_var, L_87);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_86);
				Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_86, L_88, NULL);
				// break;
				goto IL_0441_1;
			}

IL_0348_1:
			{
				// instance.lightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_89 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_90 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_91 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_90);
				int32_t L_92;
				L_92 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_90, L_91);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_89);
				Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_89, L_92, NULL);
				// break;
				goto IL_0441_1;
			}

IL_035f_1:
			{
				// instance.realtimeLightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_93 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_94);
				int32_t L_96;
				L_96 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_94, L_95);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_93);
				Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_93, L_96, NULL);
				// break;
				goto IL_0441_1;
			}

IL_0376_1:
			{
				// instance.lightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_97 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_99 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_98);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_100;
				L_100 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var, L_98, L_99);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_97);
				Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_97, L_100, NULL);
				// break;
				goto IL_0441_1;
			}

IL_038d_1:
			{
				// instance.motionVectorGenerationMode = reader.Read<UnityEngine.MotionVectorGenerationMode>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_101 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___reader0;
				NullCheck(L_102);
				int32_t L_103;
				L_103 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m1F66D8A5665BB474661ED5537E62D626955D6136_RuntimeMethod_var, L_102);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_101);
				Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_101, L_103, NULL);
				// break;
				goto IL_0441_1;
			}

IL_039f_1:
			{
				// instance.realtimeLightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_104 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_105 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_106 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_105);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_107;
				L_107 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var, L_105, L_106);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_104);
				Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_104, L_107, NULL);
				// break;
				goto IL_0441_1;
			}

IL_03b6_1:
			{
				// instance.lightProbeUsage = reader.Read<UnityEngine.Rendering.LightProbeUsage>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_108 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_109 = ___reader0;
				NullCheck(L_109);
				int32_t L_110;
				L_110 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m21A35630F47AA42AB097D915807D6BD53CBF3CFB_RuntimeMethod_var, L_109);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_108);
				Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_108, L_110, NULL);
				// break;
				goto IL_0441_1;
			}

IL_03c5_1:
			{
				// instance.lightProbeProxyVolumeOverride = reader.Read<UnityEngine.GameObject>(ES3Type_GameObject.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_111 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_112 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_113 = ((ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_112);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_114;
				L_114 = GenericVirtualFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m88F5AE4F47F57108F2D11503B0CF0F3A8B39DE95_RuntimeMethod_var, L_112, L_113);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_111);
				Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_111, L_114, NULL);
				// break;
				goto IL_0441_1;
			}

IL_03d9_1:
			{
				// instance.probeAnchor = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_115 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_116 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_117 = ((ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_116);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
				L_118 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var, L_116, L_117);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_115);
				Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_115, L_118, NULL);
				// break;
				goto IL_0441_1;
			}

IL_03ed_1:
			{
				// instance.reflectionProbeUsage = reader.Read<UnityEngine.Rendering.ReflectionProbeUsage>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_119 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
				NullCheck(L_120);
				int32_t L_121;
				L_121 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_mB304BCA0B08E6B3DC4277CD20BF0C7EAC55B336A_RuntimeMethod_var, L_120);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_119);
				Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_119, L_121, NULL);
				// break;
				goto IL_0441_1;
			}

IL_03fc_1:
			{
				// instance.sortingLayerName = reader.Read<System.String>(ES3Type_string.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_122 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_123 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_124 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_123);
				String_t* L_125;
				L_125 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_123, L_124);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_122);
				Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_122, L_125, NULL);
				// break;
				goto IL_0441_1;
			}

IL_0410_1:
			{
				// instance.sortingLayerID = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_126 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_127 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_128 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_127);
				int32_t L_129;
				L_129 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_127, L_128);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_126);
				Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_126, L_129, NULL);
				// break;
				goto IL_0441_1;
			}

IL_0424_1:
			{
				// instance.sortingOrder = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_130 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_131 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_132 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_131);
				int32_t L_133;
				L_133 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_131, L_132);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_130);
				Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_130, L_133, NULL);
				// break;
				goto IL_0441_1;
			}

IL_0438_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_134 = ___reader0;
				NullCheck(L_134);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_134);
				// break;
				goto IL_0441_1;
			}

IL_0441_1:
			{
			}

IL_0442_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_135 = V_1;
				NullCheck(L_135);
				bool L_136;
				L_136 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_135);
				if (L_136)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0464;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0464:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2E23A591D18DC884526FF92BAD49C032A01E632E_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m84A7D41A581B1A824C8153B8FEAFADFE0D5DB22F_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B5BC622C3723AD1DB582A0F6E53C3A22F6DB9E8_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m527815E4237F9FAC57C3D03935416834DF2644BC_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA950AA28F90FA725AAA244BF71947B6ACFABB410_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3C1ACF05B2611C8A4D17D83945DC5AF929DDBACC_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m3DC74EF1F959CE98FEBF6531E405DEB772813BA6_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6B1F5B925879640308E9E698E8DD1023FBB6BEA6_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m6E788FCFA5DA10F69F994A36E969D641E5A8DD52_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mBBF124593C5CD3CEA596AB14DA83E4416A702C9D_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRuntimeObject_m3660BC9515316A3ABFDD66EADFA37F291A6E4B14_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mBF4D6423FE3EEFFED53C8E68CADB86E206D2B630_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mB71C94FE365100AE20BA12B3F32622F557136799_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m74CC6993A8A6401973294A4EE878DA5101886331_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA7FA10B8E2A4EFB4C6B5761FDAAFDB1EEA7EF4BA_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3E73BAB98E84842C6B0943E5004FB60F7F70DC21_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBB070D90446E9C88A5AFCEC027B96974A8FA12D3_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m835857921667E5864DBC854D663F195938393F07_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m72CD5EA3170578D29EB653800E578EDCE631A03E_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m111814DF4DA06D5B9C69A29E1E932E636C2A2ECD_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01fe;
	}

IL_000e:
	{
		// switch(propertyName)
		String_t* L_0 = V_1;
		V_3 = L_0;
		String_t* L_1 = V_3;
		V_2 = L_1;
		String_t* L_2 = V_2;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_2, NULL);
		V_4 = L_3;
		uint32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0121;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_01f4;
	}

IL_0049:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01f4;
	}

IL_0065:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_007c;
	}

IL_007c:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_01f4;
	}

IL_008a:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_01f4;
	}

IL_00a3:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_16)
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00b8:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01f4;
	}

IL_00cd:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_20)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01f4;
	}

IL_00e2:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_22)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01f4;
	}

IL_00f7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01f4;
	}

IL_010c:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01f4;
	}

IL_0121:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_28)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01f4;
	}

IL_0136:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_30)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_01f4;
	}

IL_014b:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_31);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_32, NULL);
		// break;
		goto IL_01fd;
	}

IL_015e:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		float L_35;
		L_35 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_33, L_34);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_35, NULL);
		// break;
		goto IL_01fd;
	}

IL_0176:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38;
		L_38 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_36, L_37);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_38, NULL);
		// break;
		goto IL_01fd;
	}

IL_018b:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41;
		L_41 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_39, L_40);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_41, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_44, NULL);
		// break;
		goto IL_01fd;
	}

IL_01b5:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_47, NULL);
		// break;
		goto IL_01fd;
	}

IL_01ca:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_50, NULL);
		// break;
		goto IL_01fd;
	}

IL_01df:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_51, L_52);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_53, NULL);
		// break;
		goto IL_01fd;
	}

IL_01f4:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
	}

IL_01fe:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_57) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_60 = L_59;
		RuntimeObject* L_61 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_60);
		V_6 = L_61;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		RuntimeObject* L_62 = V_6;
		return L_62;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRuntimeObject_mFDDEE82B41C772BC46B25B9189B7D57F171FB87A_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m03D377F6193113C0BB46DB2F4D6261200A5EC2EA_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m966F3EC0EF8FC28F37A1D6B0A3E09AAF3D92B225_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m5ADC3E09C97E08B59601873C23DC60E1354E9129_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mEF2602E61EE4223040DFB8E8E69FF5C3300769B0_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mD7CE054CB0971ECD2BF0D426E2FF8D30BC52F343_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m5C4C0609DC53C8C230B212BD4859CC728129AE87_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mFAA74D6C32458BEF41BA5DFDF946C39EB4A4B180_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mCF7150521FB027C6800D60E9FD32FBAEE5AA6A0C_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_mFC5202B674A688E429908128BCC1BCAA3DAD6D3C_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mC8906B5E2F2A78EDBECA0A60149C0A2C37E98F0C_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m583C5A29B6A003DFEF36BE3F1F3A239D24232A0A_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m4253242C84DDBB6B1E7075AD30F23A08611F3400_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mCA4496E9A1329D434F0FB3B5561651B81A34CC9D_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_mF8F09BDEB9B20E53D1E75A66F211C6579DF59A76_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_mD39FEF0A5F74ED1A5268513A0629FEEF4AF197AA_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_mE4C9437B63D6DAC617BA5DE39AB99B2217D34E6C_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m575DF1D5565121B8B215EAB6A4BDD98567EA2EAA_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m1D92D581E84094387F0DFC90B611D7316C9FB8DB_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m2C3A7F6EA16560FB5D7C8F904B6BA4D864B60095_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01fd;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_01f3;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01f3;
	}

IL_0064:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f3;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_01f3;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_19)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_21)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_01f3;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_23)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01f3;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_25)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f3;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_27)
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_01f3;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_29)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_01f3;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_31)
		{
			goto IL_01de;
		}
	}
	{
		goto IL_01f3;
	}

IL_014a:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_32);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_33, NULL);
		// break;
		goto IL_01fc;
	}

IL_015d:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		float L_36;
		L_36 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_36, NULL);
		// break;
		goto IL_01fc;
	}

IL_0175:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_39, NULL);
		// break;
		goto IL_01fc;
	}

IL_018a:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42;
		L_42 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_42, NULL);
		// break;
		goto IL_01fc;
	}

IL_019f:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_45, NULL);
		// break;
		goto IL_01fc;
	}

IL_01b4:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_48, NULL);
		// break;
		goto IL_01fc;
	}

IL_01c9:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		float L_51;
		L_51 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_51, NULL);
		// break;
		goto IL_01fc;
	}

IL_01de:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_53 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54;
		L_54 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_52, L_53);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_54, NULL);
		// break;
		goto IL_01fc;
	}

IL_01f3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_55);
		// break;
		goto IL_01fc;
	}

IL_01fc:
	{
	}

IL_01fd:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_56);
		String_t* L_58 = L_57;
		V_1 = L_58;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_58) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_5;
		if (L_59)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
