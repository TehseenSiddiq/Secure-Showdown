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
// ES3Types.ES3Type_TrailModule
struct ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87;
// ES3Types.ES3Type_Transform
struct ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7;
// ES3Types.ES3Type_TriggerModule
struct ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D;
// ES3Types.ES3Type_UIntPtr
struct ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F;
// ES3Types.ES3Type_Vector2
struct ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
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

IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB;
IL2CPP_EXTERN_C String_t* _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00;
IL2CPP_EXTERN_C String_t* _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA;
IL2CPP_EXTERN_C String_t* _stringLiteral354281948B6269615E32D856CF85B6F456724DAA;
IL2CPP_EXTERN_C String_t* _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3;
IL2CPP_EXTERN_C String_t* _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01;
IL2CPP_EXTERN_C String_t* _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119;
IL2CPP_EXTERN_C String_t* _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756;
IL2CPP_EXTERN_C String_t* _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0;
IL2CPP_EXTERN_C String_t* _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A;
IL2CPP_EXTERN_C String_t* _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F;
IL2CPP_EXTERN_C String_t* _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5;
IL2CPP_EXTERN_C String_t* _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD;
IL2CPP_EXTERN_C String_t* _stringLiteral8F632BD073069C926450B792B45EAAB22036D149;
IL2CPP_EXTERN_C String_t* _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120;
IL2CPP_EXTERN_C String_t* _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A;
IL2CPP_EXTERN_C String_t* _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B;
IL2CPP_EXTERN_C String_t* _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182;
IL2CPP_EXTERN_C String_t* _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0;
IL2CPP_EXTERN_C String_t* _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4;
IL2CPP_EXTERN_C String_t* _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC;
IL2CPP_EXTERN_C String_t* _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m53C86BE077BED4F36B60E76ED8AAC3D7AFBC6836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m266201C056B0921A642ED9E6F79D0582D33400F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m6BCBC069ACA71D1EC12534A359801F3353AD9D14_RuntimeMethod_var;


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

// ES3Types.ES3ObjectType
struct ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
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

// ES3Types.ES3Type_TrailModule
struct ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_TrailModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_TriggerModule
struct ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_TriggerModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_UIntPtr
struct ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_UIntPtr::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Vector2
struct ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector2::Instance
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

// UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TrailModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/TriggerModule
struct TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TriggerModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TriggerModule
struct TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TriggerModule
struct TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
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

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_gshared (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method) ;

// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_ratio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_lifetime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_lifetimeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_minVertexDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_textureMode(UnityEngine.ParticleSystemTrailTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_worldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_dieWithParticles(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_sizeAffectsWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_sizeAffectsLifetime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_inheritParticleColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_colorOverLifetime(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_widthOverTrail(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_widthOverTrailMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_colorOverTrail(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F (ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_inside(UnityEngine.ParticleSystemOverlapAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_outside(UnityEngine.ParticleSystemOverlapAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_enter(UnityEngine.ParticleSystemOverlapAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_exit(UnityEngine.ParticleSystemOverlapAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_radiusScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, float ___value0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
inline float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3 (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method)
{
	return ((  float (*) (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mB78D170E2BA912A55DBA0347986EBC605E7569C5_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m070D215D3ADE674F964360DC2A2A42EB4DF2165C_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m602DE1BA261222C8432D11E1BCE2D9A42B096A0F_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m0ED102DEDA0514E558C1900417B7C3F52767DACF_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m5B6482C0D5A22733B7F0415E283C8BB4F352CC66_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mDEE3D30AFFFD31FE21779BA955B1B65F9A5C556C_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_mA38B2B61CB63D2626434B31E092D81A62121BE33_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m130AD9DC1AA8C7D38CF74DC2C99435BEAC09A9C4_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m26D032B67089BA7C389F721EBB27152AEAA726F5_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m95AC09CE047FE94E86AF891F4E6F2519B7D16876_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m07AA59D1D611D3DDEEE7B75235BFD185BD0945A9_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_mB10D8B643A7BE6716BD5DA12751BAF63930F5C9A_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m7ACD93CD66858CC9385B99AE2AA1660BEE5CB9AF_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m1B2AB695EE4025896C293630EC82BF35283B1B21_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m9B1DD2A98116009C78129D9F9CAE9725EB000B6A_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mCA9799F6983251993C8A8ABEF39E0B344BEDC367_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m44286436D07A0AA0EE0FCC9521FEDB9A111CEB04_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m652F8C98BAC10A9E24B8AC956883C2B554E8CBE5_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mE20D63B45BD60AF7655E2FEB750FAE7F058C032D_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_03ca;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0245;
		}
	}
	{
		goto IL_0048;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_03c0;
	}

IL_0059:
	{
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_03c0;
	}

IL_0081:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_03c0;
	}

IL_00a0:
	{
		uint32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_03c0;
	}

IL_00d1:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_03c0;
	}

IL_00f0:
	{
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_0118;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_0107;
	}

IL_0107:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_03c0;
	}

IL_0118:
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0123;
	}

IL_0123:
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_03c0;
	}

IL_0134:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_27)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0149:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_29)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_03c0;
	}

IL_015e:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_31)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_03c0;
	}

IL_0173:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_33)
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_03c0;
	}

IL_0188:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_35)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_03c0;
	}

IL_019d:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_37)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_03c0;
	}

IL_01b2:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_39)
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03c0;
	}

IL_01c7:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_41)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_03c0;
	}

IL_01dc:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_43)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03c0;
	}

IL_01f1:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_45)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_03c0;
	}

IL_0206:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_47)
		{
			goto IL_0357;
		}
	}
	{
		goto IL_03c0;
	}

IL_021b:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_49)
		{
			goto IL_036c;
		}
	}
	{
		goto IL_03c0;
	}

IL_0230:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_51)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_03c0;
	}

IL_0245:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_53)
		{
			goto IL_0396;
		}
	}
	{
		goto IL_03c0;
	}

IL_025a:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_55)
		{
			goto IL_03ab;
		}
	}
	{
		goto IL_03c0;
	}

IL_026f:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_58, NULL);
		// break;
		goto IL_03c9;
	}

IL_0287:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		float L_61;
		L_61 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_59, L_60);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_61, NULL);
		// break;
		goto IL_03c9;
	}

IL_029f:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_63 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_62);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_62, L_63);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_64, NULL);
		// break;
		goto IL_03c9;
	}

IL_02b7:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_65);
		float L_67;
		L_67 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_65, L_66);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_67, NULL);
		// break;
		goto IL_03c9;
	}

IL_02cf:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_69 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_68);
		float L_70;
		L_70 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_68, L_69);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_70, NULL);
		// break;
		goto IL_03c9;
	}

IL_02e7:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_71);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_72, NULL);
		// break;
		goto IL_03c9;
	}

IL_02fa:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_74 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_73);
		bool L_75;
		L_75 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_73, L_74);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_75, NULL);
		// break;
		goto IL_03c9;
	}

IL_0312:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_77 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_76);
		bool L_78;
		L_78 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_76, L_77);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_78, NULL);
		// break;
		goto IL_03c9;
	}

IL_032a:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_79);
		bool L_81;
		L_81 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_79, L_80);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_81, NULL);
		// break;
		goto IL_03c9;
	}

IL_0342:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_82);
		bool L_84;
		L_84 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_82, L_83);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_84, NULL);
		// break;
		goto IL_03c9;
	}

IL_0357:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_86 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_85);
		bool L_87;
		L_87 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_85, L_86);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_87, NULL);
		// break;
		goto IL_03c9;
	}

IL_036c:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_88);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_90;
		L_90 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_88, L_89);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_90, NULL);
		// break;
		goto IL_03c9;
	}

IL_0381:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_91);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_93;
		L_93 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_91, L_92);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_93, NULL);
		// break;
		goto IL_03c9;
	}

IL_0396:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_94);
		float L_96;
		L_96 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_94, L_95);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_96, NULL);
		// break;
		goto IL_03c9;
	}

IL_03ab:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_97);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_99;
		L_99 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_97, L_98);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_99, NULL);
		// break;
		goto IL_03c9;
	}

IL_03c0:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_100);
		// break;
		goto IL_03c9;
	}

IL_03c9:
	{
	}

IL_03ca:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_101);
		String_t* L_103 = L_102;
		V_1 = L_103;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_5;
		if (L_104)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Transform::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Transform_ReadComponent_TisRuntimeObject_m69EA1D6273273C085E1BE55CB38BC032E0489C51_gshared (ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m53C86BE077BED4F36B60E76ED8AAC3D7AFBC6836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m266201C056B0921A642ED9E6F79D0582D33400F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m6BCBC069ACA71D1EC12534A359801F3353AD9D14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F632BD073069C926450B792B45EAAB22036D149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// var instance = (Transform)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
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

FINALLY_00d2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_00e6;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_00e6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c5_1;
			}

IL_001a_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				// switch (propertyName)
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756, NULL);
				if (L_12)
				{
					goto IL_0070_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD, NULL);
				if (L_14)
				{
					goto IL_007f_1;
				}
			}
			{
				String_t* L_15 = V_3;
				bool L_16;
				L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120, NULL);
				if (L_16)
				{
					goto IL_008e_1;
				}
			}
			{
				String_t* L_17 = V_3;
				bool L_18;
				L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01, NULL);
				if (L_18)
				{
					goto IL_009d_1;
				}
			}
			{
				String_t* L_19 = V_3;
				bool L_20;
				L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8F632BD073069C926450B792B45EAAB22036D149, NULL);
				if (L_20)
				{
					goto IL_00ac_1;
				}
			}
			{
				goto IL_00bb_1;
			}

IL_0070_1:
			{
				// instance.SetParent(reader.Read<Transform>());
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
				NullCheck(L_22);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
				L_23 = GenericVirtualFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m266201C056B0921A642ED9E6F79D0582D33400F6_RuntimeMethod_var, L_22);
				NullCheck(L_21);
				Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_21, L_23, NULL);
				// break;
				goto IL_00c4_1;
			}

IL_007f_1:
			{
				// instance.localPosition = reader.Read<Vector3>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
				NullCheck(L_25);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
				L_26 = GenericVirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m6BCBC069ACA71D1EC12534A359801F3353AD9D14_RuntimeMethod_var, L_25);
				NullCheck(L_24);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_24, L_26, NULL);
				// break;
				goto IL_00c4_1;
			}

IL_008e_1:
			{
				// instance.localRotation = reader.Read<Quaternion>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_28 = ___reader0;
				NullCheck(L_28);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
				L_29 = GenericVirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m53C86BE077BED4F36B60E76ED8AAC3D7AFBC6836_RuntimeMethod_var, L_28);
				NullCheck(L_27);
				Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_27, L_29, NULL);
				// break;
				goto IL_00c4_1;
			}

IL_009d_1:
			{
				// instance.localScale = reader.Read<Vector3>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
				NullCheck(L_31);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
				L_32 = GenericVirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m6BCBC069ACA71D1EC12534A359801F3353AD9D14_RuntimeMethod_var, L_31);
				NullCheck(L_30);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_30, L_32, NULL);
				// break;
				goto IL_00c4_1;
			}

IL_00ac_1:
			{
				// instance.SetSiblingIndex(reader.Read<int>());
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
				NullCheck(L_34);
				int32_t L_35;
				L_35 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_34);
				NullCheck(L_33);
				Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_33, L_35, NULL);
				// break;
				goto IL_00c4_1;
			}

IL_00bb_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
				NullCheck(L_36);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_36);
				// break;
				goto IL_00c4_1;
			}

IL_00c4_1:
			{
			}

IL_00c5_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_37 = V_1;
				NullCheck(L_37);
				bool L_38;
				L_38 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_37);
				if (L_38)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_00e7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e7:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAC7EC2A3CABB069B466B8EA7F74D09B49BCAE3D3_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mABBF625D31E49C03773F56EBAAA24427299BF78F_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m429807AA17EEAF574A9151DE7612A2271B1EFD00_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m538DFC152D43EFC70FF683C96991D3BDD43480F9_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1FAD19F1F97291681250FF23440629B9071767DF_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BEDA83760EDBCB273BBAE68F6C54831B08A251E_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m70D9653B2B5BF4B17387691AF516674550AF59EE_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m371C1C347265F4B4AE938B1AAD4CC581C44ACF13_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m7BA9B6B54D3AABE754801A69203773E5DEE3A33B_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m53A4C5737CCD260ECDC379E75AAFAB81DD7BFB02_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisRuntimeObject_mFEB111A05D7C8DF68823B51CAEDD0A5018D52C29_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCCB77D0E3C6D2510DFB9FB7B2B1B6B844ECA36A8_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m666C9934ECA5D3210EA90E4806C0BAB0D6FDC418_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m70B3BCBB54ABB0C3B841F530C4C8931C3F6D50EF_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF64CE1E98EE6927BFECC52722BE1EA41824FF0A0_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA8B88B459AADDB22B1CCAC09F24BCC9E8857F43C_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD0A4E861B6660351823B85936AA58FC532082751_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m497EF4978DAD91D6CBD474748650EF57BF6F7979_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m082FB2992401934654249D9425530E0253584270_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mDA7CDB7C1AE8B378C38B14E21AE2B6C73A5537A5_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
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
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisRuntimeObject_m52BB1763B5058F5C1AD69568DE717047EA3E87AB_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m8AC17A90C403A823D10130B999E48F54CBBCA41F_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m9FA30CD67EE6369E4B3F5AE03098DEBDCC90FF6B_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m3ACAB40471547B85AAFFAA88AC664C86DAABE565_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mE4D20279BFA6EB22AB7525A71ED875C819C24D43_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mA47E44F2496D85C4D3D54E37F07C7509825AC3F5_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m6BE126BC171D3038BAB254E1EE12005D7DDA6CA4_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m71FB05636AB8A8E99CD7524164F939DF7CA0FF29_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mB97FB37B4C7A63694423227F5AFAFD9F7569FF5A_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m68364435DCB193BEC4B69EB8F606E38F7C2F031E_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m867C471785A69313BCCDB267F04C26CBDC67C00A_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m88662C489832660A3A9D062F599C6DB004337E62_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mDB1E118724D093619E5C9F23ABE9A047BDA6DFC4_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mA5C4CFAA3CE356CB95F115DFFDCF36A6EACF5A41_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_mA94E9CAEA4A377B28347260CD459EFA035CB7BB0_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_mB5BB03604039BD80BD70D4D43FD7527C1D86942F_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_mC8749B16A6A88F1FC7CCFD0337BA42711D6D07FF_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m7353E2F4242A993F8F55E3F46CAD740B5E35A0CB_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mF4FFB4682F8F97C7F5917A3E7B43A107E8F7BFE2_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m0B075A276E645D02011A8A4197013E532E82C782_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m777C77AF56B898EA3FA925F6B6CAFBA69978CD83_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m77009B8267F58B5F7DA5F3C0DC5F4F25E59670F8_gshared (ES3Type_TriggerModule_t31C5194AB2A73A55A1E40FA497E428B640FA862D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00d6;
	}

IL_000d:
	{
		// switch(propertyName)
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_0062:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_15 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_16 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_15);
		bool L_17;
		L_17 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_15, L_16);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_17, NULL);
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_18);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_19, NULL);
		// break;
		goto IL_00d5;
	}

IL_0087:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_20);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_21, NULL);
		// break;
		goto IL_00d5;
	}

IL_0097:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_22);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_23, NULL);
		// break;
		goto IL_00d5;
	}

IL_00a7:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mFD613C1168ECE0A327F4219E93254BE6EF3847BD_RuntimeMethod_var, L_24);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_25, NULL);
		// break;
		goto IL_00d5;
	}

IL_00b7:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_26);
		float L_28;
		L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_28, NULL);
		// break;
		goto IL_00d5;
	}

IL_00cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_29);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_30);
		String_t* L_32 = L_31;
		V_1 = L_32;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8A11723351688C5E3E2280E2535F64E63F7D6868_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mCBF11182F6992D5638A9B441372E5D29691DBE25_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1B35E60343327DA98B15619B3668D762AF07898F_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m693FFF94B703637F49B25923CC109594B0DDF923_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1910D9FB0B4878F97E63E0ABF82CFF10AC35599C_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5F354F666593B2B881D222E96CF2DCBA9086E3CF_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m7BCDE91F167E7451AFE46A73DBFFA75601FBBE3F_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m106712378DA77C0C374C334C9FC6A48AA36139B6_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m25687E80660EF403FF5A388E0D3D14AF198528F8_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2F8E035843779D2EC1401A128F20EBF898D0F996_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisRuntimeObject_mA846618D0ACC2E266621D62E915F5E4E66196053_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3088EEC5FBE9A3A38EEEB32B716AB24119948D16_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m8EF931B55A84C90CC70708E2BCE98B8AB02A56D5_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m0E84AA7B6F27C701CC0CEDD98946201602E5F210_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37323C117E0875F0D110CDABBE67B3CF60C6E1CD_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m6A50D93DAABDC32844978488A8BE85A98F4D45CE_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mCF616E387BB41F036EC7E4FBDA7FAF553C5F431F_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m1B594295F42414A0C9F50BF8E8FFCA72B066515A_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m07473DA50D24B6EE5D57A2FDDA23B19BE3CCF6AF_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_UIntPtr::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_UIntPtr_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m2FD6AD94209C17DA396FEFC8E194D12EB864EFD3_gshared (ES3Type_UIntPtr_tFE2B314D1CE74BFAA1C45F4EA5FD315885810A4F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (object)reader.Read_ulong();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(12 /* System.UInt64 ES3Reader::Read_ulong() */, L_0);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m55E1C73B3049ECDAB91C37AC3D7881385B4A89F5_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m92195F4BC93011F78BD7C328AE25B03D9B1AD7E2_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1768632E5B7132122C004230198EDB50738FD0A_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m85B54A94A7376AC4519FC6F154FF6C6F3AC21BA6_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8DCF60CC6FC30147AEEA8A2CE707E3A5BC031F91_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAFBF882A69D21D74A381D821CBF0C0673C4CC44E_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2F8EE91CBA1A62068F2B16AA6697C1F72BE3F61E_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B2224F0CDAAE62A725F6C8C342DB68F9A687187_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m81AC5532B34620A3F43199ECB1DC0205941D121D_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m510EDAEAAC92ED50FA9D5672069211B7952837D5_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisRuntimeObject_mAFDF33343C84C0453EC8DB44FC3BE04DDAD8CE16_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m732969D786576C9A80CF494954CD15E0EE41D5C5_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m48D6C8179656691FF44A88545BD7A53E95BAC215_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mE1BD5CD5378008104D056A0DC24F6D069EC99E43_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m21F8F3D7F31FAEEBA76FFBE2D045E5F2405908E4_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m74AC34309108B37D2D992CE02B74E4CB216DC919_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF8B60ACF89E47A897DBA9608111358A12315CD58_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m663D2B7333E3A019D5723BF0A48B44EB3A8C8B6F_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m88519A76E40859F1DE29A62102C35B446C1784D0_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Object ES3Types.ES3Type_Vector2::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Vector2_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m302CAB458700F4DE727DF01A2768E7690CE3F6BD_gshared (ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Vector2(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_7);
		V_0 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_9 = V_0;
		return L_9;
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
