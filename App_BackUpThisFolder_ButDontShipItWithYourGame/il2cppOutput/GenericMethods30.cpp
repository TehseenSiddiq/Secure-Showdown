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

// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B;
// ES3Settings
struct ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2;
// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE;
// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2;
// ES3Types.ES3Type_MinMaxGradient
struct ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83;
// ES3Types.ES3Type_NoiseModule
struct ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7;
IL2CPP_EXTERN_C String_t* _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9;
IL2CPP_EXTERN_C String_t* _stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E;
IL2CPP_EXTERN_C String_t* _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14;
IL2CPP_EXTERN_C String_t* _stringLiteral27906925D50A15B990B586241F08C8ED14226340;
IL2CPP_EXTERN_C String_t* _stringLiteral36587A0761A180514C267B50EA888F89871F71DF;
IL2CPP_EXTERN_C String_t* _stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D;
IL2CPP_EXTERN_C String_t* _stringLiteral3A91D337442EA721D81265946B3502D017B35431;
IL2CPP_EXTERN_C String_t* _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450;
IL2CPP_EXTERN_C String_t* _stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF;
IL2CPP_EXTERN_C String_t* _stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral5506962CD736328B4844CD75A860794FE5B29F07;
IL2CPP_EXTERN_C String_t* _stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41;
IL2CPP_EXTERN_C String_t* _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F;
IL2CPP_EXTERN_C String_t* _stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176;
IL2CPP_EXTERN_C String_t* _stringLiteral778102C3E486149200F26500543D0E817D018B30;
IL2CPP_EXTERN_C String_t* _stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357;
IL2CPP_EXTERN_C String_t* _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51;
IL2CPP_EXTERN_C String_t* _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A;
IL2CPP_EXTERN_C String_t* _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F;
IL2CPP_EXTERN_C String_t* _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186;
IL2CPP_EXTERN_C String_t* _stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580;
IL2CPP_EXTERN_C String_t* _stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE;
IL2CPP_EXTERN_C String_t* _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF;
IL2CPP_EXTERN_C String_t* _stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28;
IL2CPP_EXTERN_C String_t* _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406;
IL2CPP_EXTERN_C String_t* _stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A11128F810D574390DA344F324014E964D1876;
IL2CPP_EXTERN_C String_t* _stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9;
IL2CPP_EXTERN_C String_t* _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B;
IL2CPP_EXTERN_C String_t* _stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF;
IL2CPP_EXTERN_C String_t* _stringLiteralF1343DC9A4902B963209412495148EE532A73DEF;
IL2CPP_EXTERN_C String_t* _stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var;


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

// ES3Types.ES3Type_AnimationCurve
struct ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_AnimationCurve::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Color
struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Gradient
struct ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Gradient::Instance
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

// ES3Types.ES3Type_MinMaxGradient
struct ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxGradient::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_NoiseModule
struct ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_NoiseModule::Instance
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

// UnityEngine.ParticleSystem/NoiseModule
struct NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/NoiseModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/NoiseModule
struct NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/NoiseModule
struct NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
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

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_mode(UnityEngine.ParticleSystemGradientMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradientMax(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradientMin(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_colorMax(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_colorMin(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradient(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_enabled_m2BC18924D45F2AB9E6D7558A299B06C42FE0E655 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_separateAxes_m5F43E425E30079428CA258EF8A3CDD73827B6E4E (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strength(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strength_m244E401B03D2704B76D7F98F8C393EE47D8D0812 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthMultiplier_mFE019DCE55E1D8C470207E4224E1BA5D094DA357 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthX(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthX_m8FE8C66343B2F98B266F60DDC9CDEEF2939FED16 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthXMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthXMultiplier_m87EDC350B40F36A41BFE2D7639D811CA596DFEB2 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthY(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthY_m3B1AF971AB432E3BCF0CFF1DDAB56919D5062D1F (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthYMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthYMultiplier_mBF7AC9D5A4D367BF84F069D21FD20D5E97A57D89 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthZ(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthZ_m517559EFC9F1CC4F172639D73971458CBDDD0143 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthZMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthZMultiplier_m9403AB9A084216F42665501426AD26B0E88305C4 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_frequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_frequency_m70759B0A2D3852CF45F5F387C14F9AEA25E3E828 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_damping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_damping_m121F36B4B2B44302EE91CD14DF9041EEB6CC35C3 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_octaveCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_octaveCount_m894782C18FEA785F023F311F597EFE58B43B1C55 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_octaveMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_octaveMultiplier_m42720D4CD59B435AAAE4FC93DEB3A83ADA9C3FBB (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_octaveScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_octaveScale_m6C66795C9BE24401D80D79792F971DC51C4FCEFA (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_quality(UnityEngine.ParticleSystemNoiseQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_quality_m40D2AAC19BE53F0BF9A41A9761D1E940438C8AC4 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_scrollSpeed(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_scrollSpeed_m205B2E8602998D007EFA9F550C633F30633FB6DC (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_scrollSpeedMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_scrollSpeedMultiplier_m849996D65CC65FB5D3C525ADCAF5119E5B4CBF14 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_remapEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_remapEnabled_mA5571C98B13D8839E801A65B0A628E41B462E395 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_remap(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_remap_m3C8B3AC1CEB098D957CF6BC8F1A522953ED9F439 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_remapMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_remapMultiplier_mCB638181B26CF82A61C17E3F0D6D6E63C561E9C4 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_remapX(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_remapX_m15ADCD92890B6C21A29E06C438CA20C6A99D01AA (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_remapXMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_remapXMultiplier_m4C5B29FEC2B917E5AAD4A59DFF163517A886F347 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_remapY(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_remapY_mD04EB94428E91D6C4839CC20ABFC19A42B9F7F6E (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_remapYMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_remapYMultiplier_m8316E402501D85E1B9796FDF8C8A6DAE07B49325 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_remapZ(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_remapZ_mAE7A90C23BFD7E10D2C53981911572AC8A2B5541 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_remapZMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_remapZMultiplier_mCEDE52028CD07D0F6ABBEC5F6985416217E57F42 (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m260592C7F6AD4FCCDE21F1634D9A0F22070F1ECF_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
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
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mA6297B84BB85199732D9C660DD10D16DD8C77725_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
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
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA416466C65384ACCDDF9115F166D3A065CE9EE04_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m49D6E91C6E27786E1C74658D2327C8D3C6C20FAB_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m14A60784E7F53317ED36DC8704BAE35E9E5316F1_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mAFA4300A0D3DDD916DCBC74CF732CD63E095D448_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m6CA33FCA1B6039480E4A8FABF2AFBDCFD057E79D_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m212F4D2D1D8AE29D8B9BEAF8F708F78A2770C40D_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m469978992C0569DED76F7CB9275B6CF4545A6D64_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7FBB7A68513D01159A082C78D7FBABCCF6CD4EB7_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m44001EB5F62E532D4D45F37C2D2A2C723D25E6D3_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF8219F44E486A9F807C5CECDC3F9DC353FF3D46F_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisRuntimeObject_mCE05DCF6333C8909FB51723EE802C4FF692FD7FE_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m096847157BEB7D585EDE494156B0C1CE84C3AD1F_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m1CD69049D871CE0BAE19AA0C5FA2A73176FBB27A_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mD04F693E45552AF5769484F682D5CBD9B26CDFF8_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71D0B9F6A67799C841FA94DA3DEEC712B3C2DC09_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1ED08301B7BB2D11F2ACFCADB130765019D08714_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m90DAFA82E6D8A169F79B8CBB860A73A9CF630019_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m664777119857F4C419B4B81EF2813D5CB9EFB5DA_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m6E95D7D7414FDADA6543DEB10167544CC239233C_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mB0918067066964BAAF6AE06DCC572196F7C65EE1_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_01b7;
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
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_01ad;
	}

IL_004b:
	{
		uint32_t L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_01ad;
	}

IL_0070:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_01ad;
	}

IL_0089:
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01ad;
	}

IL_009e:
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_16)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01ad;
	}

IL_00b3:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_18)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01ad;
	}

IL_00c8:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_20)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01ad;
	}

IL_00dd:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_22)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01ad;
	}

IL_00f2:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_24)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01ad;
	}

IL_0107:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_26)
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01ad;
	}

IL_011c:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_27);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_28, NULL);
		// break;
		goto IL_01b6;
	}

IL_012f:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_29);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_31;
		L_31 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_29, L_30);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_31, NULL);
		// break;
		goto IL_01b6;
	}

IL_0144:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_34;
		L_34 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_32, L_33);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_34, NULL);
		// break;
		goto IL_01b6;
	}

IL_0159:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_35, L_36);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_37, NULL);
		// break;
		goto IL_01b6;
	}

IL_016e:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_38, L_39);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_40, NULL);
		// break;
		goto IL_01b6;
	}

IL_0183:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_41, L_42);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_43, NULL);
		// break;
		goto IL_01b6;
	}

IL_0198:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_46;
		L_46 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_44, L_45);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_46, NULL);
		// break;
		goto IL_01b6;
	}

IL_01ad:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_47);
		// break;
		goto IL_01b6;
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_48);
		String_t* L_50 = L_49;
		V_1 = L_50;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_000e;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_52 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_53 = L_52;
		RuntimeObject* L_54 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_53);
		V_6 = L_54;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		RuntimeObject* L_55 = V_6;
		return L_55;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m059BDA8B626B43BDA92CCDB79C74B8F8A730ACF2_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m43A88A4634273B0E9B3B1DE60816E0429B831A22_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m327ACA62961616E9B239388C51C752EBE550BCD7_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF680E929C2A8B72C82706F9100AC0B47E0355935_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m34ECDC70B3C249EC1D3AD97B8EC270D295B43A65_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m229C8A1023B656EBD37FE36655F7B965C2DEA602_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF941214AD859317D1BF06F843AA21A8A9482FE27_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m999435AC887C0E4905A8E842B192F63AD5074E14_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mD89F6176B4C3A0568045C375F9A09FB4CBE69A92_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mB8199ADE85060974F9371D53C579D234AC5BBE42_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisRuntimeObject_m9CD0F4D7E8C1DCBA758699FCAAE91A06BD8582C9_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC5561646432F4FC6CAF9816AF041620BE35E95AF_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m8AF7BD4732BF2CA9EACCFF6062A1E69F91120681_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m799501EFE7D520835294A0094B8869565A702744_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0DBD8EBF026E3859975805C5AEF2B3849D7B5B3D_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEB93148425879808DBB7EDF74FDD0992F2901083_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4DD71C6F3A4BA3B7588A69174FC05FB3C3391F2E_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m16C6A1316E4058266CC157FE7451D4FD371FC085_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDBBD4C9585ECED4ED5F8E9CFC182588C00B27DE2_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_NoiseModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_NoiseModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mF26C5EE2467E2AB832BF191445C803C718F23316_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.NoiseModule();
		il2cpp_codegen_initobj((&V_0), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_1 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_2 = L_1;
		RuntimeObject* L_3 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = V_0;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_5 = L_4;
		RuntimeObject* L_6 = Box(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Void ES3Types.ES3Type_NoiseModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_NoiseModule_ReadInto_TisRuntimeObject_m91F655E5E7D89220F782F3A2BAC1EC1E8C261A8A_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A91D337442EA721D81265946B3502D017B35431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5506962CD736328B4844CD75A860794FE5B29F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1343DC9A4902B963209412495148EE532A73DEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.NoiseModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)((NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)UnBox(L_0, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var))));
		goto IL_06c4;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1832685215)))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)854058160)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)190084455)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0212;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)96119838))))
		{
			goto IL_040a;
		}
	}
	{
		goto IL_0054;
	}

IL_0054:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)190084455))))
		{
			goto IL_0362;
		}
	}
	{
		goto IL_06ba;
	}

IL_0065:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)608739593))))
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0073;
	}

IL_0073:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)800267265))))
		{
			goto IL_02e4;
		}
	}
	{
		goto IL_0081;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)854058160))))
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0092:
	{
		uint32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1211446584)))))
		{
			goto IL_00c8;
		}
	}
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1137906375))))
		{
			goto IL_0251;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a9:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1174656921))))
		{
			goto IL_03b6;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b7:
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1211446584))))
		{
			goto IL_0266;
		}
	}
	{
		goto IL_06ba;
	}

IL_00c8:
	{
		uint32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1245001822)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1228224203))))
		{
			goto IL_0290;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1245001822))))
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_06ba;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0227;
		}
	}
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1832685215))))
		{
			goto IL_027b;
		}
	}
	{
		goto IL_06ba;
	}

IL_010f:
	{
		uint32_t L_23 = V_4;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1151223659)))))
		{
			goto IL_0195;
		}
	}
	{
		uint32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1953622726))))
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_012f;
	}

IL_012f:
	{
		uint32_t L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-1760681759))))
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_013d;
	}

IL_013d:
	{
		uint32_t L_27 = V_4;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_034d;
		}
	}
	{
		goto IL_06ba;
	}

IL_014e:
	{
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1404870093)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1412380868))))
		{
			goto IL_0377;
		}
	}
	{
		goto IL_0165;
	}

IL_0165:
	{
		uint32_t L_30 = V_4;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1404870093))))
		{
			goto IL_038c;
		}
	}
	{
		goto IL_06ba;
	}

IL_0176:
	{
		uint32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1276098610))))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0184;
	}

IL_0184:
	{
		uint32_t L_32 = V_4;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1151223659))))
		{
			goto IL_02f9;
		}
	}
	{
		goto IL_06ba;
	}

IL_0195:
	{
		uint32_t L_33 = V_4;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-313239878)))))
		{
			goto IL_01cb;
		}
	}
	{
		uint32_t L_34 = V_4;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-528869200))))
		{
			goto IL_023c;
		}
	}
	{
		goto IL_01ac;
	}

IL_01ac:
	{
		uint32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-346795116))))
		{
			goto IL_041f;
		}
	}
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		uint32_t L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-313239878))))
		{
			goto IL_03cb;
		}
	}
	{
		goto IL_06ba;
	}

IL_01cb:
	{
		uint32_t L_37 = V_4;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-44770453)))))
		{
			goto IL_01f3;
		}
	}
	{
		uint32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-296462259))))
		{
			goto IL_03f5;
		}
	}
	{
		goto IL_01e2;
	}

IL_01e2:
	{
		uint32_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-44770453))))
		{
			goto IL_0434;
		}
	}
	{
		goto IL_06ba;
	}

IL_01f3:
	{
		uint32_t L_40 = V_4;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-11444963))))
		{
			goto IL_03e0;
		}
	}
	{
		goto IL_0201;
	}

IL_0201:
	{
		uint32_t L_41 = V_4;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-7684324))))
		{
			goto IL_030e;
		}
	}
	{
		goto IL_06ba;
	}

IL_0212:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_43)
		{
			goto IL_0449;
		}
	}
	{
		goto IL_06ba;
	}

IL_0227:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_45)
		{
			goto IL_0461;
		}
	}
	{
		goto IL_06ba;
	}

IL_023c:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B, NULL);
		if (L_47)
		{
			goto IL_0479;
		}
	}
	{
		goto IL_06ba;
	}

IL_0251:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7, NULL);
		if (L_49)
		{
			goto IL_0491;
		}
	}
	{
		goto IL_06ba;
	}

IL_0266:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF, NULL);
		if (L_51)
		{
			goto IL_04a9;
		}
	}
	{
		goto IL_06ba;
	}

IL_027b:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F, NULL);
		if (L_53)
		{
			goto IL_04c1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0290:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralF1343DC9A4902B963209412495148EE532A73DEF, NULL);
		if (L_55)
		{
			goto IL_04d9;
		}
	}
	{
		goto IL_06ba;
	}

IL_02a5:
	{
		String_t* L_56 = V_2;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF, NULL);
		if (L_57)
		{
			goto IL_04f1;
		}
	}
	{
		goto IL_06ba;
	}

IL_02ba:
	{
		String_t* L_58 = V_2;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28, NULL);
		if (L_59)
		{
			goto IL_0509;
		}
	}
	{
		goto IL_06ba;
	}

IL_02cf:
	{
		String_t* L_60 = V_2;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357, NULL);
		if (L_61)
		{
			goto IL_0521;
		}
	}
	{
		goto IL_06ba;
	}

IL_02e4:
	{
		String_t* L_62 = V_2;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51, NULL);
		if (L_63)
		{
			goto IL_0539;
		}
	}
	{
		goto IL_06ba;
	}

IL_02f9:
	{
		String_t* L_64 = V_2;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C, NULL);
		if (L_65)
		{
			goto IL_0551;
		}
	}
	{
		goto IL_06ba;
	}

IL_030e:
	{
		String_t* L_66 = V_2;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2, NULL);
		if (L_67)
		{
			goto IL_0569;
		}
	}
	{
		goto IL_06ba;
	}

IL_0323:
	{
		String_t* L_68 = V_2;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE, NULL);
		if (L_69)
		{
			goto IL_0581;
		}
	}
	{
		goto IL_06ba;
	}

IL_0338:
	{
		String_t* L_70 = V_2;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral3A91D337442EA721D81265946B3502D017B35431, NULL);
		if (L_71)
		{
			goto IL_0599;
		}
	}
	{
		goto IL_06ba;
	}

IL_034d:
	{
		String_t* L_72 = V_2;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_73)
		{
			goto IL_05b1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0362:
	{
		String_t* L_74 = V_2;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580, NULL);
		if (L_75)
		{
			goto IL_05c4;
		}
	}
	{
		goto IL_06ba;
	}

IL_0377:
	{
		String_t* L_76 = V_2;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E, NULL);
		if (L_77)
		{
			goto IL_05dc;
		}
	}
	{
		goto IL_06ba;
	}

IL_038c:
	{
		String_t* L_78 = V_2;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41, NULL);
		if (L_79)
		{
			goto IL_05f4;
		}
	}
	{
		goto IL_06ba;
	}

IL_03a1:
	{
		String_t* L_80 = V_2;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A, NULL);
		if (L_81)
		{
			goto IL_060c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03b6:
	{
		String_t* L_82 = V_2;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE, NULL);
		if (L_83)
		{
			goto IL_0624;
		}
	}
	{
		goto IL_06ba;
	}

IL_03cb:
	{
		String_t* L_84 = V_2;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D, NULL);
		if (L_85)
		{
			goto IL_063c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03e0:
	{
		String_t* L_86 = V_2;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176, NULL);
		if (L_87)
		{
			goto IL_0651;
		}
	}
	{
		goto IL_06ba;
	}

IL_03f5:
	{
		String_t* L_88 = V_2;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E, NULL);
		if (L_89)
		{
			goto IL_0666;
		}
	}
	{
		goto IL_06ba;
	}

IL_040a:
	{
		String_t* L_90 = V_2;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D, NULL);
		if (L_91)
		{
			goto IL_067b;
		}
	}
	{
		goto IL_06ba;
	}

IL_041f:
	{
		String_t* L_92 = V_2;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9, NULL);
		if (L_93)
		{
			goto IL_0690;
		}
	}
	{
		goto IL_06ba;
	}

IL_0434:
	{
		String_t* L_94 = V_2;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral5506962CD736328B4844CD75A860794FE5B29F07, NULL);
		if (L_95)
		{
			goto IL_06a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0449:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_97 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_96);
		bool L_98;
		L_98 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_96, L_97);
		NoiseModule_set_enabled_m2BC18924D45F2AB9E6D7558A299B06C42FE0E655((&V_0), L_98, NULL);
		// break;
		goto IL_06c3;
	}

IL_0461:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_100 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_99);
		bool L_101;
		L_101 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_99, L_100);
		NoiseModule_set_separateAxes_m5F43E425E30079428CA258EF8A3CDD73827B6E4E((&V_0), L_101, NULL);
		// break;
		goto IL_06c3;
	}

IL_0479:
	{
		// instance.strength = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_103 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_102);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_104;
		L_104 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_102, L_103);
		NoiseModule_set_strength_m244E401B03D2704B76D7F98F8C393EE47D8D0812((&V_0), L_104, NULL);
		// break;
		goto IL_06c3;
	}

IL_0491:
	{
		// instance.strengthMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_105 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_106 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_105);
		float L_107;
		L_107 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_105, L_106);
		NoiseModule_set_strengthMultiplier_mFE019DCE55E1D8C470207E4224E1BA5D094DA357((&V_0), L_107, NULL);
		// break;
		goto IL_06c3;
	}

IL_04a9:
	{
		// instance.strengthX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_108 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_109 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_108);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_110;
		L_110 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_108, L_109);
		NoiseModule_set_strengthX_m8FE8C66343B2F98B266F60DDC9CDEEF2939FED16((&V_0), L_110, NULL);
		// break;
		goto IL_06c3;
	}

IL_04c1:
	{
		// instance.strengthXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_111 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_112 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_111);
		float L_113;
		L_113 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_111, L_112);
		NoiseModule_set_strengthXMultiplier_m87EDC350B40F36A41BFE2D7639D811CA596DFEB2((&V_0), L_113, NULL);
		// break;
		goto IL_06c3;
	}

IL_04d9:
	{
		// instance.strengthY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_114 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_115 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_114);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_116;
		L_116 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_114, L_115);
		NoiseModule_set_strengthY_m3B1AF971AB432E3BCF0CFF1DDAB56919D5062D1F((&V_0), L_116, NULL);
		// break;
		goto IL_06c3;
	}

IL_04f1:
	{
		// instance.strengthYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_117 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_118 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_117);
		float L_119;
		L_119 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_117, L_118);
		NoiseModule_set_strengthYMultiplier_mBF7AC9D5A4D367BF84F069D21FD20D5E97A57D89((&V_0), L_119, NULL);
		// break;
		goto IL_06c3;
	}

IL_0509:
	{
		// instance.strengthZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_121 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_120);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_122;
		L_122 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_120, L_121);
		NoiseModule_set_strengthZ_m517559EFC9F1CC4F172639D73971458CBDDD0143((&V_0), L_122, NULL);
		// break;
		goto IL_06c3;
	}

IL_0521:
	{
		// instance.strengthZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_123 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_124 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_123);
		float L_125;
		L_125 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_123, L_124);
		NoiseModule_set_strengthZMultiplier_m9403AB9A084216F42665501426AD26B0E88305C4((&V_0), L_125, NULL);
		// break;
		goto IL_06c3;
	}

IL_0539:
	{
		// instance.frequency = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_126 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_127 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_126);
		float L_128;
		L_128 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_126, L_127);
		NoiseModule_set_frequency_m70759B0A2D3852CF45F5F387C14F9AEA25E3E828((&V_0), L_128, NULL);
		// break;
		goto IL_06c3;
	}

IL_0551:
	{
		// instance.damping = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_130 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_129);
		bool L_131;
		L_131 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_129, L_130);
		NoiseModule_set_damping_m121F36B4B2B44302EE91CD14DF9041EEB6CC35C3((&V_0), L_131, NULL);
		// break;
		goto IL_06c3;
	}

IL_0569:
	{
		// instance.octaveCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_133 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_132);
		int32_t L_134;
		L_134 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_132, L_133);
		NoiseModule_set_octaveCount_m894782C18FEA785F023F311F597EFE58B43B1C55((&V_0), L_134, NULL);
		// break;
		goto IL_06c3;
	}

IL_0581:
	{
		// instance.octaveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_136 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_135);
		float L_137;
		L_137 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_135, L_136);
		NoiseModule_set_octaveMultiplier_m42720D4CD59B435AAAE4FC93DEB3A83ADA9C3FBB((&V_0), L_137, NULL);
		// break;
		goto IL_06c3;
	}

IL_0599:
	{
		// instance.octaveScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_138 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_139 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_138);
		float L_140;
		L_140 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_138, L_139);
		NoiseModule_set_octaveScale_m6C66795C9BE24401D80D79792F971DC51C4FCEFA((&V_0), L_140, NULL);
		// break;
		goto IL_06c3;
	}

IL_05b1:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemNoiseQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_141 = ___reader0;
		NullCheck(L_141);
		int32_t L_142;
		L_142 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var, L_141);
		NoiseModule_set_quality_m40D2AAC19BE53F0BF9A41A9761D1E940438C8AC4((&V_0), L_142, NULL);
		// break;
		goto IL_06c3;
	}

IL_05c4:
	{
		// instance.scrollSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_143 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_144 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_143);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_145;
		L_145 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_143, L_144);
		NoiseModule_set_scrollSpeed_m205B2E8602998D007EFA9F550C633F30633FB6DC((&V_0), L_145, NULL);
		// break;
		goto IL_06c3;
	}

IL_05dc:
	{
		// instance.scrollSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_146);
		float L_148;
		L_148 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_146, L_147);
		NoiseModule_set_scrollSpeedMultiplier_m849996D65CC65FB5D3C525ADCAF5119E5B4CBF14((&V_0), L_148, NULL);
		// break;
		goto IL_06c3;
	}

IL_05f4:
	{
		// instance.remapEnabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_149 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_150 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_149);
		bool L_151;
		L_151 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_149, L_150);
		NoiseModule_set_remapEnabled_mA5571C98B13D8839E801A65B0A628E41B462E395((&V_0), L_151, NULL);
		// break;
		goto IL_06c3;
	}

IL_060c:
	{
		// instance.remap = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_152 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_153 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_152);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_154;
		L_154 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_152, L_153);
		NoiseModule_set_remap_m3C8B3AC1CEB098D957CF6BC8F1A522953ED9F439((&V_0), L_154, NULL);
		// break;
		goto IL_06c3;
	}

IL_0624:
	{
		// instance.remapMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_155 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_156 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_155);
		float L_157;
		L_157 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_155, L_156);
		NoiseModule_set_remapMultiplier_mCB638181B26CF82A61C17E3F0D6D6E63C561E9C4((&V_0), L_157, NULL);
		// break;
		goto IL_06c3;
	}

IL_063c:
	{
		// instance.remapX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_158 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_159 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_158);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_160;
		L_160 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_158, L_159);
		NoiseModule_set_remapX_m15ADCD92890B6C21A29E06C438CA20C6A99D01AA((&V_0), L_160, NULL);
		// break;
		goto IL_06c3;
	}

IL_0651:
	{
		// instance.remapXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_161 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_162 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_161);
		float L_163;
		L_163 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_161, L_162);
		NoiseModule_set_remapXMultiplier_m4C5B29FEC2B917E5AAD4A59DFF163517A886F347((&V_0), L_163, NULL);
		// break;
		goto IL_06c3;
	}

IL_0666:
	{
		// instance.remapY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_164 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_165 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_164);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_166;
		L_166 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_164, L_165);
		NoiseModule_set_remapY_mD04EB94428E91D6C4839CC20ABFC19A42B9F7F6E((&V_0), L_166, NULL);
		// break;
		goto IL_06c3;
	}

IL_067b:
	{
		// instance.remapYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_167 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_168 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_167);
		float L_169;
		L_169 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_167, L_168);
		NoiseModule_set_remapYMultiplier_m8316E402501D85E1B9796FDF8C8A6DAE07B49325((&V_0), L_169, NULL);
		// break;
		goto IL_06c3;
	}

IL_0690:
	{
		// instance.remapZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_170 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_171 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_170);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_172;
		L_172 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_170, L_171);
		NoiseModule_set_remapZ_mAE7A90C23BFD7E10D2C53981911572AC8A2B5541((&V_0), L_172, NULL);
		// break;
		goto IL_06c3;
	}

IL_06a5:
	{
		// instance.remapZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_173 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_174 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_173);
		float L_175;
		L_175 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_173, L_174);
		NoiseModule_set_remapZMultiplier_mCEDE52028CD07D0F6ABBEC5F6985416217E57F42((&V_0), L_175, NULL);
		// break;
		goto IL_06c3;
	}

IL_06ba:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_176 = ___reader0;
		NullCheck(L_176);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_176);
		// break;
		goto IL_06c3;
	}

IL_06c3:
	{
	}

IL_06c4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_177 = ___reader0;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_177);
		String_t* L_179 = L_178;
		V_1 = L_179;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_179) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_180 = V_5;
		if (L_180)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_NoiseModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_NoiseModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m3ABF4B2B5F51FB22B9F4077E5952750CFB6DB779_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A91D337442EA721D81265946B3502D017B35431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5506962CD736328B4844CD75A860794FE5B29F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1343DC9A4902B963209412495148EE532A73DEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.NoiseModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)((NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)UnBox(L_0, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var))));
		goto IL_06c4;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1832685215)))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)854058160)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)190084455)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0212;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)96119838))))
		{
			goto IL_040a;
		}
	}
	{
		goto IL_0054;
	}

IL_0054:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)190084455))))
		{
			goto IL_0362;
		}
	}
	{
		goto IL_06ba;
	}

IL_0065:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)608739593))))
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0073;
	}

IL_0073:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)800267265))))
		{
			goto IL_02e4;
		}
	}
	{
		goto IL_0081;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)854058160))))
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0092:
	{
		uint32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1211446584)))))
		{
			goto IL_00c8;
		}
	}
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1137906375))))
		{
			goto IL_0251;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a9:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1174656921))))
		{
			goto IL_03b6;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b7:
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1211446584))))
		{
			goto IL_0266;
		}
	}
	{
		goto IL_06ba;
	}

IL_00c8:
	{
		uint32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1245001822)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1228224203))))
		{
			goto IL_0290;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1245001822))))
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_06ba;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0227;
		}
	}
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1832685215))))
		{
			goto IL_027b;
		}
	}
	{
		goto IL_06ba;
	}

IL_010f:
	{
		uint32_t L_23 = V_4;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1151223659)))))
		{
			goto IL_0195;
		}
	}
	{
		uint32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1953622726))))
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_012f;
	}

IL_012f:
	{
		uint32_t L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-1760681759))))
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_013d;
	}

IL_013d:
	{
		uint32_t L_27 = V_4;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_034d;
		}
	}
	{
		goto IL_06ba;
	}

IL_014e:
	{
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1404870093)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1412380868))))
		{
			goto IL_0377;
		}
	}
	{
		goto IL_0165;
	}

IL_0165:
	{
		uint32_t L_30 = V_4;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1404870093))))
		{
			goto IL_038c;
		}
	}
	{
		goto IL_06ba;
	}

IL_0176:
	{
		uint32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1276098610))))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0184;
	}

IL_0184:
	{
		uint32_t L_32 = V_4;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1151223659))))
		{
			goto IL_02f9;
		}
	}
	{
		goto IL_06ba;
	}

IL_0195:
	{
		uint32_t L_33 = V_4;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-313239878)))))
		{
			goto IL_01cb;
		}
	}
	{
		uint32_t L_34 = V_4;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-528869200))))
		{
			goto IL_023c;
		}
	}
	{
		goto IL_01ac;
	}

IL_01ac:
	{
		uint32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-346795116))))
		{
			goto IL_041f;
		}
	}
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		uint32_t L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-313239878))))
		{
			goto IL_03cb;
		}
	}
	{
		goto IL_06ba;
	}

IL_01cb:
	{
		uint32_t L_37 = V_4;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-44770453)))))
		{
			goto IL_01f3;
		}
	}
	{
		uint32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-296462259))))
		{
			goto IL_03f5;
		}
	}
	{
		goto IL_01e2;
	}

IL_01e2:
	{
		uint32_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-44770453))))
		{
			goto IL_0434;
		}
	}
	{
		goto IL_06ba;
	}

IL_01f3:
	{
		uint32_t L_40 = V_4;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-11444963))))
		{
			goto IL_03e0;
		}
	}
	{
		goto IL_0201;
	}

IL_0201:
	{
		uint32_t L_41 = V_4;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-7684324))))
		{
			goto IL_030e;
		}
	}
	{
		goto IL_06ba;
	}

IL_0212:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_43)
		{
			goto IL_0449;
		}
	}
	{
		goto IL_06ba;
	}

IL_0227:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_45)
		{
			goto IL_0461;
		}
	}
	{
		goto IL_06ba;
	}

IL_023c:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B, NULL);
		if (L_47)
		{
			goto IL_0479;
		}
	}
	{
		goto IL_06ba;
	}

IL_0251:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7, NULL);
		if (L_49)
		{
			goto IL_0491;
		}
	}
	{
		goto IL_06ba;
	}

IL_0266:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF, NULL);
		if (L_51)
		{
			goto IL_04a9;
		}
	}
	{
		goto IL_06ba;
	}

IL_027b:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F, NULL);
		if (L_53)
		{
			goto IL_04c1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0290:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralF1343DC9A4902B963209412495148EE532A73DEF, NULL);
		if (L_55)
		{
			goto IL_04d9;
		}
	}
	{
		goto IL_06ba;
	}

IL_02a5:
	{
		String_t* L_56 = V_2;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF, NULL);
		if (L_57)
		{
			goto IL_04f1;
		}
	}
	{
		goto IL_06ba;
	}

IL_02ba:
	{
		String_t* L_58 = V_2;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28, NULL);
		if (L_59)
		{
			goto IL_0509;
		}
	}
	{
		goto IL_06ba;
	}

IL_02cf:
	{
		String_t* L_60 = V_2;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357, NULL);
		if (L_61)
		{
			goto IL_0521;
		}
	}
	{
		goto IL_06ba;
	}

IL_02e4:
	{
		String_t* L_62 = V_2;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51, NULL);
		if (L_63)
		{
			goto IL_0539;
		}
	}
	{
		goto IL_06ba;
	}

IL_02f9:
	{
		String_t* L_64 = V_2;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C, NULL);
		if (L_65)
		{
			goto IL_0551;
		}
	}
	{
		goto IL_06ba;
	}

IL_030e:
	{
		String_t* L_66 = V_2;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2, NULL);
		if (L_67)
		{
			goto IL_0569;
		}
	}
	{
		goto IL_06ba;
	}

IL_0323:
	{
		String_t* L_68 = V_2;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE, NULL);
		if (L_69)
		{
			goto IL_0581;
		}
	}
	{
		goto IL_06ba;
	}

IL_0338:
	{
		String_t* L_70 = V_2;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral3A91D337442EA721D81265946B3502D017B35431, NULL);
		if (L_71)
		{
			goto IL_0599;
		}
	}
	{
		goto IL_06ba;
	}

IL_034d:
	{
		String_t* L_72 = V_2;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_73)
		{
			goto IL_05b1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0362:
	{
		String_t* L_74 = V_2;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580, NULL);
		if (L_75)
		{
			goto IL_05c4;
		}
	}
	{
		goto IL_06ba;
	}

IL_0377:
	{
		String_t* L_76 = V_2;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E, NULL);
		if (L_77)
		{
			goto IL_05dc;
		}
	}
	{
		goto IL_06ba;
	}

IL_038c:
	{
		String_t* L_78 = V_2;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41, NULL);
		if (L_79)
		{
			goto IL_05f4;
		}
	}
	{
		goto IL_06ba;
	}

IL_03a1:
	{
		String_t* L_80 = V_2;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A, NULL);
		if (L_81)
		{
			goto IL_060c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03b6:
	{
		String_t* L_82 = V_2;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE, NULL);
		if (L_83)
		{
			goto IL_0624;
		}
	}
	{
		goto IL_06ba;
	}

IL_03cb:
	{
		String_t* L_84 = V_2;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D, NULL);
		if (L_85)
		{
			goto IL_063c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03e0:
	{
		String_t* L_86 = V_2;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176, NULL);
		if (L_87)
		{
			goto IL_0651;
		}
	}
	{
		goto IL_06ba;
	}

IL_03f5:
	{
		String_t* L_88 = V_2;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E, NULL);
		if (L_89)
		{
			goto IL_0666;
		}
	}
	{
		goto IL_06ba;
	}

IL_040a:
	{
		String_t* L_90 = V_2;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D, NULL);
		if (L_91)
		{
			goto IL_067b;
		}
	}
	{
		goto IL_06ba;
	}

IL_041f:
	{
		String_t* L_92 = V_2;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9, NULL);
		if (L_93)
		{
			goto IL_0690;
		}
	}
	{
		goto IL_06ba;
	}

IL_0434:
	{
		String_t* L_94 = V_2;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral5506962CD736328B4844CD75A860794FE5B29F07, NULL);
		if (L_95)
		{
			goto IL_06a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0449:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_97 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_96);
		bool L_98;
		L_98 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_96, L_97);
		NoiseModule_set_enabled_m2BC18924D45F2AB9E6D7558A299B06C42FE0E655((&V_0), L_98, NULL);
		// break;
		goto IL_06c3;
	}

IL_0461:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_100 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_99);
		bool L_101;
		L_101 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_99, L_100);
		NoiseModule_set_separateAxes_m5F43E425E30079428CA258EF8A3CDD73827B6E4E((&V_0), L_101, NULL);
		// break;
		goto IL_06c3;
	}

IL_0479:
	{
		// instance.strength = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_103 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_102);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_104;
		L_104 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_102, L_103);
		NoiseModule_set_strength_m244E401B03D2704B76D7F98F8C393EE47D8D0812((&V_0), L_104, NULL);
		// break;
		goto IL_06c3;
	}

IL_0491:
	{
		// instance.strengthMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_105 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_106 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_105);
		float L_107;
		L_107 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_105, L_106);
		NoiseModule_set_strengthMultiplier_mFE019DCE55E1D8C470207E4224E1BA5D094DA357((&V_0), L_107, NULL);
		// break;
		goto IL_06c3;
	}

IL_04a9:
	{
		// instance.strengthX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_108 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_109 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_108);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_110;
		L_110 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_108, L_109);
		NoiseModule_set_strengthX_m8FE8C66343B2F98B266F60DDC9CDEEF2939FED16((&V_0), L_110, NULL);
		// break;
		goto IL_06c3;
	}

IL_04c1:
	{
		// instance.strengthXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_111 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_112 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_111);
		float L_113;
		L_113 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_111, L_112);
		NoiseModule_set_strengthXMultiplier_m87EDC350B40F36A41BFE2D7639D811CA596DFEB2((&V_0), L_113, NULL);
		// break;
		goto IL_06c3;
	}

IL_04d9:
	{
		// instance.strengthY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_114 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_115 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_114);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_116;
		L_116 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_114, L_115);
		NoiseModule_set_strengthY_m3B1AF971AB432E3BCF0CFF1DDAB56919D5062D1F((&V_0), L_116, NULL);
		// break;
		goto IL_06c3;
	}

IL_04f1:
	{
		// instance.strengthYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_117 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_118 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_117);
		float L_119;
		L_119 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_117, L_118);
		NoiseModule_set_strengthYMultiplier_mBF7AC9D5A4D367BF84F069D21FD20D5E97A57D89((&V_0), L_119, NULL);
		// break;
		goto IL_06c3;
	}

IL_0509:
	{
		// instance.strengthZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_121 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_120);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_122;
		L_122 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_120, L_121);
		NoiseModule_set_strengthZ_m517559EFC9F1CC4F172639D73971458CBDDD0143((&V_0), L_122, NULL);
		// break;
		goto IL_06c3;
	}

IL_0521:
	{
		// instance.strengthZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_123 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_124 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_123);
		float L_125;
		L_125 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_123, L_124);
		NoiseModule_set_strengthZMultiplier_m9403AB9A084216F42665501426AD26B0E88305C4((&V_0), L_125, NULL);
		// break;
		goto IL_06c3;
	}

IL_0539:
	{
		// instance.frequency = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_126 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_127 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_126);
		float L_128;
		L_128 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_126, L_127);
		NoiseModule_set_frequency_m70759B0A2D3852CF45F5F387C14F9AEA25E3E828((&V_0), L_128, NULL);
		// break;
		goto IL_06c3;
	}

IL_0551:
	{
		// instance.damping = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_130 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_129);
		bool L_131;
		L_131 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_129, L_130);
		NoiseModule_set_damping_m121F36B4B2B44302EE91CD14DF9041EEB6CC35C3((&V_0), L_131, NULL);
		// break;
		goto IL_06c3;
	}

IL_0569:
	{
		// instance.octaveCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_133 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_132);
		int32_t L_134;
		L_134 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_132, L_133);
		NoiseModule_set_octaveCount_m894782C18FEA785F023F311F597EFE58B43B1C55((&V_0), L_134, NULL);
		// break;
		goto IL_06c3;
	}

IL_0581:
	{
		// instance.octaveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_136 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_135);
		float L_137;
		L_137 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_135, L_136);
		NoiseModule_set_octaveMultiplier_m42720D4CD59B435AAAE4FC93DEB3A83ADA9C3FBB((&V_0), L_137, NULL);
		// break;
		goto IL_06c3;
	}

IL_0599:
	{
		// instance.octaveScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_138 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_139 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_138);
		float L_140;
		L_140 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_138, L_139);
		NoiseModule_set_octaveScale_m6C66795C9BE24401D80D79792F971DC51C4FCEFA((&V_0), L_140, NULL);
		// break;
		goto IL_06c3;
	}

IL_05b1:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemNoiseQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_141 = ___reader0;
		NullCheck(L_141);
		int32_t L_142;
		L_142 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var, L_141);
		NoiseModule_set_quality_m40D2AAC19BE53F0BF9A41A9761D1E940438C8AC4((&V_0), L_142, NULL);
		// break;
		goto IL_06c3;
	}

IL_05c4:
	{
		// instance.scrollSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_143 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_144 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_143);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_145;
		L_145 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_143, L_144);
		NoiseModule_set_scrollSpeed_m205B2E8602998D007EFA9F550C633F30633FB6DC((&V_0), L_145, NULL);
		// break;
		goto IL_06c3;
	}

IL_05dc:
	{
		// instance.scrollSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_146);
		float L_148;
		L_148 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_146, L_147);
		NoiseModule_set_scrollSpeedMultiplier_m849996D65CC65FB5D3C525ADCAF5119E5B4CBF14((&V_0), L_148, NULL);
		// break;
		goto IL_06c3;
	}

IL_05f4:
	{
		// instance.remapEnabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_149 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_150 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_149);
		bool L_151;
		L_151 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_149, L_150);
		NoiseModule_set_remapEnabled_mA5571C98B13D8839E801A65B0A628E41B462E395((&V_0), L_151, NULL);
		// break;
		goto IL_06c3;
	}

IL_060c:
	{
		// instance.remap = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_152 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_153 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_152);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_154;
		L_154 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_152, L_153);
		NoiseModule_set_remap_m3C8B3AC1CEB098D957CF6BC8F1A522953ED9F439((&V_0), L_154, NULL);
		// break;
		goto IL_06c3;
	}

IL_0624:
	{
		// instance.remapMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_155 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_156 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_155);
		float L_157;
		L_157 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_155, L_156);
		NoiseModule_set_remapMultiplier_mCB638181B26CF82A61C17E3F0D6D6E63C561E9C4((&V_0), L_157, NULL);
		// break;
		goto IL_06c3;
	}

IL_063c:
	{
		// instance.remapX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_158 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_159 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_158);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_160;
		L_160 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_158, L_159);
		NoiseModule_set_remapX_m15ADCD92890B6C21A29E06C438CA20C6A99D01AA((&V_0), L_160, NULL);
		// break;
		goto IL_06c3;
	}

IL_0651:
	{
		// instance.remapXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_161 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_162 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_161);
		float L_163;
		L_163 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_161, L_162);
		NoiseModule_set_remapXMultiplier_m4C5B29FEC2B917E5AAD4A59DFF163517A886F347((&V_0), L_163, NULL);
		// break;
		goto IL_06c3;
	}

IL_0666:
	{
		// instance.remapY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_164 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_165 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_164);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_166;
		L_166 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_164, L_165);
		NoiseModule_set_remapY_mD04EB94428E91D6C4839CC20ABFC19A42B9F7F6E((&V_0), L_166, NULL);
		// break;
		goto IL_06c3;
	}

IL_067b:
	{
		// instance.remapYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_167 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_168 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_167);
		float L_169;
		L_169 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_167, L_168);
		NoiseModule_set_remapYMultiplier_m8316E402501D85E1B9796FDF8C8A6DAE07B49325((&V_0), L_169, NULL);
		// break;
		goto IL_06c3;
	}

IL_0690:
	{
		// instance.remapZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_170 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_171 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_170);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_172;
		L_172 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_170, L_171);
		NoiseModule_set_remapZ_mAE7A90C23BFD7E10D2C53981911572AC8A2B5541((&V_0), L_172, NULL);
		// break;
		goto IL_06c3;
	}

IL_06a5:
	{
		// instance.remapZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_173 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_174 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_173);
		float L_175;
		L_175 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_173, L_174);
		NoiseModule_set_remapZMultiplier_mCEDE52028CD07D0F6ABBEC5F6985416217E57F42((&V_0), L_175, NULL);
		// break;
		goto IL_06c3;
	}

IL_06ba:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_176 = ___reader0;
		NullCheck(L_176);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_176);
		// break;
		goto IL_06c3;
	}

IL_06c3:
	{
	}

IL_06c4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_177 = ___reader0;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_177);
		String_t* L_179 = L_178;
		V_1 = L_179;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_179) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_180 = V_5;
		if (L_180)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_NoiseModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_NoiseModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m7B1EA5E0970BC0E8B17BDE25121D120840DF9F48_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A91D337442EA721D81265946B3502D017B35431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5506962CD736328B4844CD75A860794FE5B29F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1343DC9A4902B963209412495148EE532A73DEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.NoiseModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)((NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)UnBox(L_0, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var))));
		goto IL_06c4;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1832685215)))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)854058160)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)190084455)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0212;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)96119838))))
		{
			goto IL_040a;
		}
	}
	{
		goto IL_0054;
	}

IL_0054:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)190084455))))
		{
			goto IL_0362;
		}
	}
	{
		goto IL_06ba;
	}

IL_0065:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)608739593))))
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0073;
	}

IL_0073:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)800267265))))
		{
			goto IL_02e4;
		}
	}
	{
		goto IL_0081;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)854058160))))
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0092:
	{
		uint32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1211446584)))))
		{
			goto IL_00c8;
		}
	}
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1137906375))))
		{
			goto IL_0251;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a9:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1174656921))))
		{
			goto IL_03b6;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b7:
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1211446584))))
		{
			goto IL_0266;
		}
	}
	{
		goto IL_06ba;
	}

IL_00c8:
	{
		uint32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1245001822)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1228224203))))
		{
			goto IL_0290;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1245001822))))
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_06ba;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0227;
		}
	}
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1832685215))))
		{
			goto IL_027b;
		}
	}
	{
		goto IL_06ba;
	}

IL_010f:
	{
		uint32_t L_23 = V_4;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1151223659)))))
		{
			goto IL_0195;
		}
	}
	{
		uint32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1953622726))))
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_012f;
	}

IL_012f:
	{
		uint32_t L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-1760681759))))
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_013d;
	}

IL_013d:
	{
		uint32_t L_27 = V_4;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_034d;
		}
	}
	{
		goto IL_06ba;
	}

IL_014e:
	{
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1404870093)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1412380868))))
		{
			goto IL_0377;
		}
	}
	{
		goto IL_0165;
	}

IL_0165:
	{
		uint32_t L_30 = V_4;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1404870093))))
		{
			goto IL_038c;
		}
	}
	{
		goto IL_06ba;
	}

IL_0176:
	{
		uint32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1276098610))))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0184;
	}

IL_0184:
	{
		uint32_t L_32 = V_4;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1151223659))))
		{
			goto IL_02f9;
		}
	}
	{
		goto IL_06ba;
	}

IL_0195:
	{
		uint32_t L_33 = V_4;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-313239878)))))
		{
			goto IL_01cb;
		}
	}
	{
		uint32_t L_34 = V_4;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-528869200))))
		{
			goto IL_023c;
		}
	}
	{
		goto IL_01ac;
	}

IL_01ac:
	{
		uint32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-346795116))))
		{
			goto IL_041f;
		}
	}
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		uint32_t L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-313239878))))
		{
			goto IL_03cb;
		}
	}
	{
		goto IL_06ba;
	}

IL_01cb:
	{
		uint32_t L_37 = V_4;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-44770453)))))
		{
			goto IL_01f3;
		}
	}
	{
		uint32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-296462259))))
		{
			goto IL_03f5;
		}
	}
	{
		goto IL_01e2;
	}

IL_01e2:
	{
		uint32_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-44770453))))
		{
			goto IL_0434;
		}
	}
	{
		goto IL_06ba;
	}

IL_01f3:
	{
		uint32_t L_40 = V_4;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-11444963))))
		{
			goto IL_03e0;
		}
	}
	{
		goto IL_0201;
	}

IL_0201:
	{
		uint32_t L_41 = V_4;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-7684324))))
		{
			goto IL_030e;
		}
	}
	{
		goto IL_06ba;
	}

IL_0212:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_43)
		{
			goto IL_0449;
		}
	}
	{
		goto IL_06ba;
	}

IL_0227:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_45)
		{
			goto IL_0461;
		}
	}
	{
		goto IL_06ba;
	}

IL_023c:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B, NULL);
		if (L_47)
		{
			goto IL_0479;
		}
	}
	{
		goto IL_06ba;
	}

IL_0251:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7, NULL);
		if (L_49)
		{
			goto IL_0491;
		}
	}
	{
		goto IL_06ba;
	}

IL_0266:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF, NULL);
		if (L_51)
		{
			goto IL_04a9;
		}
	}
	{
		goto IL_06ba;
	}

IL_027b:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F, NULL);
		if (L_53)
		{
			goto IL_04c1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0290:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralF1343DC9A4902B963209412495148EE532A73DEF, NULL);
		if (L_55)
		{
			goto IL_04d9;
		}
	}
	{
		goto IL_06ba;
	}

IL_02a5:
	{
		String_t* L_56 = V_2;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF, NULL);
		if (L_57)
		{
			goto IL_04f1;
		}
	}
	{
		goto IL_06ba;
	}

IL_02ba:
	{
		String_t* L_58 = V_2;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28, NULL);
		if (L_59)
		{
			goto IL_0509;
		}
	}
	{
		goto IL_06ba;
	}

IL_02cf:
	{
		String_t* L_60 = V_2;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357, NULL);
		if (L_61)
		{
			goto IL_0521;
		}
	}
	{
		goto IL_06ba;
	}

IL_02e4:
	{
		String_t* L_62 = V_2;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51, NULL);
		if (L_63)
		{
			goto IL_0539;
		}
	}
	{
		goto IL_06ba;
	}

IL_02f9:
	{
		String_t* L_64 = V_2;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C, NULL);
		if (L_65)
		{
			goto IL_0551;
		}
	}
	{
		goto IL_06ba;
	}

IL_030e:
	{
		String_t* L_66 = V_2;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2, NULL);
		if (L_67)
		{
			goto IL_0569;
		}
	}
	{
		goto IL_06ba;
	}

IL_0323:
	{
		String_t* L_68 = V_2;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE, NULL);
		if (L_69)
		{
			goto IL_0581;
		}
	}
	{
		goto IL_06ba;
	}

IL_0338:
	{
		String_t* L_70 = V_2;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral3A91D337442EA721D81265946B3502D017B35431, NULL);
		if (L_71)
		{
			goto IL_0599;
		}
	}
	{
		goto IL_06ba;
	}

IL_034d:
	{
		String_t* L_72 = V_2;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_73)
		{
			goto IL_05b1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0362:
	{
		String_t* L_74 = V_2;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580, NULL);
		if (L_75)
		{
			goto IL_05c4;
		}
	}
	{
		goto IL_06ba;
	}

IL_0377:
	{
		String_t* L_76 = V_2;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E, NULL);
		if (L_77)
		{
			goto IL_05dc;
		}
	}
	{
		goto IL_06ba;
	}

IL_038c:
	{
		String_t* L_78 = V_2;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41, NULL);
		if (L_79)
		{
			goto IL_05f4;
		}
	}
	{
		goto IL_06ba;
	}

IL_03a1:
	{
		String_t* L_80 = V_2;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A, NULL);
		if (L_81)
		{
			goto IL_060c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03b6:
	{
		String_t* L_82 = V_2;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE, NULL);
		if (L_83)
		{
			goto IL_0624;
		}
	}
	{
		goto IL_06ba;
	}

IL_03cb:
	{
		String_t* L_84 = V_2;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D, NULL);
		if (L_85)
		{
			goto IL_063c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03e0:
	{
		String_t* L_86 = V_2;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176, NULL);
		if (L_87)
		{
			goto IL_0651;
		}
	}
	{
		goto IL_06ba;
	}

IL_03f5:
	{
		String_t* L_88 = V_2;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E, NULL);
		if (L_89)
		{
			goto IL_0666;
		}
	}
	{
		goto IL_06ba;
	}

IL_040a:
	{
		String_t* L_90 = V_2;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D, NULL);
		if (L_91)
		{
			goto IL_067b;
		}
	}
	{
		goto IL_06ba;
	}

IL_041f:
	{
		String_t* L_92 = V_2;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9, NULL);
		if (L_93)
		{
			goto IL_0690;
		}
	}
	{
		goto IL_06ba;
	}

IL_0434:
	{
		String_t* L_94 = V_2;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral5506962CD736328B4844CD75A860794FE5B29F07, NULL);
		if (L_95)
		{
			goto IL_06a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0449:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_97 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_96);
		bool L_98;
		L_98 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_96, L_97);
		NoiseModule_set_enabled_m2BC18924D45F2AB9E6D7558A299B06C42FE0E655((&V_0), L_98, NULL);
		// break;
		goto IL_06c3;
	}

IL_0461:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_100 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_99);
		bool L_101;
		L_101 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_99, L_100);
		NoiseModule_set_separateAxes_m5F43E425E30079428CA258EF8A3CDD73827B6E4E((&V_0), L_101, NULL);
		// break;
		goto IL_06c3;
	}

IL_0479:
	{
		// instance.strength = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_103 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_102);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_104;
		L_104 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_102, L_103);
		NoiseModule_set_strength_m244E401B03D2704B76D7F98F8C393EE47D8D0812((&V_0), L_104, NULL);
		// break;
		goto IL_06c3;
	}

IL_0491:
	{
		// instance.strengthMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_105 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_106 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_105);
		float L_107;
		L_107 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_105, L_106);
		NoiseModule_set_strengthMultiplier_mFE019DCE55E1D8C470207E4224E1BA5D094DA357((&V_0), L_107, NULL);
		// break;
		goto IL_06c3;
	}

IL_04a9:
	{
		// instance.strengthX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_108 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_109 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_108);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_110;
		L_110 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_108, L_109);
		NoiseModule_set_strengthX_m8FE8C66343B2F98B266F60DDC9CDEEF2939FED16((&V_0), L_110, NULL);
		// break;
		goto IL_06c3;
	}

IL_04c1:
	{
		// instance.strengthXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_111 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_112 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_111);
		float L_113;
		L_113 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_111, L_112);
		NoiseModule_set_strengthXMultiplier_m87EDC350B40F36A41BFE2D7639D811CA596DFEB2((&V_0), L_113, NULL);
		// break;
		goto IL_06c3;
	}

IL_04d9:
	{
		// instance.strengthY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_114 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_115 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_114);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_116;
		L_116 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_114, L_115);
		NoiseModule_set_strengthY_m3B1AF971AB432E3BCF0CFF1DDAB56919D5062D1F((&V_0), L_116, NULL);
		// break;
		goto IL_06c3;
	}

IL_04f1:
	{
		// instance.strengthYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_117 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_118 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_117);
		float L_119;
		L_119 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_117, L_118);
		NoiseModule_set_strengthYMultiplier_mBF7AC9D5A4D367BF84F069D21FD20D5E97A57D89((&V_0), L_119, NULL);
		// break;
		goto IL_06c3;
	}

IL_0509:
	{
		// instance.strengthZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_121 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_120);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_122;
		L_122 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_120, L_121);
		NoiseModule_set_strengthZ_m517559EFC9F1CC4F172639D73971458CBDDD0143((&V_0), L_122, NULL);
		// break;
		goto IL_06c3;
	}

IL_0521:
	{
		// instance.strengthZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_123 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_124 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_123);
		float L_125;
		L_125 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_123, L_124);
		NoiseModule_set_strengthZMultiplier_m9403AB9A084216F42665501426AD26B0E88305C4((&V_0), L_125, NULL);
		// break;
		goto IL_06c3;
	}

IL_0539:
	{
		// instance.frequency = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_126 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_127 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_126);
		float L_128;
		L_128 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_126, L_127);
		NoiseModule_set_frequency_m70759B0A2D3852CF45F5F387C14F9AEA25E3E828((&V_0), L_128, NULL);
		// break;
		goto IL_06c3;
	}

IL_0551:
	{
		// instance.damping = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_130 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_129);
		bool L_131;
		L_131 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_129, L_130);
		NoiseModule_set_damping_m121F36B4B2B44302EE91CD14DF9041EEB6CC35C3((&V_0), L_131, NULL);
		// break;
		goto IL_06c3;
	}

IL_0569:
	{
		// instance.octaveCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_133 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_132);
		int32_t L_134;
		L_134 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_132, L_133);
		NoiseModule_set_octaveCount_m894782C18FEA785F023F311F597EFE58B43B1C55((&V_0), L_134, NULL);
		// break;
		goto IL_06c3;
	}

IL_0581:
	{
		// instance.octaveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_136 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_135);
		float L_137;
		L_137 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_135, L_136);
		NoiseModule_set_octaveMultiplier_m42720D4CD59B435AAAE4FC93DEB3A83ADA9C3FBB((&V_0), L_137, NULL);
		// break;
		goto IL_06c3;
	}

IL_0599:
	{
		// instance.octaveScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_138 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_139 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_138);
		float L_140;
		L_140 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_138, L_139);
		NoiseModule_set_octaveScale_m6C66795C9BE24401D80D79792F971DC51C4FCEFA((&V_0), L_140, NULL);
		// break;
		goto IL_06c3;
	}

IL_05b1:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemNoiseQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_141 = ___reader0;
		NullCheck(L_141);
		int32_t L_142;
		L_142 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var, L_141);
		NoiseModule_set_quality_m40D2AAC19BE53F0BF9A41A9761D1E940438C8AC4((&V_0), L_142, NULL);
		// break;
		goto IL_06c3;
	}

IL_05c4:
	{
		// instance.scrollSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_143 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_144 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_143);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_145;
		L_145 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_143, L_144);
		NoiseModule_set_scrollSpeed_m205B2E8602998D007EFA9F550C633F30633FB6DC((&V_0), L_145, NULL);
		// break;
		goto IL_06c3;
	}

IL_05dc:
	{
		// instance.scrollSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_146);
		float L_148;
		L_148 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_146, L_147);
		NoiseModule_set_scrollSpeedMultiplier_m849996D65CC65FB5D3C525ADCAF5119E5B4CBF14((&V_0), L_148, NULL);
		// break;
		goto IL_06c3;
	}

IL_05f4:
	{
		// instance.remapEnabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_149 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_150 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_149);
		bool L_151;
		L_151 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_149, L_150);
		NoiseModule_set_remapEnabled_mA5571C98B13D8839E801A65B0A628E41B462E395((&V_0), L_151, NULL);
		// break;
		goto IL_06c3;
	}

IL_060c:
	{
		// instance.remap = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_152 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_153 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_152);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_154;
		L_154 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_152, L_153);
		NoiseModule_set_remap_m3C8B3AC1CEB098D957CF6BC8F1A522953ED9F439((&V_0), L_154, NULL);
		// break;
		goto IL_06c3;
	}

IL_0624:
	{
		// instance.remapMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_155 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_156 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_155);
		float L_157;
		L_157 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_155, L_156);
		NoiseModule_set_remapMultiplier_mCB638181B26CF82A61C17E3F0D6D6E63C561E9C4((&V_0), L_157, NULL);
		// break;
		goto IL_06c3;
	}

IL_063c:
	{
		// instance.remapX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_158 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_159 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_158);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_160;
		L_160 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_158, L_159);
		NoiseModule_set_remapX_m15ADCD92890B6C21A29E06C438CA20C6A99D01AA((&V_0), L_160, NULL);
		// break;
		goto IL_06c3;
	}

IL_0651:
	{
		// instance.remapXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_161 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_162 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_161);
		float L_163;
		L_163 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_161, L_162);
		NoiseModule_set_remapXMultiplier_m4C5B29FEC2B917E5AAD4A59DFF163517A886F347((&V_0), L_163, NULL);
		// break;
		goto IL_06c3;
	}

IL_0666:
	{
		// instance.remapY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_164 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_165 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_164);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_166;
		L_166 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_164, L_165);
		NoiseModule_set_remapY_mD04EB94428E91D6C4839CC20ABFC19A42B9F7F6E((&V_0), L_166, NULL);
		// break;
		goto IL_06c3;
	}

IL_067b:
	{
		// instance.remapYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_167 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_168 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_167);
		float L_169;
		L_169 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_167, L_168);
		NoiseModule_set_remapYMultiplier_m8316E402501D85E1B9796FDF8C8A6DAE07B49325((&V_0), L_169, NULL);
		// break;
		goto IL_06c3;
	}

IL_0690:
	{
		// instance.remapZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_170 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_171 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_170);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_172;
		L_172 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_170, L_171);
		NoiseModule_set_remapZ_mAE7A90C23BFD7E10D2C53981911572AC8A2B5541((&V_0), L_172, NULL);
		// break;
		goto IL_06c3;
	}

IL_06a5:
	{
		// instance.remapZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_173 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_174 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_173);
		float L_175;
		L_175 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_173, L_174);
		NoiseModule_set_remapZMultiplier_mCEDE52028CD07D0F6ABBEC5F6985416217E57F42((&V_0), L_175, NULL);
		// break;
		goto IL_06c3;
	}

IL_06ba:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_176 = ___reader0;
		NullCheck(L_176);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_176);
		// break;
		goto IL_06c3;
	}

IL_06c3:
	{
	}

IL_06c4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_177 = ___reader0;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_177);
		String_t* L_179 = L_178;
		V_1 = L_179;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_179) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_180 = V_5;
		if (L_180)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_NoiseModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_NoiseModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mC3C54A33875DCB903B3FCED59CE1B468F13C7757_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A91D337442EA721D81265946B3502D017B35431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5506962CD736328B4844CD75A860794FE5B29F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1343DC9A4902B963209412495148EE532A73DEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.NoiseModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)((NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)UnBox(L_0, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var))));
		goto IL_06c4;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1832685215)))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)854058160)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)190084455)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0212;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)96119838))))
		{
			goto IL_040a;
		}
	}
	{
		goto IL_0054;
	}

IL_0054:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)190084455))))
		{
			goto IL_0362;
		}
	}
	{
		goto IL_06ba;
	}

IL_0065:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)608739593))))
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0073;
	}

IL_0073:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)800267265))))
		{
			goto IL_02e4;
		}
	}
	{
		goto IL_0081;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)854058160))))
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0092:
	{
		uint32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1211446584)))))
		{
			goto IL_00c8;
		}
	}
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1137906375))))
		{
			goto IL_0251;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a9:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1174656921))))
		{
			goto IL_03b6;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b7:
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1211446584))))
		{
			goto IL_0266;
		}
	}
	{
		goto IL_06ba;
	}

IL_00c8:
	{
		uint32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1245001822)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1228224203))))
		{
			goto IL_0290;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1245001822))))
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_06ba;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0227;
		}
	}
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1832685215))))
		{
			goto IL_027b;
		}
	}
	{
		goto IL_06ba;
	}

IL_010f:
	{
		uint32_t L_23 = V_4;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1151223659)))))
		{
			goto IL_0195;
		}
	}
	{
		uint32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1953622726))))
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_012f;
	}

IL_012f:
	{
		uint32_t L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-1760681759))))
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_013d;
	}

IL_013d:
	{
		uint32_t L_27 = V_4;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_034d;
		}
	}
	{
		goto IL_06ba;
	}

IL_014e:
	{
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1404870093)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1412380868))))
		{
			goto IL_0377;
		}
	}
	{
		goto IL_0165;
	}

IL_0165:
	{
		uint32_t L_30 = V_4;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1404870093))))
		{
			goto IL_038c;
		}
	}
	{
		goto IL_06ba;
	}

IL_0176:
	{
		uint32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1276098610))))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0184;
	}

IL_0184:
	{
		uint32_t L_32 = V_4;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1151223659))))
		{
			goto IL_02f9;
		}
	}
	{
		goto IL_06ba;
	}

IL_0195:
	{
		uint32_t L_33 = V_4;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-313239878)))))
		{
			goto IL_01cb;
		}
	}
	{
		uint32_t L_34 = V_4;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-528869200))))
		{
			goto IL_023c;
		}
	}
	{
		goto IL_01ac;
	}

IL_01ac:
	{
		uint32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-346795116))))
		{
			goto IL_041f;
		}
	}
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		uint32_t L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-313239878))))
		{
			goto IL_03cb;
		}
	}
	{
		goto IL_06ba;
	}

IL_01cb:
	{
		uint32_t L_37 = V_4;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-44770453)))))
		{
			goto IL_01f3;
		}
	}
	{
		uint32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-296462259))))
		{
			goto IL_03f5;
		}
	}
	{
		goto IL_01e2;
	}

IL_01e2:
	{
		uint32_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-44770453))))
		{
			goto IL_0434;
		}
	}
	{
		goto IL_06ba;
	}

IL_01f3:
	{
		uint32_t L_40 = V_4;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-11444963))))
		{
			goto IL_03e0;
		}
	}
	{
		goto IL_0201;
	}

IL_0201:
	{
		uint32_t L_41 = V_4;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-7684324))))
		{
			goto IL_030e;
		}
	}
	{
		goto IL_06ba;
	}

IL_0212:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_43)
		{
			goto IL_0449;
		}
	}
	{
		goto IL_06ba;
	}

IL_0227:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_45)
		{
			goto IL_0461;
		}
	}
	{
		goto IL_06ba;
	}

IL_023c:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B, NULL);
		if (L_47)
		{
			goto IL_0479;
		}
	}
	{
		goto IL_06ba;
	}

IL_0251:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7, NULL);
		if (L_49)
		{
			goto IL_0491;
		}
	}
	{
		goto IL_06ba;
	}

IL_0266:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF, NULL);
		if (L_51)
		{
			goto IL_04a9;
		}
	}
	{
		goto IL_06ba;
	}

IL_027b:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F, NULL);
		if (L_53)
		{
			goto IL_04c1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0290:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralF1343DC9A4902B963209412495148EE532A73DEF, NULL);
		if (L_55)
		{
			goto IL_04d9;
		}
	}
	{
		goto IL_06ba;
	}

IL_02a5:
	{
		String_t* L_56 = V_2;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF, NULL);
		if (L_57)
		{
			goto IL_04f1;
		}
	}
	{
		goto IL_06ba;
	}

IL_02ba:
	{
		String_t* L_58 = V_2;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28, NULL);
		if (L_59)
		{
			goto IL_0509;
		}
	}
	{
		goto IL_06ba;
	}

IL_02cf:
	{
		String_t* L_60 = V_2;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357, NULL);
		if (L_61)
		{
			goto IL_0521;
		}
	}
	{
		goto IL_06ba;
	}

IL_02e4:
	{
		String_t* L_62 = V_2;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51, NULL);
		if (L_63)
		{
			goto IL_0539;
		}
	}
	{
		goto IL_06ba;
	}

IL_02f9:
	{
		String_t* L_64 = V_2;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C, NULL);
		if (L_65)
		{
			goto IL_0551;
		}
	}
	{
		goto IL_06ba;
	}

IL_030e:
	{
		String_t* L_66 = V_2;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2, NULL);
		if (L_67)
		{
			goto IL_0569;
		}
	}
	{
		goto IL_06ba;
	}

IL_0323:
	{
		String_t* L_68 = V_2;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE, NULL);
		if (L_69)
		{
			goto IL_0581;
		}
	}
	{
		goto IL_06ba;
	}

IL_0338:
	{
		String_t* L_70 = V_2;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral3A91D337442EA721D81265946B3502D017B35431, NULL);
		if (L_71)
		{
			goto IL_0599;
		}
	}
	{
		goto IL_06ba;
	}

IL_034d:
	{
		String_t* L_72 = V_2;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_73)
		{
			goto IL_05b1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0362:
	{
		String_t* L_74 = V_2;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580, NULL);
		if (L_75)
		{
			goto IL_05c4;
		}
	}
	{
		goto IL_06ba;
	}

IL_0377:
	{
		String_t* L_76 = V_2;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E, NULL);
		if (L_77)
		{
			goto IL_05dc;
		}
	}
	{
		goto IL_06ba;
	}

IL_038c:
	{
		String_t* L_78 = V_2;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41, NULL);
		if (L_79)
		{
			goto IL_05f4;
		}
	}
	{
		goto IL_06ba;
	}

IL_03a1:
	{
		String_t* L_80 = V_2;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A, NULL);
		if (L_81)
		{
			goto IL_060c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03b6:
	{
		String_t* L_82 = V_2;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE, NULL);
		if (L_83)
		{
			goto IL_0624;
		}
	}
	{
		goto IL_06ba;
	}

IL_03cb:
	{
		String_t* L_84 = V_2;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D, NULL);
		if (L_85)
		{
			goto IL_063c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03e0:
	{
		String_t* L_86 = V_2;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176, NULL);
		if (L_87)
		{
			goto IL_0651;
		}
	}
	{
		goto IL_06ba;
	}

IL_03f5:
	{
		String_t* L_88 = V_2;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E, NULL);
		if (L_89)
		{
			goto IL_0666;
		}
	}
	{
		goto IL_06ba;
	}

IL_040a:
	{
		String_t* L_90 = V_2;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D, NULL);
		if (L_91)
		{
			goto IL_067b;
		}
	}
	{
		goto IL_06ba;
	}

IL_041f:
	{
		String_t* L_92 = V_2;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9, NULL);
		if (L_93)
		{
			goto IL_0690;
		}
	}
	{
		goto IL_06ba;
	}

IL_0434:
	{
		String_t* L_94 = V_2;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral5506962CD736328B4844CD75A860794FE5B29F07, NULL);
		if (L_95)
		{
			goto IL_06a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0449:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_97 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_96);
		bool L_98;
		L_98 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_96, L_97);
		NoiseModule_set_enabled_m2BC18924D45F2AB9E6D7558A299B06C42FE0E655((&V_0), L_98, NULL);
		// break;
		goto IL_06c3;
	}

IL_0461:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_100 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_99);
		bool L_101;
		L_101 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_99, L_100);
		NoiseModule_set_separateAxes_m5F43E425E30079428CA258EF8A3CDD73827B6E4E((&V_0), L_101, NULL);
		// break;
		goto IL_06c3;
	}

IL_0479:
	{
		// instance.strength = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_103 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_102);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_104;
		L_104 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_102, L_103);
		NoiseModule_set_strength_m244E401B03D2704B76D7F98F8C393EE47D8D0812((&V_0), L_104, NULL);
		// break;
		goto IL_06c3;
	}

IL_0491:
	{
		// instance.strengthMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_105 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_106 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_105);
		float L_107;
		L_107 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_105, L_106);
		NoiseModule_set_strengthMultiplier_mFE019DCE55E1D8C470207E4224E1BA5D094DA357((&V_0), L_107, NULL);
		// break;
		goto IL_06c3;
	}

IL_04a9:
	{
		// instance.strengthX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_108 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_109 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_108);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_110;
		L_110 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_108, L_109);
		NoiseModule_set_strengthX_m8FE8C66343B2F98B266F60DDC9CDEEF2939FED16((&V_0), L_110, NULL);
		// break;
		goto IL_06c3;
	}

IL_04c1:
	{
		// instance.strengthXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_111 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_112 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_111);
		float L_113;
		L_113 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_111, L_112);
		NoiseModule_set_strengthXMultiplier_m87EDC350B40F36A41BFE2D7639D811CA596DFEB2((&V_0), L_113, NULL);
		// break;
		goto IL_06c3;
	}

IL_04d9:
	{
		// instance.strengthY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_114 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_115 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_114);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_116;
		L_116 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_114, L_115);
		NoiseModule_set_strengthY_m3B1AF971AB432E3BCF0CFF1DDAB56919D5062D1F((&V_0), L_116, NULL);
		// break;
		goto IL_06c3;
	}

IL_04f1:
	{
		// instance.strengthYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_117 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_118 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_117);
		float L_119;
		L_119 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_117, L_118);
		NoiseModule_set_strengthYMultiplier_mBF7AC9D5A4D367BF84F069D21FD20D5E97A57D89((&V_0), L_119, NULL);
		// break;
		goto IL_06c3;
	}

IL_0509:
	{
		// instance.strengthZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_121 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_120);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_122;
		L_122 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_120, L_121);
		NoiseModule_set_strengthZ_m517559EFC9F1CC4F172639D73971458CBDDD0143((&V_0), L_122, NULL);
		// break;
		goto IL_06c3;
	}

IL_0521:
	{
		// instance.strengthZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_123 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_124 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_123);
		float L_125;
		L_125 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_123, L_124);
		NoiseModule_set_strengthZMultiplier_m9403AB9A084216F42665501426AD26B0E88305C4((&V_0), L_125, NULL);
		// break;
		goto IL_06c3;
	}

IL_0539:
	{
		// instance.frequency = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_126 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_127 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_126);
		float L_128;
		L_128 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_126, L_127);
		NoiseModule_set_frequency_m70759B0A2D3852CF45F5F387C14F9AEA25E3E828((&V_0), L_128, NULL);
		// break;
		goto IL_06c3;
	}

IL_0551:
	{
		// instance.damping = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_130 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_129);
		bool L_131;
		L_131 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_129, L_130);
		NoiseModule_set_damping_m121F36B4B2B44302EE91CD14DF9041EEB6CC35C3((&V_0), L_131, NULL);
		// break;
		goto IL_06c3;
	}

IL_0569:
	{
		// instance.octaveCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_133 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_132);
		int32_t L_134;
		L_134 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_132, L_133);
		NoiseModule_set_octaveCount_m894782C18FEA785F023F311F597EFE58B43B1C55((&V_0), L_134, NULL);
		// break;
		goto IL_06c3;
	}

IL_0581:
	{
		// instance.octaveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_136 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_135);
		float L_137;
		L_137 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_135, L_136);
		NoiseModule_set_octaveMultiplier_m42720D4CD59B435AAAE4FC93DEB3A83ADA9C3FBB((&V_0), L_137, NULL);
		// break;
		goto IL_06c3;
	}

IL_0599:
	{
		// instance.octaveScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_138 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_139 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_138);
		float L_140;
		L_140 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_138, L_139);
		NoiseModule_set_octaveScale_m6C66795C9BE24401D80D79792F971DC51C4FCEFA((&V_0), L_140, NULL);
		// break;
		goto IL_06c3;
	}

IL_05b1:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemNoiseQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_141 = ___reader0;
		NullCheck(L_141);
		int32_t L_142;
		L_142 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var, L_141);
		NoiseModule_set_quality_m40D2AAC19BE53F0BF9A41A9761D1E940438C8AC4((&V_0), L_142, NULL);
		// break;
		goto IL_06c3;
	}

IL_05c4:
	{
		// instance.scrollSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_143 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_144 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_143);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_145;
		L_145 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_143, L_144);
		NoiseModule_set_scrollSpeed_m205B2E8602998D007EFA9F550C633F30633FB6DC((&V_0), L_145, NULL);
		// break;
		goto IL_06c3;
	}

IL_05dc:
	{
		// instance.scrollSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_146);
		float L_148;
		L_148 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_146, L_147);
		NoiseModule_set_scrollSpeedMultiplier_m849996D65CC65FB5D3C525ADCAF5119E5B4CBF14((&V_0), L_148, NULL);
		// break;
		goto IL_06c3;
	}

IL_05f4:
	{
		// instance.remapEnabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_149 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_150 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_149);
		bool L_151;
		L_151 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_149, L_150);
		NoiseModule_set_remapEnabled_mA5571C98B13D8839E801A65B0A628E41B462E395((&V_0), L_151, NULL);
		// break;
		goto IL_06c3;
	}

IL_060c:
	{
		// instance.remap = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_152 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_153 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_152);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_154;
		L_154 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_152, L_153);
		NoiseModule_set_remap_m3C8B3AC1CEB098D957CF6BC8F1A522953ED9F439((&V_0), L_154, NULL);
		// break;
		goto IL_06c3;
	}

IL_0624:
	{
		// instance.remapMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_155 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_156 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_155);
		float L_157;
		L_157 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_155, L_156);
		NoiseModule_set_remapMultiplier_mCB638181B26CF82A61C17E3F0D6D6E63C561E9C4((&V_0), L_157, NULL);
		// break;
		goto IL_06c3;
	}

IL_063c:
	{
		// instance.remapX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_158 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_159 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_158);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_160;
		L_160 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_158, L_159);
		NoiseModule_set_remapX_m15ADCD92890B6C21A29E06C438CA20C6A99D01AA((&V_0), L_160, NULL);
		// break;
		goto IL_06c3;
	}

IL_0651:
	{
		// instance.remapXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_161 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_162 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_161);
		float L_163;
		L_163 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_161, L_162);
		NoiseModule_set_remapXMultiplier_m4C5B29FEC2B917E5AAD4A59DFF163517A886F347((&V_0), L_163, NULL);
		// break;
		goto IL_06c3;
	}

IL_0666:
	{
		// instance.remapY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_164 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_165 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_164);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_166;
		L_166 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_164, L_165);
		NoiseModule_set_remapY_mD04EB94428E91D6C4839CC20ABFC19A42B9F7F6E((&V_0), L_166, NULL);
		// break;
		goto IL_06c3;
	}

IL_067b:
	{
		// instance.remapYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_167 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_168 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_167);
		float L_169;
		L_169 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_167, L_168);
		NoiseModule_set_remapYMultiplier_m8316E402501D85E1B9796FDF8C8A6DAE07B49325((&V_0), L_169, NULL);
		// break;
		goto IL_06c3;
	}

IL_0690:
	{
		// instance.remapZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_170 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_171 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_170);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_172;
		L_172 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_170, L_171);
		NoiseModule_set_remapZ_mAE7A90C23BFD7E10D2C53981911572AC8A2B5541((&V_0), L_172, NULL);
		// break;
		goto IL_06c3;
	}

IL_06a5:
	{
		// instance.remapZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_173 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_174 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_173);
		float L_175;
		L_175 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_173, L_174);
		NoiseModule_set_remapZMultiplier_mCEDE52028CD07D0F6ABBEC5F6985416217E57F42((&V_0), L_175, NULL);
		// break;
		goto IL_06c3;
	}

IL_06ba:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_176 = ___reader0;
		NullCheck(L_176);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_176);
		// break;
		goto IL_06c3;
	}

IL_06c3:
	{
	}

IL_06c4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_177 = ___reader0;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_177);
		String_t* L_179 = L_178;
		V_1 = L_179;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_179) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_180 = V_5;
		if (L_180)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_NoiseModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_NoiseModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m027FA9E494EBDB58DDF0C9080359505D605853EA_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A91D337442EA721D81265946B3502D017B35431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5506962CD736328B4844CD75A860794FE5B29F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1343DC9A4902B963209412495148EE532A73DEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.NoiseModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)((NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)UnBox(L_0, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var))));
		goto IL_06c4;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1832685215)))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)854058160)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)190084455)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0212;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)96119838))))
		{
			goto IL_040a;
		}
	}
	{
		goto IL_0054;
	}

IL_0054:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)190084455))))
		{
			goto IL_0362;
		}
	}
	{
		goto IL_06ba;
	}

IL_0065:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)608739593))))
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0073;
	}

IL_0073:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)800267265))))
		{
			goto IL_02e4;
		}
	}
	{
		goto IL_0081;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)854058160))))
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0092:
	{
		uint32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1211446584)))))
		{
			goto IL_00c8;
		}
	}
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1137906375))))
		{
			goto IL_0251;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a9:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1174656921))))
		{
			goto IL_03b6;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b7:
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1211446584))))
		{
			goto IL_0266;
		}
	}
	{
		goto IL_06ba;
	}

IL_00c8:
	{
		uint32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1245001822)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1228224203))))
		{
			goto IL_0290;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1245001822))))
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_06ba;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0227;
		}
	}
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1832685215))))
		{
			goto IL_027b;
		}
	}
	{
		goto IL_06ba;
	}

IL_010f:
	{
		uint32_t L_23 = V_4;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1151223659)))))
		{
			goto IL_0195;
		}
	}
	{
		uint32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1953622726))))
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_012f;
	}

IL_012f:
	{
		uint32_t L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-1760681759))))
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_013d;
	}

IL_013d:
	{
		uint32_t L_27 = V_4;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_034d;
		}
	}
	{
		goto IL_06ba;
	}

IL_014e:
	{
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1404870093)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1412380868))))
		{
			goto IL_0377;
		}
	}
	{
		goto IL_0165;
	}

IL_0165:
	{
		uint32_t L_30 = V_4;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1404870093))))
		{
			goto IL_038c;
		}
	}
	{
		goto IL_06ba;
	}

IL_0176:
	{
		uint32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1276098610))))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0184;
	}

IL_0184:
	{
		uint32_t L_32 = V_4;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1151223659))))
		{
			goto IL_02f9;
		}
	}
	{
		goto IL_06ba;
	}

IL_0195:
	{
		uint32_t L_33 = V_4;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-313239878)))))
		{
			goto IL_01cb;
		}
	}
	{
		uint32_t L_34 = V_4;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-528869200))))
		{
			goto IL_023c;
		}
	}
	{
		goto IL_01ac;
	}

IL_01ac:
	{
		uint32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-346795116))))
		{
			goto IL_041f;
		}
	}
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		uint32_t L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-313239878))))
		{
			goto IL_03cb;
		}
	}
	{
		goto IL_06ba;
	}

IL_01cb:
	{
		uint32_t L_37 = V_4;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-44770453)))))
		{
			goto IL_01f3;
		}
	}
	{
		uint32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-296462259))))
		{
			goto IL_03f5;
		}
	}
	{
		goto IL_01e2;
	}

IL_01e2:
	{
		uint32_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-44770453))))
		{
			goto IL_0434;
		}
	}
	{
		goto IL_06ba;
	}

IL_01f3:
	{
		uint32_t L_40 = V_4;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-11444963))))
		{
			goto IL_03e0;
		}
	}
	{
		goto IL_0201;
	}

IL_0201:
	{
		uint32_t L_41 = V_4;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-7684324))))
		{
			goto IL_030e;
		}
	}
	{
		goto IL_06ba;
	}

IL_0212:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_43)
		{
			goto IL_0449;
		}
	}
	{
		goto IL_06ba;
	}

IL_0227:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_45)
		{
			goto IL_0461;
		}
	}
	{
		goto IL_06ba;
	}

IL_023c:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B, NULL);
		if (L_47)
		{
			goto IL_0479;
		}
	}
	{
		goto IL_06ba;
	}

IL_0251:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7, NULL);
		if (L_49)
		{
			goto IL_0491;
		}
	}
	{
		goto IL_06ba;
	}

IL_0266:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF, NULL);
		if (L_51)
		{
			goto IL_04a9;
		}
	}
	{
		goto IL_06ba;
	}

IL_027b:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F, NULL);
		if (L_53)
		{
			goto IL_04c1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0290:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralF1343DC9A4902B963209412495148EE532A73DEF, NULL);
		if (L_55)
		{
			goto IL_04d9;
		}
	}
	{
		goto IL_06ba;
	}

IL_02a5:
	{
		String_t* L_56 = V_2;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF, NULL);
		if (L_57)
		{
			goto IL_04f1;
		}
	}
	{
		goto IL_06ba;
	}

IL_02ba:
	{
		String_t* L_58 = V_2;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28, NULL);
		if (L_59)
		{
			goto IL_0509;
		}
	}
	{
		goto IL_06ba;
	}

IL_02cf:
	{
		String_t* L_60 = V_2;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357, NULL);
		if (L_61)
		{
			goto IL_0521;
		}
	}
	{
		goto IL_06ba;
	}

IL_02e4:
	{
		String_t* L_62 = V_2;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51, NULL);
		if (L_63)
		{
			goto IL_0539;
		}
	}
	{
		goto IL_06ba;
	}

IL_02f9:
	{
		String_t* L_64 = V_2;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C, NULL);
		if (L_65)
		{
			goto IL_0551;
		}
	}
	{
		goto IL_06ba;
	}

IL_030e:
	{
		String_t* L_66 = V_2;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2, NULL);
		if (L_67)
		{
			goto IL_0569;
		}
	}
	{
		goto IL_06ba;
	}

IL_0323:
	{
		String_t* L_68 = V_2;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE, NULL);
		if (L_69)
		{
			goto IL_0581;
		}
	}
	{
		goto IL_06ba;
	}

IL_0338:
	{
		String_t* L_70 = V_2;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral3A91D337442EA721D81265946B3502D017B35431, NULL);
		if (L_71)
		{
			goto IL_0599;
		}
	}
	{
		goto IL_06ba;
	}

IL_034d:
	{
		String_t* L_72 = V_2;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_73)
		{
			goto IL_05b1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0362:
	{
		String_t* L_74 = V_2;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580, NULL);
		if (L_75)
		{
			goto IL_05c4;
		}
	}
	{
		goto IL_06ba;
	}

IL_0377:
	{
		String_t* L_76 = V_2;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E, NULL);
		if (L_77)
		{
			goto IL_05dc;
		}
	}
	{
		goto IL_06ba;
	}

IL_038c:
	{
		String_t* L_78 = V_2;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41, NULL);
		if (L_79)
		{
			goto IL_05f4;
		}
	}
	{
		goto IL_06ba;
	}

IL_03a1:
	{
		String_t* L_80 = V_2;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A, NULL);
		if (L_81)
		{
			goto IL_060c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03b6:
	{
		String_t* L_82 = V_2;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE, NULL);
		if (L_83)
		{
			goto IL_0624;
		}
	}
	{
		goto IL_06ba;
	}

IL_03cb:
	{
		String_t* L_84 = V_2;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D, NULL);
		if (L_85)
		{
			goto IL_063c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03e0:
	{
		String_t* L_86 = V_2;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176, NULL);
		if (L_87)
		{
			goto IL_0651;
		}
	}
	{
		goto IL_06ba;
	}

IL_03f5:
	{
		String_t* L_88 = V_2;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E, NULL);
		if (L_89)
		{
			goto IL_0666;
		}
	}
	{
		goto IL_06ba;
	}

IL_040a:
	{
		String_t* L_90 = V_2;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D, NULL);
		if (L_91)
		{
			goto IL_067b;
		}
	}
	{
		goto IL_06ba;
	}

IL_041f:
	{
		String_t* L_92 = V_2;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9, NULL);
		if (L_93)
		{
			goto IL_0690;
		}
	}
	{
		goto IL_06ba;
	}

IL_0434:
	{
		String_t* L_94 = V_2;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral5506962CD736328B4844CD75A860794FE5B29F07, NULL);
		if (L_95)
		{
			goto IL_06a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0449:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_97 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_96);
		bool L_98;
		L_98 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_96, L_97);
		NoiseModule_set_enabled_m2BC18924D45F2AB9E6D7558A299B06C42FE0E655((&V_0), L_98, NULL);
		// break;
		goto IL_06c3;
	}

IL_0461:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_100 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_99);
		bool L_101;
		L_101 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_99, L_100);
		NoiseModule_set_separateAxes_m5F43E425E30079428CA258EF8A3CDD73827B6E4E((&V_0), L_101, NULL);
		// break;
		goto IL_06c3;
	}

IL_0479:
	{
		// instance.strength = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_103 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_102);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_104;
		L_104 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_102, L_103);
		NoiseModule_set_strength_m244E401B03D2704B76D7F98F8C393EE47D8D0812((&V_0), L_104, NULL);
		// break;
		goto IL_06c3;
	}

IL_0491:
	{
		// instance.strengthMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_105 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_106 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_105);
		float L_107;
		L_107 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_105, L_106);
		NoiseModule_set_strengthMultiplier_mFE019DCE55E1D8C470207E4224E1BA5D094DA357((&V_0), L_107, NULL);
		// break;
		goto IL_06c3;
	}

IL_04a9:
	{
		// instance.strengthX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_108 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_109 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_108);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_110;
		L_110 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_108, L_109);
		NoiseModule_set_strengthX_m8FE8C66343B2F98B266F60DDC9CDEEF2939FED16((&V_0), L_110, NULL);
		// break;
		goto IL_06c3;
	}

IL_04c1:
	{
		// instance.strengthXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_111 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_112 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_111);
		float L_113;
		L_113 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_111, L_112);
		NoiseModule_set_strengthXMultiplier_m87EDC350B40F36A41BFE2D7639D811CA596DFEB2((&V_0), L_113, NULL);
		// break;
		goto IL_06c3;
	}

IL_04d9:
	{
		// instance.strengthY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_114 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_115 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_114);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_116;
		L_116 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_114, L_115);
		NoiseModule_set_strengthY_m3B1AF971AB432E3BCF0CFF1DDAB56919D5062D1F((&V_0), L_116, NULL);
		// break;
		goto IL_06c3;
	}

IL_04f1:
	{
		// instance.strengthYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_117 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_118 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_117);
		float L_119;
		L_119 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_117, L_118);
		NoiseModule_set_strengthYMultiplier_mBF7AC9D5A4D367BF84F069D21FD20D5E97A57D89((&V_0), L_119, NULL);
		// break;
		goto IL_06c3;
	}

IL_0509:
	{
		// instance.strengthZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_121 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_120);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_122;
		L_122 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_120, L_121);
		NoiseModule_set_strengthZ_m517559EFC9F1CC4F172639D73971458CBDDD0143((&V_0), L_122, NULL);
		// break;
		goto IL_06c3;
	}

IL_0521:
	{
		// instance.strengthZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_123 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_124 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_123);
		float L_125;
		L_125 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_123, L_124);
		NoiseModule_set_strengthZMultiplier_m9403AB9A084216F42665501426AD26B0E88305C4((&V_0), L_125, NULL);
		// break;
		goto IL_06c3;
	}

IL_0539:
	{
		// instance.frequency = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_126 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_127 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_126);
		float L_128;
		L_128 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_126, L_127);
		NoiseModule_set_frequency_m70759B0A2D3852CF45F5F387C14F9AEA25E3E828((&V_0), L_128, NULL);
		// break;
		goto IL_06c3;
	}

IL_0551:
	{
		// instance.damping = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_130 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_129);
		bool L_131;
		L_131 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_129, L_130);
		NoiseModule_set_damping_m121F36B4B2B44302EE91CD14DF9041EEB6CC35C3((&V_0), L_131, NULL);
		// break;
		goto IL_06c3;
	}

IL_0569:
	{
		// instance.octaveCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_133 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_132);
		int32_t L_134;
		L_134 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_132, L_133);
		NoiseModule_set_octaveCount_m894782C18FEA785F023F311F597EFE58B43B1C55((&V_0), L_134, NULL);
		// break;
		goto IL_06c3;
	}

IL_0581:
	{
		// instance.octaveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_136 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_135);
		float L_137;
		L_137 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_135, L_136);
		NoiseModule_set_octaveMultiplier_m42720D4CD59B435AAAE4FC93DEB3A83ADA9C3FBB((&V_0), L_137, NULL);
		// break;
		goto IL_06c3;
	}

IL_0599:
	{
		// instance.octaveScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_138 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_139 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_138);
		float L_140;
		L_140 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_138, L_139);
		NoiseModule_set_octaveScale_m6C66795C9BE24401D80D79792F971DC51C4FCEFA((&V_0), L_140, NULL);
		// break;
		goto IL_06c3;
	}

IL_05b1:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemNoiseQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_141 = ___reader0;
		NullCheck(L_141);
		int32_t L_142;
		L_142 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var, L_141);
		NoiseModule_set_quality_m40D2AAC19BE53F0BF9A41A9761D1E940438C8AC4((&V_0), L_142, NULL);
		// break;
		goto IL_06c3;
	}

IL_05c4:
	{
		// instance.scrollSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_143 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_144 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_143);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_145;
		L_145 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_143, L_144);
		NoiseModule_set_scrollSpeed_m205B2E8602998D007EFA9F550C633F30633FB6DC((&V_0), L_145, NULL);
		// break;
		goto IL_06c3;
	}

IL_05dc:
	{
		// instance.scrollSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_146);
		float L_148;
		L_148 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_146, L_147);
		NoiseModule_set_scrollSpeedMultiplier_m849996D65CC65FB5D3C525ADCAF5119E5B4CBF14((&V_0), L_148, NULL);
		// break;
		goto IL_06c3;
	}

IL_05f4:
	{
		// instance.remapEnabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_149 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_150 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_149);
		bool L_151;
		L_151 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_149, L_150);
		NoiseModule_set_remapEnabled_mA5571C98B13D8839E801A65B0A628E41B462E395((&V_0), L_151, NULL);
		// break;
		goto IL_06c3;
	}

IL_060c:
	{
		// instance.remap = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_152 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_153 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_152);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_154;
		L_154 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_152, L_153);
		NoiseModule_set_remap_m3C8B3AC1CEB098D957CF6BC8F1A522953ED9F439((&V_0), L_154, NULL);
		// break;
		goto IL_06c3;
	}

IL_0624:
	{
		// instance.remapMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_155 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_156 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_155);
		float L_157;
		L_157 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_155, L_156);
		NoiseModule_set_remapMultiplier_mCB638181B26CF82A61C17E3F0D6D6E63C561E9C4((&V_0), L_157, NULL);
		// break;
		goto IL_06c3;
	}

IL_063c:
	{
		// instance.remapX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_158 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_159 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_158);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_160;
		L_160 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_158, L_159);
		NoiseModule_set_remapX_m15ADCD92890B6C21A29E06C438CA20C6A99D01AA((&V_0), L_160, NULL);
		// break;
		goto IL_06c3;
	}

IL_0651:
	{
		// instance.remapXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_161 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_162 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_161);
		float L_163;
		L_163 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_161, L_162);
		NoiseModule_set_remapXMultiplier_m4C5B29FEC2B917E5AAD4A59DFF163517A886F347((&V_0), L_163, NULL);
		// break;
		goto IL_06c3;
	}

IL_0666:
	{
		// instance.remapY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_164 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_165 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_164);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_166;
		L_166 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_164, L_165);
		NoiseModule_set_remapY_mD04EB94428E91D6C4839CC20ABFC19A42B9F7F6E((&V_0), L_166, NULL);
		// break;
		goto IL_06c3;
	}

IL_067b:
	{
		// instance.remapYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_167 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_168 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_167);
		float L_169;
		L_169 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_167, L_168);
		NoiseModule_set_remapYMultiplier_m8316E402501D85E1B9796FDF8C8A6DAE07B49325((&V_0), L_169, NULL);
		// break;
		goto IL_06c3;
	}

IL_0690:
	{
		// instance.remapZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_170 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_171 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_170);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_172;
		L_172 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_170, L_171);
		NoiseModule_set_remapZ_mAE7A90C23BFD7E10D2C53981911572AC8A2B5541((&V_0), L_172, NULL);
		// break;
		goto IL_06c3;
	}

IL_06a5:
	{
		// instance.remapZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_173 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_174 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_173);
		float L_175;
		L_175 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_173, L_174);
		NoiseModule_set_remapZMultiplier_mCEDE52028CD07D0F6ABBEC5F6985416217E57F42((&V_0), L_175, NULL);
		// break;
		goto IL_06c3;
	}

IL_06ba:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_176 = ___reader0;
		NullCheck(L_176);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_176);
		// break;
		goto IL_06c3;
	}

IL_06c3:
	{
	}

IL_06c4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_177 = ___reader0;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_177);
		String_t* L_179 = L_178;
		V_1 = L_179;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_179) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_180 = V_5;
		if (L_180)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_NoiseModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_NoiseModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mA81E9E7A4B3C8BA802BC9F3397BE0CF365E02F57_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A91D337442EA721D81265946B3502D017B35431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5506962CD736328B4844CD75A860794FE5B29F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1343DC9A4902B963209412495148EE532A73DEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.NoiseModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)((NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)UnBox(L_0, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var))));
		goto IL_06c4;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1832685215)))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)854058160)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)190084455)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0212;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)96119838))))
		{
			goto IL_040a;
		}
	}
	{
		goto IL_0054;
	}

IL_0054:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)190084455))))
		{
			goto IL_0362;
		}
	}
	{
		goto IL_06ba;
	}

IL_0065:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)608739593))))
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0073;
	}

IL_0073:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)800267265))))
		{
			goto IL_02e4;
		}
	}
	{
		goto IL_0081;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)854058160))))
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0092:
	{
		uint32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1211446584)))))
		{
			goto IL_00c8;
		}
	}
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1137906375))))
		{
			goto IL_0251;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a9:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1174656921))))
		{
			goto IL_03b6;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b7:
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1211446584))))
		{
			goto IL_0266;
		}
	}
	{
		goto IL_06ba;
	}

IL_00c8:
	{
		uint32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1245001822)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1228224203))))
		{
			goto IL_0290;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1245001822))))
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_06ba;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0227;
		}
	}
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1832685215))))
		{
			goto IL_027b;
		}
	}
	{
		goto IL_06ba;
	}

IL_010f:
	{
		uint32_t L_23 = V_4;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1151223659)))))
		{
			goto IL_0195;
		}
	}
	{
		uint32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1953622726))))
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_012f;
	}

IL_012f:
	{
		uint32_t L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-1760681759))))
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_013d;
	}

IL_013d:
	{
		uint32_t L_27 = V_4;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_034d;
		}
	}
	{
		goto IL_06ba;
	}

IL_014e:
	{
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1404870093)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1412380868))))
		{
			goto IL_0377;
		}
	}
	{
		goto IL_0165;
	}

IL_0165:
	{
		uint32_t L_30 = V_4;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1404870093))))
		{
			goto IL_038c;
		}
	}
	{
		goto IL_06ba;
	}

IL_0176:
	{
		uint32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1276098610))))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0184;
	}

IL_0184:
	{
		uint32_t L_32 = V_4;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1151223659))))
		{
			goto IL_02f9;
		}
	}
	{
		goto IL_06ba;
	}

IL_0195:
	{
		uint32_t L_33 = V_4;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-313239878)))))
		{
			goto IL_01cb;
		}
	}
	{
		uint32_t L_34 = V_4;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-528869200))))
		{
			goto IL_023c;
		}
	}
	{
		goto IL_01ac;
	}

IL_01ac:
	{
		uint32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-346795116))))
		{
			goto IL_041f;
		}
	}
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		uint32_t L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-313239878))))
		{
			goto IL_03cb;
		}
	}
	{
		goto IL_06ba;
	}

IL_01cb:
	{
		uint32_t L_37 = V_4;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-44770453)))))
		{
			goto IL_01f3;
		}
	}
	{
		uint32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-296462259))))
		{
			goto IL_03f5;
		}
	}
	{
		goto IL_01e2;
	}

IL_01e2:
	{
		uint32_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-44770453))))
		{
			goto IL_0434;
		}
	}
	{
		goto IL_06ba;
	}

IL_01f3:
	{
		uint32_t L_40 = V_4;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-11444963))))
		{
			goto IL_03e0;
		}
	}
	{
		goto IL_0201;
	}

IL_0201:
	{
		uint32_t L_41 = V_4;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-7684324))))
		{
			goto IL_030e;
		}
	}
	{
		goto IL_06ba;
	}

IL_0212:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_43)
		{
			goto IL_0449;
		}
	}
	{
		goto IL_06ba;
	}

IL_0227:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_45)
		{
			goto IL_0461;
		}
	}
	{
		goto IL_06ba;
	}

IL_023c:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B, NULL);
		if (L_47)
		{
			goto IL_0479;
		}
	}
	{
		goto IL_06ba;
	}

IL_0251:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7, NULL);
		if (L_49)
		{
			goto IL_0491;
		}
	}
	{
		goto IL_06ba;
	}

IL_0266:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF, NULL);
		if (L_51)
		{
			goto IL_04a9;
		}
	}
	{
		goto IL_06ba;
	}

IL_027b:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F, NULL);
		if (L_53)
		{
			goto IL_04c1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0290:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralF1343DC9A4902B963209412495148EE532A73DEF, NULL);
		if (L_55)
		{
			goto IL_04d9;
		}
	}
	{
		goto IL_06ba;
	}

IL_02a5:
	{
		String_t* L_56 = V_2;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF, NULL);
		if (L_57)
		{
			goto IL_04f1;
		}
	}
	{
		goto IL_06ba;
	}

IL_02ba:
	{
		String_t* L_58 = V_2;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28, NULL);
		if (L_59)
		{
			goto IL_0509;
		}
	}
	{
		goto IL_06ba;
	}

IL_02cf:
	{
		String_t* L_60 = V_2;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357, NULL);
		if (L_61)
		{
			goto IL_0521;
		}
	}
	{
		goto IL_06ba;
	}

IL_02e4:
	{
		String_t* L_62 = V_2;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51, NULL);
		if (L_63)
		{
			goto IL_0539;
		}
	}
	{
		goto IL_06ba;
	}

IL_02f9:
	{
		String_t* L_64 = V_2;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C, NULL);
		if (L_65)
		{
			goto IL_0551;
		}
	}
	{
		goto IL_06ba;
	}

IL_030e:
	{
		String_t* L_66 = V_2;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2, NULL);
		if (L_67)
		{
			goto IL_0569;
		}
	}
	{
		goto IL_06ba;
	}

IL_0323:
	{
		String_t* L_68 = V_2;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE, NULL);
		if (L_69)
		{
			goto IL_0581;
		}
	}
	{
		goto IL_06ba;
	}

IL_0338:
	{
		String_t* L_70 = V_2;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral3A91D337442EA721D81265946B3502D017B35431, NULL);
		if (L_71)
		{
			goto IL_0599;
		}
	}
	{
		goto IL_06ba;
	}

IL_034d:
	{
		String_t* L_72 = V_2;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_73)
		{
			goto IL_05b1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0362:
	{
		String_t* L_74 = V_2;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580, NULL);
		if (L_75)
		{
			goto IL_05c4;
		}
	}
	{
		goto IL_06ba;
	}

IL_0377:
	{
		String_t* L_76 = V_2;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E, NULL);
		if (L_77)
		{
			goto IL_05dc;
		}
	}
	{
		goto IL_06ba;
	}

IL_038c:
	{
		String_t* L_78 = V_2;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41, NULL);
		if (L_79)
		{
			goto IL_05f4;
		}
	}
	{
		goto IL_06ba;
	}

IL_03a1:
	{
		String_t* L_80 = V_2;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A, NULL);
		if (L_81)
		{
			goto IL_060c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03b6:
	{
		String_t* L_82 = V_2;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE, NULL);
		if (L_83)
		{
			goto IL_0624;
		}
	}
	{
		goto IL_06ba;
	}

IL_03cb:
	{
		String_t* L_84 = V_2;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D, NULL);
		if (L_85)
		{
			goto IL_063c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03e0:
	{
		String_t* L_86 = V_2;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176, NULL);
		if (L_87)
		{
			goto IL_0651;
		}
	}
	{
		goto IL_06ba;
	}

IL_03f5:
	{
		String_t* L_88 = V_2;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E, NULL);
		if (L_89)
		{
			goto IL_0666;
		}
	}
	{
		goto IL_06ba;
	}

IL_040a:
	{
		String_t* L_90 = V_2;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D, NULL);
		if (L_91)
		{
			goto IL_067b;
		}
	}
	{
		goto IL_06ba;
	}

IL_041f:
	{
		String_t* L_92 = V_2;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9, NULL);
		if (L_93)
		{
			goto IL_0690;
		}
	}
	{
		goto IL_06ba;
	}

IL_0434:
	{
		String_t* L_94 = V_2;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral5506962CD736328B4844CD75A860794FE5B29F07, NULL);
		if (L_95)
		{
			goto IL_06a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0449:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_97 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_96);
		bool L_98;
		L_98 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_96, L_97);
		NoiseModule_set_enabled_m2BC18924D45F2AB9E6D7558A299B06C42FE0E655((&V_0), L_98, NULL);
		// break;
		goto IL_06c3;
	}

IL_0461:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_100 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_99);
		bool L_101;
		L_101 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_99, L_100);
		NoiseModule_set_separateAxes_m5F43E425E30079428CA258EF8A3CDD73827B6E4E((&V_0), L_101, NULL);
		// break;
		goto IL_06c3;
	}

IL_0479:
	{
		// instance.strength = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_103 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_102);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_104;
		L_104 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_102, L_103);
		NoiseModule_set_strength_m244E401B03D2704B76D7F98F8C393EE47D8D0812((&V_0), L_104, NULL);
		// break;
		goto IL_06c3;
	}

IL_0491:
	{
		// instance.strengthMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_105 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_106 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_105);
		float L_107;
		L_107 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_105, L_106);
		NoiseModule_set_strengthMultiplier_mFE019DCE55E1D8C470207E4224E1BA5D094DA357((&V_0), L_107, NULL);
		// break;
		goto IL_06c3;
	}

IL_04a9:
	{
		// instance.strengthX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_108 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_109 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_108);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_110;
		L_110 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_108, L_109);
		NoiseModule_set_strengthX_m8FE8C66343B2F98B266F60DDC9CDEEF2939FED16((&V_0), L_110, NULL);
		// break;
		goto IL_06c3;
	}

IL_04c1:
	{
		// instance.strengthXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_111 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_112 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_111);
		float L_113;
		L_113 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_111, L_112);
		NoiseModule_set_strengthXMultiplier_m87EDC350B40F36A41BFE2D7639D811CA596DFEB2((&V_0), L_113, NULL);
		// break;
		goto IL_06c3;
	}

IL_04d9:
	{
		// instance.strengthY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_114 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_115 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_114);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_116;
		L_116 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_114, L_115);
		NoiseModule_set_strengthY_m3B1AF971AB432E3BCF0CFF1DDAB56919D5062D1F((&V_0), L_116, NULL);
		// break;
		goto IL_06c3;
	}

IL_04f1:
	{
		// instance.strengthYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_117 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_118 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_117);
		float L_119;
		L_119 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_117, L_118);
		NoiseModule_set_strengthYMultiplier_mBF7AC9D5A4D367BF84F069D21FD20D5E97A57D89((&V_0), L_119, NULL);
		// break;
		goto IL_06c3;
	}

IL_0509:
	{
		// instance.strengthZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_121 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_120);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_122;
		L_122 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_120, L_121);
		NoiseModule_set_strengthZ_m517559EFC9F1CC4F172639D73971458CBDDD0143((&V_0), L_122, NULL);
		// break;
		goto IL_06c3;
	}

IL_0521:
	{
		// instance.strengthZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_123 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_124 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_123);
		float L_125;
		L_125 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_123, L_124);
		NoiseModule_set_strengthZMultiplier_m9403AB9A084216F42665501426AD26B0E88305C4((&V_0), L_125, NULL);
		// break;
		goto IL_06c3;
	}

IL_0539:
	{
		// instance.frequency = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_126 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_127 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_126);
		float L_128;
		L_128 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_126, L_127);
		NoiseModule_set_frequency_m70759B0A2D3852CF45F5F387C14F9AEA25E3E828((&V_0), L_128, NULL);
		// break;
		goto IL_06c3;
	}

IL_0551:
	{
		// instance.damping = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_130 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_129);
		bool L_131;
		L_131 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_129, L_130);
		NoiseModule_set_damping_m121F36B4B2B44302EE91CD14DF9041EEB6CC35C3((&V_0), L_131, NULL);
		// break;
		goto IL_06c3;
	}

IL_0569:
	{
		// instance.octaveCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_133 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_132);
		int32_t L_134;
		L_134 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_132, L_133);
		NoiseModule_set_octaveCount_m894782C18FEA785F023F311F597EFE58B43B1C55((&V_0), L_134, NULL);
		// break;
		goto IL_06c3;
	}

IL_0581:
	{
		// instance.octaveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_136 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_135);
		float L_137;
		L_137 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_135, L_136);
		NoiseModule_set_octaveMultiplier_m42720D4CD59B435AAAE4FC93DEB3A83ADA9C3FBB((&V_0), L_137, NULL);
		// break;
		goto IL_06c3;
	}

IL_0599:
	{
		// instance.octaveScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_138 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_139 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_138);
		float L_140;
		L_140 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_138, L_139);
		NoiseModule_set_octaveScale_m6C66795C9BE24401D80D79792F971DC51C4FCEFA((&V_0), L_140, NULL);
		// break;
		goto IL_06c3;
	}

IL_05b1:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemNoiseQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_141 = ___reader0;
		NullCheck(L_141);
		int32_t L_142;
		L_142 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var, L_141);
		NoiseModule_set_quality_m40D2AAC19BE53F0BF9A41A9761D1E940438C8AC4((&V_0), L_142, NULL);
		// break;
		goto IL_06c3;
	}

IL_05c4:
	{
		// instance.scrollSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_143 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_144 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_143);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_145;
		L_145 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_143, L_144);
		NoiseModule_set_scrollSpeed_m205B2E8602998D007EFA9F550C633F30633FB6DC((&V_0), L_145, NULL);
		// break;
		goto IL_06c3;
	}

IL_05dc:
	{
		// instance.scrollSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_146);
		float L_148;
		L_148 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_146, L_147);
		NoiseModule_set_scrollSpeedMultiplier_m849996D65CC65FB5D3C525ADCAF5119E5B4CBF14((&V_0), L_148, NULL);
		// break;
		goto IL_06c3;
	}

IL_05f4:
	{
		// instance.remapEnabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_149 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_150 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_149);
		bool L_151;
		L_151 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_149, L_150);
		NoiseModule_set_remapEnabled_mA5571C98B13D8839E801A65B0A628E41B462E395((&V_0), L_151, NULL);
		// break;
		goto IL_06c3;
	}

IL_060c:
	{
		// instance.remap = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_152 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_153 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_152);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_154;
		L_154 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_152, L_153);
		NoiseModule_set_remap_m3C8B3AC1CEB098D957CF6BC8F1A522953ED9F439((&V_0), L_154, NULL);
		// break;
		goto IL_06c3;
	}

IL_0624:
	{
		// instance.remapMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_155 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_156 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_155);
		float L_157;
		L_157 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_155, L_156);
		NoiseModule_set_remapMultiplier_mCB638181B26CF82A61C17E3F0D6D6E63C561E9C4((&V_0), L_157, NULL);
		// break;
		goto IL_06c3;
	}

IL_063c:
	{
		// instance.remapX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_158 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_159 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_158);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_160;
		L_160 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_158, L_159);
		NoiseModule_set_remapX_m15ADCD92890B6C21A29E06C438CA20C6A99D01AA((&V_0), L_160, NULL);
		// break;
		goto IL_06c3;
	}

IL_0651:
	{
		// instance.remapXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_161 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_162 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_161);
		float L_163;
		L_163 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_161, L_162);
		NoiseModule_set_remapXMultiplier_m4C5B29FEC2B917E5AAD4A59DFF163517A886F347((&V_0), L_163, NULL);
		// break;
		goto IL_06c3;
	}

IL_0666:
	{
		// instance.remapY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_164 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_165 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_164);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_166;
		L_166 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_164, L_165);
		NoiseModule_set_remapY_mD04EB94428E91D6C4839CC20ABFC19A42B9F7F6E((&V_0), L_166, NULL);
		// break;
		goto IL_06c3;
	}

IL_067b:
	{
		// instance.remapYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_167 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_168 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_167);
		float L_169;
		L_169 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_167, L_168);
		NoiseModule_set_remapYMultiplier_m8316E402501D85E1B9796FDF8C8A6DAE07B49325((&V_0), L_169, NULL);
		// break;
		goto IL_06c3;
	}

IL_0690:
	{
		// instance.remapZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_170 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_171 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_170);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_172;
		L_172 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_170, L_171);
		NoiseModule_set_remapZ_mAE7A90C23BFD7E10D2C53981911572AC8A2B5541((&V_0), L_172, NULL);
		// break;
		goto IL_06c3;
	}

IL_06a5:
	{
		// instance.remapZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_173 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_174 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_173);
		float L_175;
		L_175 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_173, L_174);
		NoiseModule_set_remapZMultiplier_mCEDE52028CD07D0F6ABBEC5F6985416217E57F42((&V_0), L_175, NULL);
		// break;
		goto IL_06c3;
	}

IL_06ba:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_176 = ___reader0;
		NullCheck(L_176);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_176);
		// break;
		goto IL_06c3;
	}

IL_06c3:
	{
	}

IL_06c4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_177 = ___reader0;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_177);
		String_t* L_179 = L_178;
		V_1 = L_179;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_179) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_180 = V_5;
		if (L_180)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_NoiseModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_NoiseModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m67490EEF8287E28E87C90320EBA256DB629AF437_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A91D337442EA721D81265946B3502D017B35431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5506962CD736328B4844CD75A860794FE5B29F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1343DC9A4902B963209412495148EE532A73DEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.NoiseModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)((NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)UnBox(L_0, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var))));
		goto IL_06c4;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1832685215)))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)854058160)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)190084455)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0212;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)96119838))))
		{
			goto IL_040a;
		}
	}
	{
		goto IL_0054;
	}

IL_0054:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)190084455))))
		{
			goto IL_0362;
		}
	}
	{
		goto IL_06ba;
	}

IL_0065:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)608739593))))
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0073;
	}

IL_0073:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)800267265))))
		{
			goto IL_02e4;
		}
	}
	{
		goto IL_0081;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)854058160))))
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0092:
	{
		uint32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1211446584)))))
		{
			goto IL_00c8;
		}
	}
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1137906375))))
		{
			goto IL_0251;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a9:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1174656921))))
		{
			goto IL_03b6;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b7:
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1211446584))))
		{
			goto IL_0266;
		}
	}
	{
		goto IL_06ba;
	}

IL_00c8:
	{
		uint32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1245001822)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1228224203))))
		{
			goto IL_0290;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1245001822))))
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_06ba;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0227;
		}
	}
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1832685215))))
		{
			goto IL_027b;
		}
	}
	{
		goto IL_06ba;
	}

IL_010f:
	{
		uint32_t L_23 = V_4;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1151223659)))))
		{
			goto IL_0195;
		}
	}
	{
		uint32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1953622726))))
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_012f;
	}

IL_012f:
	{
		uint32_t L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-1760681759))))
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_013d;
	}

IL_013d:
	{
		uint32_t L_27 = V_4;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_034d;
		}
	}
	{
		goto IL_06ba;
	}

IL_014e:
	{
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1404870093)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1412380868))))
		{
			goto IL_0377;
		}
	}
	{
		goto IL_0165;
	}

IL_0165:
	{
		uint32_t L_30 = V_4;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1404870093))))
		{
			goto IL_038c;
		}
	}
	{
		goto IL_06ba;
	}

IL_0176:
	{
		uint32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1276098610))))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0184;
	}

IL_0184:
	{
		uint32_t L_32 = V_4;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1151223659))))
		{
			goto IL_02f9;
		}
	}
	{
		goto IL_06ba;
	}

IL_0195:
	{
		uint32_t L_33 = V_4;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-313239878)))))
		{
			goto IL_01cb;
		}
	}
	{
		uint32_t L_34 = V_4;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-528869200))))
		{
			goto IL_023c;
		}
	}
	{
		goto IL_01ac;
	}

IL_01ac:
	{
		uint32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-346795116))))
		{
			goto IL_041f;
		}
	}
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		uint32_t L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-313239878))))
		{
			goto IL_03cb;
		}
	}
	{
		goto IL_06ba;
	}

IL_01cb:
	{
		uint32_t L_37 = V_4;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-44770453)))))
		{
			goto IL_01f3;
		}
	}
	{
		uint32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-296462259))))
		{
			goto IL_03f5;
		}
	}
	{
		goto IL_01e2;
	}

IL_01e2:
	{
		uint32_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-44770453))))
		{
			goto IL_0434;
		}
	}
	{
		goto IL_06ba;
	}

IL_01f3:
	{
		uint32_t L_40 = V_4;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-11444963))))
		{
			goto IL_03e0;
		}
	}
	{
		goto IL_0201;
	}

IL_0201:
	{
		uint32_t L_41 = V_4;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-7684324))))
		{
			goto IL_030e;
		}
	}
	{
		goto IL_06ba;
	}

IL_0212:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_43)
		{
			goto IL_0449;
		}
	}
	{
		goto IL_06ba;
	}

IL_0227:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_45)
		{
			goto IL_0461;
		}
	}
	{
		goto IL_06ba;
	}

IL_023c:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B, NULL);
		if (L_47)
		{
			goto IL_0479;
		}
	}
	{
		goto IL_06ba;
	}

IL_0251:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7, NULL);
		if (L_49)
		{
			goto IL_0491;
		}
	}
	{
		goto IL_06ba;
	}

IL_0266:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF, NULL);
		if (L_51)
		{
			goto IL_04a9;
		}
	}
	{
		goto IL_06ba;
	}

IL_027b:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F, NULL);
		if (L_53)
		{
			goto IL_04c1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0290:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralF1343DC9A4902B963209412495148EE532A73DEF, NULL);
		if (L_55)
		{
			goto IL_04d9;
		}
	}
	{
		goto IL_06ba;
	}

IL_02a5:
	{
		String_t* L_56 = V_2;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF, NULL);
		if (L_57)
		{
			goto IL_04f1;
		}
	}
	{
		goto IL_06ba;
	}

IL_02ba:
	{
		String_t* L_58 = V_2;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28, NULL);
		if (L_59)
		{
			goto IL_0509;
		}
	}
	{
		goto IL_06ba;
	}

IL_02cf:
	{
		String_t* L_60 = V_2;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357, NULL);
		if (L_61)
		{
			goto IL_0521;
		}
	}
	{
		goto IL_06ba;
	}

IL_02e4:
	{
		String_t* L_62 = V_2;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51, NULL);
		if (L_63)
		{
			goto IL_0539;
		}
	}
	{
		goto IL_06ba;
	}

IL_02f9:
	{
		String_t* L_64 = V_2;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C, NULL);
		if (L_65)
		{
			goto IL_0551;
		}
	}
	{
		goto IL_06ba;
	}

IL_030e:
	{
		String_t* L_66 = V_2;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2, NULL);
		if (L_67)
		{
			goto IL_0569;
		}
	}
	{
		goto IL_06ba;
	}

IL_0323:
	{
		String_t* L_68 = V_2;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE, NULL);
		if (L_69)
		{
			goto IL_0581;
		}
	}
	{
		goto IL_06ba;
	}

IL_0338:
	{
		String_t* L_70 = V_2;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral3A91D337442EA721D81265946B3502D017B35431, NULL);
		if (L_71)
		{
			goto IL_0599;
		}
	}
	{
		goto IL_06ba;
	}

IL_034d:
	{
		String_t* L_72 = V_2;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_73)
		{
			goto IL_05b1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0362:
	{
		String_t* L_74 = V_2;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580, NULL);
		if (L_75)
		{
			goto IL_05c4;
		}
	}
	{
		goto IL_06ba;
	}

IL_0377:
	{
		String_t* L_76 = V_2;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E, NULL);
		if (L_77)
		{
			goto IL_05dc;
		}
	}
	{
		goto IL_06ba;
	}

IL_038c:
	{
		String_t* L_78 = V_2;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41, NULL);
		if (L_79)
		{
			goto IL_05f4;
		}
	}
	{
		goto IL_06ba;
	}

IL_03a1:
	{
		String_t* L_80 = V_2;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A, NULL);
		if (L_81)
		{
			goto IL_060c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03b6:
	{
		String_t* L_82 = V_2;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE, NULL);
		if (L_83)
		{
			goto IL_0624;
		}
	}
	{
		goto IL_06ba;
	}

IL_03cb:
	{
		String_t* L_84 = V_2;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D, NULL);
		if (L_85)
		{
			goto IL_063c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03e0:
	{
		String_t* L_86 = V_2;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176, NULL);
		if (L_87)
		{
			goto IL_0651;
		}
	}
	{
		goto IL_06ba;
	}

IL_03f5:
	{
		String_t* L_88 = V_2;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E, NULL);
		if (L_89)
		{
			goto IL_0666;
		}
	}
	{
		goto IL_06ba;
	}

IL_040a:
	{
		String_t* L_90 = V_2;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D, NULL);
		if (L_91)
		{
			goto IL_067b;
		}
	}
	{
		goto IL_06ba;
	}

IL_041f:
	{
		String_t* L_92 = V_2;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9, NULL);
		if (L_93)
		{
			goto IL_0690;
		}
	}
	{
		goto IL_06ba;
	}

IL_0434:
	{
		String_t* L_94 = V_2;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral5506962CD736328B4844CD75A860794FE5B29F07, NULL);
		if (L_95)
		{
			goto IL_06a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0449:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_97 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_96);
		bool L_98;
		L_98 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_96, L_97);
		NoiseModule_set_enabled_m2BC18924D45F2AB9E6D7558A299B06C42FE0E655((&V_0), L_98, NULL);
		// break;
		goto IL_06c3;
	}

IL_0461:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_100 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_99);
		bool L_101;
		L_101 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_99, L_100);
		NoiseModule_set_separateAxes_m5F43E425E30079428CA258EF8A3CDD73827B6E4E((&V_0), L_101, NULL);
		// break;
		goto IL_06c3;
	}

IL_0479:
	{
		// instance.strength = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_103 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_102);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_104;
		L_104 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_102, L_103);
		NoiseModule_set_strength_m244E401B03D2704B76D7F98F8C393EE47D8D0812((&V_0), L_104, NULL);
		// break;
		goto IL_06c3;
	}

IL_0491:
	{
		// instance.strengthMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_105 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_106 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_105);
		float L_107;
		L_107 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_105, L_106);
		NoiseModule_set_strengthMultiplier_mFE019DCE55E1D8C470207E4224E1BA5D094DA357((&V_0), L_107, NULL);
		// break;
		goto IL_06c3;
	}

IL_04a9:
	{
		// instance.strengthX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_108 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_109 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_108);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_110;
		L_110 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_108, L_109);
		NoiseModule_set_strengthX_m8FE8C66343B2F98B266F60DDC9CDEEF2939FED16((&V_0), L_110, NULL);
		// break;
		goto IL_06c3;
	}

IL_04c1:
	{
		// instance.strengthXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_111 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_112 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_111);
		float L_113;
		L_113 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_111, L_112);
		NoiseModule_set_strengthXMultiplier_m87EDC350B40F36A41BFE2D7639D811CA596DFEB2((&V_0), L_113, NULL);
		// break;
		goto IL_06c3;
	}

IL_04d9:
	{
		// instance.strengthY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_114 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_115 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_114);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_116;
		L_116 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_114, L_115);
		NoiseModule_set_strengthY_m3B1AF971AB432E3BCF0CFF1DDAB56919D5062D1F((&V_0), L_116, NULL);
		// break;
		goto IL_06c3;
	}

IL_04f1:
	{
		// instance.strengthYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_117 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_118 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_117);
		float L_119;
		L_119 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_117, L_118);
		NoiseModule_set_strengthYMultiplier_mBF7AC9D5A4D367BF84F069D21FD20D5E97A57D89((&V_0), L_119, NULL);
		// break;
		goto IL_06c3;
	}

IL_0509:
	{
		// instance.strengthZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_121 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_120);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_122;
		L_122 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_120, L_121);
		NoiseModule_set_strengthZ_m517559EFC9F1CC4F172639D73971458CBDDD0143((&V_0), L_122, NULL);
		// break;
		goto IL_06c3;
	}

IL_0521:
	{
		// instance.strengthZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_123 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_124 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_123);
		float L_125;
		L_125 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_123, L_124);
		NoiseModule_set_strengthZMultiplier_m9403AB9A084216F42665501426AD26B0E88305C4((&V_0), L_125, NULL);
		// break;
		goto IL_06c3;
	}

IL_0539:
	{
		// instance.frequency = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_126 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_127 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_126);
		float L_128;
		L_128 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_126, L_127);
		NoiseModule_set_frequency_m70759B0A2D3852CF45F5F387C14F9AEA25E3E828((&V_0), L_128, NULL);
		// break;
		goto IL_06c3;
	}

IL_0551:
	{
		// instance.damping = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_130 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_129);
		bool L_131;
		L_131 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_129, L_130);
		NoiseModule_set_damping_m121F36B4B2B44302EE91CD14DF9041EEB6CC35C3((&V_0), L_131, NULL);
		// break;
		goto IL_06c3;
	}

IL_0569:
	{
		// instance.octaveCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_133 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_132);
		int32_t L_134;
		L_134 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_132, L_133);
		NoiseModule_set_octaveCount_m894782C18FEA785F023F311F597EFE58B43B1C55((&V_0), L_134, NULL);
		// break;
		goto IL_06c3;
	}

IL_0581:
	{
		// instance.octaveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_136 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_135);
		float L_137;
		L_137 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_135, L_136);
		NoiseModule_set_octaveMultiplier_m42720D4CD59B435AAAE4FC93DEB3A83ADA9C3FBB((&V_0), L_137, NULL);
		// break;
		goto IL_06c3;
	}

IL_0599:
	{
		// instance.octaveScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_138 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_139 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_138);
		float L_140;
		L_140 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_138, L_139);
		NoiseModule_set_octaveScale_m6C66795C9BE24401D80D79792F971DC51C4FCEFA((&V_0), L_140, NULL);
		// break;
		goto IL_06c3;
	}

IL_05b1:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemNoiseQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_141 = ___reader0;
		NullCheck(L_141);
		int32_t L_142;
		L_142 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var, L_141);
		NoiseModule_set_quality_m40D2AAC19BE53F0BF9A41A9761D1E940438C8AC4((&V_0), L_142, NULL);
		// break;
		goto IL_06c3;
	}

IL_05c4:
	{
		// instance.scrollSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_143 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_144 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_143);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_145;
		L_145 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_143, L_144);
		NoiseModule_set_scrollSpeed_m205B2E8602998D007EFA9F550C633F30633FB6DC((&V_0), L_145, NULL);
		// break;
		goto IL_06c3;
	}

IL_05dc:
	{
		// instance.scrollSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_146);
		float L_148;
		L_148 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_146, L_147);
		NoiseModule_set_scrollSpeedMultiplier_m849996D65CC65FB5D3C525ADCAF5119E5B4CBF14((&V_0), L_148, NULL);
		// break;
		goto IL_06c3;
	}

IL_05f4:
	{
		// instance.remapEnabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_149 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_150 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_149);
		bool L_151;
		L_151 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_149, L_150);
		NoiseModule_set_remapEnabled_mA5571C98B13D8839E801A65B0A628E41B462E395((&V_0), L_151, NULL);
		// break;
		goto IL_06c3;
	}

IL_060c:
	{
		// instance.remap = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_152 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_153 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_152);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_154;
		L_154 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_152, L_153);
		NoiseModule_set_remap_m3C8B3AC1CEB098D957CF6BC8F1A522953ED9F439((&V_0), L_154, NULL);
		// break;
		goto IL_06c3;
	}

IL_0624:
	{
		// instance.remapMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_155 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_156 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_155);
		float L_157;
		L_157 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_155, L_156);
		NoiseModule_set_remapMultiplier_mCB638181B26CF82A61C17E3F0D6D6E63C561E9C4((&V_0), L_157, NULL);
		// break;
		goto IL_06c3;
	}

IL_063c:
	{
		// instance.remapX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_158 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_159 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_158);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_160;
		L_160 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_158, L_159);
		NoiseModule_set_remapX_m15ADCD92890B6C21A29E06C438CA20C6A99D01AA((&V_0), L_160, NULL);
		// break;
		goto IL_06c3;
	}

IL_0651:
	{
		// instance.remapXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_161 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_162 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_161);
		float L_163;
		L_163 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_161, L_162);
		NoiseModule_set_remapXMultiplier_m4C5B29FEC2B917E5AAD4A59DFF163517A886F347((&V_0), L_163, NULL);
		// break;
		goto IL_06c3;
	}

IL_0666:
	{
		// instance.remapY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_164 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_165 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_164);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_166;
		L_166 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_164, L_165);
		NoiseModule_set_remapY_mD04EB94428E91D6C4839CC20ABFC19A42B9F7F6E((&V_0), L_166, NULL);
		// break;
		goto IL_06c3;
	}

IL_067b:
	{
		// instance.remapYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_167 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_168 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_167);
		float L_169;
		L_169 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_167, L_168);
		NoiseModule_set_remapYMultiplier_m8316E402501D85E1B9796FDF8C8A6DAE07B49325((&V_0), L_169, NULL);
		// break;
		goto IL_06c3;
	}

IL_0690:
	{
		// instance.remapZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_170 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_171 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_170);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_172;
		L_172 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_170, L_171);
		NoiseModule_set_remapZ_mAE7A90C23BFD7E10D2C53981911572AC8A2B5541((&V_0), L_172, NULL);
		// break;
		goto IL_06c3;
	}

IL_06a5:
	{
		// instance.remapZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_173 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_174 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_173);
		float L_175;
		L_175 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_173, L_174);
		NoiseModule_set_remapZMultiplier_mCEDE52028CD07D0F6ABBEC5F6985416217E57F42((&V_0), L_175, NULL);
		// break;
		goto IL_06c3;
	}

IL_06ba:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_176 = ___reader0;
		NullCheck(L_176);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_176);
		// break;
		goto IL_06c3;
	}

IL_06c3:
	{
	}

IL_06c4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_177 = ___reader0;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_177);
		String_t* L_179 = L_178;
		V_1 = L_179;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_179) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_180 = V_5;
		if (L_180)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_NoiseModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_NoiseModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m787F1ADC1FE86D6672C9A1D4071F2C39454BECDB_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A91D337442EA721D81265946B3502D017B35431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5506962CD736328B4844CD75A860794FE5B29F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1343DC9A4902B963209412495148EE532A73DEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.NoiseModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)((NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)UnBox(L_0, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var))));
		goto IL_06c4;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1832685215)))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)854058160)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)190084455)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0212;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)96119838))))
		{
			goto IL_040a;
		}
	}
	{
		goto IL_0054;
	}

IL_0054:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)190084455))))
		{
			goto IL_0362;
		}
	}
	{
		goto IL_06ba;
	}

IL_0065:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)608739593))))
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0073;
	}

IL_0073:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)800267265))))
		{
			goto IL_02e4;
		}
	}
	{
		goto IL_0081;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)854058160))))
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0092:
	{
		uint32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1211446584)))))
		{
			goto IL_00c8;
		}
	}
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1137906375))))
		{
			goto IL_0251;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a9:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1174656921))))
		{
			goto IL_03b6;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b7:
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1211446584))))
		{
			goto IL_0266;
		}
	}
	{
		goto IL_06ba;
	}

IL_00c8:
	{
		uint32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1245001822)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1228224203))))
		{
			goto IL_0290;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1245001822))))
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_06ba;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0227;
		}
	}
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1832685215))))
		{
			goto IL_027b;
		}
	}
	{
		goto IL_06ba;
	}

IL_010f:
	{
		uint32_t L_23 = V_4;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1151223659)))))
		{
			goto IL_0195;
		}
	}
	{
		uint32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1953622726))))
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_012f;
	}

IL_012f:
	{
		uint32_t L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-1760681759))))
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_013d;
	}

IL_013d:
	{
		uint32_t L_27 = V_4;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_034d;
		}
	}
	{
		goto IL_06ba;
	}

IL_014e:
	{
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1404870093)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1412380868))))
		{
			goto IL_0377;
		}
	}
	{
		goto IL_0165;
	}

IL_0165:
	{
		uint32_t L_30 = V_4;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1404870093))))
		{
			goto IL_038c;
		}
	}
	{
		goto IL_06ba;
	}

IL_0176:
	{
		uint32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1276098610))))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0184;
	}

IL_0184:
	{
		uint32_t L_32 = V_4;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1151223659))))
		{
			goto IL_02f9;
		}
	}
	{
		goto IL_06ba;
	}

IL_0195:
	{
		uint32_t L_33 = V_4;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-313239878)))))
		{
			goto IL_01cb;
		}
	}
	{
		uint32_t L_34 = V_4;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-528869200))))
		{
			goto IL_023c;
		}
	}
	{
		goto IL_01ac;
	}

IL_01ac:
	{
		uint32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-346795116))))
		{
			goto IL_041f;
		}
	}
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		uint32_t L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-313239878))))
		{
			goto IL_03cb;
		}
	}
	{
		goto IL_06ba;
	}

IL_01cb:
	{
		uint32_t L_37 = V_4;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-44770453)))))
		{
			goto IL_01f3;
		}
	}
	{
		uint32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-296462259))))
		{
			goto IL_03f5;
		}
	}
	{
		goto IL_01e2;
	}

IL_01e2:
	{
		uint32_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-44770453))))
		{
			goto IL_0434;
		}
	}
	{
		goto IL_06ba;
	}

IL_01f3:
	{
		uint32_t L_40 = V_4;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-11444963))))
		{
			goto IL_03e0;
		}
	}
	{
		goto IL_0201;
	}

IL_0201:
	{
		uint32_t L_41 = V_4;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-7684324))))
		{
			goto IL_030e;
		}
	}
	{
		goto IL_06ba;
	}

IL_0212:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_43)
		{
			goto IL_0449;
		}
	}
	{
		goto IL_06ba;
	}

IL_0227:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_45)
		{
			goto IL_0461;
		}
	}
	{
		goto IL_06ba;
	}

IL_023c:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B, NULL);
		if (L_47)
		{
			goto IL_0479;
		}
	}
	{
		goto IL_06ba;
	}

IL_0251:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7, NULL);
		if (L_49)
		{
			goto IL_0491;
		}
	}
	{
		goto IL_06ba;
	}

IL_0266:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF, NULL);
		if (L_51)
		{
			goto IL_04a9;
		}
	}
	{
		goto IL_06ba;
	}

IL_027b:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F, NULL);
		if (L_53)
		{
			goto IL_04c1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0290:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralF1343DC9A4902B963209412495148EE532A73DEF, NULL);
		if (L_55)
		{
			goto IL_04d9;
		}
	}
	{
		goto IL_06ba;
	}

IL_02a5:
	{
		String_t* L_56 = V_2;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF, NULL);
		if (L_57)
		{
			goto IL_04f1;
		}
	}
	{
		goto IL_06ba;
	}

IL_02ba:
	{
		String_t* L_58 = V_2;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28, NULL);
		if (L_59)
		{
			goto IL_0509;
		}
	}
	{
		goto IL_06ba;
	}

IL_02cf:
	{
		String_t* L_60 = V_2;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357, NULL);
		if (L_61)
		{
			goto IL_0521;
		}
	}
	{
		goto IL_06ba;
	}

IL_02e4:
	{
		String_t* L_62 = V_2;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51, NULL);
		if (L_63)
		{
			goto IL_0539;
		}
	}
	{
		goto IL_06ba;
	}

IL_02f9:
	{
		String_t* L_64 = V_2;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C, NULL);
		if (L_65)
		{
			goto IL_0551;
		}
	}
	{
		goto IL_06ba;
	}

IL_030e:
	{
		String_t* L_66 = V_2;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2, NULL);
		if (L_67)
		{
			goto IL_0569;
		}
	}
	{
		goto IL_06ba;
	}

IL_0323:
	{
		String_t* L_68 = V_2;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE, NULL);
		if (L_69)
		{
			goto IL_0581;
		}
	}
	{
		goto IL_06ba;
	}

IL_0338:
	{
		String_t* L_70 = V_2;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral3A91D337442EA721D81265946B3502D017B35431, NULL);
		if (L_71)
		{
			goto IL_0599;
		}
	}
	{
		goto IL_06ba;
	}

IL_034d:
	{
		String_t* L_72 = V_2;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_73)
		{
			goto IL_05b1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0362:
	{
		String_t* L_74 = V_2;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580, NULL);
		if (L_75)
		{
			goto IL_05c4;
		}
	}
	{
		goto IL_06ba;
	}

IL_0377:
	{
		String_t* L_76 = V_2;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E, NULL);
		if (L_77)
		{
			goto IL_05dc;
		}
	}
	{
		goto IL_06ba;
	}

IL_038c:
	{
		String_t* L_78 = V_2;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41, NULL);
		if (L_79)
		{
			goto IL_05f4;
		}
	}
	{
		goto IL_06ba;
	}

IL_03a1:
	{
		String_t* L_80 = V_2;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A, NULL);
		if (L_81)
		{
			goto IL_060c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03b6:
	{
		String_t* L_82 = V_2;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE, NULL);
		if (L_83)
		{
			goto IL_0624;
		}
	}
	{
		goto IL_06ba;
	}

IL_03cb:
	{
		String_t* L_84 = V_2;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D, NULL);
		if (L_85)
		{
			goto IL_063c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03e0:
	{
		String_t* L_86 = V_2;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176, NULL);
		if (L_87)
		{
			goto IL_0651;
		}
	}
	{
		goto IL_06ba;
	}

IL_03f5:
	{
		String_t* L_88 = V_2;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E, NULL);
		if (L_89)
		{
			goto IL_0666;
		}
	}
	{
		goto IL_06ba;
	}

IL_040a:
	{
		String_t* L_90 = V_2;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D, NULL);
		if (L_91)
		{
			goto IL_067b;
		}
	}
	{
		goto IL_06ba;
	}

IL_041f:
	{
		String_t* L_92 = V_2;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9, NULL);
		if (L_93)
		{
			goto IL_0690;
		}
	}
	{
		goto IL_06ba;
	}

IL_0434:
	{
		String_t* L_94 = V_2;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral5506962CD736328B4844CD75A860794FE5B29F07, NULL);
		if (L_95)
		{
			goto IL_06a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0449:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_97 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_96);
		bool L_98;
		L_98 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_96, L_97);
		NoiseModule_set_enabled_m2BC18924D45F2AB9E6D7558A299B06C42FE0E655((&V_0), L_98, NULL);
		// break;
		goto IL_06c3;
	}

IL_0461:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_100 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_99);
		bool L_101;
		L_101 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_99, L_100);
		NoiseModule_set_separateAxes_m5F43E425E30079428CA258EF8A3CDD73827B6E4E((&V_0), L_101, NULL);
		// break;
		goto IL_06c3;
	}

IL_0479:
	{
		// instance.strength = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_103 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_102);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_104;
		L_104 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_102, L_103);
		NoiseModule_set_strength_m244E401B03D2704B76D7F98F8C393EE47D8D0812((&V_0), L_104, NULL);
		// break;
		goto IL_06c3;
	}

IL_0491:
	{
		// instance.strengthMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_105 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_106 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_105);
		float L_107;
		L_107 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_105, L_106);
		NoiseModule_set_strengthMultiplier_mFE019DCE55E1D8C470207E4224E1BA5D094DA357((&V_0), L_107, NULL);
		// break;
		goto IL_06c3;
	}

IL_04a9:
	{
		// instance.strengthX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_108 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_109 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_108);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_110;
		L_110 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_108, L_109);
		NoiseModule_set_strengthX_m8FE8C66343B2F98B266F60DDC9CDEEF2939FED16((&V_0), L_110, NULL);
		// break;
		goto IL_06c3;
	}

IL_04c1:
	{
		// instance.strengthXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_111 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_112 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_111);
		float L_113;
		L_113 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_111, L_112);
		NoiseModule_set_strengthXMultiplier_m87EDC350B40F36A41BFE2D7639D811CA596DFEB2((&V_0), L_113, NULL);
		// break;
		goto IL_06c3;
	}

IL_04d9:
	{
		// instance.strengthY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_114 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_115 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_114);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_116;
		L_116 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_114, L_115);
		NoiseModule_set_strengthY_m3B1AF971AB432E3BCF0CFF1DDAB56919D5062D1F((&V_0), L_116, NULL);
		// break;
		goto IL_06c3;
	}

IL_04f1:
	{
		// instance.strengthYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_117 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_118 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_117);
		float L_119;
		L_119 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_117, L_118);
		NoiseModule_set_strengthYMultiplier_mBF7AC9D5A4D367BF84F069D21FD20D5E97A57D89((&V_0), L_119, NULL);
		// break;
		goto IL_06c3;
	}

IL_0509:
	{
		// instance.strengthZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_121 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_120);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_122;
		L_122 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_120, L_121);
		NoiseModule_set_strengthZ_m517559EFC9F1CC4F172639D73971458CBDDD0143((&V_0), L_122, NULL);
		// break;
		goto IL_06c3;
	}

IL_0521:
	{
		// instance.strengthZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_123 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_124 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_123);
		float L_125;
		L_125 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_123, L_124);
		NoiseModule_set_strengthZMultiplier_m9403AB9A084216F42665501426AD26B0E88305C4((&V_0), L_125, NULL);
		// break;
		goto IL_06c3;
	}

IL_0539:
	{
		// instance.frequency = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_126 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_127 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_126);
		float L_128;
		L_128 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_126, L_127);
		NoiseModule_set_frequency_m70759B0A2D3852CF45F5F387C14F9AEA25E3E828((&V_0), L_128, NULL);
		// break;
		goto IL_06c3;
	}

IL_0551:
	{
		// instance.damping = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_130 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_129);
		bool L_131;
		L_131 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_129, L_130);
		NoiseModule_set_damping_m121F36B4B2B44302EE91CD14DF9041EEB6CC35C3((&V_0), L_131, NULL);
		// break;
		goto IL_06c3;
	}

IL_0569:
	{
		// instance.octaveCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_133 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_132);
		int32_t L_134;
		L_134 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_132, L_133);
		NoiseModule_set_octaveCount_m894782C18FEA785F023F311F597EFE58B43B1C55((&V_0), L_134, NULL);
		// break;
		goto IL_06c3;
	}

IL_0581:
	{
		// instance.octaveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_136 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_135);
		float L_137;
		L_137 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_135, L_136);
		NoiseModule_set_octaveMultiplier_m42720D4CD59B435AAAE4FC93DEB3A83ADA9C3FBB((&V_0), L_137, NULL);
		// break;
		goto IL_06c3;
	}

IL_0599:
	{
		// instance.octaveScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_138 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_139 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_138);
		float L_140;
		L_140 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_138, L_139);
		NoiseModule_set_octaveScale_m6C66795C9BE24401D80D79792F971DC51C4FCEFA((&V_0), L_140, NULL);
		// break;
		goto IL_06c3;
	}

IL_05b1:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemNoiseQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_141 = ___reader0;
		NullCheck(L_141);
		int32_t L_142;
		L_142 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var, L_141);
		NoiseModule_set_quality_m40D2AAC19BE53F0BF9A41A9761D1E940438C8AC4((&V_0), L_142, NULL);
		// break;
		goto IL_06c3;
	}

IL_05c4:
	{
		// instance.scrollSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_143 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_144 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_143);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_145;
		L_145 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_143, L_144);
		NoiseModule_set_scrollSpeed_m205B2E8602998D007EFA9F550C633F30633FB6DC((&V_0), L_145, NULL);
		// break;
		goto IL_06c3;
	}

IL_05dc:
	{
		// instance.scrollSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_146);
		float L_148;
		L_148 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_146, L_147);
		NoiseModule_set_scrollSpeedMultiplier_m849996D65CC65FB5D3C525ADCAF5119E5B4CBF14((&V_0), L_148, NULL);
		// break;
		goto IL_06c3;
	}

IL_05f4:
	{
		// instance.remapEnabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_149 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_150 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_149);
		bool L_151;
		L_151 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_149, L_150);
		NoiseModule_set_remapEnabled_mA5571C98B13D8839E801A65B0A628E41B462E395((&V_0), L_151, NULL);
		// break;
		goto IL_06c3;
	}

IL_060c:
	{
		// instance.remap = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_152 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_153 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_152);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_154;
		L_154 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_152, L_153);
		NoiseModule_set_remap_m3C8B3AC1CEB098D957CF6BC8F1A522953ED9F439((&V_0), L_154, NULL);
		// break;
		goto IL_06c3;
	}

IL_0624:
	{
		// instance.remapMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_155 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_156 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_155);
		float L_157;
		L_157 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_155, L_156);
		NoiseModule_set_remapMultiplier_mCB638181B26CF82A61C17E3F0D6D6E63C561E9C4((&V_0), L_157, NULL);
		// break;
		goto IL_06c3;
	}

IL_063c:
	{
		// instance.remapX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_158 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_159 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_158);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_160;
		L_160 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_158, L_159);
		NoiseModule_set_remapX_m15ADCD92890B6C21A29E06C438CA20C6A99D01AA((&V_0), L_160, NULL);
		// break;
		goto IL_06c3;
	}

IL_0651:
	{
		// instance.remapXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_161 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_162 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_161);
		float L_163;
		L_163 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_161, L_162);
		NoiseModule_set_remapXMultiplier_m4C5B29FEC2B917E5AAD4A59DFF163517A886F347((&V_0), L_163, NULL);
		// break;
		goto IL_06c3;
	}

IL_0666:
	{
		// instance.remapY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_164 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_165 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_164);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_166;
		L_166 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_164, L_165);
		NoiseModule_set_remapY_mD04EB94428E91D6C4839CC20ABFC19A42B9F7F6E((&V_0), L_166, NULL);
		// break;
		goto IL_06c3;
	}

IL_067b:
	{
		// instance.remapYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_167 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_168 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_167);
		float L_169;
		L_169 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_167, L_168);
		NoiseModule_set_remapYMultiplier_m8316E402501D85E1B9796FDF8C8A6DAE07B49325((&V_0), L_169, NULL);
		// break;
		goto IL_06c3;
	}

IL_0690:
	{
		// instance.remapZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_170 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_171 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_170);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_172;
		L_172 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_170, L_171);
		NoiseModule_set_remapZ_mAE7A90C23BFD7E10D2C53981911572AC8A2B5541((&V_0), L_172, NULL);
		// break;
		goto IL_06c3;
	}

IL_06a5:
	{
		// instance.remapZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_173 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_174 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_173);
		float L_175;
		L_175 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_173, L_174);
		NoiseModule_set_remapZMultiplier_mCEDE52028CD07D0F6ABBEC5F6985416217E57F42((&V_0), L_175, NULL);
		// break;
		goto IL_06c3;
	}

IL_06ba:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_176 = ___reader0;
		NullCheck(L_176);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_176);
		// break;
		goto IL_06c3;
	}

IL_06c3:
	{
	}

IL_06c4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_177 = ___reader0;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_177);
		String_t* L_179 = L_178;
		V_1 = L_179;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_179) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_180 = V_5;
		if (L_180)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_NoiseModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_NoiseModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mC0E00E274D5F4196C5EBE352E82D3E503CE77C9A_gshared (ES3Type_NoiseModule_t998B4A42542B685DF3AAB803DCC33F658BBE0B04* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A91D337442EA721D81265946B3502D017B35431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5506962CD736328B4844CD75A860794FE5B29F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1343DC9A4902B963209412495148EE532A73DEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.NoiseModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)((NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0*)UnBox(L_0, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_il2cpp_TypeInfo_var))));
		goto IL_06c4;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1832685215)))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)854058160)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)190084455)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0212;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)96119838))))
		{
			goto IL_040a;
		}
	}
	{
		goto IL_0054;
	}

IL_0054:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)190084455))))
		{
			goto IL_0362;
		}
	}
	{
		goto IL_06ba;
	}

IL_0065:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)608739593))))
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0073;
	}

IL_0073:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)800267265))))
		{
			goto IL_02e4;
		}
	}
	{
		goto IL_0081;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)854058160))))
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0092:
	{
		uint32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1211446584)))))
		{
			goto IL_00c8;
		}
	}
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1137906375))))
		{
			goto IL_0251;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a9:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1174656921))))
		{
			goto IL_03b6;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b7:
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1211446584))))
		{
			goto IL_0266;
		}
	}
	{
		goto IL_06ba;
	}

IL_00c8:
	{
		uint32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1245001822)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1228224203))))
		{
			goto IL_0290;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1245001822))))
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_06ba;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0227;
		}
	}
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1832685215))))
		{
			goto IL_027b;
		}
	}
	{
		goto IL_06ba;
	}

IL_010f:
	{
		uint32_t L_23 = V_4;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1151223659)))))
		{
			goto IL_0195;
		}
	}
	{
		uint32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1953622726))))
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_012f;
	}

IL_012f:
	{
		uint32_t L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-1760681759))))
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_013d;
	}

IL_013d:
	{
		uint32_t L_27 = V_4;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_034d;
		}
	}
	{
		goto IL_06ba;
	}

IL_014e:
	{
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1404870093)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1412380868))))
		{
			goto IL_0377;
		}
	}
	{
		goto IL_0165;
	}

IL_0165:
	{
		uint32_t L_30 = V_4;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1404870093))))
		{
			goto IL_038c;
		}
	}
	{
		goto IL_06ba;
	}

IL_0176:
	{
		uint32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1276098610))))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0184;
	}

IL_0184:
	{
		uint32_t L_32 = V_4;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1151223659))))
		{
			goto IL_02f9;
		}
	}
	{
		goto IL_06ba;
	}

IL_0195:
	{
		uint32_t L_33 = V_4;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-313239878)))))
		{
			goto IL_01cb;
		}
	}
	{
		uint32_t L_34 = V_4;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-528869200))))
		{
			goto IL_023c;
		}
	}
	{
		goto IL_01ac;
	}

IL_01ac:
	{
		uint32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-346795116))))
		{
			goto IL_041f;
		}
	}
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		uint32_t L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-313239878))))
		{
			goto IL_03cb;
		}
	}
	{
		goto IL_06ba;
	}

IL_01cb:
	{
		uint32_t L_37 = V_4;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-44770453)))))
		{
			goto IL_01f3;
		}
	}
	{
		uint32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-296462259))))
		{
			goto IL_03f5;
		}
	}
	{
		goto IL_01e2;
	}

IL_01e2:
	{
		uint32_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-44770453))))
		{
			goto IL_0434;
		}
	}
	{
		goto IL_06ba;
	}

IL_01f3:
	{
		uint32_t L_40 = V_4;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-11444963))))
		{
			goto IL_03e0;
		}
	}
	{
		goto IL_0201;
	}

IL_0201:
	{
		uint32_t L_41 = V_4;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-7684324))))
		{
			goto IL_030e;
		}
	}
	{
		goto IL_06ba;
	}

IL_0212:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_43)
		{
			goto IL_0449;
		}
	}
	{
		goto IL_06ba;
	}

IL_0227:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_45)
		{
			goto IL_0461;
		}
	}
	{
		goto IL_06ba;
	}

IL_023c:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B, NULL);
		if (L_47)
		{
			goto IL_0479;
		}
	}
	{
		goto IL_06ba;
	}

IL_0251:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral038B9C7914B4F5565F9D2DD1F7E0B346B50E4FA7, NULL);
		if (L_49)
		{
			goto IL_0491;
		}
	}
	{
		goto IL_06ba;
	}

IL_0266:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral4443C70B3183C8BACC25EFE8D0B6ADBFFF8139FF, NULL);
		if (L_51)
		{
			goto IL_04a9;
		}
	}
	{
		goto IL_06ba;
	}

IL_027b:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral88BEF2219C9F78FE4C09207E72A3A0538D70522F, NULL);
		if (L_53)
		{
			goto IL_04c1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0290:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralF1343DC9A4902B963209412495148EE532A73DEF, NULL);
		if (L_55)
		{
			goto IL_04d9;
		}
	}
	{
		goto IL_06ba;
	}

IL_02a5:
	{
		String_t* L_56 = V_2;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralF1339A0A7019BCB976947C2D08A24450598124CF, NULL);
		if (L_57)
		{
			goto IL_04f1;
		}
	}
	{
		goto IL_06ba;
	}

IL_02ba:
	{
		String_t* L_58 = V_2;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralB15828A904AB53E17469DBF5A4ABBF8B5164AB28, NULL);
		if (L_59)
		{
			goto IL_0509;
		}
	}
	{
		goto IL_06ba;
	}

IL_02cf:
	{
		String_t* L_60 = V_2;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral7A5BB2AA8ED2CE5942DF517BE8AF9006DBC25357, NULL);
		if (L_61)
		{
			goto IL_0521;
		}
	}
	{
		goto IL_06ba;
	}

IL_02e4:
	{
		String_t* L_62 = V_2;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51, NULL);
		if (L_63)
		{
			goto IL_0539;
		}
	}
	{
		goto IL_06ba;
	}

IL_02f9:
	{
		String_t* L_64 = V_2;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralAC83591FA98F20B86EEFD70657E6ED44D556313C, NULL);
		if (L_65)
		{
			goto IL_0551;
		}
	}
	{
		goto IL_06ba;
	}

IL_030e:
	{
		String_t* L_66 = V_2;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralF2B9DF9171C32A086DE79857720B1EEE049859B2, NULL);
		if (L_67)
		{
			goto IL_0569;
		}
	}
	{
		goto IL_06ba;
	}

IL_0323:
	{
		String_t* L_68 = V_2;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralD8D3C2194F3A8DDF93F0623BD1927FEEABACC8DE, NULL);
		if (L_69)
		{
			goto IL_0581;
		}
	}
	{
		goto IL_06ba;
	}

IL_0338:
	{
		String_t* L_70 = V_2;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral3A91D337442EA721D81265946B3502D017B35431, NULL);
		if (L_71)
		{
			goto IL_0599;
		}
	}
	{
		goto IL_06ba;
	}

IL_034d:
	{
		String_t* L_72 = V_2;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_73)
		{
			goto IL_05b1;
		}
	}
	{
		goto IL_06ba;
	}

IL_0362:
	{
		String_t* L_74 = V_2;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral91EA72444038CB2DF6CD7169DDC36D970C608580, NULL);
		if (L_75)
		{
			goto IL_05c4;
		}
	}
	{
		goto IL_06ba;
	}

IL_0377:
	{
		String_t* L_76 = V_2;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral445672210322BF6A27776AA5980F90EAFCF22E8E, NULL);
		if (L_77)
		{
			goto IL_05dc;
		}
	}
	{
		goto IL_06ba;
	}

IL_038c:
	{
		String_t* L_78 = V_2;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral61E2E1B35D38D87FE73CDFEAA02EA8014FB8BC41, NULL);
		if (L_79)
		{
			goto IL_05f4;
		}
	}
	{
		goto IL_06ba;
	}

IL_03a1:
	{
		String_t* L_80 = V_2;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralDEAE713DF83A3A752895E5EC7ED2E28AEED2EA0A, NULL);
		if (L_81)
		{
			goto IL_060c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03b6:
	{
		String_t* L_82 = V_2;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral98FFDEF5B80911AB67760FFFA9785DDD6BA91CDE, NULL);
		if (L_83)
		{
			goto IL_0624;
		}
	}
	{
		goto IL_06ba;
	}

IL_03cb:
	{
		String_t* L_84 = V_2;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralCBD01100EAC4B5729FA86B78163C192541140D1D, NULL);
		if (L_85)
		{
			goto IL_063c;
		}
	}
	{
		goto IL_06ba;
	}

IL_03e0:
	{
		String_t* L_86 = V_2;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral75F43404387B0DD1D93B4E0D201F2AD83FD02176, NULL);
		if (L_87)
		{
			goto IL_0651;
		}
	}
	{
		goto IL_06ba;
	}

IL_03f5:
	{
		String_t* L_88 = V_2;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral1EBE1EAAA5EE95D55EC360B8DA659C0ACABC623E, NULL);
		if (L_89)
		{
			goto IL_0666;
		}
	}
	{
		goto IL_06ba;
	}

IL_040a:
	{
		String_t* L_90 = V_2;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral395FE53770E7E93DC3BB5CF6FD9CECF13AA5C36D, NULL);
		if (L_91)
		{
			goto IL_067b;
		}
	}
	{
		goto IL_06ba;
	}

IL_041f:
	{
		String_t* L_92 = V_2;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralEA2E49EE262F11DB28AE7EBC29DB82C6EE9557F9, NULL);
		if (L_93)
		{
			goto IL_0690;
		}
	}
	{
		goto IL_06ba;
	}

IL_0434:
	{
		String_t* L_94 = V_2;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral5506962CD736328B4844CD75A860794FE5B29F07, NULL);
		if (L_95)
		{
			goto IL_06a5;
		}
	}
	{
		goto IL_06ba;
	}

IL_0449:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_97 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_96);
		bool L_98;
		L_98 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_96, L_97);
		NoiseModule_set_enabled_m2BC18924D45F2AB9E6D7558A299B06C42FE0E655((&V_0), L_98, NULL);
		// break;
		goto IL_06c3;
	}

IL_0461:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_100 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_99);
		bool L_101;
		L_101 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_99, L_100);
		NoiseModule_set_separateAxes_m5F43E425E30079428CA258EF8A3CDD73827B6E4E((&V_0), L_101, NULL);
		// break;
		goto IL_06c3;
	}

IL_0479:
	{
		// instance.strength = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_103 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_102);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_104;
		L_104 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_102, L_103);
		NoiseModule_set_strength_m244E401B03D2704B76D7F98F8C393EE47D8D0812((&V_0), L_104, NULL);
		// break;
		goto IL_06c3;
	}

IL_0491:
	{
		// instance.strengthMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_105 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_106 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_105);
		float L_107;
		L_107 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_105, L_106);
		NoiseModule_set_strengthMultiplier_mFE019DCE55E1D8C470207E4224E1BA5D094DA357((&V_0), L_107, NULL);
		// break;
		goto IL_06c3;
	}

IL_04a9:
	{
		// instance.strengthX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_108 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_109 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_108);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_110;
		L_110 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_108, L_109);
		NoiseModule_set_strengthX_m8FE8C66343B2F98B266F60DDC9CDEEF2939FED16((&V_0), L_110, NULL);
		// break;
		goto IL_06c3;
	}

IL_04c1:
	{
		// instance.strengthXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_111 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_112 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_111);
		float L_113;
		L_113 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_111, L_112);
		NoiseModule_set_strengthXMultiplier_m87EDC350B40F36A41BFE2D7639D811CA596DFEB2((&V_0), L_113, NULL);
		// break;
		goto IL_06c3;
	}

IL_04d9:
	{
		// instance.strengthY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_114 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_115 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_114);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_116;
		L_116 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_114, L_115);
		NoiseModule_set_strengthY_m3B1AF971AB432E3BCF0CFF1DDAB56919D5062D1F((&V_0), L_116, NULL);
		// break;
		goto IL_06c3;
	}

IL_04f1:
	{
		// instance.strengthYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_117 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_118 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_117);
		float L_119;
		L_119 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_117, L_118);
		NoiseModule_set_strengthYMultiplier_mBF7AC9D5A4D367BF84F069D21FD20D5E97A57D89((&V_0), L_119, NULL);
		// break;
		goto IL_06c3;
	}

IL_0509:
	{
		// instance.strengthZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_121 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_120);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_122;
		L_122 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_120, L_121);
		NoiseModule_set_strengthZ_m517559EFC9F1CC4F172639D73971458CBDDD0143((&V_0), L_122, NULL);
		// break;
		goto IL_06c3;
	}

IL_0521:
	{
		// instance.strengthZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_123 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_124 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_123);
		float L_125;
		L_125 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_123, L_124);
		NoiseModule_set_strengthZMultiplier_m9403AB9A084216F42665501426AD26B0E88305C4((&V_0), L_125, NULL);
		// break;
		goto IL_06c3;
	}

IL_0539:
	{
		// instance.frequency = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_126 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_127 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_126);
		float L_128;
		L_128 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_126, L_127);
		NoiseModule_set_frequency_m70759B0A2D3852CF45F5F387C14F9AEA25E3E828((&V_0), L_128, NULL);
		// break;
		goto IL_06c3;
	}

IL_0551:
	{
		// instance.damping = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_130 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_129);
		bool L_131;
		L_131 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_129, L_130);
		NoiseModule_set_damping_m121F36B4B2B44302EE91CD14DF9041EEB6CC35C3((&V_0), L_131, NULL);
		// break;
		goto IL_06c3;
	}

IL_0569:
	{
		// instance.octaveCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_133 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_132);
		int32_t L_134;
		L_134 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_132, L_133);
		NoiseModule_set_octaveCount_m894782C18FEA785F023F311F597EFE58B43B1C55((&V_0), L_134, NULL);
		// break;
		goto IL_06c3;
	}

IL_0581:
	{
		// instance.octaveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_136 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_135);
		float L_137;
		L_137 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_135, L_136);
		NoiseModule_set_octaveMultiplier_m42720D4CD59B435AAAE4FC93DEB3A83ADA9C3FBB((&V_0), L_137, NULL);
		// break;
		goto IL_06c3;
	}

IL_0599:
	{
		// instance.octaveScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_138 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_139 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_138);
		float L_140;
		L_140 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_138, L_139);
		NoiseModule_set_octaveScale_m6C66795C9BE24401D80D79792F971DC51C4FCEFA((&V_0), L_140, NULL);
		// break;
		goto IL_06c3;
	}

IL_05b1:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemNoiseQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_141 = ___reader0;
		NullCheck(L_141);
		int32_t L_142;
		L_142 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemNoiseQuality_tC6DC0BFAA4AF9CD37103CC2CC216C43FC016E924_m22221BA19E2BDFA5111FBD7C66E17FF73767025E_RuntimeMethod_var, L_141);
		NoiseModule_set_quality_m40D2AAC19BE53F0BF9A41A9761D1E940438C8AC4((&V_0), L_142, NULL);
		// break;
		goto IL_06c3;
	}

IL_05c4:
	{
		// instance.scrollSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_143 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_144 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_143);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_145;
		L_145 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_143, L_144);
		NoiseModule_set_scrollSpeed_m205B2E8602998D007EFA9F550C633F30633FB6DC((&V_0), L_145, NULL);
		// break;
		goto IL_06c3;
	}

IL_05dc:
	{
		// instance.scrollSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_146);
		float L_148;
		L_148 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_146, L_147);
		NoiseModule_set_scrollSpeedMultiplier_m849996D65CC65FB5D3C525ADCAF5119E5B4CBF14((&V_0), L_148, NULL);
		// break;
		goto IL_06c3;
	}

IL_05f4:
	{
		// instance.remapEnabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_149 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_150 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_149);
		bool L_151;
		L_151 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_149, L_150);
		NoiseModule_set_remapEnabled_mA5571C98B13D8839E801A65B0A628E41B462E395((&V_0), L_151, NULL);
		// break;
		goto IL_06c3;
	}

IL_060c:
	{
		// instance.remap = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_152 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_153 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_152);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_154;
		L_154 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_152, L_153);
		NoiseModule_set_remap_m3C8B3AC1CEB098D957CF6BC8F1A522953ED9F439((&V_0), L_154, NULL);
		// break;
		goto IL_06c3;
	}

IL_0624:
	{
		// instance.remapMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_155 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_156 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_155);
		float L_157;
		L_157 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_155, L_156);
		NoiseModule_set_remapMultiplier_mCB638181B26CF82A61C17E3F0D6D6E63C561E9C4((&V_0), L_157, NULL);
		// break;
		goto IL_06c3;
	}

IL_063c:
	{
		// instance.remapX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_158 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_159 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_158);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_160;
		L_160 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_158, L_159);
		NoiseModule_set_remapX_m15ADCD92890B6C21A29E06C438CA20C6A99D01AA((&V_0), L_160, NULL);
		// break;
		goto IL_06c3;
	}

IL_0651:
	{
		// instance.remapXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_161 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_162 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_161);
		float L_163;
		L_163 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_161, L_162);
		NoiseModule_set_remapXMultiplier_m4C5B29FEC2B917E5AAD4A59DFF163517A886F347((&V_0), L_163, NULL);
		// break;
		goto IL_06c3;
	}

IL_0666:
	{
		// instance.remapY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_164 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_165 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_164);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_166;
		L_166 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_164, L_165);
		NoiseModule_set_remapY_mD04EB94428E91D6C4839CC20ABFC19A42B9F7F6E((&V_0), L_166, NULL);
		// break;
		goto IL_06c3;
	}

IL_067b:
	{
		// instance.remapYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_167 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_168 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_167);
		float L_169;
		L_169 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_167, L_168);
		NoiseModule_set_remapYMultiplier_m8316E402501D85E1B9796FDF8C8A6DAE07B49325((&V_0), L_169, NULL);
		// break;
		goto IL_06c3;
	}

IL_0690:
	{
		// instance.remapZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_170 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_171 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_170);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_172;
		L_172 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_170, L_171);
		NoiseModule_set_remapZ_mAE7A90C23BFD7E10D2C53981911572AC8A2B5541((&V_0), L_172, NULL);
		// break;
		goto IL_06c3;
	}

IL_06a5:
	{
		// instance.remapZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_173 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_174 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_173);
		float L_175;
		L_175 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_173, L_174);
		NoiseModule_set_remapZMultiplier_mCEDE52028CD07D0F6ABBEC5F6985416217E57F42((&V_0), L_175, NULL);
		// break;
		goto IL_06c3;
	}

IL_06ba:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_176 = ___reader0;
		NullCheck(L_176);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_176);
		// break;
		goto IL_06c3;
	}

IL_06c3:
	{
	}

IL_06c4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_177 = ___reader0;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_177);
		String_t* L_179 = L_178;
		V_1 = L_179;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_179) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_180 = V_5;
		if (L_180)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
